// Name: core_fire.cpp_CSpark_process_FUN_004836e0
// Address: 004836e0
// Address Range: [[004836e0, 00483796]]
// Convention: unknown
// Signature: void core_fire_cpp_CSpark_process_FUN_004836e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CSpark_process_FUN_004836e0(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    *(uint *)(param_1 + 0x40) = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01bd1d80 * (longlong)*(int *)(param_1 + 0x48);
    lVar1 = (longlong)*(int *)(param_1 + 0x3c) *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = *(int *)(param_1 + 0x38) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x38) = 0;
    }
  }
  uVar3 = *(uint *)(0x01C775EC + 0x264);
  lVar1 = (longlong)*(int *)(param_1 + 0x48) * (longlong)_DAT_01bd1d80;
  core_game_cpp_CGame_slamDT_FUN_004a5f00
            (0x01C775EC,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)1.52587890625e-05,uVar3);
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(0x01C775EC,uVar3);
  return;
}
