// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0
// Address: 005558f0
// Address Range: [[005558f0, 00555926]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0(CDemonSet *this_ptr,int index,float value)

{
  this_ptr->cameras[index].ambient_value = value;
  if (index != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(&g_CDemonCameraInstance,value);
  return;
}
