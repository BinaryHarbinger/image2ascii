#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

char *image_2_ascii(const unsigned char *image,const int width,const int height,const int num_channel);
float get_llen_scale(size_t width, float llen);

#endif
