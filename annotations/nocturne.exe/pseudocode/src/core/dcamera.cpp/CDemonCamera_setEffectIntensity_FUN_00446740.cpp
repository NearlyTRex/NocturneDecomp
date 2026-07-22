// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
// Address: 00446740
// Address Range: [[00446740, 00446759]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)round((float10)param_2 * (float10)65535);
  *(int *)(param_1 + 0x11e8) = (int)ROUND(fVar1);
  return;
}
