// Name: FUN_004b4340
// Address: 004b4340
// Address Range: [[004b4340, 004b43bf]]
// Convention: unknown
// Signature: void FUN_004b4340(int param_1)

#include "nocturne.h"

void FUN_004b4340(int param_1)

{
  byte local_104 [256];
  
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"modelName");
  FUN_0040c900(param_1 + 0x2cc,"useCount");
  FUN_0040c880(param_1 + 0x2d0,"hpRestored");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
