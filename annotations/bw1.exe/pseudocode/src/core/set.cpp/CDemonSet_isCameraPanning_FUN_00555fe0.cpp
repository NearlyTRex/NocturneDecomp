// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0
// Address: 00555fe0
// Address Range: [[00555fe0, 00556038]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\set.cpp";
  g_INT_01d1d404 = 0x14d5;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonSet::isCameraPanning - no camera selected");
  return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
}
