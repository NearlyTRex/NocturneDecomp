// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00534640
// Address: 00534640
// Address Range: [[00534640, 00534676]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00534640(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00534640(CDemonSet *this_ptr,int index,float value)

{
  *(float *)&this_ptr->cameras[index].field_0x148 = value;
  if (index != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(&g_CDemonCameraInstance,value);
  return;
}
