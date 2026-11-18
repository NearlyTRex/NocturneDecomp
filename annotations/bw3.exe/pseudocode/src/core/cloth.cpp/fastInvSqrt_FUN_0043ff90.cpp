// Name: core_cloth.cpp_fastInvSqrt_FUN_0043ff90
// Address: 0043ff90
// Address Range: [[0043ff90, 0043ffa0]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043ff90(float dist_sq)

#include "nocturne.h"

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043ff90(float dist_sq)

{
  return (float)(g_FastInvSqrtMagic - ((int)dist_sq >> 1));
}
