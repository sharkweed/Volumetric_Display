#include <stdio.h>

#include "ffmpeg-libraries/include/libavformat/avformat.h"

int main() {
    printf("hey");
    return 0;
}

/*
gcc
-I"C:\Users\jakec\Documents\PlatformIO\Projects\Volumetric_Display\Pre-Processing\ffmpeg-libraries\include"
-L"C:\Users\jakec\Documents\PlatformIO\Projects\Volumetric_Display\Pre-Processing\ffmpeg-libraries\lib"
-lavformat -lavcodec -lavutil -lswscale -o my_program main.c
*/