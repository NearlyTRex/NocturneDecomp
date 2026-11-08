// Name: FUN_004d7f50
// Address: 004d7f50
// Address Range: [[004d7f50, 004d7fb5]]
// Convention: unknown
// Signature: void FUN_004d7f50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7f50(int param_1,float param_2)

{
  float10 fVar1;
  
  if (param_2 < 0.0) {
    _DAT_01d1d400 = "..\\core\\game.cpp";
    _DAT_01d1d404 = 0x12e0;
    FUN_005030e0("CGame::slamDT - invalid dt!");
  }
  *(float *)(param_1 + 0x294) = param_2;
  fVar1 = (float10)*(float *)(param_1 + 0x294) * (float10)_DAT_005e33a8;
  FUN_005c03a0();
  *(int *)(param_1 + 0x290) = (int)ROUND(fVar1);
  _DAT_01c43530 = *(uint *)(param_1 + 0x290);
  return;
}
