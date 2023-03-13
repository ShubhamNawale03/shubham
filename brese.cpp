int main (int argc,char**argv)
{
	cout<<"Enter the value of x1:";
	cin>>x1;
	cout<<"Enter the value of y1:";
	cin>>y1;
	cout<<"Enter the value of x2:";
	cin>>x2;
	cout<<"Enter the value of y2:";
	cin>>y2;
	
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("DDa Line Algorith");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
