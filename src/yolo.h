#ifndef YOLO_H
#define YOLO_H
#include "image.h"
void execute_yolo_model(image im, float thresh);
void load_yolo_model(char *cfgfile, char *weightfile);
#endif
