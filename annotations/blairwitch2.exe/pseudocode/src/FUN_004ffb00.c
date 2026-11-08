// Name: FUN_004ffb00
// Address: 004ffb00
// Address Range: [[004ffb00, 004ffb6f]]
// Convention: unknown
// Signature: void FUN_004ffb00(int param_1)

#include "nocturne.h"

void FUN_004ffb00(int param_1)

{
  uint uVar1;
  
  if (0.0 < *(float *)(param_1 + 0x10bcc)) {
    return;
  }
  uVar1 = FUN_0040cf60(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0x10bcc) = uVar1;
  if (*(int *)(param_1 + 0x2620) != 0) {
    FUN_00503620(param_1 + 0x2b4,6,1);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,2,1);
  return;
}
