#include <iostream>

using namespace std;
//print
int imprimir(int *arr , int tam){
    for (int i=0;i<tam ;i++){
        cout << *arr << " "  ;
        *arr ++ ;
    }
}
///suma de elementos de un arreglo con punteros
int suma(int arr[],int tam){ ///recibe una direccion de memoria int arr[]== int *arr
     int suma=0 ;
     for(int i=0;i<tam ; i++){
        suma+=*arr;
        arr++;
     }
}
//suma de elementos de un arreglo recursiva punteros
int sumaRecursiva(int *arr,int *tam){
    if (arr==tam){
        return *arr; //a[0]
    }
    else{
        return *arr+sumaRecursiva(arr+1,tam);
    }
}
// invertir 
void invertir(int *arr, int tam){ //iterativa y recursiva
    tam=tam-1;
    int k =tam/2;
    for (int i=0;i<k;i++){
        int b = *(arr+i);
        *(arr+i)=*(arr+tam);
        *(arr+tam)=b;
        tam=tam-1;
    }
}
//invertir recursiva
void invertirRecursiva(int *arr,int tam, int i=0){
    int k=tam-1;
    if(i<tam){
        int a = *(arr+i);
        *(arr+i) =*(arr+k);
        *(arr+k)= a;

        invertirRecursiva(arr,--tam,++i);
    }

int main()
{
    int x[]={5,2,3,4};
    imprimir(x,4);
    
    int x[]={4,5,7,8,9,1};
    cout << sumaRecursiva(x,x+5)<< endl ;
    imprimir(x,6);
    cout << endl ;
    invertir(x,6);
    cout <<endl ;
    imprimir(x,6);
    cout <<endl ;
    invertirRecursiva(x,6);
    cout <<endl ;
    imprimir(x,6);
    
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
