// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20
// Address: 00570e20
// Address Range: [[00570e20, 00570e56]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(CDemonSet *this_ptr,int index,float value)

{
  this_ptr->cameras[index].ambient_value = value;
  if (index != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,value);
  return;
}
