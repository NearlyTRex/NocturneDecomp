// Name: core_set.cpp_CDemonSet_restoreCameraView_FUN_00555740
// Address: 00555740
// Address Range: [[00555740, 0055576e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_00555740(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_00555740(CDemonSet *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->previous_best_camera_index;
  core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,this_ptr->selected_camera_index);
  this_ptr->previous_best_camera_timer = 0.0;
  this_ptr->previous_best_camera_index = iVar1;
  return;
}
