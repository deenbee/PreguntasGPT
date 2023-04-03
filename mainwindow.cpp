#include "QResource"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Leer preguntas y respuestas desde archivo
    QFile file("preguntas.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            m_questions.append(parts[0]);
            m_answers.append(parts[1] == "verdadero");
        }
        file.close();
    }
}

void MainWindow::on_pushButton_true_clicked()
{
    if (m_answers[currentQuestionIndex]) {
        QMessageBox::information(this, "Respuesta correcta", "¡Muy bien!");
    } else {
        QMessageBox::warning(this, "Respuesta incorrecta", "Lo siento, la respuesta es falsa.");
    }
    // avanzar a la siguiente pregunta
    currentQuestionIndex++;
    // actualizar la pregunta en la interfaz gráfica
    ui->lpregunta->setText(m_questions[currentQuestionIndex]);
}

void MainWindow::on_pushButton_false_clicked()
{
    if (!m_answers[currentQuestionIndex]) {
        QMessageBox::information(this, "Respuesta correcta", "¡Muy bien!");
    } else {
        QMessageBox::warning(this, "Respuesta incorrecta", "Lo siento, la respuesta es verdadera.");
    }
    // avanzar a la siguiente pregunta
    currentQuestionIndex++;
    // actualizar la pregunta en la interfaz gráfica
    ui->lpregunta->setText(m_questions[currentQuestionIndex]);
}
