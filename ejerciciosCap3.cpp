#include<iostream>

using namespace std;

void ejercicio2a();
void ejercicio2b();
void ejercicio2c();
void ejercicio2d();
void ejercicio3();

int main()
{
    ejercicio2a();
    ejercicio2b();
    ejercicio2c();
    ejercicio2d();
    ejercicio3();

    return 0;
}

void ejercicio2a()
{
    int as, a, suma, conteo;

    cout << "\nAsigne un valor para :\n    as : ";
    cin >> as;
    cout << "\n    a : ";
    cin >> a;

    if (as < 25)
	suma = suma + a;
    else
	conteo = conteo + 1;

    cout << "\nEl valor de suma es : " << suma
	 << "\nEl valor de conteo es : " << conteo
	 << "\n";
}

void ejercicio2b()
{
    int c, voltios, pot;
    
    cout << "\nIngrese un valor para c : ";
    cin >> c;

    if (c == 15){
	voltios = 5;
	pot = 10;
    }else {
	voltios = 16;
	pot = 25;
    }

    cout << "\nel valor de \nvoltaje es : " << voltios
	 << "\npot es :" << pot
	 << "\n";
}

void ejercicio2c()
{
    int id, factor = 0;
    cout << "\nIngrese un valor para id : ";
    cin >> id;

    if (id > 22)
	factor = .7;
    
    cout << "\nEl valor de el factor es : " << factor
	 << "\n";
}

void ejercicio2d()
{
    int conteo, promedio, suma;
    cout << "\nIngrese un valor para conteo : ";
    cin >> conteo;

    if (conteo == 10){
	
	cout << "\nIngrese un valor para suma : ";
	cin >> suma;

	promedio = suma / conteo;
	cout << promedio;
    }

}

 void ejercicio3()
{
    
    int a, b;

    cout << "\nIngrese un valor para \n\ta : ";
    cin >> a;
    cout << "\n\n\tb : ";
    cin >> b;

    if (a > b)
	cout << "\nEl primer numero es mayor\n";
    else
	cout << "\nEl primer numero es menor\n";

    // 5 - 8 
    //     el primero es menor
    // 11 - 2
    //     el primero es mayor
    // a == b
    //     Tenemos como resultado el primer numero es menor ya que no hay un caso
    //     para cuando los numeros son iguales
}
