// Name: FUN_004114e0
// Address: 004114e0
// Address Range: [[004114e0, 004115b6]]
// Convention: unknown
// Signature: void FUN_004114e0(int param_1)

#include "nocturne.h"

void FUN_004114e0(int param_1)

{
  float fVar1;
  double dVar2;
  float fStack_20;
  
  fStack_20 = *(float *)(param_1 + 0x460);
  fVar1 = (float)*(int *)(param_1 + 0x2d4);
  if (0.0 <= fStack_20) {
    dVar2 = (double)FUN_005b84d0((double)(fStack_20 / fVar1));
    fStack_20 = fStack_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = (double)FUN_005b84d0((double)(-fStack_20 / fVar1));
    fStack_20 = (float)dVar2 * fVar1 + fStack_20;
    if (fStack_20 < 0.0) {
      fStack_20 = fStack_20 + fVar1;
    }
  }
  *(float *)(param_1 + 0x460) = fStack_20;
  FUN_00438c40(param_1 + 0x2d4,*(uint *)(param_1 + 0x460),param_1 + 0x20,param_1 + 0x30);
  return;
}
