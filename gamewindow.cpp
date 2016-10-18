#include "gamewindow.h"
#include <math.h>
#define v3f glVertex3f  


void GameWindow::setRunning(bool newRunning)
{
	_running = newRunning;
}

bool GameWindow::getRunning()
{
	return _running;
}

GameWindow::GameWindow(bool running, GLFWwindow* window): _running(running)
{
	_window = window;
	/* glClearColor - specify clear values for the color buffers
	   void glClearColor(GLfloat red, GLfloat green, GLfloat blue,
			     GLfloat alpha); */
	glClearColor(0.1f, 0.5f, 2.5f, 3.0f);

	/* This function retrieves the size, in pixels, of the framebuffer of
	 * the specified window. */
	glfwGetFramebufferSize(window, &_width, &_height);
	glViewport(0, 0, _width, _height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	/* void glOrtho(GLdouble left, GLdouble right, GLdouble bottom,
			GLdouble top, GLdouble nearVal, GLdouble farVal); */
	glOrtho(0.0, _width, 0.0, _height, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);

}

void GameWindow::render()
{
	
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.2f, .2f, .5f);




   glColor3f(0.5f, 2.2f, 0.5f);
   glBegin(GL_POLYGON);

   v3f( 1.0, 100.0, 1.0 );   v3f( 1.0, -100.0, 1.0 );
   v3f( 100000.0, -350.0, -300.0 ); v3f( 110.0, 300.0, 120.0 );

   glColor3f(0.5f, 0.2f, 0.5f);
   v3f( 100.0, 100.0, 1.0 );   v3f( 1.0, -100.0, 1.0 );
   v3f( 100000.0, -350.0, -300.0 ); v3f( 110.0, 300.0, 120.0 );

   glEnd();

  glColor3f(1.5f, 0.8f, 0.2f);
   glBegin(GL_LINE_STRIP);
      glVertex3f(100.0f, 0.0f, 0.0f);  // V0
      glVertex3f(200.0f,      100.0f, 0.0f);  // V1
      glVertex3f(250.0f,      100.0f, 3200.0f);  // V2

      glVertex3f(550.0f, 0.0f, 0.0f);  // V0
      glVertex3f(400.0f,      100.0f, 0.0f);  // V1
      glVertex3f(250.0f,      100.0f, 3200.0f);  // V2
   glEnd();


   
   GLfloat angulo;

int i=0; 

glBegin(GL_LINES);
for (i=0; i<360; i+=3)
{
      angulo = (GLfloat)i*3.14159f/180.0f; // grados a radianes
      glVertex3f(1000.0f, 700.0f, 100.0f);
      glVertex3f(cos(angulo)*100, sin(angulo)*100, -120.0f);
}
glEnd();


glColor3f(1.5f, 0.8f, 0.2f);
//glBegin(GL_TRIANGLES);
//      glVertex3f(1000.0f, 100.0f, 0.0f); // V0
 //     glVertex3f(10.0f, 100.0f, 10.0f); // V1
 //     glVertex3f(200.0f, 100.0f, 10.0f); // V2
 //     glVertex3f(-100.0f, 0.0f, 10.0f); // V3
 //     glVertex3f(-3.0f, 2.0f, 10.0f); // V4
 //     glVertex3f(-2.0f, 0.0f, 20.0f); // V5
//glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
glPointSize(30.0f);
glBegin(GL_POINTS);
  glVertex3f(300.0f, 397.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(290.0f, 395.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(310.0f, 402.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);

  glVertex3f(200.0f, 367.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(190.0f, 365.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(210.0f, 372.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);

  glVertex3f(70.0f, 417.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(60.0f, 415.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
  glVertex3f(80.0f, 422.0f, 0.0f);
  glVertex3f(10.0f, 900.0f, 10.0f);
glEnd(); 
   


	/* Swap front and back buffers */
	glfwSwapBuffers(_window);
}

void GameWindow::update()
{
}
