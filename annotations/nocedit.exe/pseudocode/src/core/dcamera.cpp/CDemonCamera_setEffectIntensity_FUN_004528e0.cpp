// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
// Address: 004528e0
// Address Range: [[004528e0, 004528f9]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
          (CDemonCamera *this_ptr,float intensity)

{
  int extraout_EAX;
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)(intensity * (float)65535));
  *(int *)(extraout_EAX + 0x11e8) = (int)ROUND(dVar1);
  return;
}
