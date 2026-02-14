// Name: core_set.cpp_CDemonSet_FUN_0056b7e0
// Address: 0056b7e0
// Address Range: [[0056b7e0, 0056b806]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0056b7e0(CDemonSet *this_ptr,uint param_2,uint param_3,int param_4)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056b7e0(CDemonSet *this_ptr,uint param_2,uint param_3,int param_4)

{
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,param_4);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,this_ptr->selected_camera_index);
  return;
}
