#include <GL/glut.h>
void init(void){    
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,50,0 ,0 ,0 ,0,1 ,1);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(50, 1, 20, -30); 
}
//escenario1
void macetaE(void){
	
	
	glPushMatrix();// base
	glColor3f(255/255.0,170.0/255.0,10.0/255.0);
	glTranslated(6,8.0,-5);
	glutSolidCube(8);
	glPopMatrix();
	glPushMatrix();
	glColor3f(1/255.0,1.0/255.0,1.0/255.0);
	glTranslated(6,8.0,-5);
	glutWireCube(8);
	glPopMatrix();
	
	glPushMatrix();//planta
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(6,17.0,-5);
	glScaled(.1,1.3,.1);
	glutSolidCube(8);
	glPopMatrix();
	
	
	glPushMatrix();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(5,16.0,-5);
	glRotated(30,0,0,1);
	glScaled(.1,.5,.1);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(7,18.0,-5);
	glRotated(-30,0,0,1);
	glScaled(.1,.5,.1);
	glutSolidCube(8);
	glPopMatrix();
}
void maceta1(void){
	
	glPushMatrix();//tierra
	glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
	glScaled(.5,.1,.5);
	glTranslated(11,120,-8);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();// base
	glColor3f(255/255.0,170.0/255.0,10.0/255.0);
	glTranslated(6,8.0,-5);
	glutSolidCube(8);
	glPopMatrix();
	glPushMatrix();
	glColor3f(1/255.0,1.0/255.0,1.0/255.0);
	glTranslated(6,8.0,-5);
	glutWireCube(8);
	glPopMatrix();
	
	
	glPushMatrix();//planta
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(6,17.0,-5);
	glScaled(.5,1.3,.5);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();//tierra
	glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
	glScaled(.5,.1,.5);
	glTranslated(14,120,-9);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();// base
	glColor3f(200/255.0,170.0/255.0,10.0/255.0);
	glTranslated(6,8.0,-5);
	glutSolidCube(8);
	glPopMatrix();
	glPushMatrix();
	glColor3f(1/255.0,1.0/255.0,1.0/255.0);
	glTranslated(6,8.0,-5);
	glutWireCube(8);
	glPopMatrix();
	
	
	glPushMatrix();//planta
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(6,17.0,-5);
	glScaled(.5,1.3,.5);
	glutSolidCube(8);
	glPopMatrix();
}
void maceta(void){
	glPushMatrix();
	
	glTranslated(-1,5.3,11);
	glScaled(.3,.3,.3);
	maceta1();
	glPopMatrix();
}
void fondo(void){
	glColor3f(168.0/255.0,255.0/255.0,255.0/255.0);//fondo Azul
	glPushMatrix();
	glTranslated(0,0,-50);
	glScaled(1,1,.001);
	glutSolidCube(205);
	glPopMatrix();
	
}
void arbol(void){
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(0,40,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(0,40,-25);
	glScaled(1,1,1);
	glutWireSphere(8.05,6,6);
	glPopMatrix();
	
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(-8.9,30,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,30,30);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(-8.9,30,-25);
	glScaled(1,1,1);
	glutWireSphere(8.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(8.9,30,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,30,30);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(8.9,30,-25);
	glScaled(1,1,1);
	glutWireSphere(8.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(8.7,25,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(8.7,25,-25);
	glScaled(1,1,1);
	glutWireSphere(8.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(-8.7,25,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(-8.7,25,-25);
	glScaled(1,1,1);
	glutWireSphere(8.1,6,6);
	glPopMatrix();
	
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(-8.7,10,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(-8.7,10,-25);
	glScaled(1,1,1);
	glutWireSphere(8.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(8.7,10,-25);
	glScaled(1,1,1);
	glutSolidSphere(8,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(8.7,10,-25);
	glScaled(1,1,1);
	glutWireSphere(8,6,6);
	glPopMatrix();
	
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(6.4,20,-25);
	glScaled(1,1,1);
	glutSolidSphere(6,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(-6.4,20,-25);
	glScaled(1,1,1);
	glutSolidSphere(6,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(-6.4,20,-25);
	glScaled(1,1,1);
	glutWireSphere(6.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(6.4,15,-25);
	glScaled(1,1,1);
	glutSolidSphere(6,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(6.4,15,-25);
	glScaled(1,1,1);
	glutWireSphere(6.1,6,6);
	glPopMatrix();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//hojas
	glPushMatrix();
	glTranslated(-6.4,15,-25);
	glScaled(1,1,1);
	glutSolidSphere(6,10,10);
	glPopMatrix();
	glColor3f(33/255.0, 163/255.0, 0/255.0);
	glPushMatrix();
	glTranslated(6.4,15,-25);
	glScaled(1,1,1);
	glutWireSphere(6.1,6,6);
	glPopMatrix();
	
	glColor3f(130.0/255.0,109.0/255.0,90.0/255.0);//arbol tronco 
	glPushMatrix();
	glTranslated(0,15,-25);
	glScaled(.2,4,.2);
	glutSolidCube(13);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(0,15,-25);
	glScaled(.2,4,.2);
	glutWireCube(13.1);
	glPopMatrix();
}
void barandal(void){
	
	glColor3f(87.0/255.0,51.0/255.0,.0/255.0);//barandal
	glPushMatrix();
	glTranslated(-5,10,-12);
	glScaled(4,.05,.05);
	glutSolidCube(13);
	glPopMatrix();
	
	glColor3f(87.0/255.0,51.0/255.0,.0/255.0);//barandal
	glPushMatrix();
	glTranslated(-31,6,-12);
	glScaled(.05,.65,.05);
	glutSolidCube(13);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-21,6,-12);
	glScaled(.05,.65,.05);
	glutSolidCube(13);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-11,6,-12);
	glScaled(.05,.65,.05);
	glutSolidCube(13);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-01,6,-12);
	glScaled(.05,.65,.05);
	glutSolidCube(13);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9,6,-12);
	glScaled(.05,.65,.05);
	glutSolidCube(13);
	glPopMatrix();
	
	glColor3f(208.0/255.0,190.0/255.0,166.0/255.0);//piso
	glPushMatrix();
	glScaled(2,.2,1);
	glutSolidCube(25);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glScaled(2,.21,1);
	glutWireCube(25);
	glPopMatrix();
}
void mesa1(void){
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//patas
	glPushMatrix();
	glTranslated(1.5,3,17.5);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(1.5,3,17.5);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);
	glPushMatrix();
	glTranslated(1.5,3,12);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(1.5,3,12);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//patas
	glPushMatrix();
	glTranslated(6.5,3,17.5);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(6.5,3,17.5);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);
	glPushMatrix();
	glTranslated(5.5,3,12);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(5.5,3,12);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//mesa 2
	glPushMatrix();
	glTranslated(4,5,15);
	glScaled(.3,.05,.3);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(4,5,15);
	glScaled(.3,.05,.3);
	glutWireCube(20);
	glPopMatrix();
	
	
}
void mesa2(void){
	glPushMatrix();//maceta
	glTranslated(10.5,4.75,15);
	glScaled(.2,.2,.2);
	macetaE();
	glPopMatrix();
	
	
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//patas
	glPushMatrix();
	glTranslated(8.5,3,17.5);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(8.5,3,17.5);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);
	glPushMatrix();
	glTranslated(8.5,3,12);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(8.5,3,12);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//patas
	glPushMatrix();
	glTranslated(13.5,3,17.5);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(13.5,3,17.5);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);
	glPushMatrix();
	glTranslated(13.5,3,12);
	glScaled(.03,.16,.03);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(13.5,3,12);
	glScaled(.03,.16,.03);
	glutWireCube(20);
	glPopMatrix();
	
	glColor3f(130.0/255.0,89.0/255.0,70.0/255.0);//mesa
	glPushMatrix();
	glTranslated(11,5,15);
	glScaled(.3,.05,.3);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(11,5,15);
	glScaled(.3,.05,.3);
	glutWireCube(20);
	glPopMatrix();
	
}
void pared(void){
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);//pared
	glPushMatrix();
	glTranslated(20,13,0);
	glScaled(.1,1,1);
	glutSolidCube(25);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(20,13,0);
	glScaled(.1,1,1);
	glutWireCube(25.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,255.0/255.0,255.0/255.0);//marco
	glPushMatrix();
	glTranslated(18,8.2,0);
	glScaled(.02,1.2,1);
	glutSolidCube(13);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(18,8.2,0);
	glScaled(.02,1.2,1);
	glutWireCube(13.2);
	glPopMatrix();
	
	
	glColor3f(143.0/255.0,222.0/255.0,247.0/255.0);//vidrio
	glPushMatrix();
	glTranslated(17.7,7.4,3);
	glScaled(.02,1.1,.4);
	glutSolidCube(13);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(17.7,7.4,3);
	glScaled(.02,1.1,.4);
	glutWireCube(13);
	glPopMatrix();
	
	glColor3f(143.0/255.0,222.0/255.0,247.0/255.0);//vidrio
	glPushMatrix();
	glTranslated(17.8,7.4,-3);
	glScaled(.02,1.1,.4);
	glutSolidCube(13);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(17.8,7.4,-3);
	glScaled(.02,1.1,.4);
	glutWireCube(13);
	glPopMatrix();
	
}
void mesas(void){
	glPushMatrix();
	glTranslated(0,1,-6);
	
	mesa1();
	mesa2();
	glPopMatrix();
}
void patron(void){
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-15,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-15,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-12.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-12.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-10,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-10,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-7.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-7.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();

	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(-2.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-2.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(0,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(0,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(2.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(2.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(7.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(7.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(10,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(10,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(12.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(12.5,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
	
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(15,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutSolidCube(20);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(15,30,15);
	glRotated(-40,0,0,1);
	glScaled(.01,0.08,.01);
	glutWireCube(20.02);
	glPopMatrix();
}
void lluvia(void){
	glPushMatrix();
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-3,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-6,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-9,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-12,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-15,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-18,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-21,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-24,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-27,0);
	patron();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,-30,0);
	patron();
	glPopMatrix();
}
void lluvia2(void){
	glPushMatrix();
	glTranslated(0,-2,0);
	lluvia();
	glPopMatrix();
}
void escenario(void){
	mesas();
	pared();
	barandal();
	arbol();
	fondo();
}
//esenario2
void fondo2(void){
	glColor3f(246.0/255.0,240.0/255.0,246.0/255.0);//fondo Azul
	glPushMatrix();
	glTranslated(0,0,-50);
	glScaled(1,1,.001);
	glutSolidCube(205);
	glPopMatrix();
}
void base(void){
	
	glColor3f(10.0/255.0,32.0/255.0,61.0/255.0);//piso
	glPushMatrix();
	glScaled(2.5,.2,1);
	glutSolidCube(25);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glScaled(2.5,.21,1);
	glutWireCube(25);
	glPopMatrix();
}
void mueble(void){
	glColor3f(149.0/255.0,159.0/255.0,158.0/255.0);//piso
	glPushMatrix();
	glTranslated(-13,8.8,-8);
	glScaled(.4,.5,.25);
	glutSolidCube(25);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-13,8.8,-8);
	glScaled(.4,.5,.25);
	glutWireCube(25.02);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-15.5,8.8,-8);
	glScaled(.2,.5,.25);
	glutWireCube(25.02);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-14.5,9,-5);
	glutSolidCube(1);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-11.5,9,-5);
	glutSolidCube(1);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//retrete base
	glPushMatrix();
	glTranslated(-13,15.8,-8);
	glScaled(.4,.06,.25);
	glutSolidCube(25);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-13,15.8,-8);
	glScaled(.4,.06,.25);
	glutWireCube(25.1);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-13.5,17,-11);
	glScaled(.7,2,.25);
	glutSolidCube(1);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-13,17.6,-11);
	glScaled(.7,.8,.25);
	glutSolidCube(1);
	glPopMatrix();
	
	
}
void espejo(void){
	glColor3f(100.0/255.0,107.0/255.0,103.0/255.0);//piso
	glPushMatrix();
	glScaled(1,1.3,.1);
	glTranslated(-13,20,-100);	
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(0.0/255.0,0.0/255.0,0.0/255.0);//piso
	glPushMatrix();
	glScaled(1,1.3,.1);
	glTranslated(-13,20,-100);	
	glutWireCube(10.1);
	glPopMatrix();
	
}
void retrete(void){
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//retrete base
	glPushMatrix();
	glTranslated(4,3,-7);
	glScaled(.7,.1,.5);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,3,-7);
	glScaled(.7,.1,.5);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//cuerpo base
	glPushMatrix();
	glTranslated(4,3,-7);
	glScaled(.3,1.2,.3);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,3,-7);
	glScaled(.3,1.2,.3);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//cuerpo2 base
	glPushMatrix();
	glTranslated(4,10,-7);
	glScaled(1,1,1);
	glutSolidSphere(4,20,20);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,10,-7);
	glScaled(1,1,1);
	glutWireSphere(4,13,13);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//cuerpo3 base
	glPushMatrix();
	glTranslated(4,12,-7);
	glScaled(.8,.1,.8);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,12,-7);
	glScaled(.8,.1,.8);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//cuerpo4 base
	glPushMatrix();
	glTranslated(4,14,-10);
	glScaled(.74,1,.2);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,14,-10);
	glScaled(.74,1,.2);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//cuerpo5 base
	glPushMatrix();
	glTranslated(4,19,-10);
	glScaled(.8,.1,.3);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glPushMatrix();
	glTranslated(4,19,-10);
	glScaled(.8,.1,.3);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(0,0,0);//puntos
	glPushMatrix();
	glTranslated(5.3,17,-9);
	glutSolidCube(1);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(5.9,17.3,-9);
	glScaled(2,.5,1),
	glutSolidCube(1);
	glPopMatrix();
	
}
void banco(void){
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//palo
	glPushMatrix();
	glTranslated(15.2,12.7,-4.5);
	glScaled(.42,.1,.1);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(15.2,12.7,-4.5);
	glScaled(.42,.1,.1);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//palo
	glPushMatrix();
	glTranslated(13.2,12.7,-7);
	glScaled(.1,.1,.5);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(13.2,12.7,-7);
	glScaled(.1,.1,.5);
	glutWireCube(10.1);
	glPopMatrix();	
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//palo
	glPushMatrix();
	glTranslated(17.2,12.7,-7);
	glScaled(.1,.1,.5);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(17.2,12.7,-7);
	glScaled(.1,.1,.5);
	glutWireCube(10.1);
	glPopMatrix();	
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//banco pata
	glPushMatrix();
	glTranslated(13,9.7,-10);
	glScaled(.08,1.4,.08);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(13,9.7,-10);
	glScaled(.08,1.4,.08);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//banco pata2
	glPushMatrix();
	glTranslated(13,9.7,-5);
	glScaled(.08,1.4,.08);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(13,9.7,-5);
	glScaled(.08,1.4,.08);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//banco pata3
	glPushMatrix();
	glTranslated(17,9.7,-10);
	glScaled(.08,1.4,.08);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(17,9.7,-10);
	glScaled(.08,1.4,.08);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//banco pata4
	glPushMatrix();
	glTranslated(17,9.7,-4);
	glScaled(.08,1.4,.08);
	glutSolidCube(10);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(17,9.7,-4);
	glScaled(.08,1.4,.08);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(255.0/255.0,176.0/255.0,5.0/255.0);//base
	glPushMatrix();
	glTranslated(15,17,-7.5);
	glScaled(1,.2,1);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}
void sapo(void){
	glColor3f(198.0/255.0,142.0/255.0,13.0/255.0);//palo
	glPushMatrix();
	glTranslated(-4.5,7.7,-5.5);
	glScaled(.1,.7,.1);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-4.5,7.7,-5.5);
	glScaled(.1,.7,.1);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-4.5,3.7,-5.5);
	glScaled(.3,.2,.2);
	glutSolidCube(10.1);
	glPopMatrix();
}
void escoba(void){
	glColor3f(198.0/255.0,142.0/255.0,13.0/255.0);//palo
	glPushMatrix();
	glTranslated(-15.5,11.7,-4);
	glScaled(.07,1.3,.07);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-15.5,11.7,-4);
	glScaled(.07,1.3,.07);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(147.0/255.0,147/255.0,143.0/255.0);//parte a
	glPushMatrix();
	glTranslated(-15.5,4.7,-4);
	glScaled(.4,.1,.08);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-15.5,4.7,-4);
	glScaled(.4,.1,.08);
	glutWireCube(10.1);
	glPopMatrix();
	
	glColor3f(132.0/255.0,252/255.0,8.0/255.0);//parte a
	glPushMatrix();
	glTranslated(-15.5,3.1,-4);
	glScaled(.4,.2,.08);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(-15.5,3.1,-4);
	glScaled(.4,.2,.08);
	glutWireCube(10.1);
	glPopMatrix();
}
void base1(void){
		glPushMatrix();//base
		glColor3f(1,0,0);
		glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
		glScaled(1,.05,1);
		glutSolidCube(30);
		glPopMatrix();
		
		glPushMatrix();//base
		glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
		glScaled(1,.05,1);
		glutWireCube(30);
		glPopMatrix();
		
		glPushMatrix();//parte latetales
		glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
		glTranslated(-15,3,10);
		glScaled(.05,.2,.15);
		glRotated(20,1,0,0);
		glutSolidCube(30);
		glPopMatrix();
		
		glPushMatrix();//parte 2 latetales
		glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
		glTranslated(15,3,10);
		glScaled(.05,.2,.15);
		glRotated(20,1,0,0);
		glutSolidCube(30);
		glPopMatrix();
} 
void libros(void){
	glPushMatrix();//libro 1
	glColor3f(1,0,0);
	glTranslated(6,1.8,-5);
	glScaled(1,.1,1);
	glutSolidCube(15);
	glPopMatrix();

	glPushMatrix();//libro 2
	glColor3f(0,0,1);
	glTranslated(6,3,-5);
	glScaled(1,.1,1);
	glutSolidCube(15);
	glPopMatrix();
}
			
void lampara(void){
	glPushMatrix();//lampara base
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);
	glTranslated(-10,1.4,-5);
	glScaled(.7,.07,1);
	glutSolidCube(10);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
	glTranslated(-10,1.4,-5);
	glScaled(.7,.07,1);
	glutWireCube(10);
	glPopMatrix();
	
	glPushMatrix();//lampara palos 3
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);
	glTranslated(-9.7,16,-6.3);
	glScaled(.1,.18,.25);
	glutSolidCube(10);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
	glTranslated(-9.7,16,-6.3);
	glScaled(.1,.18,.25);
	glutWireCube(10);
	glPopMatrix();
	
	glPushMatrix();//lampara palos 2
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);
	glTranslated(-10,13,-5.1);
	glScaled(.1,.6,.1);
	glRotated(70,1,0,0);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
	glTranslated(-10,13,-5.1);
	glScaled(.1,.6,.1);
	glRotated(70,1,0,0);
	glutWireCube(10);
	glPopMatrix();
	
	glPushMatrix();//lampara palos 1
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);
	glTranslated(-10,6.5,-5);
	glScaled(.1,1,.1);
	glutSolidCube(10);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
	glTranslated(-10,6.5,-5);
	glScaled(.1,1,.1);
	glutWireCube(10);
	glPopMatrix();

	glPushMatrix();//lampara cuadro
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);
	glTranslated(-10.7,15.5,-8.6);
	glRotated(-15,1.7,0,0);
	glScaled(1.3,1.3,.7);
	glutSolidCube(3.5);
	glPopMatrix();
	


    glPushMatrix();
	glColor3f(1.0/255.0,1.0/255.0,1.0/255.0);
	glTranslated(-10.7,15.5,-8.6);
	glRotated(-15,1.7,0,0);
	glScaled(1.3,1.3,.7);
	glutWireCube(3.5);
	glPopMatrix();

	glPushMatrix();//foco
	glColor3f(1,1,0);
	glTranslated(-10.7,15,-10.6);
	glutSolidSphere(.9,20,20);
	glPopMatrix();
}
void maceta3(void){
	glPushMatrix();//planta
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(6,17.0,-5);
	glScaled(.1,1.3,.1);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
    glTranslated(5,16.0,-5);
	glRotated(30,0,0,1);
    glScaled(.1,.5,.1);
    glutSolidCube(8);
	glPopMatrix();

	glPushMatrix();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glTranslated(7,18.0,-5);
    glRotated(-30,0,0,1);
	glScaled(.1,.5,.1);
	glutSolidCube(8);
	glPopMatrix();

	glPushMatrix();//tierra
	glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);
	glScaled(.5,.1,.5);
	glTranslated(14,120,-9);
    glutSolidCube(8);
	glPopMatrix();

	glPushMatrix();// base
	glColor3f(255/255.0,170.0/255.0,10.0/255.0);
	glTranslated(6,8.0,-5);
	glutSolidCube(8);
	glPopMatrix();
	glPushMatrix();
	glColor3f(1/255.0,1.0/255.0,1.0/255.0);
	glTranslated(6,8.0,-5);
    glutWireCube(8);
	glPopMatrix();
}
void repisa(void){
		base1();
		libros();
		lampara();
		maceta3();
}
void repisaa(void){
	glPushMatrix();
	glTranslated(16,30,-10);
	glScaled(.35,.35,.35);
	glRotated(180,0,1,0);
	repisa();
	glPopMatrix();
}
void escenario2(void){
	glPushMatrix();
	glTranslated(0,-15,0);
	fondo2();
	base();
	mueble();
	espejo();
	retrete();
	banco();
	sapo();
	escoba();
	glPushMatrix();
	repisaa();
	glPopMatrix();
	glPopMatrix();
}
void escenario3(void){
	glPushMatrix();
	glTranslated(0,-15,0);
	fondo2();
	base();
	mueble();
	espejo();
	retrete();
	banco();
	sapo();
	glPushMatrix();
	repisaa();
	glPopMatrix();
	glPopMatrix();
}
//tortuja
void cuerpo(void){
	glColor3f(215.0/255.0,219.0/255.0,69.0/255.0);//cuerpo
	glPushMatrix();
	glTranslated(9,-60,-15);
	glScaled(.7,.8,.9);
	glutSolidSphere(8,20,20);
	glPopMatrix();
	
	glColor3f(68.0/255.0,173.0/255.0,76.0/255.0);//caparazon
	glPushMatrix();
	glTranslated(12,-60,-15);
	glScaled(.7,.8,.9);
	glutSolidSphere(8.3,20,20);
	glPopMatrix();
	glColor3f(0,0,0);
    glPushMatrix();
	glTranslated(12,-60,-15);
	glScaled(.7,.8,.9);
	glutWireSphere(8.3,15,15);
	glPopMatrix();
	
}
void piernas(void){
		glPushMatrix();//planta
		glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
		glTranslated(9,-67,-18);
		glScaled(.5,1,.5);
		glutSolidCube(8);
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,0,0);
		glTranslated(9,-67,-18);
		glScaled(.5,1,.5);
		glutWireCube(8.05);
		glPopMatrix();
		
		
		glPushMatrix();//pata
		glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
		glTranslated(9,-67,-11);
		glScaled(.5,1,.5);
		glutSolidCube(8);
		glPopMatrix();
		glColor3f(0,0,0);
		glPushMatrix();
		glTranslated(9,-67,-11);
		glScaled(.5,1,.5);
		glutWireCube(8.05);
		glPopMatrix();
}
void piernas2(){
	glPushMatrix();//pie
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glTranslated(9,-67,-18);
	glRotated(30,0,0,1);
	glScaled(.5,1,.5);
	glutSolidCube(8);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(9,-67,-18);
	glRotated(30,0,0,1);
	glScaled(.5,1,.5);
	glutWireCube(8.05);
	glPopMatrix();
	
	
	glPushMatrix();//pata
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glTranslated(7,-67,-11);
	glRotated(-40,0,0,1);
	glScaled(.5,1,.5);
	glutSolidCube(8);
	glPopMatrix();
	glColor3f(0,0,0);
	glPushMatrix();
	glTranslated(7,-67,-11);
	glRotated(-40,0,0,1);
	glScaled(.5,1,.5);
	glutWireCube(8.05);
	glPopMatrix();
}
void manos(void){
	glPushMatrix();//planta
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glTranslated(5.5,-58,-19.5);
	glScaled(1,.5,.5);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(5.5,-58,-19.5);
	glScaled(1,.5,.5);
	glutWireCube(8.05);
	glPopMatrix();
	
	glPushMatrix();//planta
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glTranslated(5.5,-58,-11);
	glScaled(1,.5,.5);
	glutSolidCube(8);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(5.5,-58,-11);
	glScaled(1,.5,.5);
	glutWireCube(8.05);
	glPopMatrix();
	
	
	
}
void cabeza(void){
	glPushMatrix();//planta
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glTranslated(9,-50,-15);
	glScaled(1,1,1.1);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(9,-50,-15);
	glScaled(1,1,1.1);
	glutWireCube(10.05);
	glPopMatrix();

	glColor3f(0,0,0);//puntos
	glPushMatrix();
	glTranslated(3.5,-48,-11.5);
	glutSolidCube(2);
	glPopMatrix();
	
	glColor3f(0,0,0);//puntos
	glPushMatrix();
	glTranslated(3.5,-48,-18.5);
	glutSolidCube(2);
	glPopMatrix();
	
	glColor3f(0,0,0);//puntos
	glPushMatrix();
	glTranslated(4,-52,-15.5);
	glScaled(1,.5,2.5);
	glutSolidCube(2);
	glPopMatrix();
}
void cabeza2(void){
	glPushMatrix();
	glTranslated(0,2,0);
	cabeza();
	glPopMatrix();
}
void tortuga(void){
	glPushMatrix();
	piernas();
	cuerpo();
	manos();
	cabeza();
	glPopMatrix();

}
void tortuga2(void){
	glPushMatrix();
	piernas2();
	cuerpo();
	manos();
	cabeza();
	glPopMatrix();
}
void tortuga3(void){
	glPushMatrix();
	piernas2();
	cuerpo();
	manos();
	cabeza2();
	glPopMatrix();
}
void cubeta(void){
	glPushMatrix();
	glColor3f(92.0/255.0,94.0/255.0,96.0/255.0);
	glTranslated(-4,-58,-15);
	glScaled(1,1.6,1);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(-4,-58,-15);
	glScaled(1,1.6,1);
	glutWireCube(10.05);
	glPopMatrix();
}
void cubeta2(void){
	glPushMatrix();
	glTranslated(-70,-60,15);
	glRotated(90,0,0,1);
	cubeta();
	glPopMatrix();
	glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
	glPushMatrix();
	glTranslated(0,-70,1);
	glRotated(40,0,0,1);
	glScaled(.2,.5,.2);
	glutSolidCube(10);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(5,-75,1);
	glRotated(40,0,0,1);
	glScaled(.2,.5,.2);
	glutSolidCube(10);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(9,-80,1);
	glRotated(40,0,0,1);
	glScaled(.2,.4,.2);
	glutSolidCube(10);
	glPopMatrix();
}
	void cubeta3(void){
		glPushMatrix();
		glTranslated(-70,-60,15);
		glRotated(90,0,0,1);
		cubeta();
		glPopMatrix();
		glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);//gota
		glPushMatrix();
		glTranslated(3,-73,1);
		glRotated(40,0,0,1);
		glScaled(.2,.5,.2);
		glutSolidCube(10);
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(8,-78,1);
		glRotated(40,0,0,1);
		glScaled(.2,.5,.2);
		glutSolidCube(10);
		glPopMatrix();
		
		
	}
		void cubeta4(void){
			glPushMatrix();
			glTranslated(-70,-60,15);
			glRotated(90,0,0,1);
			cubeta();
			glPopMatrix();
			
			
		}
	
void material(void){
		GLfloat amb1[ ]={0.23125,0.23125,0.23125,1.0};    
		GLfloat amb2[ ]={0.773911,0.773911,0.773911,1.0};    
		GLfloat amb3[ ]={0.2775,0.2775,0.2775,1.0};    
		
		glMaterialfv(GL_FRONT, GL_AMBIENT, amb1);
		glMaterialfv(GL_FRONT, GL_SPECULAR, amb2);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, amb3);
		glMaterialf(GL_FRONT,GL_SHININESS,89.6);   
		
		glEnable(GL_COLOR_MATERIAL);  }
void ilumina2(void){
			GLfloat Posicionytipo[ ]={-500,-500,-300,2};
			GLfloat Colorambiente[ ]={1,1,1,2};
			GLfloat Colordifuso[ ]={0,0,0.0};
			GLfloat direccion[ ]={100,20,10};
			glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
			glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
			//atenuación
			glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
			glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
			glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
			//DIRECCIONES
			glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
			glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
			glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
			
			glEnable(GL_LIGHTING);
			glEnable(GL_LIGHT0);  
			glEnable(GL_LIGHT1);  
			glEnable(GL_DEPTH_TEST);
		}
void desativa_luz(void){
			glDisable(GL_LIGHTING);
			glDisable(GL_LIGHT0);  
			glDisable(GL_LIGHT1);  
			glDisable(GL_DEPTH_TEST);
		}
void Pinta3D(void){   
	//parte 1
	int x=50;
	int x1=0;
	int t=200;
	int b=0;
	for(int i=0;i<=21;i++){
		if(i<20){
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				glTranslated(0,-15,0);
				glRotated(0,0,1,0);
				escenario();
				lluvia2();
				glPopMatrix();
				
				glPushMatrix();
				glRotated(0,0,1,0);
				glScaled(-.3,.3,-.3);
				glTranslated(x,30,20);
				tortuga();
				cubeta();
				glPopMatrix();
				
				x=x-5;
				glPushMatrix();
				glTranslated(b,-15,0);
				glRotated(x1,0,0,1);
				maceta();
				glPopMatrix();	
				x1+=4;
				b-=.5;
				
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				glTranslated(0,-15,0);
				glRotated(0,0,0,1);
				escenario();
				lluvia();
				glPopMatrix();
				
				glPushMatrix();
				glRotated(0,0,1,0);
				glScaled(-.3,.3,-.3);
				glTranslated(x,30,20);
				tortuga2();
				cubeta();
				glPopMatrix();
				x=x-5;
				
				glPushMatrix();
				glTranslated(b,-15,0);
				glRotated(x1,0,0,1);
				maceta();
				glPopMatrix();
				x1+=4;
				b-=.5;
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
		}else{
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			glTranslated(0,-15,0);
			glRotated(0,0,0,1);
			escenario();
			lluvia();
			glPopMatrix();
			
			glPushMatrix();
			glRotated(0,0,1,0);
			glScaled(-.3,.3,-.3);
			glTranslated(x,30,20);
			tortuga2();
			cubeta();
			glPopMatrix();
			x=x-5;
			
			glPushMatrix();
			glTranslated(b,-12,0);
			glRotated(90,0,0,1);
			maceta();
			glPopMatrix();
			
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}
	}
    for(int i=0;i<=52;i++){
		if(i%2==0){
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			glTranslated(0,-15,0);
			glRotated(0,0,0,1);
			escenario();
			lluvia2();
			glPopMatrix();
			
			glPushMatrix();
			glRotated(0,0,1,0);
			glScaled(.3,0.3,-.3);
			glTranslated(x+95,30,20);
			tortuga();
			cubeta();
			glPopMatrix();
			x=x-2.5;
			
			glPushMatrix();
			glTranslated(0,-12,0);
			glRotated(90,0,0,1);
			maceta();
			glPopMatrix();
		
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}else{
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			glTranslated(0,-15,0);
			glRotated(0,0,0,1);
			escenario();
			lluvia();
			glPopMatrix();
			
			glPushMatrix();
			glRotated(0,0,1,0);
			glScaled(.3,0.3,-.3);
			glTranslated(x+95,30,20);
			tortuga2();
			cubeta();
			glPopMatrix();
			x=x-2.5;
			
			glPushMatrix();
			glTranslated(0,-12,0);
			glRotated(90,0,0,1);
			maceta();
			glPopMatrix();
	
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}
	}
	x=50;
	for(int i=0;i<=52;i++){
		if(i<53){
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				glTranslated(0,-15,0);
				glRotated(0,0,1,0);
				escenario();
				lluvia();
				glPopMatrix();
				
				glPushMatrix();
				glRotated(0,0,1,0);
				glScaled(-.3,.3,-.3);
				glTranslated(x,30,20);
				tortuga();
				cubeta();
				glPopMatrix();
				
				x=x-2.5;
				glPushMatrix();
				glTranslated(0,-12,0);
				glRotated(90,0,0,1);
				maceta();
				glPopMatrix();
				
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				glTranslated(0,-15,0);
				glRotated(0,0,0,1);
				escenario();
				lluvia2();
				glPopMatrix();
				
				glPushMatrix();
				glRotated(0,0,1,0);
				glScaled(-.3,.3,-.3);
				glTranslated(x,30,20);
				tortuga2();
				cubeta();
				glPopMatrix();
				x=x-2.5;
				
				glPushMatrix();
				glTranslated(0,-12,0);
				glRotated(90,0,0,1);
				maceta();
				glPopMatrix();
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
		}
	}

	
	//parte2
	int y=0;
	int y1=0;
	for(int i=0;i<=26;i++){
		if(i<12){
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				ilumina2();
				material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,40,10);
				tortuga();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y-=2.5;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,40,10);
				tortuga2();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y-=2.5;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
		}else{
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,40,10);
				tortuga();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y-=2.5;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,40,10);
				tortuga2();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y-=2.5;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
		}
	}
	for(int i=0;i<=9;i++){
		if(i<3){
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,y1+40,12);
				tortuga();
								cubeta();
				glPopMatrix();
				desativa_luz();
			 
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,y1+40,12);
				tortuga();
				cubeta();
				glPopMatrix();
				desativa_luz();
			
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
		}else{
			if(i%2==0){
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,y1+40,12);
				tortuga2();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y-=6;
				y1+=6.5;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}else{
				glMatrixMode(GL_MODELVIEW);
				glMatrixMode(GL_MODELVIEW);
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				//escenario
				glPushMatrix();
				//ilumina2();
				//material();
				glRotated(0,0,1,0);
				escenario2();
				glPopMatrix();
				
				glPushMatrix();
				glScaled(-.4,.4,.4);
				glTranslated(y+60,y1+40,12);
				tortuga2();
				cubeta();
				glPopMatrix();
				desativa_luz();
				y1+=6;
				y-=6;
				glDisable(GL_COLOR_MATERIAL);
				glDisable(GL_DEPTH_TEST);
				glFlush();
				Sleep(t);
				
			}
			
		}
	}

    for(int i=0;i<=11;i++){
		if(i==0){
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			//ilumina2();
			//material();
			glRotated(00,0,1,0);
			escenario2();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			glRotated(90,0,1,0);
			
			tortuga();
			cubeta();
			glPopMatrix();
			desativa_luz();
			
			glDisable(GL_COLOR_MATERIAL);
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}else{
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			//ilumina2();
			//material();
			glRotated(00,0,1,0);
			escenario2();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			glRotated(90,0,1,0);
			tortuga();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			cubeta2();
			glPopMatrix();
			desativa_luz();
			
			glDisable(GL_COLOR_MATERIAL);
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}
		
	}
    for(int i=0;i<=21;i++){
		if(i%2==0){
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			//ilumina2();
			//material();
			escenario3();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(i*.5,-15-(i*.25),0);
			glRotated(-i,0,0,1);
			escoba();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			glRotated(90,0,1,0);
			tortuga();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			cubeta2();
			glPopMatrix();
			desativa_luz();
			
			glDisable(GL_COLOR_MATERIAL);
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}else{
		
			
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			//ilumina2();
			//material();
			escenario3();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(i*.5,-15-(i*.25),0);
			glRotated(-i,0,0,1);
			escoba();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			glRotated(90,0,1,0);
			tortuga3();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			cubeta3();
			glPopMatrix();
			
		
			desativa_luz();
			
			glDisable(GL_COLOR_MATERIAL);
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}
		if(i==21){
			glMatrixMode(GL_MODELVIEW);
			glMatrixMode(GL_MODELVIEW);
			glClear(GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);
			glClear(GL_COLOR_BUFFER_BIT);
			//escenario
			glPushMatrix();
			//ilumina2();
			//material();
			escenario3();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(i*.5,-15-(i*.25),0);
			glRotated(-i,0,0,1);
			escoba();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			glRotated(90,0,1,0);
			tortuga3();
			glPopMatrix();
			
			glPushMatrix();
			glTranslated(8,31,-1);
			glScaled(-.4,.4,.4);
			cubeta4();
			glPopMatrix();
			
			
			desativa_luz();
			
			glDisable(GL_COLOR_MATERIAL);
			glDisable(GL_DEPTH_TEST);
			glFlush();
			Sleep(t);
		}
	}
}
int main(int argc, char **argv){
	glutInit(&argc, argv);                         
	glutInitWindowSize(600, 600);
	glutCreateWindow("Gabriel Reyes Leal");
	init();
	glutDisplayFunc(Pinta3D);    
	glutMainLoop();
	return 0;
}	
