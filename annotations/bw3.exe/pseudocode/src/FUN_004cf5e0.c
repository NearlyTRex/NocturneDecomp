// Name: FUN_004cf5e0
// Address: 004cf5e0
// Address Range: [[004cf5e0, 004cf6d9]]
// Convention: unknown
// Signature: void FUN_004cf5e0(int param_1)

#include "nocturne.h"

void FUN_004cf5e0(int param_1)

{
  int iStack_c;
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"model name");
  FUN_0040b830(param_1 + 0x2d8,&DAT_005c47cc);
  if (0x00000004 < 2) {
    FUN_0040b8b0(&iStack_c,"active");
    *(uint *)(param_1 + 0x2e0) = 0;
    if (iStack_c != 0) {
      *(uint *)(param_1 + 0x2e0) = 1;
    }
  }
  else {
    FUN_0040b8b0(param_1 + 0x2e0,"graveState");
  }
  FUN_0040b830(param_1 + 0x2d4,"curFrame");
  if (2 < 0x00000004) {
    FUN_0040b8b0(param_1 + 0x2e4,"hideOnFirstFrame");
    FUN_0040b680(param_1 + 0x2e8,"startCondition");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b680(param_1 + 0x34c,"startSound");
  return;
}
