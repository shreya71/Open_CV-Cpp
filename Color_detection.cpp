#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {

	string path = "book.png";
	Mat img = imread(path);
	Mat imgHSV, simplified;
	int h_min = 0, s_min = 0, v_min = 0, h_max = 199, s_max = 255, v_max = 255;

	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	namedWindow("Track");
	// Trackbars for H, S, V
	createTrackbar("Hue Min", "Track", &h_min, 179);
	createTrackbar("Hue Max", "Track", &h_max, 179);
	createTrackbar("Sat Min", "Track", &s_min, 255);
	createTrackbar("Sat Max", "Track", &s_max, 255);
	createTrackbar("Val Min", "Track", &v_min, 255);
	createTrackbar("Val Max", "Track", &v_max, 255);

	while(true) {

		Scalar lower(h_min, s_min, v_min);
		Scalar upper(h_max, s_max, v_max);
		inRange(imgHSV, lower, upper, simplified);

		imshow("Image", img);
		imshow("Image HSV", imgHSV);
		imshow("Image Mask", simplified);
		waitKey(1);
	}
}
