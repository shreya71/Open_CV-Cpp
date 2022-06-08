#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

int main() {
    // Mat img = imread("1.jpg");
     //namedWindow("image", WINDOW_NORMAL);
    // imshow("image", img);    
    string path = "1.jpg";/////
    Mat img = imread(path);/////
    imshow("Image", img);////
    waitKey(0);
    return 0;
}