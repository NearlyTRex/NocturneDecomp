// Name: core_set.cpp_CDemonSet_FUN_005090f0
// Address: 005090f0
// Address Range: [[005090f0, 00509131]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_005090f0(CDemonSet *this_ptr,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_005090f0(CDemonSet *this_ptr,uint param_2,uint param_3,int param_4)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010(&g_CDemonCamera_01fb8508,param_4);
  core_dcamera_cpp_CDemonCamera_FUN_004401b0(&g_CDemonCamera_01fb8508,param_2,param_3);
  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(this_ptr,this_ptr->selected_camera_index);
  return;
}
