// Name: core_fire.cpp_FUN_004b4190
// Address: 004b4190
// Address Range: [[004b4190, 004b4222]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b4190(int param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_004b4190(int param_1)

{
  byte bVar1;
  float afStackY_1008 [1015];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar1 = 0;
  if (*(float *)(param_1 + 0x24) <= 0.0) {
    return;
  }
  core_particle_cpp_FUN_00532250(param_1);
  fStack_8 = g_CGamePtr->delta_time_float;
  fStack_20 = *(float *)(param_1 + 0x4c) * fStack_8;
  fStack_1c = *(float *)(param_1 + 0x50) * fStack_8;
  fStack_18 = *(float *)(param_1 + 0x54) * fStack_8;
  fStack_14 = fStack_20;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fStack_14;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fStack_10;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fStack_c;
  return;
}
