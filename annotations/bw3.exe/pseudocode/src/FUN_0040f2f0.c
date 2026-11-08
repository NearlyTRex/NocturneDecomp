// Name: FUN_0040f2f0
// Address: 0040f2f0
// Address Range: [[0040f2f0, 0040f3c6]]
// Convention: unknown
// Signature: void FUN_0040f2f0(int param_1)

#include "nocturne.h"

void FUN_0040f2f0(int param_1)

{
  float fVar1;
  double dVar2;
  float fStack_20;
  
  fStack_20 = *(float *)(param_1 + 0x304);
  fVar1 = (float)*(int *)(param_1 + 0x178);
  if (0.0 <= fStack_20) {
    dVar2 = (double)FUN_005a3600((double)(fStack_20 / fVar1));
    fStack_20 = fStack_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = (double)FUN_005a3600((double)(-fStack_20 / fVar1));
    fStack_20 = (float)dVar2 * fVar1 + fStack_20;
    if (fStack_20 < 0.0) {
      fStack_20 = fStack_20 + fVar1;
    }
  }
  *(float *)(param_1 + 0x304) = fStack_20;
  FUN_00444ac0(param_1 + 0x178,*(uint *)(param_1 + 0x304),param_1 + 0x20,param_1 + 0x30);
  return;
}
