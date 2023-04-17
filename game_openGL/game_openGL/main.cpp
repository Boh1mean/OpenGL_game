#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif
#include <iostream>


void firstScece(){ // Главный фон
    glColor3ub(30, 11, 229);
    glBegin(GL_QUADS);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    
    glEnd();
}
void spaceboard(float x, float y){ // Космический корабль

    
    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON); // Основание ракеты
    glVertex2f(x -0.06, y +0.0);
    glVertex2f(x -0.06, y +0.4);
    glVertex2f(x +0.06, y +0.4);
    glVertex2f(x +0.06, y +0.028);//8
    glVertex2f(x +0.06, y -0.77);
    glVertex2f(x +0.05, y -0.8);
    glVertex2f(x -0.05, y -0.8);
    glVertex2f(x -0.06, y -0.77);
    glVertex2f(x +0.06, y +0.0);
               
    glEnd();
    
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); // Нос ракеты
    glVertex2f(x -0.06, y +0.4);
    glVertex2f(x -0.04, y +0.5);
    glVertex2f(x -0.02, y +0.54);
    glVertex2f(x +0.02, y +0.54);
    glVertex2f(x +0.04, y +0.5);
    glVertex2f(x +0.06, y +0.4);
    
    glEnd();
    
    // Окошко в ракете
    int i;
        int triangleAmount = 256; // кол-во треугольгиков в круге
        GLfloat twicePi = 2.0f * 3.1415926f;
    float radius = 0.03;
        glColor3ub(59, 141, 235);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y + 0.3); // первый треугольник
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)) + 0.3
                       );
        }
        glEnd();
    
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES); // декоративная вставка на основании ракеты
    glVertex2f(x +0.0, y +0.22); // центральная линия
    glVertex2f(x +0.0, y -0.8);
    glVertex2f(x -0.06, y +0.4);// 1-я горизонтальная линия
    glVertex2f(x +0.06, y +0.4);
    glVertex2f(x -0.06, y +0.22); // 2-я горизонтальная линия
    glVertex2f(x +0.06, y +0.22);
    glVertex2f(x -0.06, y +0.0); // 3-я горизонтальная линиия
    glVertex2f(x +0.06, y +0.0);
    glVertex2f(x -0.06, y -0.22); // 4-я горизонтальная линиия
    glVertex2f(x +0.06, y -0.22);
    glVertex2f(x -0.06, y -0.44); // 5-я горизонтальная линиия
    glVertex2f(x +0.06, y -0.44);
    glVertex2f(x -0.06, y -0.66); // 6-я горизонтальная линиия
    glVertex2f(x +0.06, y -0.66);
    
    glEnd();
    
    glBegin(GL_POLYGON); // Турбина основания
    glVertex2f(x +0.05,y -0.8);
    glVertex2f(x +0.06,y -0.9);
    glVertex2f(x -0.06,y -0.9);
    glVertex2f(x -0.05,y -0.8);
    
    glEnd();
    
    
    glColor3ub(101, 99, 120);
    glBegin(GL_TRIANGLES); // Левое крыло верхня часть
    glVertex2f(x -0.06,y +0.22);
    glVertex2f(x -0.15,y -0.3);
    glVertex2f(x -0.06,y -0.3);
    glEnd();
    
    glColor3ub(101, 99, 120);
    glBegin(GL_POLYGON); // нижня часть крыла
    glVertex2f(x -0.06,y -0.3);
    glVertex2f(x -0.15,y -0.3);
    glVertex2f(x -0.25,y -0.6);
    glVertex2f(x -0.25,y -0.67);
    glVertex2f(x -0.06,y -0.67);

    glEnd();
    
    glColor3ub(0, 0, 0); // декоративная вставка на крыле
    glBegin(GL_LINE_STRIP);
    glVertex2f(x -0.25, y -0.6);
    glVertex2f(x -0.1, y -0.6);
    glVertex2f(x -0.1, y -0.4);
    
    glEnd();
    
    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON); // турбина
    glVertex2f(x -0.18,y -0.67);
    glVertex2f(x -0.2,y -0.75);
    glVertex2f(x -0.11,y -0.75);
    glVertex2f(x -0.13,y -0.67);
    
    glEnd();
    
//
    glColor3ub(101, 99, 120);
    glBegin(GL_TRIANGLES); // правое крыло
    glVertex2f(x +0.06,y +0.22);
    glVertex2f(x +0.15,y -0.3);
    glVertex2f(x +0.06,y -0.3);
    glEnd();
    
    glColor3ub(101, 99, 120);
    glBegin(GL_POLYGON);
    glVertex2f(x +0.06,y -0.3);
    glVertex2f(x +0.15,y -0.3);
    glVertex2f(x +0.25,y -0.6);
    glVertex2f(x +0.25,y -0.67);
    glVertex2f(x +0.06,y -0.67);

    glEnd();
    
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_STRIP); // декоративная вставка на крыле
    glVertex2f(x +0.25, y -0.6);
    glVertex2f(x +0.1, y -0.6);
    glVertex2f(x +0.1, y -0.4);
    
    glEnd();
    
    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON); // турбина
    glVertex2f(x +0.18,y -0.67);
    glVertex2f(x +0.2,y -0.75);
    glVertex2f(x +0.11,y -0.75);
    glVertex2f(x +0.13,y -0.67);
    
    glEnd();
}



void standOne(){ // левая стойка
    float x = -0.4, y = 0.8; // координаты для решетки
    float x2 = -0.3, y2 = 0.7;

    float yy = 0.7;
    float yy1 = 0.8;

    glBegin(GL_LINE_STRIP); // Левая балка стойки
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.4, -1);
    glEnd();

    glBegin(GL_LINE_STRIP); // правая балка стойки
    glVertex2f(-0.3, 0.6);
    glVertex2f(-0.3, -1);
    glEnd();

    glBegin(GL_LINES); // решетка внутри стойки
    for(float i = 0; i < 16; i++) { // цикл для отрисовки первой линии
        y = y - 0.1;
        y2 = y2 - 0.1;
        glVertex2f(x, y - 0.1);
        glVertex2f(x2, y2 - 0.1);
    }
    for(float i = 0; i < 16; i++){ // цикл для отрисовки второй линии
        yy = yy - 0.1;
        yy1 = yy1 - 0.1;
        glVertex2f(x, yy - 0.1);
        glVertex2f(x2, yy1 - 0.1);

    }
    glEnd();
    }



void standTwo(){ // правая стойка
    float x= 0.4, y = 0.8; // координаты для решетки
    float x2 = 0.3, y2= 0.7;

    float yy = 0.7;
    float yy1 = 0.8;

    glBegin(GL_LINE_STRIP); // Левая балка стойки
    glVertex2f(0.4, 0.6);
    glVertex2f(0.4, -1);
    glEnd();

    glBegin(GL_LINE_STRIP); // правая балка стойки
    glVertex2f(0.3, 0.6);
    glVertex2f(0.3, -1);
    glEnd();

    glBegin(GL_LINES); // решетка внутри стойки
    for(float i = 0; i < 16; i++){ // цикл для отрисовки первой линии
        y = y - 0.1;
        y2 = y2 - 0.1;

        glVertex2f(x, y - 0.1);
        glVertex2f(x2, y2 - 0.1);
    }
    for(float i = 0; i < 16; i++){ // цикл для отрисовки второй линии
        yy = yy - 0.1;
        yy1 = yy1 - 0.1;

        glVertex2f(x, yy - 0.1);
        glVertex2f(x2, yy1 - 0.1);
    }
    glEnd();
    }
    


void renderScene(void);


int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 800);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
    
}
void renderScene(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    firstScece();
    spaceboard(0, 0);
    standOne();
    standTwo();
    
    
    
    
        glutSwapBuffers();
        
}
