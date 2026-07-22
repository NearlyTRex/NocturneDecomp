// Name: core_game.cpp_CGame_updateDT_FUN_0049a8a0
// Address: 0049a8a0
// Address Range: [[0049a8a0, 0049a956]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = (iVar1 - *(int *)(param_1 + 0x25c)) / 0x12;
  *(int *)(param_1 + 0x260) = iVar2;
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0x260) = 0;
  }
  *(int *)(param_1 + 0x25c) = iVar1;
  if (0x4000 < *(int *)(param_1 + 0x260)) {
    *(uint *)(param_1 + 0x260) = 0x4000;
  }
  iVar1 = _DAT_01c78acc;
  fVar3 = (float10)round
                             ((float10)*(int *)(param_1 + 0x260) *
                              (float10)*(float *)(param_1 + 0x1ec));
  *(int *)(param_1 + 0x260) = (int)ROUND(fVar3);
  if (iVar1 != 0) {
    fVar3 = (float10)round
                               (((float10)65536.0f / (float10)_DAT_005b9360) *
                                (float10)*(float *)(param_1 + 0x1ec));
    *(int *)(param_1 + 0x260) = (int)ROUND(fVar3);
  }
  _DAT_01bd1d80 = *(uint *)(param_1 + 0x260);
  *(float *)(param_1 + 0x264) = (float)*(int *)(param_1 + 0x260) * (float)1.52587890625e-05;
  return;
}
