// Name: core_game.cpp_FUN_004b4440
// Address: 004b4440
// Address Range: [[004b4440, 004b45d8]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b4440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b4440(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x288) == 1) {
    if (*(float *)(param_1 + 0x28c) <= 0.0) {
      *(uint *)(param_1 + 0x28c) = 0x3f800000;
    }
    fVar1 = (float)_DAT_005c21e8 - *(float *)(param_1 + 0x28c);
    *(float *)(param_1 + 0x210) = fVar1;
    if ((float)_DAT_005c21f0 <= fVar1) {
      if (1.0 < fVar1) {
        *(uint *)(param_1 + 0x210) = 0x3f800000;
      }
    }
    else {
      *(uint *)(param_1 + 0x210) = 0x3dcccccd;
    }
  }
  else if (*(int *)(param_1 + 0x288) != 2) {
    *(uint *)(param_1 + 0x210) = 0x3f800000;
  }
  *(float *)(param_1 + 0x28c) = *(float *)(param_1 + 0x28c) - *(float *)(param_1 + 0x314);
  if ((*(int *)(param_1 + 0x288) == 1) && (*(float *)(param_1 + 0x28c) <= 0.0)) {
    *(uint *)(param_1 + 0x288) = 0;
    *(uint *)(param_1 + 0x210) = 0x3f800000;
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = (iVar2 - *(int *)(param_1 + 0x30c)) / 0x12;
  *(int *)(param_1 + 0x310) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0x310) = 0;
  }
  *(int *)(param_1 + 0x30c) = iVar2;
  if (0x4000 < *(int *)(param_1 + 0x310)) {
    *(uint *)(param_1 + 0x310) = 0x4000;
  }
  fVar4 = (float10)*(int *)(param_1 + 0x310) * (float10)*(float *)(param_1 + 0x210);
  round();
  *(int *)(param_1 + 0x310) = (int)ROUND(fVar4);
  if (extraout_ECX != 0) {
    fVar4 = ((float10)_DAT_005c21f8 / (float10)_DAT_005fe9e8) * (float10)*(float *)(param_1 + 0x210)
    ;
    round();
    *(int *)(param_1 + 0x310) = (int)ROUND(fVar4);
  }
  _DAT_01c5fad0 = *(uint *)(param_1 + 0x310);
  *(float *)(param_1 + 0x314) = (float)*(int *)(param_1 + 0x310) * (float)_DAT_005c2200;
  return;
}
