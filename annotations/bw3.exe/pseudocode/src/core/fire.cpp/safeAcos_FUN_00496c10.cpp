// Name: core_fire.cpp_safeAcos_FUN_00496c10
// Address: 00496c10
// Address Range: [[00496c10, 00496c5f]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_safeAcos_FUN_00496c10(float value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_safeAcos_FUN_00496c10(float value)

{
  float10 fVar1;
  uint uStack_8;
  
  if (value <= (float)_DAT_005c04b0) {
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
