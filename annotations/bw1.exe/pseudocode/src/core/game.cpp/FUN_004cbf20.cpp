// Name: core_game.cpp_FUN_004cbf20
// Address: 004cbf20
// Address Range: [[004cbf20, 004cc0b8]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004cbf20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004cbf20(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x280) == 1) {
    if (*(float *)(param_1 + 0x284) <= 0.0) {
      *(uint *)(param_1 + 0x284) = 0x3f800000;
    }
    fVar1 = (float)_DAT_005e136c - *(float *)(param_1 + 0x284);
    *(float *)(param_1 + 0x208) = fVar1;
    if ((float)_DAT_005e1374 <= fVar1) {
      if (1.0 < fVar1) {
        *(uint *)(param_1 + 0x208) = 0x3f800000;
      }
    }
    else {
      *(uint *)(param_1 + 0x208) = 0x3dcccccd;
    }
  }
  else if (*(int *)(param_1 + 0x280) != 2) {
    *(uint *)(param_1 + 0x208) = 0x3f800000;
  }
  *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) - *(float *)(param_1 + 0x294);
  if ((*(int *)(param_1 + 0x280) == 1) && (*(float *)(param_1 + 0x284) <= 0.0)) {
    *(uint *)(param_1 + 0x280) = 0;
    *(uint *)(param_1 + 0x208) = 0x3f800000;
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = (iVar2 - *(int *)(param_1 + 0x28c)) / 0x12;
  *(int *)(param_1 + 0x290) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0x290) = 0;
  }
  *(int *)(param_1 + 0x28c) = iVar2;
  if (0x4000 < *(int *)(param_1 + 0x290)) {
    *(uint *)(param_1 + 0x290) = 0x4000;
  }
  fVar4 = (float10)*(int *)(param_1 + 0x290) * (float10)*(float *)(param_1 + 0x208);
  round();
  *(int *)(param_1 + 0x290) = (int)ROUND(fVar4);
  if (extraout_ECX != 0) {
    fVar4 = ((float10)_DAT_005e137c / (float10)_DAT_0061d968) * (float10)*(float *)(param_1 + 0x208)
    ;
    round();
    *(int *)(param_1 + 0x290) = (int)ROUND(fVar4);
  }
  _DAT_01c43530 = *(uint *)(param_1 + 0x290);
  *(float *)(param_1 + 0x294) = (float)*(int *)(param_1 + 0x290) * (float)_DAT_005e1384;
  return;
}
