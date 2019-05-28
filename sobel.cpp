/**
 *
 * File bootstrapped from OpenCV tutorial, takes an image as parameter and outputs the same image processed
 * by a sobel filter.
 *
 *  Created on: 28 may. 2019
 *      Author: David Baselga
 *
 */

#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <sobel.hpp>
#include <string>

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: Sobel <Image_Path>\n");
        return -1;
    }

    Mat image, sobelimg;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    cvtColor(image,sobelimg,6);
    sobel(&sobelimg);

    #ifdef DEBUG
    namedWindow("Original Image", WINDOW_AUTOSIZE );
    imshow("Original Image", image);
    namedWindow("Sobel Image", WINDOW_AUTOSIZE );
    imshow("Sobel Image", sobelimg);

    waitKey(0);
	#endif

    std::string file(argv[1]);
    std::string extension;
    extension = file.substr(file.find_last_of("."));
    imwrite( std::string("output") + extension , sobelimg );

    return 0;
}
