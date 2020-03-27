// 3.27.1.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cv::Mat output1,input,output2,output3;
	cap>>input;
	cv::medianBlur(input, output1, 3);
	cv::blur(input, output2, Size(5,5), Point(-1, -1), BORDER_DEFAULT);
	cv::GaussianBlur(input, output3, Size(5,5), 0, BORDER_DEFAULT);
	imshow("��ֵ", output1);
	waitKey(0);
	imshow("��ֵblur", output2);
	waitKey(0);
	imshow("��ֵgaussianblur", output3);
	waitKey(0);
    return 0;
}

