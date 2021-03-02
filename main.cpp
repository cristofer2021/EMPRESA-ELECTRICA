#include <iostream>

using namespace std;

void Materiales_Distancia(int puertos);

int main() {
  int npuertos;
  string lugar;
  cout<<"\t\t** Empresa Electrocables **\n\n";
  cout<<"\t\tEste es un software contable\n\n";
  cout<<"Ingrese el lugar de la instalación\n";
  cin>>lugar;
  cout<<"Ingrese el número de puertos de red que van a ser instalados:\n";
  cin>>npuertos;
  Materiales_Distancia(npuertos);
}

void Materiales_Distancia(int puertos) {
  int i, nconectores=0,  ntotalconectores=0;
  float costocable=0, distancia=0, precioconectoresh=0, precioconectoresm=0, preciototalconectores=0, totaldistancia=0, disconimprevisto=0, preciototalmateriales=0, ganancia=0, totalapagar=0;
  for (i=1; i<=puertos; i++){
    cout<<"Punto de red "<<i<<endl;
    cout<<"Ingrese la distancia entre el punto de red hasta el equipo de conectividad:\n";
    cin>>distancia;
    cout<<"Ingrese el número de conectores para el punto de red:\n";
    cin>>nconectores;
    totaldistancia=totaldistancia+(distancia*nconectores);
    ntotalconectores=nconectores*2;
    precioconectoresh=precioconectoresh+(ntotalconectores*0.35);
    precioconectoresm=precioconectoresm+(ntotalconectores*0.15);
  }
  disconimprevisto=(totaldistancia*0.05)+totaldistancia;
  costocable=totaldistancia*0.90;
  preciototalconectores=((precioconectoresh+precioconectoresm)*0.15)+(precioconectoresh+precioconectoresm);
  preciototalmateriales=costocable+preciototalconectores;
  ganancia=preciototalmateriales*0.45;
  totalapagar=preciototalmateriales+ganancia;
  cout<<"\t\tEl detalle de la instalación es el siguiente\n\n";
  cout<<"La distancia total del cable utilizado en la instalación es: "<<disconimprevisto<<endl;
  cout<<"El costo del cable segun la categoria 5e es: "<<costocable<<endl;
  cout<<"El precio total de los conectores RJ45 (hembra y macho) es: "<<preciototalconectores<<endl;
  cout<<"El total del material utilizado es: "<<preciototalmateriales<<endl;
  cout<<"La ganancia es: "<<ganancia<<endl;
  cout<<"El total a pagar por su instalación es: "<<totalapagar<<endl;
}