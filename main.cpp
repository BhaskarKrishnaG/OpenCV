#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main( int argc, char** argv ) {

    // Default image.
    string image_path = samples::findFile("../catbbit.png");
    cv::Mat img = cv::imread( image_path, -1 );

    // Take the passed in image, if one is sent.
    if (argc == 2) {
        img = cv::imread( argv[1], -1 );
    }

    if(img.empty()){
        cout<<"Could not read the image, pass a valid path to the image"<<endl;
        return 1;
    }
    cv::namedWindow( "Cat_window", cv::WINDOW_AUTOSIZE );
    cv::moveWindow("Cat_window", 0,0);
    cv::imshow( "Cat_window", img );
    cv::waitKey( 0 );
    cv::destroyWindow( "Cat_window" );

    return 0;
}
