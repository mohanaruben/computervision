#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void mytest() {
	VideoCapture cap(0);
	Mat img;

	while (true)
	{
		cap.read(img);

		imshow("Image", img);
		waitKey(0);
	}
}
void mytest2()
{
	string path = "C:\\Users\\Mohanaruben\\source\\repos\\opencvcourse--\\Camera Roll\\cards.jpg";
	Mat img = imread(path);
	//imshow("image", img);
	cv::imshow("",img);
	waitKey(0);

}
void mytest3() {

	string path = "CameraRoll/cards.jpg";
	VideoCapture cap(path);
	Mat img;

	while (true)
	{
		cap.read(img);

		imshow("Image", img);
		waitKey(0);
	}
}

void main() {

	int x;
	cout << "Type a number: "; // Type a number and press enter
	cin >> x;

	int y = x;
	switch (y) {
	case 1:
		mytest();
		break;
	case 2:
		mytest2();
		break;
	case 3:
		mytest3();
		break;
	}
}