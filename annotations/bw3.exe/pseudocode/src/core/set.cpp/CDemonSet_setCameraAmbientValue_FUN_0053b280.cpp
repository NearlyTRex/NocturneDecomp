// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280
// Address: 0053b280
// Address Range: [[0053b280, 0053b2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(CDemonSet *this_ptr,int index,float value)

{
  *(float *)&this_ptr->cameras[index].field_0x148 = value;
  if (index != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(&g_CDemonCameraInstance,value);
  return;
}
