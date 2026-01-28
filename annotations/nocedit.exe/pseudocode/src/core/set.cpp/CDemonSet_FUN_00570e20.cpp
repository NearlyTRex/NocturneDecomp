// Name: core_set.cpp_CDemonSet_FUN_00570e20
// Address: 00570e20
// Address Range: [[00570e20, 00570e56]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_00570e20(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570e20(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  float in_stack_0000000c;
  
  this_ptr->cameras[in_stack_00000008].ambient_value = in_stack_0000000c;
  if (in_stack_00000008 != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,in_stack_0000000c);
  return;
}
