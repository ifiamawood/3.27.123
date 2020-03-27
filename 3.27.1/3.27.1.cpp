// 3.27.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;


int main()
{
	VideoCapture cap;
	cap.open(0);
	cv::Mat output1,input,output2,output31,output32;
	cap>>input;
	cv::medianBlur(input, output1, 3);
	cv::blur(input, output2, Size(5,5), Point(-1, -1), BORDER_DEFAULT);
	cv::GaussianBlur(input, output31, Size(5,5), 1, 20);
	cv::GaussianBlur(input, output32, Size(5, 5), 20, 1);
	imshow("中值", output1);
	waitKey(0);
	imshow("均值blur", output2);
	waitKey(0);
	imshow("均值gaussianblurx", output31);
	imshow("均值gaussianblury", output32);
	waitKey(0);
    return 0;
}

