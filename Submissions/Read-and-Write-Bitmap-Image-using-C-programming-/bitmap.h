#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <stdint.h>
#pragma pack(push, 1)

typedef struct _proj_image
{

	uint8_t n[18];
	int32_t width;
	int32_t height;
	int16_t colorPlanes;
	int16_t bitsPerPixel;
	int32_t compression;
	int32_t imgSize;
	int32_t notUsed[16];

} ProjectImage_t;
#pragma pack(pop)
ProjectImage_t *project_readBitmapFile(const char *fileName);
int project_writeBitmapFile(ProjectImage_t *image, const char *fileName);
int freeImage(ProjectImage_t *image);

#endif
