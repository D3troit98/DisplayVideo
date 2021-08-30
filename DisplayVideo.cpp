#include <opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include "opencv2/videoio.hpp"
#include "opencv2/tracking.hpp"

using namespace cv;
using namespace std;

////////////// videos /////////

int main() {
	string path = "C:\\Users\\Acer\\Desktop\\Git-Deployable\\20180505_144154.mp4";
	VideoCapture cap(path);
	Mat img;
	
	while (true) {

		cap.read(img);
		if (img.empty()) {
			return 0;
		}
		imshow("Image", img);
		waitKey(20);

	}
}