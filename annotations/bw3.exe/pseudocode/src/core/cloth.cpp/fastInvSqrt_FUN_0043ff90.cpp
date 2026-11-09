// Name: core_cloth.cpp_fastInvSqrt_FUN_0043ff90
// Address: 0043ff90
// Address Range: [[0043ff90, 0043ffa0]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043ff90(float dist_sq)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043ff90(float dist_sq)

{
  return (float)(_DAT_01d1a0a8 - ((int)dist_sq >> 1));
}
