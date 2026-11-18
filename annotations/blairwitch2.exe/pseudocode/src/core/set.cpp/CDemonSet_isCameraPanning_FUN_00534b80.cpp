// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80
// Address: 00534b80
// Address Range: [[00534b80, 00534bd8]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\set.cpp";
  g_INT_01d046a4 = 0x149c;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonSet::isCameraPanning - no camera selected");
  return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
}
