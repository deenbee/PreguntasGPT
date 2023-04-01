# PreguntasGPT
Tengo una aplicación diseñada en Qt Creator , la misma se basa en un juego de preguntas y respuestas.

1. Tenemos un botón de "QpushButton" (objectName:"pushButton_reset") para"reiniciar" o volver a comenzar el juego desde el principio.

2. Tenemos un "QcomboBox" (obejectName:"comboBox_category") para las categorías siguientes:
Todo, filosofía, Historia, Geografía, Matemáticas, Física, Química.


3. Tenemos un  "Qcombobox" (objectName:"comboBox_Difficult") para elegir la dificultad: Fácil, intermedio, difícil, Muy difícil;

 en modo Muy difícil el tiempo será de 5 segundos y 500 preguntas;
 Difícil 8 segundos y 250 preguntas;
 intermedio 12 segundos y 100 preguntas;
 fácil 18 segundos y 50 preguntas;

4. Tenemos un "QLCDNumber" (objectName:"lcdNumber_displaytime") para mostrar el tiempo restante para responder la pregunta, según el nivel de dificultad será el tiempo de respuesta.

5. También tenemos una barra de progreso "QprogressBar" (objectName:"progressBar") para mostrar el tiempo restante para contestar la pregunta.

6. Las preguntas van en un "Qlabel" (objectName:"label_Question").

7. Las respuestas van en otro "Qlabel" (objectName:"label_answer").

8. Recuerda que hay que generar preguntas aleatorias dentro del juego una vez iniciado.

9. Ademas generar un total de 25000 preguntas y cada una con una repuesta.

10. Después tenemos un botón "QpushButton" (objectName:"pushButton_false")  para responder con una opción falsa;
 y otro "QpushButton" (objectName:"pushButton_true") para responder con una opción verdadera.

10. La interfaz grafica y ventana unica del juego esta echa en "Qt Creator" la misma se llama "mainwindow.ui".

11. Hay que programar la logica y el funcionamiento ya que con ChatGPT no pude hacerlo funcionar.

===================================================================================

I have an application designed in Qt Creator, which is based on a question and answer game.

We have a "QpushButton" button (objectName: "pushButton_reset") to reset or start the game from the beginning.

We have a "QcomboBox" (objectName: "comboBox_category") for the following categories: All, Philosophy, History, Geography, Mathematics, Physics, Chemistry.

We have a "Qcombobox" (objectName: "comboBox_Difficult") to choose the difficulty level: Easy, Intermediate, Hard, Very hard; in Very hard mode, the time limit is 5 seconds and 500 questions; Hard 8 seconds and 250 questions; Intermediate 12 seconds and 100 questions; Easy 18 seconds and 50 questions.

We have a "QLCDNumber" (objectName: "lcdNumber_displaytime") to display the remaining time to answer the question, depending on the difficulty level.

We also have a "QprogressBar" (objectName: "progressBar") to display the remaining time to answer the question.

The questions are displayed in a "Qlabel" (objectName: "label_Question").

The answers are displayed in another "Qlabel" (objectName: "label_answer").

Remember that random questions must be generated within the game once it starts.

In addition, a total of 25000 questions must be generated, each with an answer.

Then we have a "QpushButton" button (objectName: "pushButton_false") to respond with a false option, and another "QpushButton" (objectName: "pushButton_true") to respond with a true option.

The graphical interface and unique game window are created in "Qt Creator" and it is named "mainwindow.ui".
