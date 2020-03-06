#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat M1 = cv::imread("D:\\Files\\2.jpg");//读取图片
	cv::Mat M2;
	cv::Mat M3;
	M1.copyTo(M2);
	M1.copyTo(M3);
	cv::Point pt;//定义圆心
	pt.x = 10;
	pt.y = 10;
	circle(M1, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);//画圆
	cv::Point pt1;//定义线段起点
	cv::Point pt2;//定义线段终点
	pt1.x = 10;
	pt1.y = 10;
	pt2.x = 20;
	pt2.y = 20;
	line(M2, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);//画线段
	cv::Rect rect;//定义矩形坐标
	rect.x = 10;
	rect.y = 10;
	rect.height=20;//定义矩形高
	rect.width=60;//定义举行宽
	rectangle(M3, rect, CV_RGB(255, 0, 0), 1, 8, 0);//画矩形
	cv::imshow("circle", M1);//显示三张图片
	cv::imshow("line", M2);
	cv::imshow("rectangle", M3);
	waitKey(0);
}