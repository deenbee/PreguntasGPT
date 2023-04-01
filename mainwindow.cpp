#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QLCDNumber>
#include <QProgressBar>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <QTextStream>
#include <QList>
#include <QStringList>
#include <QDebug>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QLabel *label_question;
    QLabel *label_answer;
    QComboBox *combo_box_category;
    QComboBox *combo_box_difficulty;
    QPushButton *button_true;
    QPushButton *button_false;
    QPushButton *button_reset;
    QLCDNumber *lcd_display_time;
    QProgressBar *progress_bar;

    int current_difficulty;
    int current_category;
    int total_questions;
    int current_question;
    int correct_answers;
    int incorrect_answers;
    int time_remaining;
    int current_score;
    bool question_answered;

    QTimer *timer;

    QList<QStringList> questions_and_answers;

    void load_questions();
    void set_question_and_answer();
    void start_game();
    void end_game();
    void reset_game();
    void check_answer(bool answer);
    void update_score();
    void update_time_remaining();
};
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Conectar los botones de respuesta a sus respectivas funciones
    connect(ui->pushButton_false, SIGNAL(clicked()), this, SLOT(onFalseButtonClicked()));
    connect(ui->pushButton_true, SIGNAL(clicked()), this, SLOT(onTrueButtonClicked()));
    connect(ui->pushButton_reset, SIGNAL(clicked()), this, SLOT(onResetButtonClicked()));

    // Establecer las opciones de categoría
    ui->comboBox_category->addItem("Todo");
    ui->comboBox_category->addItem("Filosofía");
    ui->comboBox_category->addItem("Historia");
    ui->comboBox_category->addItem("Geografía");
    ui->comboBox_category->addItem("Matemáticas");
    ui->comboBox_category->addItem("Física");
    ui->comboBox_category->addItem("Química");

    // Establecer las opciones de dificultad
    ui->comboBox_Difficult->addItem("Fácil");
    ui->comboBox_Difficult->addItem("Intermedio");
    ui->comboBox_Difficult->addItem("Difícil");
    ui->comboBox_Difficult->addItem("Muy difícil");

    // Establecer el temporizador
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));

    // Inicializar el progreso y el temporizador
    resetGame();
}
