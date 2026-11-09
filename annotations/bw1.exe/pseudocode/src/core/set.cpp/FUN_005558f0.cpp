// Name: core_set.cpp_FUN_005558f0
// Address: 005558f0
// Address Range: [[005558f0, 00555926]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005558f0(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_005558f0(CDemonSet *this_ptr,int index,float value)

{
  *(float *)(&this_ptr->field_0x14c + index * 0x1a4) = value;
  if (index != *(int *)&this_ptr->field_0x15aeb8) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(&g_CDemonCameraInstance,value);
  return;
}
