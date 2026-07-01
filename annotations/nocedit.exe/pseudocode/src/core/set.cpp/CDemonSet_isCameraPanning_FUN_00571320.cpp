// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
// Address: 00571320
// Address Range: [[00571320, 00571378]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
  }
  g_CurrentFilename = "..\\core\\set.cpp";
  g_CurrentLineNumber = 5003;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::isCameraPanning - no camera selected");
  return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
}
