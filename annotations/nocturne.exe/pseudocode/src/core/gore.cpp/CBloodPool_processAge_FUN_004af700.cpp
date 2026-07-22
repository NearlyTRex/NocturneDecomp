// Name: core_gore.cpp_CBloodPool_processAge_FUN_004af700
// Address: 004af700
// Address Range: [[004af700, 004af72d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(int param_1)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(int param_1)

{
  *(float *)(param_1 + 0x18) = *(float *)(0x01C775EC + 0x264) + *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= (float)3.625) {
    return;
  }
  *(uint *)(param_1 + 0x18) = 0x40680000;
  return;
}
