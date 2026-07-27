// Name: core_motion.cpp_CMotionController_save_FUN_004e2220
// Address: 004e2220
// Address Range: [[004e2220, 004e22a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((char)param_1[0xc] == '\0') {
    if (*param_1 == 0) {
      PTR_01cc4800 = "..\\core\\motion.cpp";
      INT_01cc4804 = 0x536;
      core_main_c_FUN_004c8440();
    }
    uVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (param_1,(double)(float)param_1[2]);
    _fprintf(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,uVar1);
    return;
  }
  _fprintf(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,param_1 + 0xc,
             (double)(float)param_1[2]);
  return;
}
