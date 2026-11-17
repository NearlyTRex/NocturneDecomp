// Name: core_cloth.cpp_fastInvSqrt_FUN_00442330
// Address: 00442330
// Address Range: [[00442330, 00442340]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00442330(float dist_sq)

#include "nocturne.h"

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00442330(float dist_sq)

{
  return (float)(g_INT_01cc8050 - ((int)dist_sq >> 1));
}
