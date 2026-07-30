// Name: core_set.cpp_FUN_005090f0
// Address: 005090f0
// Address Range: [[005090f0, 00509131]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_005090f0(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void core_set_cpp_FUN_005090f0(CDemonSet *param_1,uint param_2,uint param_3,int param_4)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010((CDemonCamera *)&DAT_01fb8508,param_4);
  core_dcamera_cpp_FUN_004401b0(&DAT_01fb8508,param_2,param_3);
  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,(int)param_1->renderable_actors[0x773]);
  return;
}
