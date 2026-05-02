// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
// Address: 004528e0
// MANUAL RECONSTRUCTION
// Address Range: [[004528e0, 004528f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera *this_ptr,float intensity)

{
  this_ptr->corona_blend_factor =
       (int)ROUND(ROUND(intensity * (float)65535));
  return;
}
