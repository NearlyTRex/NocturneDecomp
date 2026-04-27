// Name: core_chain.cpp_fastSqrt_FUN_00431350
// Address: 00431350
// MANUAL RECONSTRUCTION
// Address Range: [[00431350, 0043135e]]
// Convention: __cdecl
// Signature: float __cdecl core_chain_cpp_fastSqrt_FUN_00431350(float value)

#include "nocturne.h"

float __cdecl core_chain_cpp_fastSqrt_FUN_00431350(float value)

{
  int bits = (*(int *)&value >> 1) + g_FastSqrtMagic;
  return *(float *)&bits;
}
