// Name: core_fire.cpp_FUN_004ad860
// Address: 004ad860
// Address Range: [[004ad860, 004ad9b2]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004ad860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004ad860(int param_1)

{
  float fVar1;
  float fVar2;
  float delta_time;
  longlong lVar3;
  CGame *this_ptr;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(uint *)(param_1 + 0x4c) = 1;
  }
  else {
    lVar3 = (longlong)_DAT_01c43530 * (longlong)*(int *)(param_1 + 0x58);
    lVar3 = (longlong)*(int *)(param_1 + 0x44) *
            (longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    iVar7 = *(int *)(param_1 + 0x40) -
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar7;
    if (iVar7 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  delta_time = g_CGamePtr->delta_time_float;
  lVar3 = (longlong)*(int *)(param_1 + 0x58) * (longlong)_DAT_01c43530;
  core_game_cpp_CGame_slamDT_FUN_004d7f50
            (g_CGamePtr,
             (float)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
             (float)_DAT_005df1f4);
  core_particle_cpp_FUN_00532250(param_1);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                    (0.0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  fVar1 = *(float *)(param_1 + 0x48);
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                    (0.0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                    (0.0,*(float *)(param_1 + 0x48) * _DAT_005df1fc);
  this_ptr = g_CGamePtr;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + (fVar4 - fVar1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (fVar5 - fVar2);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (fVar6 - *(float *)(param_1 + 0x48));
  core_game_cpp_CGame_slamDT_FUN_004d7f50(this_ptr,delta_time);
  return;
}
