// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
// Address: 004528e0
// Address Range: [[004528e0, 004528f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera *this_ptr,float intensity)

{
  this_ptr->corona_blend_factor =
       (int)ROUND(ROUND(intensity * (float)65535));
  return;
}
