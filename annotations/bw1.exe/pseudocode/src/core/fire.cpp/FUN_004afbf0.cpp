// Name: core_fire.cpp_FUN_004afbf0
// Address: 004afbf0
// Address Range: [[004afbf0, 004afc5d]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004afbf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004afbf0(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)&g_CGamePtr->field_0x294;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar1;
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fVar1;
  core_particle_cpp_FUN_00532250(param_1);
  iVar2 = *(int *)(param_1 + 0x40) - _DAT_01c43530 / 6;
  *(int *)(param_1 + 0x40) = iVar2;
  if (-1 < iVar2) {
    return;
  }
  *(uint *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  return;
}
