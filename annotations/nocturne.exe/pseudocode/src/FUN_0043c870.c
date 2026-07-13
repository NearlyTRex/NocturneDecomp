// Name: FUN_0043c870
// Address: 0043c870
// Address Range: [[0043c870, 0043c938]]
// Convention: unknown
// Signature: void FUN_0043c870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c870(int param_1)

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
  fVar1 = (fStack_18 - afStack_24[0]) * (float)_DAT_0057b433;
  fVar2 = (fStack_10 - fStack_1c) * (float)_DAT_0057b433;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x2d0) = fVar2;
  *(uint *)(param_1 + 0x2d8) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2dc) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2e0) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2e4) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2ec) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2e8) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f0) = 0x461c3f9a;
  *(uint *)(param_1 + 0x2cc) = 0;
  return;
}
