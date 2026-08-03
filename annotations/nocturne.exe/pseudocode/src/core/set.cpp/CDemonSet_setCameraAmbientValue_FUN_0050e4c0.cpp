// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
// Address: 0050e4c0
// Address Range: [[0050e4c0, 0050e500]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet *this_ptr,int index,float value)

{
  this_ptr->cameras[index].ambient_value = value;
  if (index != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(&g_CDemonCamera_01fb8508,value);
  return;
}
