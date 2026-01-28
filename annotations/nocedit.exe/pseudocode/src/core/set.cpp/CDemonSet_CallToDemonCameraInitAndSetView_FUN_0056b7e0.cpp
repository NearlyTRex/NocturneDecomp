// Name: core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
// Address: 0056b7e0
// Address Range: [[0056b7e0, 0056b806]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0(void)

#include "nocturne.h"

void core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0(void)

{
  CDemonSet *in_stack_00000004;
  int in_stack_00000010;
  
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,in_stack_00000010);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (in_stack_00000004,in_stack_00000004->selected_camera_index);
  return;
}
