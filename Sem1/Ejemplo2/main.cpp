#include <cstdio>
#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    /*Nombre de la imagen que se va a cargar*/
    char NombreImagen[]="ivvi.jpg";
    Mat imagen;

    /*Cargamos la imagen y se comprueba que lo ha hecho correctamente*/
    imagen=cv::imread(NombreImagen);
    if(!imagen.data){
        cout << "Error al cargar Imagen"<<NombreImagen<< endl;
        exit(1);
    }

    /*Mostrar la Imagen*/
    namedWindow("Original",CV_WINDOW_AUTOSIZE);
    imshow("Original",imagen);

    /*Esperar a pulsar una tecla*/
    waitKey(0);

    return 0;
}
