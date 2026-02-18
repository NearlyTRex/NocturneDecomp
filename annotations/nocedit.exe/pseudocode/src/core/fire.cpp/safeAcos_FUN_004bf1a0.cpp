// Name: core_fire.cpp_safeAcos_FUN_004bf1a0
// Address: 004bf1a0
// Address Range: [[004bf1a0, 004bf1ef]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_safeAcos_FUN_004bf1a0(float value)

#include "nocturne.h"

float __cdecl core_fire_cpp_safeAcos_FUN_004bf1a0(float value)

{
  double dVar1;
  uint local_8;
  
  if (value <= (float)-1) {
    local_8 = 3.1415927;
  }
  else {
    if ((double)value < 1.0) {
      dVar1 = acos((double)value);
      return (float)dVar1;
    }
    local_8 = 0.0;
  }
  return local_8;
}
