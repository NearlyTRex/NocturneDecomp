// Name: FUN_004bd460
// Address: 004bd460
// Address Range: [[004bd460, 004bd4c5]]
// Convention: unknown
// Signature: void FUN_004bd460(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bd460(int param_1,float param_2)

{
  float10 fVar1;
  
  if (param_2 < 0.0) {
    _DAT_01d046a0 = "..\\core\\game.cpp";
    _DAT_01d046a4 = 0x1313;
    FUN_004e4500("CGame::slamDT - invalid dt!");
  }
  *(float *)(param_1 + 0x284) = param_2;
  fVar1 = (float10)*(float *)(param_1 + 0x284) * (float10)_DAT_005d884b;
  FUN_005b7ff0();
  *(int *)(param_1 + 0x280) = (int)ROUND(fVar1);
  _DAT_01c2a370 = *(uint *)(param_1 + 0x280);
  return;
}
