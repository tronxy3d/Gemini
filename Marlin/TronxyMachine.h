#pragma once
#define PROJ_GEMINIS       30 //f446,U 300-300-400
#define PROJ_GEMINIXS      32 //f446,U 255-255-260
#define PROJ_GEMINID1      33 //f446,U 255-255-280
#define PROJ_GEMINIX       36 //f446,U 330-330-400

#define UI_MARLIN_DEFAULT  0
#define UI_SIM480X320      2

#define TRONXY_PROJ        PROJ_GEMINIS
#define TRONXY_UI          UI_SIM480X320

#if TRONXY_UI > 0
#define HAS_TRONXY_UI      1
#endif
#if TRONXY_PROJ
#define HAS_TRONXY_PROJ    1
#endif

#if TRONXY_PROJ == PROJ_GEMINIS

#define TRONXY_MACHINE_NAME       "GeminiS"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    0 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            1 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             false //TITAN:true,true;BMG:false,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              2 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_GEMINIXS

#define TRONXY_MACHINE_NAME       "GeminiXS"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true,true;BMG:false,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_GEMINID1

#define TRONXY_MACHINE_NAME       "GeminiD1"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             false //BMG:false,false
#define INVERT_E1_DIR             false
#define USE_EXTRUDER              2 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_GEMINIX

#define TRONXY_MACHINE_NAME       "GeminiX"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             false //BMG:false,false
#define INVERT_E1_DIR             false
#define USE_EXTRUDER              2 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#else

#error "You haven't configure this machine."

#endif
