#include "BMP.h"
#include<iostream>

int main(){
	// Read an image from disk,modify it and write it back
	BMP bmp("bmp_file.bmp");
	bmp.write("bmp_file_copy.bmp");
	return 0;
}
