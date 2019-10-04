#include <iostream>

using namespace std;

int imprimir(int *arr , int tam){
    for (int i=0;i<tam ;i++){
        cout << *arr << " "  ;
        *arr ++ ;
    }
}
///suma de elementos de un arreglo
int suma(int arr[],int tam){ ///recibe una direccion de memoria int arr[]== int *arr
     int suma=0 ;
     for(int i=0;i<tam ; i++){
        suma+=*arr;
        arr++;
     }
}
/*
void invertir(int *arr ,int tam){
    arr [] = *ptr ;
    tam-- ;
    +

    for(int i=tam ; i>=0;i--){
        ptr= &arr[i];
        cout << *ptr<< " " ;

    }
}
*/

int main()
{
    int x[]={5,2,3,4};
    imprimir(x,4);
    /*

    cout << *arr << endl ;
    int *ptr;
    ptr =arr ;
    ptr++;// apunta a la sig direccion de memoria
    cout << *(ptr+1) << endl ;

    //imrimir elementos de un arreglo

    int *pt;
    pt = arr ;
    for(int i=0; i<4;i++){
        cout << *pt << endl;
        pt++;
    }
    */

    return 0;
}
