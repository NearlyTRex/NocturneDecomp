// Name: core_fire.cpp_safeAcos_FUN_004abd60
// Address: 004abd60
// Address Range: [[004abd60, 004abdaf]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_safeAcos_FUN_004abd60(float value)

#include "nocturne.h"

float __cdecl core_fire_cpp_safeAcos_FUN_004abd60(float value)

{
  double dVar1;
  uint uStack_8;
  
  if (value <= (float)-1) {
    uStack_8 = 3.1415927;
  }
  else {
    if ((double)value < 1.0) {
      dVar1 = acos((double)value);
      return (float)dVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
