#include "Image.h"
#include<iostream>

int main(){
	BMP bmp("bmp_file.bmp");
	bmp.write("bmp_file_copy.bmp");
	return 0;
}
