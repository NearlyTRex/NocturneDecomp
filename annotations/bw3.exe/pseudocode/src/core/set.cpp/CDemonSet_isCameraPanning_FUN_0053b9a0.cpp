// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_0053b9a0
// Address: 0053b9a0
// Address Range: [[0053b9a0, 0053b9f8]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
  }
  g_CurrentFilename = "..\\core\\set.cpp";
  g_CurrentLineNumber = 5359;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::isCameraPanning - no camera selected");
  return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
}
