// hina.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "cvHeader.h"
#include <Windows.h>
#include <vector>
using namespace std;

int main(){
	IplImage* src = cvLoadImage("test.png", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);
	char* imgWindow = "gazo";
	cvNamedWindow(imgWindow, CV_WINDOW_AUTOSIZE);
	cvShowImage(imgWindow, src);
	cvWaitKey(0);
	cvDestroyWindow(imgWindow);
}