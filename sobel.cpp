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

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: Sobel <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    /*
     * TODO: Here comes the call to sobel
     *
     * sobel(image);
     *
     */

    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);
    return 0;
}
