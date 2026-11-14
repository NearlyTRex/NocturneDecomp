// Name: core_set.cpp_CDemonSet_restoreCameraView_FUN_0053b0d0
// Address: 0053b0d0
// Address Range: [[0053b0d0, 0053b0fe]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_0053b0d0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_0053b0d0(CDemonSet *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->previous_best_camera_index;
  core_set_cpp_CDemonSet_setCameraView_FUN_00534890(this_ptr,this_ptr->selected_camera_index);
  this_ptr->previous_best_camera_timer = 0.0;
  this_ptr->previous_best_camera_index = iVar1;
  return;
}
