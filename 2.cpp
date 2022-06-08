#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {  
    string path = "1.jpg";                 // put the name of image present in same folder or if not in same folder path of the folder can be used
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);
    return 0;
}
