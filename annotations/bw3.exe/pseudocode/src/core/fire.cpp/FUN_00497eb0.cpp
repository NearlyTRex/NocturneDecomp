// Name: core_fire.cpp_FUN_00497eb0
// Address: 00497eb0
// Address Range: [[00497eb0, 00497f66]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00497eb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00497eb0(int param_1)

{
  float delta_time;
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x48) = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01c5fad0 * (longlong)*(int *)(param_1 + 0x50);
    lVar1 = (longlong)*(int *)(param_1 + 0x44) *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = *(int *)(param_1 + 0x40) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  delta_time = *(float *)&g_CGamePtr->field_0x314;
  lVar1 = (longlong)*(int *)(param_1 + 0x50) * (longlong)_DAT_01c5fad0;
  core_game_cpp_CGame_slamDT_FUN_004bf3a0
            (g_CGamePtr,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)_DAT_005c0518);
  core_particle_cpp_FUN_00509f30(param_1);
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,delta_time);
  return;
}
