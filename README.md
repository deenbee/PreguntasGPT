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
