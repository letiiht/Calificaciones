
#include<iostream>
#include<conio.h>
using namespace std;

float prom_exam(float examen,float porcentaje);
float prom_tarea(float tareas,float porcentaje);
void imprimir(float prom_examen,float prom_tareas,float promedio_mat);
float prom_mat(float prom_examen,float prom_tareas);
main(){
	
	float exa,tar,smtM,smtQ,smtF,prom_e,prom_t,mat_p,fis_p,quim_p,general;
	int x;
	char op;
	
	do{
		system("cls");
	smtM=0;smtF=0;smtQ=0;
	

	//////////////////////////////////////////////
	//////////////////////////////////////////////
	cout<<"---MATEMATICAS---"<<endl;
	cout<<"Examen:";
	cin>>exa;
	for(x=1;x<=3;x++){
		cout<<"Tarea "<<x<<": ";
		cin>>tar;
		smtM=smtM+tar;
	}
	tar=smtM/3;
	prom_e=prom_exam(exa,0.90);
	prom_t=prom_tarea(tar,0.10);
	mat_p=prom_mat(prom_e,prom_t);
	imprimir(prom_e,prom_t,mat_p);
	cout<<endl<<endl;
	//////////////////////////////////////////////
	//////////////////////////////////////////////
	cout<<"---FISICA---"<<endl;
	cout<<"Examen:";
	cin>>exa;
	for(x=1;x<=2;x++){
		cout<<"Tarea "<<x<<": ";
		cin>>tar;
		smtF=smtF+tar;
	}
	tar=smtF/2;
	prom_e=prom_exam(exa,0.80);
	prom_t=prom_tarea(tar,0.20);
	fis_p=prom_mat(prom_e,prom_t);
	imprimir(prom_e,prom_t,fis_p);
	cout<<endl<<endl;
	//////////////////////////////////////////////
	//////////////////////////////////////////////
	cout<<"---QUIMICA---"<<endl;
	cout<<"Examen:";
	cin>>exa;
	for(x=1;x<=3;x++){
		cout<<"Tarea "<<x<<": ";
		cin>>tar;
		smtQ=smtQ+tar;
	}
	tar=smtQ/3;
	prom_e=prom_exam(exa,0.85);
	prom_t=prom_tarea(tar,0.15);
	quim_p=prom_mat(prom_e,prom_t);
	imprimir(prom_e,prom_t,quim_p);
	cout<<endl<<endl;
	
	general=(mat_p+fis_p+quim_p)/3;
	cout<<"Promedio general "<<general<<endl;
	cout<<"¿Desea realizar otro calculo? s/n";
	cin>>op;
}while(op=='s');
getch();
}



float prom_exam(float examen,float porcentaje){
	float prom_examen;
	prom_examen=examen*porcentaje;
	return prom_examen;
}
float prom_tarea(float tareas,float porcentaje){
	float prom_tareas;
	prom_tareas=tareas*porcentaje;
	return prom_tareas;
}
float prom_mat(float examen,float tareas){
	float promedio_mat;
	promedio_mat=examen+ tareas;
	return promedio_mat;
}

void imprimir(float prom_examen,float prom_tareas,float promedio_mat){
	cout<<"Puntos por examen: "<<prom_examen<<endl;
	cout<<"Puntos por tareas: "<<prom_tareas<<endl;
	cout<<"Promedio por materia: "<<promedio_mat<<endl;
}


