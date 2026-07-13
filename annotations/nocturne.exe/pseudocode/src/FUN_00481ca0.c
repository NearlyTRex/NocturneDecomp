// Name: FUN_00481ca0
// Address: 00481ca0
// Address Range: [[00481ca0, 00481d22]]
// Convention: unknown
// Signature: void FUN_00481ca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481ca0(int param_1)

{
  float fVar1;
  float fVar2;
  float afStack_24 [2];
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  
  FUN_00409fc0(param_1);
  FUN_00454510(param_1 + 0x150);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,afStack_24);
  fVar1 = (fStack_18 - afStack_24[0]) * (float)_DAT_00580fa3;
  fVar2 = (fStack_10 - fStack_1c) * (float)_DAT_00580fa3;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x2f0) = fVar2;
  *(uint *)(param_1 + 0x2cc) = 0;
  return;
}
