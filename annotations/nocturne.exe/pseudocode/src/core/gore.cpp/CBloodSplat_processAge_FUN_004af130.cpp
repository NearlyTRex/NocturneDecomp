// Name: core_gore.cpp_CBloodSplat_processAge_FUN_004af130
// Address: 004af130
// Address Range: [[004af130, 004af15d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(int param_1)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(int param_1)

{
  *(float *)(param_1 + 0x24) = *(float *)(0x01C775EC + 0x264) + *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x24) <= (float)2) {
    return;
  }
  *(uint *)(param_1 + 0x24) = 0x40000000;
  return;
}
