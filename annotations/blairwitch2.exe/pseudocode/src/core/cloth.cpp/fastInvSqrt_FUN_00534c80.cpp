// Name: core_cloth.cpp_fastInvSqrt_FUN_00534c80
// Address: 00534c80
// Address Range: [[00534c80, 00534c90]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00534c80(float dist_sq)

#include "nocturne.h"

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00534c80(float dist_sq)

{
  return (float)(g_FastInvSqrtMagic - ((int)dist_sq >> 1));
}
