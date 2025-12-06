// Name: core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
// Address: 00570c70
// Address Range: [[00570c70, 00570c9e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->previous_best_camera_index;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,this_ptr->selected_camera_index);
  this_ptr->previous_best_camera_timer = 0.0;
  this_ptr->previous_best_camera_index = iVar1;
  return;
}
