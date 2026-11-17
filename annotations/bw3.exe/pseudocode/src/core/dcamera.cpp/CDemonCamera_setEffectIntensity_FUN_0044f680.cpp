// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
// Address: 0044f680
// Address Range: [[0044f680, 0044f699]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)65535));
  this_ptr->corona_blend_factor = (int)ROUND(dVar1);
  return;
}
