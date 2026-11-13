// Name: core_fire.cpp_safeAcos_FUN_004abd60
// Address: 004abd60
// Address Range: [[004abd60, 004abdaf]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_safeAcos_FUN_004abd60(float value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_safeAcos_FUN_004abd60(float value)

{
  float10 fVar1;
  uint uStack_8;
  
  if (value <= (float)_DAT_005df174) {
    uStack_8 = 3.1415927;
  }
  else {
    if (value < 1.0) {
      fVar1 = (float10)value;
      acos();
      return (float)fVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
