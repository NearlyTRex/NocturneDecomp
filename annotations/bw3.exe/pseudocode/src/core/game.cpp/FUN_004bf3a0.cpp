// Name: FUN_004bf3a0
// Address: 004bf3a0
// Address Range: [[004bf3a0, 004bf405]]
// Convention: unknown
// Signature: void FUN_004bf3a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bf3a0(int param_1,float param_2)

{
  float10 fVar1;
  
  if (param_2 < 0.0) {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0x1317;
    FUN_004e4330("CGame::slamDT - invalid dt!");
  }
  *(float *)(param_1 + 0x314) = param_2;
  fVar1 = (float10)*(float *)(param_1 + 0x314) * (float10)_DAT_005c39ac;
  FUN_005a3120();
  *(int *)(param_1 + 0x310) = (int)ROUND(fVar1);
  _DAT_01c5fad0 = *(uint *)(param_1 + 0x310);
  return;
}
