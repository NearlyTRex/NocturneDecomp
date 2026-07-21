// Name: core_fire.cpp_CExplosion_process_FUN_00486f90
// Address: 00486f90
// Address Range: [[00486f90, 00486fd4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(int param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(int param_1)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0xc)) &&
     (fVar1 = *(float *)(param_1 + 0xc) - *(float *)(0x01C775EC + 0x264),
     *(float *)(param_1 + 0xc) = fVar1, fVar1 < 0.0)) {
    *(uint *)(param_1 + 0xc) = 0;
    return;
  }
  return;
}
