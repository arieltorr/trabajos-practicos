int suma(int numero1, int numero2 )
{
    int suma = numero1 + numero2;
    return suma;
}
int resta(int numero1, int numero2 )
{
    int resta = numero1- numero2;
    return resta;

}
float dividir(float numero1, float numero2 )
{
    float dividir = numero1 / numero2;
    return dividir;

}
int producto(int numero1, int numero2 )
{
    int producto = numero1 * numero2;
    return producto;

}
int factorial (int numero1)
{
    if(numero1<1)
    {
        return 0;
    }
    else if (numero1>1)
    {
        return numero1*(factorial(numero1-1));
    }
    else
    {
        return 1;
    }
}



