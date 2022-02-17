#include<iostream>
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

using namespace std;
GLfloat testPosition = 0.0f;
GLfloat testPosition2 = 0.0f;
GLfloat testPosition3 = 0.0f;
GLfloat testSpeed = 0.005f;
GLfloat testSpeed2 = 0.005f;
GLfloat testSpeed3 = 0.01f;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.0f;
//237, 187, 153
int color1 = 237;
int color2 = 187;
int color3 = 153;
int  tapcolor = 50;
int x =5;
int y = 200;
static int flag=1;
static int flag2=1;
static int flag3=1;
bool mask = false;
bool mask2 = false;
bool tap = false;
bool tapon=false;
//dstatic int flag4=1;
static int check=1;
GLfloat e1 = 0.01;
GLfloat e2 = 0.025;
GLfloat m1 =0.02;
GLfloat m2 =0.05;
GLfloat ma1 =0.053;
GLfloat ma2 =0.02;
GLfloat ma3 =0.02;
GLfloat ma4 =0.04;
GLfloat i = 0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void update(int value) {

    if(testPosition <-1.6)
        testPosition = 1.0f;

    testPosition -= testSpeed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update2(int value) {

 if(testPosition2 > 1.0)
        testPosition2 = -0.8f;

   testPosition2 += testSpeed2;

	glutPostRedisplay();


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
} //glLoadIdentity();
void update3(int value) {

 if(testPosition3 > 1.3)
        testPosition3 = -1.3f;

   testPosition3 += testSpeed3;

	glutPostRedisplay();


	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
   glLoadIdentity();


gluOrtho2D(-1.0f,-.7f,-1.f,1.0f);//left,right,bottom.top

//glutTimerFunc(100, update2, 0);
break;
case GLUT_KEY_DOWN:
//do something here
// position2 -= speed;
 //position -= speed;
   //glutTimerFunc(100, update, 0);

   //do something here
   glLoadIdentity();


gluOrtho2D(.7f,1.f,-1.f,1.0f);//left,right,bottom.top
break;
case GLUT_KEY_LEFT:
    speed =0.0f;
//do something here
break;
case GLUT_KEY_RIGHT:
//do something here
break;
}
glutPostRedisplay();
}



void line()
{

}
void object2()
        {


   glTranslatef(0.0,-0.89,0.0);

   glColor3ub(176, 116, 103);

    glPushMatrix();

    glTranslatef(0.0,0.32,0.0);

    glutSolidSphere(0.05,40,40);//head
    glPopMatrix();


     glBegin(GL_QUADS);//body
    glColor3ub(146, 43, 33  );
    glVertex2f(-0.04f , 0.1f );
    glVertex2f( 0.04f , 0.1f );
    glVertex2f(0.04f , 0.27f );
    glVertex2f(-0.04f ,  0.27f );
   glEnd();
glColor3f(color1,color2,color3);//botam

    glPushMatrix();

    glTranslatef(0.0,0.2,0.0);

    glutSolidSphere(0.005,40,40);//botam
    glPopMatrix();
    glColor3f(color1,color2,color3);

    glPushMatrix();

    glTranslatef(0.0,0.17,0.0);

    glutSolidSphere(0.005,40,40);//botam
    glPopMatrix();
    glBegin(GL_QUADS);//L leg
 glColor3ub(164, 119, 8);
    glVertex2f(-0.03f , -0.02f );
    glVertex2f( -0.005f , -0.02f );
    glVertex2f(-0.005f , 0.1f );
    glVertex2f(-0.03f ,  0.1f );


   glEnd();
       glBegin(GL_QUADS);//R Leg
    glColor3ub(164, 119, 8);
    glVertex2f(0.005f , -0.02f );
    glVertex2f( 0.03f , -0.02f );
    glVertex2f(0.03f , 0.1f );
    glVertex2f(0.005f ,  0.1f );


   glEnd();

         glBegin(GL_QUADS);//R Hand
    glColor3ub(182, 6, 30);
    glVertex2f(0.04f , 0.27f );
    glVertex2f( 0.04f , 0.20f );
    glVertex2f(0.06f , 0.1f );
    glVertex2f(0.06f ,  0.13f );
     glEnd();
              glBegin(GL_QUADS);//L Hand
    glColor3ub(182, 6, 30);
    glVertex2f(-0.04f , 0.27f );
    glVertex2f( -0.04f , 0.20f );
    glVertex2f(-0.06f , 0.1f );
    glVertex2f(-0.06f ,  0.13f );
     glEnd();

         glBegin(GL_LINES);
glColor3ub(215, 28, 28);
glVertex2f(-0.01f,0.33f); //starting vertex
glVertex2f(-0.025f,0.33f); //ending vertex
glEnd();
         glBegin(GL_LINES);
glColor3ub(215, 28, 28);
glVertex2f(-0.01f,0.332f); //starting vertex
glVertex2f(-0.025f,0.332f); //ending vertex
glEnd();


         glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02f,0.30f); //starting vertex
glVertex2f(-0.047f,0.32f); //ending vertex
glEnd();

    if(mask2)
    {


     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02f,0.30f); //starting vertex
glVertex2f(-0.0f,0.315f); //ending vertex
glEnd();

     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(-0.0f,0.27f); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(0.02,0.30f); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(0.03f,0.28f); //ending vertex
glEnd();



glBegin(GL_QUADS);
    glColor3ub(182, 6, 30);
glVertex2f(-0.053,0.32f);
glVertex2f(-0.02,0.30f);
glVertex2f(-0.02,0.28f);
glVertex2f(-0.04,0.28f);
     glEnd();

    }

   glLoadIdentity();
  // glFlush();
        }
void objectt() {
    glTranslatef(-0.9,-0.8,0.0);
    glColor3ub(color1,color2,color3);
    glPushMatrix();

    glTranslatef(0.0+position,0.32+position2,0.0);

    glutSolidSphere(0.05,40,40);//head
    glPopMatrix();

     glBegin(GL_QUADS);//body
    glColor3ub(142, 34, 180);
    glVertex2f(-0.04f+position , 0.1f+position2 );
    glVertex2f( 0.04f+position , 0.1f+position2 );
    glVertex2f(0.04f+position , 0.27f+position2);
    glVertex2f(-0.04f+position ,  0.27f+position2 );
   glEnd();
    glColor3ub(color1,color2,color3);//botam

    glPushMatrix();

    glTranslatef(0.0+position,0.2+position2,0.0);

    glutSolidSphere(0.005,40,40);//botam
    glPopMatrix();
    glColor3ub(color1,color2,color3);

    glPushMatrix();

    glTranslatef(0.0+position,0.17+position2,0.0);

    glutSolidSphere(0.005,40,40);//botam
    glPopMatrix();
    glBegin(GL_QUADS);//L leg
    glColor3ub(40, 116, 166);
    glVertex2f(-0.03f+position , -0.02f+position2 );
    glVertex2f( -0.005f+position , -0.02f+position2 );
    glVertex2f(-0.005f+position , 0.1f+position2 );
    glVertex2f(-0.03f+position ,  0.1f+position2 );


   glEnd();
       glBegin(GL_QUADS);//R Leg
    glColor3ub(40, 116, 166);
    glVertex2f(0.005f+position , -0.02f+position2 );
    glVertex2f( 0.03f+position , -0.02f+position2 );
    glVertex2f(0.03f+position , 0.1f+position2 );
    glVertex2f(0.005f+position ,  0.1f+position2 );


   glEnd();

         glBegin(GL_QUADS);//R Hand
    glColor3ub(229, 152, 102);
    glVertex2f(0.04f+position , 0.27f+position2 );
    glVertex2f( 0.04f+position , 0.20f+position2 );
    glVertex2f(0.06f+position , 0.1f+position2 );
    glVertex2f(0.06f+position ,  0.13f+position2 );
     glEnd();
              glBegin(GL_QUADS);//R Hand
    glColor3ub(229, 152, 102);
    glVertex2f(-0.04f+position , 0.27f+position2 );
    glVertex2f( -0.04f+position , 0.20f+position2 );
    glVertex2f(-0.06f+position , 0.1f+position2 );
    glVertex2f(-0.06f+position ,  0.13f+position2 );
     glEnd();
    //////////eye////////////
         glBegin(GL_LINES);
glColor3f(1.0f, 0.0f, 1.0f);
glVertex2f(e1+position,0.33f+position2); //starting vertex
glVertex2f(e2+position,0.33f+position2); //ending vertex
glEnd();

///////////mouth//////
         glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(m1+position,0.30f+position2); //starting vertex
glVertex2f(m2+position,0.32f+position2); //ending vertex
glEnd();

//////////////////////mask/////////////
    if(mask)
    {


     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(ma2+position,0.30f+position2); //starting vertex
glVertex2f(-0.0f+position,0.315f+position2); //ending vertex
glEnd();

     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(ma3+position,0.28f+position2); //starting vertex
glVertex2f(-0.0f+position,0.27f+position2); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(ma3+position,0.28f+position2); //starting vertex
glVertex2f(ma2+position,0.30f+position2); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(ma3+position,0.28f+position2); //starting vertex
glVertex2f(0.03f+position,0.28f+position2); //ending vertex
glEnd();



glBegin(GL_QUADS);
    glColor3ub(182, 6, 30);
glVertex2f(ma1+position,0.32f+position2);
glVertex2f(ma2+position,0.30f+position2);
glVertex2f(ma3+position,0.28f+position2);
glVertex2f(ma4+position,0.28f+position2);
     glEnd();

    }
   glLoadIdentity();
   glFlush();

}

void testobject()
{   glTranslatef(testPosition,0.0f,0.0f);
     glTranslatef(1.2,0.45,0.0);
        glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.645f , -0.30f );
    glVertex2f(-0.62f , -0.35f );
    glVertex2f(-0.56f , -0.35f );
    glVertex2f(-0.535f ,  -0.30f );
    glEnd();
            glBegin(GL_QUADS);
    glColor3ub(126, 81, 9);
    glVertex2f(-0.61f , -0.30f );
    glVertex2f(-0.61f , -0.26f );
    glVertex2f(-0.57f , -0.26f );
    glVertex2f(-0.57f ,  -0.30f );
    glEnd();
                glBegin(GL_QUADS);
    glColor3ub(100, 47, 100);
    glVertex2f(-0.51f , -0.30f );
    glVertex2f(-0.50f , -0.33f );
    glVertex2f(-0.56f , -0.27f );
    glVertex2f(-0.57f ,  -0.275f );
    glEnd();
    glLoadIdentity();

}

void sky(void)
{   //glTranslatef(0.0f,testPosition,0.0f);
    glBegin(GL_QUADS);
        glColor3ub(133, 193, 233 );//133, 193, 233
        glVertex2f(-1.0f, 0.20f);
        glVertex2f(-1.0f, 0.3f);
        glVertex2f(1.0f, 0.3f);
        glVertex2f(1.0f, 0.20f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(93, 173, 226 );//93, 173, 226
        glVertex2f(-1.0f, 0.3f);
        glVertex2f(-1.0f, 0.4f);
        glVertex2f(1.0f, 0.4f);
        glVertex2f(1.0f, 0.3f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(52, 152, 219 );//52, 152, 219
        glVertex2f(-1.0f, 0.4f);
        glVertex2f(-1.0f, 0.5f);
        glVertex2f(1.0f, 0.5f);
        glVertex2f(1.0f, 0.4f);
        glEnd();
                glBegin(GL_QUADS);
        glColor3ub(46, 134, 193 );//46, 134, 193
        glVertex2f(-1.0f, 0.5f);
        glVertex2f(-1.0f, 0.6f);
        glVertex2f(1.0f, 0.6f);
        glVertex2f(1.0f, 0.5f);
        glEnd();
                glBegin(GL_QUADS);
        glColor3ub(40, 116, 166 );//40, 116, 166
        glVertex2f(-1.0f, 0.6f);
        glVertex2f(-1.0f, 0.7f);
        glVertex2f(1.0f, 0.7f);
        glVertex2f(1.0f, 0.6f);
        glEnd();
                glBegin(GL_QUADS);
        glColor3ub(33, 97, 140 );
        glVertex2f(-1.0f, 0.7f);
        glVertex2f(-1.0f, 0.8f);
        glVertex2f(1.0f, 0.8f);
        glVertex2f(1.0f, 0.7f);
        glEnd();
                        glBegin(GL_QUADS);
        glColor3ub(33, 97, 140 );
        glVertex2f(-1.0f, 0.8f);
        glVertex2f(-1.0f, 0.9f);
        glVertex2f(1.0f, 0.9f);
        glVertex2f(1.0f, 0.8f);
        glEnd();
                        glBegin(GL_QUADS);
        glColor3ub(33, 97, 140 );
        glVertex2f(-1.0f, 0.9f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, 0.9f);
        glEnd();

}

void bird(){
    glTranslatef(testPosition3,0.0f,0.0f);
    glTranslatef(-0.47,0.65,0.0);
glPushMatrix();
glScalef(0.1,0.1,0);


    //head


//glLineWidth(2);
    glBegin(GL_POLYGON);
     glVertex2f (0.75,-0.04);
    glVertex2f (0.76,0.04);
     glVertex2f (0.73,0.07);
       glVertex2f (0.70,0.075);
         glVertex2f (0.69,-0.085);
    glEnd();

glBegin(GL_TRIANGLES);
 glVertex2f (0.70,0.075);
  glVertex2f (0.65,0.045);
 glVertex2f (0.69,-0.085);

    glEnd();



// after head

    glBegin(GL_POLYGON);
      glVertex2f (0.65,0.045);
     glVertex2f (0.60,0.07);
    glVertex2f (0.59,-0.098);
   glVertex2f (0.69,-0.085);
    glEnd();



 glBegin(GL_TRIANGLES);
 glVertex2f (0.60,0.07);
  glVertex2f (0.45,-0.01);
    glVertex2f (0.59,-0.098);
  glEnd();

//tail

glBegin(GL_POLYGON);
  glVertex2f (0.45,-0.01);
   glVertex2f (0.25,0.09);
    glVertex2f (0.49,-0.096);
  glVertex2f (0.59,-0.098);
  glEnd();

//wings
  glBegin(GL_POLYGON);
   glVertex2f (0.59,0.1);
    glVertex2f (0.49,0.12);
     glVertex2f (0.53,0.02);
   glVertex2f (0.60,0.07);
  glEnd();

  glBegin(GL_POLYGON);
      glVertex2f (0.49,0.12);
   glVertex2f (0.588,0.1);
glVertex2f (0.595,0.27);
   glVertex2f (0.48,0.25);
glEnd();

glBegin(GL_POLYGON);
 glVertex2f (0.52,0.4);
 glVertex2f (0.48,0.25);
glVertex2f (0.595,0.27);

glEnd();


glBegin(GL_POLYGON);
 glVertex2f (0.52,0.4);
 glVertex2f (0.595,0.27);
glVertex2f (0.68,0.57);
glEnd();


// belly
glBegin(GL_POLYGON);
  glVertex2f (0.49,-0.096);
   glVertex2f (0.58,-0.14);
  glVertex2f (0.60,-0.14);
glVertex2f (0.69,-0.085);

  glEnd();

//eye

 glColor3ub(0,0, 0);
glBegin(GL_POLYGON);
  glVertex2f (0.73,0.03);
   glVertex2f (0.70,0.03);
   glVertex2f (0.72,0.014);
   glVertex2f (0.74,0.018);



  glEnd();


     //lip
    glBegin(GL_TRIANGLES);
    glVertex2f (0.76,0.03);
    glVertex2f (0.80,0.0);
    glVertex2f (0.745,-0.03);
    glEnd();

  glPopMatrix();
    glLoadIdentity();
}



void cloud(void)
{
    glTranslatef(testPosition2,0.0f,0.0f);

   glColor3ub(239, 240, 241);

    glPushMatrix();
    glTranslatef(-0.47,0.65,0.0);
    glutSolidSphere(0.07,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.42,0.73,0.0);
    glutSolidSphere(0.072,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.52,0.72,0.0);
    glutSolidSphere(0.08,40,40);
    glPopMatrix();


    //right cloud

    glPushMatrix();
    glTranslatef(0.47,0.69,0.0);
    glutSolidSphere(0.07,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.42,0.77,0.0);
    glutSolidSphere(0.072,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.52,0.76,0.0);
    glutSolidSphere(0.08,40,40);
    glPopMatrix();

    // middle

    glPushMatrix();
    glTranslatef(-0.05,0.55,0.0);
    glutSolidSphere(0.071,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.63,0.0);
    glutSolidSphere(0.075,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.06,0.58,0.0);
    glutSolidSphere(0.082,40,40);
    glPopMatrix();

    //right bottom

    glPushMatrix();
    glTranslatef(0.75,0.52,0.0);
    glutSolidSphere(0.071,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.80,0.60,0.0);
    glutSolidSphere(0.075,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.86,0.55,0.0);
    glutSolidSphere(0.082,40,40);
    glPopMatrix();
     glLoadIdentity();
}
void road(){
    glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);
        glVertex2f(-1.0f, -0.96f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.96f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(56, 50, 59 );
        glVertex2f(-1.0f, -0.78f);
        glVertex2f(-1.0f, -0.96f);
        glVertex2f(1.0f, -0.96f);
        glVertex2f(1.0f, -0.78f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(50, 46, 53  );
        glVertex2f(-1.0f, -0.65f);
        glVertex2f(-1.0f, -0.78f);
        glVertex2f(1.0f, -0.78f);
        glVertex2f(1.0f, -0.65f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(121, 118, 122 );
        glVertex2f(-1.0f, -0.61f);
        glVertex2f(-1.0f, -0.65f);
        glVertex2f(1.0f, -0.65f);
        glVertex2f(1.0f, -0.61f);
        glEnd();

        //

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(-0.90f, -0.61f);
        glVertex2f(-0.90f, -0.65f);
        glVertex2f(-0.8f, -0.65f);
        glVertex2f(-0.8f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(-0.70f, -0.61f);
        glVertex2f(-0.70f, -0.65f);
        glVertex2f(-0.6f, -0.65f);
        glVertex2f(-0.6f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(-0.50f, -0.61f);
        glVertex2f(-0.50f, -0.65f);
        glVertex2f(-0.4f, -0.65f);
        glVertex2f(-0.4f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(-0.30f, -0.61f);
        glVertex2f(-0.30f, -0.65f);
        glVertex2f(-0.2f, -0.65f);
        glVertex2f(-0.2f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(-0.10f, -0.61f);
        glVertex2f(-0.10f, -0.65f);
        glVertex2f(0.0f, -0.65f);
        glVertex2f(0.0f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(0.10f, -0.61f);
        glVertex2f(0.10f, -0.65f);
        glVertex2f(0.20f, -0.65f);
        glVertex2f(0.20f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(0.30f, -0.61f);
        glVertex2f(0.30f, -0.65f);
        glVertex2f(0.40f, -0.65f);
        glVertex2f(0.40f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(0.50f, -0.61f);
        glVertex2f(0.50f, -0.65f);
        glVertex2f(0.60f, -0.65f);
        glVertex2f(0.60f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(0.70f, -0.61f);
        glVertex2f(0.70f, -0.65f);
        glVertex2f(0.80f, -0.65f);
        glVertex2f(0.80f, -0.61f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(29, 25, 32);
        glVertex2f(0.90f, -0.61f);
        glVertex2f(0.90f, -0.65f);
        glVertex2f(1.0f, -0.65f);
        glVertex2f(1.0f, -0.61f);
        glEnd();


        //

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(-0.91f, -0.76f);
        glVertex2f(-0.90f, -0.80f);
        glVertex2f(-0.8f, -0.8f);
        glVertex2f(-0.81f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(-0.71f, -0.76f);
        glVertex2f(-0.70f, -0.8f);
        glVertex2f(-0.6f, -0.8f);
        glVertex2f(-0.61f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(-0.51f, -0.76f);
        glVertex2f(-0.50f, -0.8f);
        glVertex2f(-0.4f, -0.8f);
        glVertex2f(-0.41f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(-0.31f, -0.76f);
        glVertex2f(-0.30f, -0.8f);
        glVertex2f(-0.2f, -0.8f);
        glVertex2f(-0.21f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(-0.11f, -0.76f);
        glVertex2f(-0.10f, -0.8f);
        glVertex2f(0.0f, -0.8f);
        glVertex2f(-0.01f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(0.09f, -0.76f);
        glVertex2f(0.10f, -0.8f);
        glVertex2f(0.20f, -0.8f);
        glVertex2f(0.19f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(0.29f, -0.76f);
        glVertex2f(0.30f, -0.8f);
        glVertex2f(0.40f, -0.8f);
        glVertex2f(0.39f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(0.49f, -0.76f);
        glVertex2f(0.50f, -0.8f);
        glVertex2f(0.60f, -0.8f);
        glVertex2f(0.59f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(0.69f, -0.76f);
        glVertex2f(0.70f, -0.8f);
        glVertex2f(0.80f, -0.8f);
        glVertex2f(0.79f, -0.76f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(211, 210, 211);
        glVertex2f(0.89f, -0.76f);
        glVertex2f(0.90f, -0.8f);
        glVertex2f(1.0f, -0.8f);
        glVertex2f(0.99f, -0.76f);
        glEnd();

}

void river(void)
{
    glBegin(GL_QUADS);
        glColor3ub(7, 89, 180 );
        glVertex2f(-1.0f, 0.20);
        glVertex2f(-1.0f, 0.07);
        glVertex2f(1.0f, 0.07);
        glVertex2f(1.0f, 0.20f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(250, 215, 160);
        glVertex2f(-1.0f, 0.07);
        glVertex2f(-1.0f, 0.01);
        glVertex2f(1.0f, 0.01);
        glVertex2f(1.0f, 0.07f);
        glEnd();
}

void hills(void)
{

    glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(-1.2f, 0.20f);
        glVertex2f(-0.86f, 0.20f);
        glVertex2f(-1.0f, 0.47f);
        glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(-0.97f, 0.20f);
        glVertex2f(-0.65f, 0.20f);
        glVertex2f(-0.80f, 0.43f);
        glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(-0.75f, 0.20f);
        glVertex2f(-0.38f, 0.20f);
        glVertex2f(-0.55f, 0.36f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(-0.55f, 0.20f);
        glVertex2f(-0.25f, 0.20f);
        glVertex2f(-0.37f, 0.35f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(0.25f, 0.20f);
        glVertex2f(0.55f, 0.20f);
        glVertex2f(0.39f, 0.41f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(0.40f, 0.20f);
        glVertex2f(0.69f, 0.20f);
        glVertex2f(0.58f, 0.37f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(35, 42, 73);
        glVertex2f(0.60f, 0.20f);
        glVertex2f(0.90f, 0.20f);
        glVertex2f(0.75f, 0.32f);
        glEnd();
}
void house(void){

    glBegin(GL_QUADS);
        glColor3ub(150, 133, 100);
        glVertex2f(0.30f, -0.25f);
        glVertex2f(0.20f, -0.36f);
        glVertex2f(0.70f, -0.36f);
        glVertex2f(0.80f, -0.25f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(100, 200, 70);
        glVertex2f(0.32f, -0.30f);
        glVertex2f(0.25f, -0.40f);
        glVertex2f(0.70f, -0.40f);
        glVertex2f(0.77f, -0.30f);
        glEnd();

        glBegin(GL_QUADS);//house
        glColor3ub(141, 84, 19);
        glVertex2f(0.34f, -0.10f);
        glVertex2f(0.34f, -0.40f);
        glVertex2f(0.49f, -0.40f);
        glVertex2f(0.49f, -0.10f);
        glEnd();

        glBegin(GL_QUADS);//window
        glColor3ub(69, 45, 1);
        glVertex2f(0.38f, -0.18f);
        glVertex2f(0.38f, -0.30f);
        glVertex2f(0.45f, -0.30f);
        glVertex2f(0.45f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//window
        glColor3ub(240, 217, 175);
        glVertex2f(0.393f, -0.18f);
        glVertex2f(0.393f, -0.28f);
        glVertex2f(0.45f, -0.28f);
        glVertex2f(0.45f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//window
        glColor3ub(7, 5, 0);
        glVertex2f(0.409f, -0.18f);
        glVertex2f(0.409f, -0.29f);
        glVertex2f(0.41f, -0.29f);
        glVertex2f(0.41f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//window
        glColor3ub(7, 5, 0);
        glVertex2f(0.429f, -0.18f);
        glVertex2f(0.429f, -0.29f);
        glVertex2f(0.431f, -0.29f);
        glVertex2f(0.431f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//window
        glColor3ub(7, 5, 0);
        glVertex2f(0.39f, -0.23f);
        glVertex2f(0.39f, -0.233f);
        glVertex2f(0.45f, -0.233f);
        glVertex2f(0.45f, -0.23f);
        glEnd();

        glBegin(GL_QUADS);//house
        glColor3ub(184, 114, 35);
        glVertex2f(0.49f, -0.10f);
        glVertex2f(0.49f, -0.40f);
        glVertex2f(0.68f, -0.40f);
        glVertex2f(0.68f, -0.11f);
        glEnd();

        glBegin(GL_QUADS);//door
        glColor3ub(220, 236, 89);
        glVertex2f(0.55f, -0.18f);
        glVertex2f(0.55f, -0.40f);
        glVertex2f(0.62f, -0.40f);
        glVertex2f(0.62f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//door
        glColor3ub(37, 28, 26);
        glVertex2f(0.61f, -0.18f);
        glVertex2f(0.61f, -0.40f);
        glVertex2f(0.62f, -0.40f);
        glVertex2f(0.62f, -0.18f);
        glEnd();

        glBegin(GL_QUADS);//door
        glColor3ub(234, 143, 125);
        glVertex2f(0.56f, -0.21f);
        glVertex2f(0.56f, -0.29f);
        glVertex2f(0.60f, -0.29f);
        glVertex2f(0.60f, -0.21f);
        glEnd();

        glColor3ub(97, 3, 3);
        glPushMatrix();
        glTranslatef(0.60,-0.305,0.0);
        glutSolidSphere(0.008,55,50);
        glPopMatrix();

        glBegin(GL_QUADS);//door
        glColor3ub(234, 143, 125);
        glVertex2f(0.56f, -0.32f);
        glVertex2f(0.56f, -0.39f);
        glVertex2f(0.60f, -0.39f);
        glVertex2f(0.60f, -0.32f);
        glEnd();

        glBegin(GL_QUADS);//house
        glColor3ub(46, 64, 83 );
        glVertex2f(0.40f, 0.07f);
        glVertex2f(0.49f, -0.10f);
        glVertex2f(0.68f, -0.11f);
        glVertex2f(0.66f, 0.06f);
        glEnd();

        glBegin(GL_TRIANGLES);//roof
        glColor3ub(46, 64, 83);
        glVertex2f(0.32f, -0.10f);
        glVertex2f(0.49f, -0.10f);
        glVertex2f(0.40f, 0.07f);
        glEnd();

        glBegin(GL_TRIANGLES);//roof
        glColor3ub(141, 84, 9);
        glVertex2f(0.34f,  -0.10f);
        glVertex2f(0.49f, -0.10f);
        glVertex2f(0.407f, 0.055f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(125, 101, 92);
        glVertex2f(0.20f, -0.36f);
        glVertex2f(0.20f, -0.47f);
        glVertex2f(0.70f, -0.47f);
        glVertex2f(0.70f, -0.36f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(120, 93, 82);
        glVertex2f(0.70f, -0.36f);
        glVertex2f(0.70f, -0.47f);
        glVertex2f(0.80f, -0.30f);
        glVertex2f(0.80f, -0.25f);
        glEnd();

}
void tree()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(11, 57, 2 );
    glVertex2f(0.70f,  -0.33f);
    glVertex2f(1.04f , -0.33f );
    glVertex2f(0.875f , -0.10f );
    glEnd();

    glBegin(GL_TRIANGLES);
    //glColor3ub(0.196078,  0.8f, 0.196078);
    glVertex2f(0.73f,  -0.22f);
    glVertex2f(1.01f , -0.22f );
    glVertex2f(0.875f , 0.1f );
    glEnd();

    glBegin(GL_TRIANGLES);
    //glColor3ub(0.196078,  0.8f, 0.196078);
    glVertex2f(0.77f,  -0.05f);
    glVertex2f(0.97f , -0.05f );
    glVertex2f(0.875f , 0.30f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(175, 123, 24);
    glVertex2f(0.85f , -0.32f );
    glVertex2f(0.85f , -0.5f );
    glVertex2f(0.90f , -0.5f );
    glVertex2f(0.90f ,  -0.32f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(171, 120, 26);
    glVertex2f(0.85f , -0.32f );
    glVertex2f(0.85f , -0.5f );
    glVertex2f(0.87f , -0.5f );
    glVertex2f(0.87f ,  -0.32f );
    glEnd();


    //left

    glBegin(GL_QUADS);
    glColor3ub(175, 123, 24);
    glVertex2f(-0.84f , -0.22f );
    glVertex2f(-0.84f , -0.5f );
    glVertex2f(-0.76f , -0.5f );
    glVertex2f(-0.76f ,  -0.22f );
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(-0.76f,  -0.5f);
    glVertex2f(-0.74f , -0.5f );
    glVertex2f(-0.76f , -0.28f );
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.84f,  -0.22f);
    glVertex2f(-0.76f , -0.22f );
    glVertex2f(-0.80f , -0.18f );
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(164, 116, 26);
    glVertex2f(-0.86f,  -0.5f);
    glVertex2f(-0.84f , -0.5f );
    glVertex2f(-0.84f , -0.28f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(175, 123, 24);
    glVertex2f(-0.80f , -0.18f );
    glVertex2f(-0.76f , -0.22f );
    glVertex2f(-0.70f , -0.15f );
    glVertex2f(-0.74f ,  -0.12f );
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(171, 120, 26);
    glVertex2f(-0.90f , -0.15f );
    glVertex2f(-0.86f , -0.10f );
    glVertex2f(-0.84f , -0.22f );
    glVertex2f(-0.80f ,  -0.18f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(171, 120, 26);
    glVertex2f(-0.84f , -0.22f );
    glVertex2f(-0.84f , -0.5f );
    glVertex2f(-0.79f , -0.5f );
    glVertex2f(-0.79f ,  -0.17f );
    glEnd();

}

void windmill()
{   glPushMatrix();

    //WindMIll

    //Base
    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    //Stand171, 235, 198
    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();



    glLoadIdentity();

    //PropellersCircle
    int j;


    GLfloat x=-.35f; GLfloat y=.27f; GLfloat radius =.02f;
    int triangleAmount = 20;


    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(109, 109, 109);
		glVertex2f(x, y);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
                x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();



    glPushMatrix(); //glPushMatrix copies the top 171, 235, 198matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-0.35,0.27,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    //propellers
    //1
    glBegin(GL_TRIANGLES);
    glColor3ub(169, 50, 38);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.05f);
    glVertex2f( 0.1f, 0.05f);
    glEnd();

    //2
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.1f);
    glVertex2f( -0.05f, 0.1f);
    glEnd();

    //3
    glBegin(GL_TRIANGLES);
    glColor3ub(211, 84, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.05f);
    glVertex2f( -0.1f, -0.05f);
    glEnd();

    //4
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.05f, -0.1f);
    glVertex2f( 0.05f, -0.1f);
    glEnd();

    glPopMatrix();
        i+=1.0f;
        glPopMatrix();


}

void pata(void)
{

    glColor3ub(30, 132, 73);
    glPushMatrix();
    glTranslatef(-0.72,-0.03,0.0);
    glutSolidSphere(0.10,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.65,-0.15,0.0);
    glutSolidSphere(0.09,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.60,-0.02,0.0);
    glutSolidSphere(0.10,40,40);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-0.88,-0.03,0.0);
    glutSolidSphere(0.10,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.93,-0.14,0.0);
    glutSolidSphere(0.09,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.95,-0.02,0.0);
    glutSolidSphere(0.10,40,40);
    glPopMatrix();



    //middle

    glPushMatrix();
    glTranslatef(-0.84,0.09,0.0);
    glutSolidSphere(0.13,40,40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.68,0.07,0.0);
    glutSolidSphere(0.12,40,40);
    glPopMatrix();
}

void banch(void)
{
    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.64f , -0.30f );
    glVertex2f(-0.64f , -0.46f );
    glVertex2f(-0.62f , -0.46f );
    glVertex2f(-0.62f ,  -0.30f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.33f , -0.30f );
    glVertex2f(-0.33f , -0.46f );
    glVertex2f(-0.31f , -0.46f );
    glVertex2f(-0.31f ,  -0.30f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,66,18);
    glVertex2f(-0.65f , -0.33f );
    glVertex2f(-0.65f , -0.41f );
    glVertex2f(-0.30f , -0.41f );
    glVertex2f(-0.30f ,  -0.33f );
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120,66,18);
    glVertex2f(-0.65f , -0.45f );
    glVertex2f(-0.69f , -0.50f );
    glVertex2f(-0.34f , -0.50f );
    glVertex2f(-0.30f ,  -0.45f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.64f , -0.5f );
    glVertex2f(-0.64f , -0.53f );
    glVertex2f(-0.62f , -0.53f );
    glVertex2f(-0.62f ,  -0.5f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.31f , -0.45f );
    glVertex2f(-0.31f , -0.53f );
    glVertex2f(-0.33f , -0.53f );
    glVertex2f(-0.33f ,  -0.45f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.68f , -0.5f );
    glVertex2f(-0.68f , -0.55f );
    glVertex2f(-0.66f , -0.55f );
    glVertex2f(-0.66f ,  -0.5f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(49, 47, 45);
    glVertex2f(-0.345f , -0.5f );
    glVertex2f(-0.345f , -0.55f );
    glVertex2f(-0.365f , -0.55f );
    glVertex2f(-0.365f ,  -0.5f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(110,44,00);
    glVertex2f(-0.65f , -0.45f );
    glVertex2f(-0.69f , -0.50f );
    glVertex2f(-0.34f , -0.50f );
    glVertex2f(-0.30f ,  -0.45f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48, 34, 32);
    glVertex2f(-0.414f , -0.45f );
    glVertex2f(-0.454f , -0.50f );
    glVertex2f(-0.458f , -0.50f );
    glVertex2f(-0.418f ,  -0.45f );
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48, 34, 32);
    glVertex2f(-0.531f , -0.45f );
    glVertex2f(-0.571f , -0.50f );
    glVertex2f(-0.575f , -0.50f );
    glVertex2f(-0.535f ,  -0.45f );
    glEnd();

}

void basing(void)
{
    glTranslatef(0.15,-0.1,0.0);
    glBegin(GL_QUADS);
    glColor3ub(181, 47, 45);
    glVertex2f(0.62f , -0.30f );
    glVertex2f(0.65f , -0.40f );
    glVertex2f(0.68f , -0.40f );
    glVertex2f(0.71f ,  -0.30f );
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(200, 47, 100);
    glVertex2f(0.65f , -0.40f );
    glVertex2f(0.65f , -0.50f );
    glVertex2f(0.68f , -0.50f );
    glVertex2f(0.68f ,  -0.40f );
    glEnd();
            glBegin(GL_QUADS);
    glColor3ub(200, 47, 100);
    glVertex2f(0.70f , -0.22f );
    glVertex2f(0.70f , -0.30f );
    glVertex2f(0.69f , -0.30f );
    glVertex2f(0.69f ,  -0.22f );
    glEnd();


    if (tapon)
    {
    glBegin(GL_QUADS);
    glColor3ub(200, 181, tapcolor);
    glVertex2f(0.66f , -0.22f );
    glVertex2f(0.66f , -0.27f );
    glVertex2f(0.67f , -0.27f );
    glVertex2f(0.67f ,  -0.22f );
    glEnd();
    }
                glBegin(GL_QUADS);
    glColor3ub(200, 47, 100);
    glVertex2f(0.66f , -0.22f );
    glVertex2f(0.66f , -0.24f );
    glVertex2f(0.70f , -0.24f );
    glVertex2f(0.70f ,  -0.22f );
    glEnd();
       glLoadIdentity();

}
void axis(){
        //x axis
        glColor3ub(254, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    // y axis
    glColor3ub(31, 255, 0);
    glBegin(GL_LINES);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glEnd();
}


void update3()
{

        if(check){
    if(flag)
        {
            if(position>=0.79)
                {//231, 76, 60
                color1=231;
                color2=76;
                color3=60;

                }
            if(position>=1.65)
                {
                    //171, 235, 198
                color1=171;
                color2=235;
                color3=198;
                check = 0;
                mask = true;
                }

        }
    if(!flag)

    {   cout<<color3<<endl;
        cout<<"efeccted"<<endl;

    }

    }
       if(!check)
    {
        cout<<"do nothing"<<endl;
    }

    if (flag2)
    {
        if(position2>0.15)
        {
        //position= 0.14;
        position2 = position2-0.41;
        }
       else
            {
                if (position2<-0.16)
                {
                     position2 = position2+0.13;
                }

    }
    }






    if (flag3)
    {
        e1=0.01;
        e2=0.025;
        m1 =0.02;
        m2 =0.05;
        ma1 =0.053;
        ma2 =0.02;
        ma3 =0.02;
        ma4 =0.04;

    }
    if (!flag3)
    {
        e1=-0.01;
        e2=-0.025;
        m1 =-0.02;
        m2 =-0.05;
        ma1 =-0.053;
        ma2 =-0.02;
        ma3 =-0.02;
        ma4 =-0.04;

    }


    if(tapon)
    {
        if(tap)
        {tapcolor=100;
        tap = false;
        tapon=false;
        }
        if(!tap)
        {
        tapcolor=50;
        tap = true;
        tapon = false;
        }
    }

}



void handwash(){

     glTranslatef(0.95,-0.5,0.0);
glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02f,0.30f); //starting vertex
glVertex2f(-0.0f,0.315f); //ending vertex
glEnd();

     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(-0.0f,0.27f); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(0.02,0.30f); //ending vertex
glEnd();
     glBegin(GL_LINES);
glColor3ub(9, 100, 209);
glVertex2f(-0.02,0.28f); //starting vertex
glVertex2f(0.03f,0.28f); //ending vertex
glEnd();



glBegin(GL_QUADS);
    glColor3ub(182, 6, 30);
glVertex2f(-0.053,0.32f);
glVertex2f(-0.02,0.30f);
glVertex2f(-0.02,0.28f);
glVertex2f(-0.04,0.28f);
     glEnd();
}

void grass()
{
 glTranslatef(-0.8,0.3,0.0);
glColor3ub(0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.87,-0.325);
glEnd();
glColor3ub(0, 255, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.93,-0.323);
glEnd();
glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.86,-0.52);
glVertex2f (0.85,-0.319);
glEnd();
glColor3ub(0, 179, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.86,-0.52);
glVertex2f (0.83,-0.320);
glEnd();
glColor3ub(0, 230, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.85,-0.52);
glVertex2f (0.75,-0.320);
glEnd();
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.87,-0.52);
glVertex2f (0.72,-0.380);
glEnd();
glColor3ub(0, 179, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.90,-0.52);
glVertex2f (0.97,-0.330);
glEnd();
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.99,-0.328);
glEnd();


}






void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	mask=false;
	check = 1;
			}
if (button == GLUT_RIGHT_BUTTON)
	{
	    //position -=0.1f;
        //speed = 0.0f;
	    glTranslatef(position,0.0f,0.0f);
	 }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    position -=.01;
    glutPostRedisplay();
    cout<<"pressed a"<<endl;
    cout<<"p1"<<endl;
    cout<<position<<endl;
if (flag3)
{
    flag3=0;
    update3();
}
else{
    cout<<"no change---a"<<endl;
}



    break;
case 'w':
    position2 +=.01;
    glutPostRedisplay();
    cout<<"pressed a"<<endl;
    cout<<"p2"<<endl;
    cout<<position2<<endl;
      break;
case 'd':
    position +=.01;
    glutPostRedisplay();
    cout<<"pressed a"<<endl;
    cout<<"p1"<<endl;
    cout<<position<<endl;

    if (!flag3)
{
    flag3=1;
    update3();
}
else{
    cout<<"no change--d"<<endl;
}


    break;
case 's':
    position2 -=.01;
    glutPostRedisplay();
    cout<<"pressed a"<<endl;
    cout<<"p2"<<endl;
    cout<<position2<<endl;
    break;
    case 'm':
        mask2=true;
        break;
    case 't':
        tapon=true;
        break;
	}}


void display() {

    glClearColor(0.0f, 0.8f,0.4f,0.0f);
   glClear(GL_COLOR_BUFFER_BIT);

 road();
   sky();

   cloud();

   river();

   hills();
   house();
   testobject();
   tree();
   pata();
    //glFlush();
   banch();
    //windmill();
    objectt();
    object2();
    basing();

    windmill();

   // grass();

    update3();
     glColor3ub(235, 16, 106 );
    bird();
    glColor3ub(224, 56, 11 );
    glTranslatef(-0.03,0.02,0.0);
    bird();


    glFlush();

   glutSwapBuffers();
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(2000, 1000);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   //myInit();

     glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutTimerFunc(100, update3, 0);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
     //glutIdleFunc(Idle);
   glutMainLoop();
   return 0;
}
