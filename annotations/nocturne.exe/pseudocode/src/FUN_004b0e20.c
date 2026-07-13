// Name: FUN_004b0e20
// Address: 004b0e20
// Address Range: [[004b0e20, 004b0f19]]
// Convention: unknown
// Signature: void FUN_004b0e20(int param_1)

#include "nocturne.h"

void FUN_004b0e20(int param_1)

{
  int local_c;
  
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"model name");
  FUN_0040c880(param_1 + 0x2d0,&DAT_00585213);
  if (0x00000004 < 2) {
    FUN_0040c900(&local_c,"active");
    *(uint *)(param_1 + 0x2d8) = 0;
    if (local_c != 0) {
      *(uint *)(param_1 + 0x2d8) = 1;
    }
  }
  else {
    FUN_0040c900(param_1 + 0x2d8,"graveState");
  }
  FUN_0040c880(param_1 + 0x2cc,"curFrame");
  if (2 < 0x00000004) {
    FUN_0040c900(param_1 + 0x2dc,"hideOnFirstFrame");
    FUN_0040c6d0(param_1 + 0x2e0,"startCondition");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x344,"startSound");
  return;
}
