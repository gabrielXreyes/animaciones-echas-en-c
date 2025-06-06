#include <GL/glut.h>

void inicializa(void){
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 600,0, 500);
}
//fondoA
void casa(void){
	int v=0;
	glColor3f(187.0/255.0,162.0/255.0,140.0/255.0);//cuadro principal
	glBegin(GL_POLYGON);
	glVertex2i(600,13);
	glVertex2i(407,124);
	glVertex2i(412,500);
	glVertex2i(600,500);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);//MARCO
	glBegin(GL_POLYGON);
	glVertex2i(594,438);
	glVertex2i(463,416);
	glVertex2i(466,406);
	glVertex2i(596,429);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(472,410);
	glVertex2i(590,430);
	glVertex2i(586,21);
	glVertex2i(469,89);
	glEnd();
	
	glColor3f(154.0/255.0,154.0/255.0,154.0/255.0);//cuadro principal
	glBegin(GL_POLYGON);
	glVertex2i(554,415);
	glVertex2i(534,410);
	glVertex2i(530,58);
	glVertex2i(550,50);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(582,419);
	glVertex2i(554,415);
	glVertex2i(553,402);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(576,31);
	glVertex2i(550,66);
	glVertex2i(550,50);
	glEnd();
	
	glColor3f(143.0/255.0,222.0/255.0,247.0/255.0);//VIDRIOS
	glBegin(GL_POLYGON);
	glVertex2i(580,36);
	glVertex2i(582,414);
	glVertex2i(559,399);
	glVertex2i(554,70);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(476,399);
	glVertex2i(528,408);
	glVertex2i(521,68);
	glVertex2i(473,92);
	glEnd();
	
	glColor3f(168.0/255.0,231.0/255.0,249.0/255.0);//VIDRIOS DETALLES
	glBegin(GL_POLYGON);
	glVertex2i(477,351);
	glVertex2i(528,289);
	glVertex2i(527,250);
	glVertex2i(475,324);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(558,364);
	glVertex2i(583,328);
	glVertex2i(583,291);
	glVertex2i(558,328);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(475,268);
	glVertex2i(525,206);
	glVertex2i(525,179);
	glVertex2i(475,251);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(585,243);
	glVertex2i(583,221);
	glVertex2i(557,253);
	glVertex2i(558,273);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(474,206);
	glVertex2i(526,138);
	glVertex2i(524,121);
	glVertex2i(473,186);
	glEnd();
	
	glColor3f(235.0/255.0,233.0/255.0,233.0/255.0);//SOMBRA PUERTA
	glBegin(GL_POLYGON);
	glVertex2i(473,408);
	glVertex2i(587,427);
	glVertex2i(587,424);
	glVertex2i(473,405);
	glEnd();
	
	glColor3f(208.0/255.0,190.0/255.0,166.0/255.0);//PISO
	glBegin(GL_POLYGON);
	glVertex2i(600,0);
	glVertex2i(600,13);
	glVertex2i(408,124);
	glVertex2i(0,130);
	glVertex2i(0,0);
	glEnd();
	

	
	glColor3f(168.0/255.0,299.0/255.0,255.0/255.0);//cielo
	glBegin(GL_POLYGON);
	glVertex2i(0,130);
	glVertex2i(0,500);
	glVertex2i(412,500);
	glVertex2i(407,124);
	glEnd();
	
	glColor3f(89.0/255.0,173.0/255.0,87.0/255.0);//HOJAS
	glBegin(GL_POLYGON);
	glVertex2i(110,211);
	glVertex2i(151,201);
	glVertex2i(166,199);
	glVertex2i(200,216);
	glVertex2i(215,237);
	glVertex2i(212,247);
	glVertex2i(200,260);
	glVertex2i(110,259);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,259);
	glVertex2i(200,260);
	glVertex2i(202,273);
	glVertex2i(215,290);
	glVertex2i(218,306);
	glVertex2i(215,320);
	glVertex2i(206,330);
	glVertex2i(203,335);
	glVertex2i(110,335);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,335);
	glVertex2i(203,335);
	glVertex2i(207,348);
	glVertex2i(207,360);
	glVertex2i(201,373);
	glVertex2i(195,380);
	glVertex2i(196,389);
	glVertex2i(200,400);
	glVertex2i(194,412);
	glVertex2i(186,419);
	glVertex2i(110,419);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,419);
	glVertex2i(186,419);
	glVertex2i(182,428);
	glVertex2i(178,436);
	glVertex2i(170,441);
	glVertex2i(160,452);
	glVertex2i(155,463);
	glVertex2i(148,473);
	glVertex2i(138,480);
	glVertex2i(127,478);
	glVertex2i(119,473);
	glVertex2i(110,473);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,473);
	glVertex2i(109,469);
	glVertex2i(102,455);
	glVertex2i(97,439);
	glVertex2i(88,438);
	glVertex2i(80,440);
	glVertex2i(65,431);
	glVertex2i(57,414);
	glVertex2i(48,400);
	glVertex2i(110,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,209);
	glVertex2i(101,209);
	glVertex2i(79,202);
	glVertex2i(50,196);
	glVertex2i(37,202);
	glVertex2i(27,221);
	glVertex2i(6,246);
	glVertex2i(7,269);
	glVertex2i(14,288);
	glVertex2i(25,300);
	glVertex2i(110,300);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(110,300);
	glVertex2i(25,300);
	glVertex2i(29,310);
	glVertex2i(26,323);
	glVertex2i(25,337);
	glVertex2i(31,349);
	glVertex2i(43,359);
	glVertex2i(45,386);
	glVertex2i(48,400);
	glVertex2i(110,400);
	glEnd();
	
	
	
	
	
	
	glColor3f(130.0/255.0,109.0/255.0,90.0/255.0);//TRONCO
	glBegin(GL_POLYGON);
	glVertex2i(108,129);
	glVertex2i(109,231);
	glVertex2i(113,234);
	glVertex2i(117,353);
	glVertex2i(119,389);
	glVertex2i(126,355);
	glVertex2i(123,246);
	glVertex2i(121,128);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(81,266);
	glVertex2i(113,234);
	glVertex2i(109,231);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(115,277);
	glVertex2i(84,302);
	glVertex2i(103,292);
	glVertex2i(100,300);
	glVertex2i(115,286);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(120,237);
	glVertex2i(148,276);
	glVertex2i(139,272);
	glVertex2i(144,304);
	glVertex2i(120,246);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(120,293);
	glVertex2i(138,322);
	glVertex2i(120,307);
	glEnd();
	
	
	
	glColor3f(186.0/255.0,171.0/255.0,150.0/255.0);//SOMBRAS
	glBegin(GL_POLYGON);
	glVertex2i(370,9);
	glVertex2i(420,9);
	glVertex2i(420,20);
	glVertex2i(370,20);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(485,13);
	glVertex2i(484,6);
	glVertex2i(545,6);
	glVertex2i(545,13);
	glEnd();	
	glBegin(GL_POLYGON);
	glVertex2i(11,81);
	glVertex2i(42,69);
	glVertex2i(131,69);
	glVertex2i(157,75);
	glVertex2i(128,86);
	glVertex2i(44,86);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(187,77);
	glVertex2i(220,69);
	glVertex2i(348,69);
	glVertex2i(398,75);
	glVertex2i(349,84);
	glVertex2i(218,84);
	glEnd();
	
	glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);//BARANDAL
	glLineWidth(6);
	glBegin(GL_LINES);
	glVertex2i(0,220);
	glVertex2i(410,220);
	glEnd();
	
	glLineWidth(3);
	for(int i=0;i<=6;i++){
		glBegin(GL_LINES);
		v+=50;
		glVertex2i(v,220);
		glVertex2i(v,125);
		glEnd();
	}
	
	glColor3f(130/255.0,89.0/255.0,70.0/255.0);//muebles
	glLineWidth(6);
	glBegin(GL_LINES);
	glVertex2i(189,77);
	glVertex2i(208,140);
	glVertex2i(208,77);
	glVertex2i(189,140);
	glVertex2i(400,140);
	glVertex2i(180,140);
	glVertex2i(365,77);
	glVertex2i(385,140);
	glVertex2i(385,77);
	glVertex2i(365,140);
	glEnd();
	
	glLineWidth(9);
	glBegin(GL_LINES);
	glVertex2i(390,137);
	glVertex2i(440,229);
	glEnd();
	
	glLineWidth(9);
	glBegin(GL_LINES);
	glVertex2i(12,81);
	glVertex2i(37,158);
	glVertex2i(86,70);
	glVertex2i(86,152);
	glVertex2i(137,156);
	glVertex2i(155,80);
	glEnd();
	glColor3f(137/255.0,106.0/255.0,88.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(12,174);
	glVertex2i(37,158);
	glVertex2i(87,152);
	glVertex2i(137,156);
	glVertex2i(161,173);
	glVertex2i(137,187);
	glVertex2i(87,193);
	glVertex2i(37,189);
	glEnd();
	glLineWidth(5);
	glColor3f(77/255.0,53.0/255.0,41.0/255.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(12,174);
	glVertex2i(37,158);
	glVertex2i(87,152);
	glVertex2i(137,156);
	glVertex2i(161,173);
	glVertex2i(137,187);
	glVertex2i(87,193);
	glVertex2i(37,189);
	glEnd();
	
	
}
void bancas(void){
	glColor3f(87.0/255.0,51.0/255.0,45.0/255.0);//muebles
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(379,14);
	glVertex2i(409,48);
	glVertex2i(409,14);
	glVertex2i(382,48);
	glEnd();
	glLineWidth(6);
	glBegin(GL_LINES);
	glVertex2i(367,49);
	glVertex2i(424,49);
	glEnd();
	
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(496,10);
	glVertex2i(532,54);
	glVertex2i(532,10);
	glVertex2i(499,54);
	glEnd();
	glLineWidth(6);
	glBegin(GL_LINES);
	glVertex2i(481,55);
	glVertex2i(552,55);
	glEnd();
	
	glColor3f(255.0/255.0,121.0/255.0,86.0/255.0);//MACETA
	glLineWidth(5);
	glBegin(GL_POLYGON);
	glVertex2i(497,57);
	glVertex2i(493,100);
	glVertex2i(538,100);
	glVertex2i(532,57);
	glEnd();
	glLineWidth(5);
	glBegin(GL_POLYGON);
	glVertex2i(488,100);
	glVertex2i(488,110);
	glVertex2i(542,110);
	glVertex2i(542,100);
	glEnd();
	
	glColor3f(78.0/255.0,166.0/255.0,73.0/255.0);//PLANTA(tallo)
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(516,109);
	glVertex2i(515,122);
	glVertex2i(515,122);
	glVertex2i(520,135);
	glVertex2i(520,135);
	glVertex2i(524,148);
	glVertex2i(524,148);
	glVertex2i(527,162);
	glVertex2i(527,162);
	glVertex2i(525,170);
	glVertex2i(525,170);
	glVertex2i(522,178);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(520,130);
	glVertex2i(536,132);
	glVertex2i(552,137);
	glVertex2i(567,145);
	glVertex2i(565,149);
	glVertex2i(544,151);
	glVertex2i(531,146);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(527,162);
	glVertex2i(548,166);
	glVertex2i(565,174);
	glVertex2i(578,184);
	glVertex2i(565,189);
	glVertex2i(577,188);
	glVertex2i(564,190);
	glVertex2i(546,186);
	glVertex2i(532,177);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(522,178);
	glVertex2i(526,188);
	glVertex2i(523,198);
	glVertex2i(515,206);
	glVertex2i(505,212);
	glVertex2i(500,210);
	glVertex2i(502,200);
	glVertex2i(511,188);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(524,148);
	glVertex2i(514,162);
	glVertex2i(502,172);
	glVertex2i(486,176);
	glVertex2i(477,175);
	glVertex2i(483,164);
	glVertex2i(497,152);
	glVertex2i(514,146);
	glEnd();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(483,173);
	glVertex2i(498,167);
	glVertex2i(498,167);
	glVertex2i(514,155);
	
	glVertex2i(504,208);
	glVertex2i(515,200);
	glVertex2i(515,200);
	glVertex2i(521,188);
	
	glVertex2i(535,171);
	glVertex2i(552,182);
	glVertex2i(552,182);
	glVertex2i(571,186);
	
	glVertex2i(525,133);
	glVertex2i(540,144);
	glVertex2i(540,144);
	glVertex2i(556,148);
	glEnd();
}

void maceta(void){
	glColor3f(70.0/255.0,182.0/255.0,209.0/255.0);//maceta
	glBegin(GL_POLYGON);
	glVertex2i(350,52);
	glVertex2i(379,52);
	glVertex2i(386,73);
	glVertex2i(345,73);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(339,70);
	glVertex2i(339,84);
	glVertex2i(390,84);
	glVertex2i(390,70);
	glEnd();
	
	glColor3f(78.0/255.0,166.0/255.0,73.0/255.0);//PLANTA(tallo)
	glBegin(GL_POLYGON);
	glVertex2i(352,84);
	glVertex2i(342,103);
	glVertex2i(342,117);
	glVertex2i(352,131);
	glVertex2i(362,136);
	glVertex2i(371,136);
	glVertex2i(377,131);
	glVertex2i(382,120);
	glVertex2i(382,105);
	glVertex2i(376,84);
	glEnd();
	glColor3f(39.0/255.0,101.0/255.0,38.0/255.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(352,84);
	glVertex2i(342,103);
	glVertex2i(342,117);
	glVertex2i(352,131);
	glVertex2i(362,136);
	glVertex2i(371,136);
	glVertex2i(377,131);
	glVertex2i(382,120);
	glVertex2i(382,105);
	glVertex2i(376,84);
	glEnd();
	
	
}
void lluvia(void){
		glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);
		GLubyte a[]={
			0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0xF0,0x0,0x0,0x0,0xF0,0x0,0x0,0x0,
				0xF0,0x0,0x0,0x0,0xF,0x0,0x0,0x0,
				0xF,0x0,0x0,0x0,0xF,0x0,0x0,0x0,
				0x0,0xF0,0x0,0x0,0x0,0xF0,0x0,0x0,
				0x0,0xF0,0x0,0x0,0x0,0xF,0x0,0x0,
				0x0,0xF,0x0,0x0,0x0,0xF,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
				0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		};
		
		glEnable(GL_POLYGON_STIPPLE);
		glPolygonStipple(a);
		glBegin(GL_POLYGON);
		
		glVertex2i(0,0);
		glVertex2i(0,500);
		glVertex2i(600,500);
		glVertex2i(600,0);	
		glEnd();
		glDisable(GL_POLYGON_STIPPLE);
	}
void lluvia2(void){
			glColor3f(41.0/255.0,97.0/255.0,162.0/255.0);
			GLubyte a[]={
				
				
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
					0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
						0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
						0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
						0xF0,0x0,0x0,0x0,0xF0,0x0,0x0,0x0,
						0xF0,0x0,0x0,0x0,0xF,0x0,0x0,0x0,
						0xF,0x0,0x0,0x0,0xF,0x0,0x0,0x0,
						0x0,0xF0,0x0,0x0,0x0,0xF0,0x0,0x0,
						0x0,0xF0,0x0,0x0,0x0,0xF,0x0,0x0,
						0x0,0xF,0x0,0x0,0x0,0xF,0x0,0x0,
						
			};
			
			glEnable(GL_POLYGON_STIPPLE);
			glPolygonStipple(a);
			glBegin(GL_POLYGON);
			
			
			glVertex2i(0,0);
			glVertex2i(0,600);
		    glVertex2i(600,600);
			glVertex2i(600,0);	
			glEnd();
			glDisable(GL_POLYGON_STIPPLE);
		}
void Fondo1(void){
				casa();	
				
			}
//fondoB
void fondoBano(void){
	glColor3f(246.0/255.0,246.210/255.0,246.0/255.0);
    GLubyte a[]={
		0x0,0x0,0x0,0x0,
		0x3F,0xFF,0xFF,0xFF,
	    0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,
		0x3F,0xFF,0xFF,0xFF,};
		glEnable(GL_POLYGON_STIPPLE);
		glPolygonStipple(a);
		
		glBegin(GL_POLYGON);
		glVertex2i(0,1000);
		glVertex2i(0,200);
		glVertex2i(600,200);
		glVertex2i(600,1000);
		glEnd();
		glDisable(GL_POLYGON_STIPPLE);
		glColor3f(2.0/255.0,35.0/255.0,73.0/255.0);
				GLubyte b[]={
				0x0,0x0,0x0,0x0,
				0x3F,0xFF,0xFF,0xFF,
			    0x3F,0xFF,0xFF,0xFF,
		        0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x0,0x0,0x0,0x0,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x0,0x0,0x0,0x0,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x0,0x0,0x0,0x0,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
			    0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,
				0x3F,0xFF,0xFF,0xFF,};
				
				
			glEnable(GL_POLYGON_STIPPLE);
			glPolygonStipple(b);
			glBegin(GL_POLYGON);
			glVertex2i(0,200);
			glVertex2i(0,0);
			glVertex2i(600,0);
			glVertex2i(600,200);
			glEnd();
			glDisable(GL_POLYGON_STIPPLE);
			
			glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);//escusado
			glBegin(GL_POLYGON);
			glVertex2i(350,70);
			glVertex2i(450,70);
			glVertex2i(450,85);
			glVertex2i(440,90);
			glVertex2i(360,90);
			glVertex2i(350,85);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(370,90);
			glVertex2i(430,90);
			glVertex2i(430,150);
			glVertex2i(370,150);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(460,200);
			glVertex2i(450,165);
			glVertex2i(430,150);
			glVertex2i(370,150);
			glVertex2i(350,165);
			glVertex2i(340,200);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(470,207);
			glVertex2i(475,205);
			glVertex2i(475,202);
			glVertex2i(470,200);
			glVertex2i(330,200);
			glVertex2i(325,202);
			glVertex2i(325,205);
			glVertex2i(330,207);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(460,207);
			glVertex2i(340,207);
			glVertex2i(340,300);
			glVertex2i(460,300);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(340,307);
			glVertex2i(335,307);
			glVertex2i(335,302);
			glVertex2i(340,300);
			glVertex2i(460,300);
			glVertex2i(465,302);
			glVertex2i(465,305);
			glVertex2i(460,307);
			glEnd();
			
    glColor3f(113.0/255.0,2.0/255.0,27.0/255.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(350,70);
	glVertex2i(450,70);
	glVertex2i(450,85);
	glVertex2i(440,90);
	glVertex2i(360,90);
	glVertex2i(350,85);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(370,90);
	glVertex2i(430,90);
	glVertex2i(430,150);
	glVertex2i(370,150);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(460,200);
	glVertex2i(450,165);
	glVertex2i(430,150);
	glVertex2i(370,150);
	glVertex2i(350,165);
	glVertex2i(340,200);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(470,207);
	glVertex2i(475,205);
	glVertex2i(475,202);
	glVertex2i(470,200);
	glVertex2i(330,200);
	glVertex2i(325,202);
	glVertex2i(325,205);
	glVertex2i(330,207);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(460,207);
	glVertex2i(340,207);
	glVertex2i(340,300);
	glVertex2i(460,300);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(340,307);
	glVertex2i(335,307);
	glVertex2i(335,302);
	glVertex2i(340,300);
	glVertex2i(460,300);
	glVertex2i(465,302);
	glVertex2i(465,305);
	glVertex2i(460,307);
	glEnd();
	
	glColor3f(216.0/255.0,216.0/255.0,216.0/255.0);//lavabo
	glBegin(GL_POLYGON);
	glVertex2i(30,85);
	glVertex2i(30,250);
	glVertex2i(190,250);
	glVertex2i(190,85);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(30,85);
	glVertex2i(30,250);
	glVertex2i(190,250);
	glVertex2i(190,85);
	glEnd();	
	
	glColor3f(162.0/255.0,0.0/255.0,37.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(50,250);
	glVertex2i(180,250);
	glVertex2i(200,275);
	glVertex2i(30,275);
	glEnd();
	
	glColor3f(216.0/255.0,216.0/255.0,216.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(40,310);
	glVertex2i(190,310);
	
	glColor3f(1.0,1.0,1.0);
	glVertex2i(190,475);
	glVertex2i(40,475);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(40,310);
	glVertex2i(190,310);
	glVertex2i(190,475);
	glVertex2i(40,475);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2i(110,250);
	glVertex2i(110,85);
	glEnd();	
	
	glPointSize(8);//puntos
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2i(120,275);
	glVertex2i(120,281);
	glVertex2i(120,285);
	glVertex2i(120,289);
	glVertex2i(120,293);
	glVertex2i(112,293);
	glVertex2i(106,293);
	glVertex2i(106,289);
	glVertex2i(130,160);
	glVertex2i(90,160);
	glVertex2i(450,285);
	glVertex2i(442,285);
	glVertex2i(436,285);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(436,282);
	glEnd();
	
	glColor3f(225.0/255.0,176.0/255.0,5.0/255.0);//banco
	glBegin(GL_POLYGON);
	glVertex2i(490,50);
	glVertex2i(500,250);
	glVertex2i(490,250);
	glVertex2i(480,50);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(570,50);
	glVertex2i(560,250);
	glVertex2i(550,250);
	glVertex2i(560,50);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(570,270);
	glVertex2i(580,265);
	glVertex2i(580,255);
	glVertex2i(570,250);
	glVertex2i(480,250);
	glVertex2i(470,255);
	glVertex2i(470,265);
	glVertex2i(480,270);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(490,200);
	glVertex2i(490,210);
	glVertex2i(560,210);
	glVertex2i(560,200);
	glEnd();
}
void cubeta(void){
		glColor3f(76.0/255.0,76.0/255.0,75.0/255.0);
		glBegin(GL_POLYGON);
		glVertex2i(440,270);
		glVertex2i(440,360);
		glVertex2i(560,350);
		glVertex2i(560,280);
		
		glEnd();
		
		glColor3f(92.0/255.0,94.0/255.0,96.0/255.0);
		GLubyte a[]={
			0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
				0xFF,0xFF,0x3F,0xFF,
		};
		glEnable(GL_POLYGON_STIPPLE);
		glPolygonStipple(a);
		glBegin(GL_POLYGON);
		glVertex2i(440,270);
		glVertex2i(440,360);
		glVertex2i(560,350);
		glVertex2i(560,275);
		glEnd();
		glDisable(GL_POLYGON_STIPPLE);
		
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(440,270);
		glVertex2i(440,360);
		glVertex2i(560,350);
		glVertex2i(560,275);
		glEnd();
}
void agua(void){
			glColor3f(37.0/255.0,132.0/255.0,255.0/255.0);
			glBegin(GL_POLYGON);
			glVertex2i(440,265);
			glVertex2i(440,285);
			glVertex2i(430,270);
			glEnd();
			
			glBegin(GL_POLYGON);
			glVertex2i(440,285);
			glVertex2i(430,270);
			glVertex2i(430,210);
			glVertex2i(440,210);
			glEnd();
			
			glLineWidth(4);
			glBegin(GL_LINES);
			glVertex2i(436,278);
			glVertex2i(436,210);
			glEnd();
		}
void escoba(void){
				glColor3f(215.0/255.0,202.0/255.0,1.0/255.0);
				glBegin(GL_POLYGON);
				glVertex2i(150,350);
				glVertex2i(140,350);
				glVertex2i(140,125);
				glVertex2i(150,125);
				glEnd();
				
				glColor3f(147.0/255.0,147.0/255.0,143.0/255.0);
				glBegin(GL_POLYGON);
				glVertex2i(140,125);
				glVertex2i(150,125);
				glVertex2i(190,110);
				glVertex2i(100,110);
				glEnd();
				
				glColor3f(132.0/255.0,252.0/255.0,8.0/255.0);
				glBegin(GL_POLYGON);
				glVertex2i(190,110);
				glVertex2i(100,110);
				glVertex2i(100,80);
				glVertex2i(190,80);
				glEnd();
				
				glLineWidth(2);
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);
				glVertex2i(103,107);
				glVertex2i(103,80);
				glVertex2i(106,107);
				glVertex2i(106,80);
				glVertex2i(109,107);
				glVertex2i(109,80);
				glVertex2i(112,107);
				glVertex2i(112,80);
				glVertex2i(115,107);
				glVertex2i(115,80);
				glVertex2i(118,107);
				glVertex2i(118,80);
				glVertex2i(121,107);
				glVertex2i(121,80);
				glVertex2i(124,107);
				glVertex2i(124,80);
				glVertex2i(127,107);
				glVertex2i(127,80);
				glVertex2i(130,107);
				glVertex2i(130,80);
				glVertex2i(133,107);
				glVertex2i(133,80);
				glVertex2i(136,107);
				glVertex2i(136,80);
				glVertex2i(139,107);
				glVertex2i(139,80);
				glVertex2i(142,107);
				glVertex2i(142,80);
				glVertex2i(145,107);
				glVertex2i(145,80);
				glVertex2i(148,107);
				glVertex2i(148,80);
				glVertex2i(151,107);
				glVertex2i(151,80);
				glVertex2i(154,107);
				glVertex2i(154,80);
				glVertex2i(157,107);
				glVertex2i(157,80);
				glVertex2i(160,107);
				glVertex2i(160,80);
				glVertex2i(163,107);
				glVertex2i(163,80);
				glVertex2i(166,107);
				glVertex2i(166,80);
				glVertex2i(169,107);
				glVertex2i(169,80);
				glVertex2i(172,107);
				glVertex2i(172,80);
				glVertex2i(175,107);
				glVertex2i(175,80);
				glVertex2i(178,107);
				glVertex2i(178,80);
				glVertex2i(181,107);
				glVertex2i(181,80);
				glVertex2i(184,107);
				glVertex2i(184,80);
				glVertex2i(187,107);
				glVertex2i(187,80);
				glVertex2i(190,107);
				glVertex2i(190,80);
				glEnd();
}
void destapador(void){
					glColor3f(0.0,0.0,0.0);
					glBegin(GL_POLYGON);
					glVertex2i(250,80);
					glVertex2i(300,80);
					glVertex2i(300,100);
					glVertex2i(290,105);
					glVertex2i(260,105);
					glVertex2i(250,100);
					glEnd();
					
					glColor3f(198.0/255.0,142.0/255.0,13.0/255.0);
					glBegin(GL_POLYGON);
					glVertex2i(280,105);
					glVertex2i(270,105);
					glVertex2i(270,197);
					glVertex2i(280,197);
					glEnd();
}

void Fondo2(void){
	fondoBano();
	destapador();
}
//tortuga
void cabeza(void){
	
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(42,90);
	glVertex2i(34,103);
	glVertex2i(34,131);
	glVertex2i(42,142);
	glVertex2i(94,142);
	glVertex2i(106,130);
	glVertex2i(107,104);
	glVertex2i(100,90);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(42,90);
	glVertex2i(34,103);
	glVertex2i(34,131);
	glVertex2i(42,142);
	glVertex2i(94,142);
	glVertex2i(106,130);
	glVertex2i(107,104);
	glVertex2i(100,90);
   glEnd();
   
   glBegin(GL_LINE_LOOP);
   glVertex2i(58,104);
   glVertex2i(81,104);
   glEnd();
   
   glPointSize(4);
   glBegin (GL_POINTS);
   glVertex2i(47,110);
   glVertex2i(92,110);
   glEnd();
   
}
void cabeza2(void){
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(52,90);
	glVertex2i(44,103);
	glVertex2i(44,131);
	glVertex2i(52,142);
	glVertex2i(104,142);
	glVertex2i(116,130);
	glVertex2i(117,104);
	glVertex2i(110,90);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(52,90);
	glVertex2i(44,103);
	glVertex2i(44,131);
	glVertex2i(52,142);
	glVertex2i(104,142);
	glVertex2i(116,130);
	glVertex2i(117,104);
	glVertex2i(110,90);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(68,104);
	glVertex2i(91,104);
	glEnd();
	glPointSize(4);
	glBegin (GL_POINTS);
	glVertex2i(57,110);
	glVertex2i(102,110);
	glEnd();
}
void manoA(void){
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(47,91);
	glVertex2i(47,72);
	glVertex2i(33,72);
	glVertex2i(27,76);
	glVertex2i(27,86);
	glVertex2i(33,91);
	glVertex2i(47,86);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(47,91);
	glVertex2i(47,72);
	glVertex2i(33,72);
	glVertex2i(27,76);
	glVertex2i(27,86);
	glVertex2i(33,91);

	glEnd();
}
void manoB(void){
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(74,91);
	glVertex2i(93,91);
	glVertex2i(94,72);
	glVertex2i(79,72);
	glVertex2i(74,77);
	glVertex2i(74,91);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(74,91);
	glVertex2i(93,91);
	glVertex2i(94,72);
	glVertex2i(79,72);
	glVertex2i(74,77);
	glVertex2i(74,91);
	glEnd();
	
}
void cuerpo(void){
	glColor3f(215.0/255.0,219.0/255.0,69.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(47,90);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(80,54);
	glVertex2i(92,60);
	glVertex2i(92,90);
	glEnd();
	
	glColor3f(68.0/255.0,173.0/255.0,76.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(92,91);
	glVertex2i(109,85);
	glVertex2i(109,67);
	glVertex2i(92,60);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(47,90);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(80,54);
	glVertex2i(92,60);
	glVertex2i(92,90);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(92,91);
	glVertex2i(109,85);
	glVertex2i(109,67);
	glVertex2i(92,60);
	glEnd();
}

void pies(void){
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(63,54);
	glVertex2i(63,40);
	glVertex2i(53,40);
	glVertex2i(48,45);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(92,60);
	glVertex2i(80,54);
	glVertex2i(77,54);
	glVertex2i(77,39);
	glVertex2i(90,40);
	glVertex2i(94,46);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(63,54);
	glVertex2i(63,40);
	glVertex2i(53,40);
	glVertex2i(48,45);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(92,60);
	glVertex2i(80,54);
	glVertex2i(77,54);
	glVertex2i(77,39);
	glVertex2i(90,40);
	glVertex2i(94,46);
	glEnd();
	
}
void pies2(void){
	glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(63,54);
	glVertex2i(53,40);
	glVertex2i(43,40);
	glVertex2i(38,45);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(92,60);
	glVertex2i(80,54);
	glVertex2i(77,54);
	glVertex2i(87,39);
	glVertex2i(100,40);
	glVertex2i(104,46);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(48,63);
	glVertex2i(59,54);
	glVertex2i(63,54);
	glVertex2i(53,40);
	glVertex2i(43,40);
	glVertex2i(38,45);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i(92,60);
	glVertex2i(80,54);
	glVertex2i(77,54);
	glVertex2i(87,39);
	glVertex2i(100,40);
	glVertex2i(104,46);
	glEnd();
}
void pies3(void) { 
		glColor3f(140.0/255.0,191.0/255.0,70.0/255.0);
		glBegin(GL_POLYGON);
		glVertex2i(40,63);
		glVertex2i(40,50);
		glVertex2i(63,50);
		glVertex2i(63,63);
		glEnd();
		
		glBegin(GL_POLYGON);
		glVertex2i(90,63);
		glVertex2i(90,50);
		glVertex2i(60,50);
		glVertex2i(60,63);
		
		glEnd();
		
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(40,63);
		glVertex2i(40,50);
		glVertex2i(63,50);
		glVertex2i(63,63);
		
		glEnd();
		
		glBegin(GL_LINE_LOOP);
		
		glVertex2i(90,63);
		glVertex2i(90,50);
		glVertex2i(60,50);
		glVertex2i(60,63);
		
		
		glEnd();
	}
void cubeta2(void){
	glColor3f(197.0/255.0,196.0/255.0,198.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(70,40);
	glVertex2i(90,100);
	glVertex2i(20,100);
	glVertex2i(40,40);
	glEnd();
	
	glColor3f(92.0/255.0,94.0/255.0,96.0/255.0);
	GLubyte a[]={
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
			0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	};
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(a);
	glBegin(GL_POLYGON);
	glVertex2i(70,40);
	glVertex2i(90,100);
	glVertex2i(20,100);
	glVertex2i(40,40);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);
	
	glBegin(GL_LINES);
	glVertex2i(70,40);
	glVertex2i(90,100);
	glVertex2i(20,100);
	glVertex2i(40,40);
	glEnd();
}
void tortuga(void){
	manoA();
	cuerpo();
	cabeza();
}
void tortuga2(void){

	manoA();
	cuerpo();
	pies3();
	manoB();
	cabeza2();
	
	
}
void animar(void){
	int y=0;
	int p=10;
	int q=-100;
	int x=120;
	int z=0;
	int r=0;
 for(int i=2;i<=135;i++){
      if(i==2){
		  glClear(GL_COLOR_BUFFER_BIT);
		  Fondo1();
		  glPushMatrix();
		  glTranslatef(x,0.0,0.0);
		  glScalef(-1,1,.0);
		  tortuga();
		  pies();
		  cubeta2();
		  manoB();
		  glPopMatrix();
		  //maceta
		  maceta();
		  //lluvia
		  bancas();
		  lluvia2();
		  glFlush();
		  Sleep(150);
      }else{
		  if(i<5){
			  if(i%2==0){
				  glClear(GL_COLOR_BUFFER_BIT);
				  Fondo1();
				  
				  glPushMatrix();
				  glTranslatef(x,0.0,0.0);
				  x+=10;
				  glScalef(-1,1,.0);
				  tortuga();
				  pies2();
				  cubeta2();
				  manoB();
				  glPopMatrix();
				  
				  //maceta
				  glPushMatrix();
				  maceta();
				  glPopMatrix();
				  //lluvia
				  bancas();
				  lluvia();
				  glFlush();
				  Sleep(150);
			  }else{
				  glClear(GL_COLOR_BUFFER_BIT);
				  Fondo1();
				  //tortuga
				  glPushMatrix();
				  glTranslatef(x,0.0,0.0);
				  x+=10;
				  glScalef(-1,1,.0);
				  tortuga();
				  pies();
				  cubeta2();
				  manoB();
				  glPopMatrix();
				  
				  //maceta
				  glPushMatrix();
				  maceta();
				  glPopMatrix();
				  //lluvia
				  bancas();
				  lluvia2();
				  glFlush();
				  Sleep(150);
				  
			  }
			  
		  }else{
	       if(i<47){
			   if(i%2==0){
				   glClear(GL_COLOR_BUFFER_BIT);
				   Fondo1();
				   
				   glPushMatrix();
				   glTranslatef(x,0.0,0.0);
				   x+=10;
				   glScalef(-1,1,.0);
				   tortuga();
				   pies();
				   cubeta2();
				   manoB();
				   glPopMatrix();
				   
				   //maceta
				   glPushMatrix();
				   maceta();
				   glPopMatrix();
				   //lluvia
				   bancas();
				   lluvia();
				   glFlush();
				   Sleep(150);
			   }else{
				   glClear(GL_COLOR_BUFFER_BIT);
				   Fondo1();
				   
				   glPushMatrix();
				   glTranslatef(x,0.0,0.0);
				   x+=10;
				   glScalef(-1,1,.0);
				   tortuga();
				   pies2();
				   cubeta2();
				   manoB();
				   glPopMatrix();
				   
				   //maceta
				   glPushMatrix();
				   maceta();
				   glPopMatrix();
				   //lluvia
				   bancas();
				   lluvia2();
				   glFlush();
				   Sleep(150);
			   }
		   }else{
			   if(i==47){
				   glClear(GL_COLOR_BUFFER_BIT);
				   Fondo1();
				   
				   glPushMatrix();
				   glTranslatef(x-150,0.0,0.0);
				   x-=10;
				   tortuga();
				   pies2();
				   cubeta2();
				   manoB();
				   glPopMatrix();
				   
				   //maceta
				   glPushMatrix();
				   maceta();
				   glPopMatrix();
				   //lluvia
				   bancas();
				   lluvia2();
				   glFlush();
				   Sleep(150);
			   }else{
				 if(i<=90){
					 if(i%2==0){
						 glClear(GL_COLOR_BUFFER_BIT);
						 Fondo1();
						 
						 glPushMatrix();
						 glTranslatef(x-150,0.0,0.0);
						 x-=10;
						 tortuga();
						 pies();
						 cubeta2();
						 manoB();
						 glPopMatrix();
						 
						 //maceta
						 glPushMatrix();
						 maceta();
						 glPopMatrix();
						 //lluvia
						 bancas();
						 lluvia();
						 glFlush();
						 Sleep(150);
						}else{
						 glClear(GL_COLOR_BUFFER_BIT);
						 Fondo1();
						 
						 glPushMatrix();
						 glTranslatef(x-150,0.0,0.0);
						 x-=10;
						 tortuga();
						 pies2();
						 cubeta2();
						 manoB();
						 glPopMatrix();
						 
						 //maceta
						 glPushMatrix();
						 maceta();
						 glPopMatrix();
						 //lluvia
						 bancas();
						 lluvia2();
						 glFlush();
						 Sleep(150);
					 }
				 }else{

					if(i==91){
						glClear(GL_COLOR_BUFFER_BIT);
						Fondo1();
						glPushMatrix();
						glTranslatef(x,0.0,0.0);
						x+=10;
						glScalef(-1,1,.0);
						tortuga();
						pies();
						cubeta2();
						manoB();
						glPopMatrix();
						//maceta
						maceta();
						//lluvia
						bancas();
						lluvia2();
						glFlush();
						Sleep(150);
					}else{
					if(i<94){
						if(i%2==0){
							glClear(GL_COLOR_BUFFER_BIT);
							Fondo1();
							glPushMatrix();
							glTranslatef(x,0.0,0.0);
							glScalef(-1,1,.0);
							x+=10;
							tortuga();
							pies2();
							cubeta2();
							manoB();
							glPopMatrix();
							//maceta
							glPushMatrix();
							glRotatef(p,0.0,0.0,1.0);
							glTranslatef(y,q,0.0);
							y-=30;
							p+=10;
							q-=100;
							maceta();
							glPopMatrix();
							//lluvia
							bancas();
							lluvia();
							glFlush();
							Sleep(150);
						}else{
							glClear(GL_COLOR_BUFFER_BIT);
							Fondo1();
							glPushMatrix();
							glTranslatef(x,0.0,0.0);
							glScalef(-1,1,.0);
							x+=10;
							tortuga();
							pies();
							cubeta2();
							manoB();
							glPopMatrix();
							//maceta
							glPushMatrix();
							glRotatef(p,0.0,0.0,1.0);
							glTranslatef(y,q,0.0);
							y-=30;
							p+=10;
							q-=100;
							maceta();
							glPopMatrix();
							//lluvia
							bancas();
							lluvia2();
							glFlush();
							Sleep(150);
						}
					}else{
						if(i%2==0){
							glClear(GL_COLOR_BUFFER_BIT);
							Fondo1();
							glPushMatrix();
							glTranslatef(x,0.0,0.0);
							glScalef(-1,1,.0);
							x+=10;
							tortuga();
							pies2();
							cubeta2();
							manoB();
							glPopMatrix();
							//maceta
							glPushMatrix();
							glRotatef(p,0.0,0.0,1.0);
							glTranslatef(y,q,0.0);
							maceta();
							glPopMatrix();
							//lluvia
							bancas();
							lluvia();
							glFlush();
							Sleep(150);
						}else{
							glClear(GL_COLOR_BUFFER_BIT);
							Fondo1();
							glPushMatrix();
							glTranslatef(x,0.0,0.0);
							glScalef(-1,1,.0);
							x+=10;
							tortuga();
							pies();
							cubeta2();
							manoB();
							glPopMatrix();
							//maceta
							glPushMatrix();
							glRotatef(p,0.0,0.0,1.0);
							glTranslatef(y,q,0.0);
							maceta();
							glPopMatrix();
							//lluvia
							bancas();
							lluvia2();
							glFlush();
							Sleep(150);
						}
					}
					}
				 }
			   }
		   }
		}
	  }

 }
     x=0;
     y=0;
 for(int i=2;i<=121;i++){
if(i<40){
	if(i%2){
		glClear(GL_COLOR_BUFFER_BIT);
		Fondo2();
		escoba();
		glPushMatrix();
		glTranslatef(x,0.0,0.0);
		x+=10;
		glScalef(-1,1,.0);
		tortuga();
		pies();
		cubeta2();
		manoB();
		glPopMatrix();
		glFlush();
		Sleep(150);	
	}else{
		glClear(GL_COLOR_BUFFER_BIT);
		Fondo2();
		escoba();
		glPushMatrix();
		glTranslatef(x,0.0,0.0);
		x+=10;
		glScalef(-1,1,.0);
		tortuga();
		pies2();
		cubeta2();
		manoB();
		glPopMatrix();
		glFlush();
		Sleep(150);	
	}
}else{
     if(i<=43){
		 glClear(GL_COLOR_BUFFER_BIT);
		 Fondo2();
		 escoba();
		 glPushMatrix();
		 glTranslatef(x,y,0.0) ;
		 y-=10;
		 glScalef(-1,1,.0);
		 tortuga();
		 pies();
		 cubeta2();
		 manoB();
		 glPopMatrix();
		 glFlush();
		 Sleep(150);
	 }else{
		if(i<58){
			glClear(GL_COLOR_BUFFER_BIT);
			Fondo2();
			escoba();
			glPushMatrix();
			glTranslatef(x,y,0.0);
			y+=20;
			x+=15;
			glScalef(-1,1,.0);
			tortuga();
			pies();
			cubeta2();
			manoB();
			glPopMatrix();
			glFlush();
			Sleep(150);
			
		}else{
			if(i==59){
				glClear(GL_COLOR_BUFFER_BIT);
				Fondo2();
				glPushMatrix();
				escoba();
				glPopMatrix();
				
				glPushMatrix();
				y-=10;
				glTranslatef(x,y,0.0);
				glScalef(-1,1,.0);
				tortuga();
				pies();
				cubeta2();
				manoB();
				glPopMatrix();
				glFlush();
				Sleep(150);		
			}else{
				if(i==60){
					glClear(GL_COLOR_BUFFER_BIT);
					Fondo2();
					glPushMatrix();
					escoba();
					glPopMatrix();
					
					glPushMatrix();
					x-=150;
					glTranslatef(x,y,0.0);
					tortuga();
					pies();
					cubeta2();
					manoB();
					glPopMatrix();
					glFlush();
					Sleep(150);	
					
				}else{
					if(i==61 ){
						glClear(GL_COLOR_BUFFER_BIT);
						Fondo2();
						escoba();
						cubeta();
						agua();
						//tortuga
						glPushMatrix();
						y-=10;
						glTranslatef(x,y,0.0);
						tortuga2();
						pies3();
						manoB();
						glPopMatrix();
						glFlush();
						Sleep(150);	
						
					}else{
					   if(i>61 && i<=66){
						   if(i%2==0){
							   glClear(GL_COLOR_BUFFER_BIT);
							 
							   Fondo2();
							  
							   cubeta();
							   agua();
							   glPushMatrix();
							   glTranslatef(0.0,r,0.0);
							   glRotatef(z,0.0,0.0,1.0);
							   r+=25;
							   z-=10;
							   escoba();
							   glPopMatrix();
							   //tortuga
							   glPushMatrix();
							   glTranslatef(x,y,0.0);
							   tortuga();
							   pies3();
							   manoB();
							   glPopMatrix();
							   glFlush();
							   Sleep(150);	
						   }else{
							   glClear(GL_COLOR_BUFFER_BIT);
							  
							   Fondo2();
							   cubeta();
							   agua();
							   glPushMatrix();
							   glTranslatef(0.0,r,0.0);
							   glRotatef(z,0.0,0.0,1.0);
							   r+=25;
							   z-=10;
							   escoba();
							   glPopMatrix();
							   //tortuga
							   glPushMatrix();
							   glTranslatef(x,y,0.0);
							   tortuga2();
							   pies3();
							   manoB();
							   glPopMatrix();
							   glFlush();
							   Sleep(150);	
						   }
					   }else{
						   if(i%2==0){
							 
						   }else{
							   glClear(GL_COLOR_BUFFER_BIT);
							   
							   Fondo2();
							   cubeta();
							   agua();
							   glPushMatrix();
							   glTranslatef(0.0,r,0.0);
							   glRotatef(z,0.0,0.0,1.0);

							   escoba();
							   glPopMatrix();
							   //tortuga
							   glPushMatrix();
							   glTranslatef(x,y,0.0);
							   tortuga();
							   pies3();
							   manoB();
							   glPopMatrix();
							   glFlush();
							   Sleep(150);	
							   
						   }
						
					   }
					}
				}
			}
		}
	 }
     }
 }
}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(600,600);
	glutCreateWindow("GABRIEL REYES LEAL");
	inicializa();
	glutDisplayFunc(animar);
	glutMainLoop();
	return 0;
	}
	
