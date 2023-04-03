#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStringList>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_true_clicked();

    void on_pushButton_false_clicked();

private:
    Ui::MainWindow *ui;
    QStringList m_questions;
    QList<bool> m_answers;
    int currentQuestionIndex; // declarar la variable currentQuestionIndex

};

#endif // MAINWINDOW_H



