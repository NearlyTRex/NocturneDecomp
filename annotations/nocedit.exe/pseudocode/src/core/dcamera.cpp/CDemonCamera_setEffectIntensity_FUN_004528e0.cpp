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
  uint in_EDX;
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)intensity * (float10)65535;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  *(int *)(SUB84 /* extract 2-byte value */(dVar2,0) + 0x11e8) = (int)ROUND(fVar1);
  return;
}
