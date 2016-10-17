#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    cvNamedWindow( "My Window", 1 );//mcmap
    IplImage *img = cvCreateImage( cvSize( 640, 480 ), IPL_DEPTH_8U, 1 );
    CvFont font;
    double hScale = 1.0;
    double vScale = 1.0;
    int lineWidth = 1;
    cvInitFont( &font, CV_FONT_HERSHEY_SIMPLEX | CV_FONT_ITALIC,
                hScale, vScale, 0, lineWidth );
    cvPutText( img, "Hello World!", cvPoint( 200, 400 ), &font,
               cvScalar( 255, 255, 0 ) );
    cvShowImage( "My Window", img );
    cvWaitKey();
    return 0;
}
