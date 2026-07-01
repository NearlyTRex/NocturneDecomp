// Name: core_cloth.cpp_fastInvSqrt_FUN_0043e2a0
// Address: 0043e2a0
// MANUAL RECONSTRUCTION
// Address Range: [[0043e2a0, 0043e2b0]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(float dist_sq)

#include "nocturne.h"

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(float dist_sq)

{
  int bits = g_FastInvSqrtMagic - ((int)__BITCAST_UINT32(dist_sq) >> 1);
  return __BITCAST_FLOAT(bits);
}
