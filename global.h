#ifndef GLOBAL_H
#define GLOBAL_H

#define CAMIMAGE_HEIGHT             960     //初始化相机图像长宽
#define CAMIMAGE_WIDTH              1280

#define CAMTOTALNUM                 1       //当前同型号下支持几路相机

#define CLOULD_POINT_NOTDATE        FLT_MAX   //深度值不存在时点云的值

#define ROWS_PROPORTION              1.0     //相机图像高度比例   实际距离(mm)/相机像素距离
#define COLS_PROPORTION              1.0     //相机图像宽度比例   实际距离(mm)/相机像素距离

#define DEEPIMG_CALLBACKNUM_DNUM     5     //采集深度图时多采集的帧数

#endif // GLOBAL_H
