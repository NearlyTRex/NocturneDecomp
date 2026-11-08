// Name: FUN_00411060
// Address: 00411060
// Address Range: [[00411060, 00411136]]
// Convention: unknown
// Signature: void FUN_00411060(int param_1)

#include "nocturne.h"

void FUN_00411060(int param_1)

{
  float fVar1;
  double dVar2;
  float fStack_20;
  
  fStack_20 = *(float *)(param_1 + 0x304);
  fVar1 = (float)*(int *)(param_1 + 0x178);
  if (0.0 <= fStack_20) {
    dVar2 = (double)FUN_005c0880((double)(fStack_20 / fVar1));
    fStack_20 = fStack_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = (double)FUN_005c0880((double)(-fStack_20 / fVar1));
    fStack_20 = (float)dVar2 * fVar1 + fStack_20;
    if (fStack_20 < 0.0) {
      fStack_20 = fStack_20 + fVar1;
    }
  }
  *(float *)(param_1 + 0x304) = fStack_20;
  FUN_00447f00(param_1 + 0x178,*(uint *)(param_1 + 0x304),param_1 + 0x20,param_1 + 0x30);
  return;
}
