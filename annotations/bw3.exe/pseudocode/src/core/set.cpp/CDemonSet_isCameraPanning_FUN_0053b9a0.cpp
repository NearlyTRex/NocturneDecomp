// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_0053b9a0
// Address: 0053b9a0
// Address Range: [[0053b9a0, 0053b9f8]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return *(int *)&this_ptr->cameras[this_ptr->selected_camera_index].field_0x140;
  }
  _DAT_01d71de0 = "..\\core\\set.cpp";
  _DAT_01d71de4 = 0x14ef;
  core_main_c_FUN_004e4330("CDemonSet::isCameraPanning - no camera selected");
  return *(int *)&this_ptr->cameras[this_ptr->selected_camera_index].field_0x140;
}
