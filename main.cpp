#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string Names[4] = {"Jorge Rodriguez", "Enrique Ramirez", "Estuardo Renoj", "Mario Balero"};
	int Notas[4];
	Notas[0]=0;Notas[1]=0;Notas[2]=0;Notas[3]=0;
	int op, i, PROMEDIO, SumNotas;
	char bucle='a';
	while (bucle!='N'||bucle!='n'){
		cout<<"Seleccione el alumno del que quiere conocer las notas"<<endl;
		cout<<""<<endl;
		cout<<"Lista de los alumnos "<<endl;
		for(i=0;i<4;i++){
			cout<<i+1<<". "<<Names[i]<<endl;
			
		}
			cin>>op;
		
		switch(op){
			case 1:
				Notas[0]=100;Notas[1]=70;Notas[2]=86;
				break;
			case 2:
				Notas[0]=55;Notas[1]=75;Notas[2]=70;
				break;
			case 3:
				Notas[0]=95;Notas[1]=98;Notas[2]=100;
				break;
			case 4:
				Notas[0]=80;Notas[1]=70;Notas[2]=89;
				break;
		}
		cout<<"Alumno: "<<Names[op-1]<<endl;
		for (i=0;i<3;i++){
			cout<<"Nota "<<i+1<<": "<<Notas[i]<<endl;
		}
		cout<<endl;
		while(op!=0){
			cout<<"Cual de las siguientes opciones desea realizar?"<<endl;
			cout<<"1.Sacar el Promedio"<<endl;
			cout<<"2.Saber cual es la nota mas alta"<<endl;
			cout<<"3.Saber cual es la nota mas baja"<<endl;
			cout<<"0.Salir del menu de opciones"<<endl;
			cin>>op;
			switch(op){
				case 1:
					SumNotas=Notas[0]+Notas[1]+Notas[2];
					PROMEDIO=SumNotas/3;
					cout<<"El promedio obtenido es de: "<<PROMEDIO<<endl;
					break;
				case 2:
					if(Notas[0]>Notas[1]&&Notas[0]>Notas[2]){
						cout<<"La nota mas alta es: "<<Notas[0]<<endl;
					}
					else{
						if(Notas[1]>Notas[0]&&Notas[1]>Notas[2]){
							cout<<"La nota mas baja es: "<<Notas[1]<<endl;
						}
						else{
							cout<<"La nota mas alta es: "<<Notas[2]<<endl;
						}
					}
					break;
				case 3:
					if(Notas[0]<Notas[1]&&Notas[0]<Notas[2]){
						cout<<"La nota mas alta es: "<<Notas[0]<<endl;
					}
					else{
						if(Notas[1]<Notas[0]&&Notas[1]<Notas[2]){
							cout<<"La nota mas alta es: "<<Notas[1]<<endl;
						}
						else{
							cout<<"La nota mas baja es: "<<Notas[2]<<endl;
						}
					}
					break;
				
			}
			cout<<endl;
		}
	cout<<"Deseas saber acerca de otro estudiante? S/N"<<endl;
	cin>>bucle;
	cout<<endl;
	}
	system("pause");
}
