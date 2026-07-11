// Name: FUN_004a5f00
// Address: 004a5f00
// Address Range: [[004a5f00, 004a5f65]]
// Convention: unknown
// Signature: void FUN_004a5f00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5f00(int param_1,float param_2)

{
  float10 fVar1;
  
  if (param_2 < 0.0) {
    _DAT_01cc4800 = "..\\core\\game.cpp";
    _DAT_01cc4804 = 0x10b5;
    FUN_004c8440("CGame::slamDT - invalid dt!");
  }
  *(float *)(param_1 + 0x264) = param_2;
  fVar1 = (float10)*(float *)(param_1 + 0x264) * (float10)_DAT_00584482;
  FUN_00563a30();
  *(int *)(param_1 + 0x260) = (int)ROUND(fVar1);
  _DAT_01bd1d80 = *(uint *)(param_1 + 0x260);
  return;
}
