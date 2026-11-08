// Name: FUN_004e6c50
// Address: 004e6c50
// Address Range: [[004e6c50, 004e6d49]]
// Convention: unknown
// Signature: void FUN_004e6c50(int param_1)

#include "nocturne.h"

void FUN_004e6c50(int param_1)

{
  int iStack_c;
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"model name");
  FUN_0040b5f0(param_1 + 0x2d8,&DAT_005e41a8);
  if (0x00000004 < 2) {
    FUN_0040b670(&iStack_c,"active");
    *(uint *)(param_1 + 0x2e0) = 0;
    if (iStack_c != 0) {
      *(uint *)(param_1 + 0x2e0) = 1;
    }
  }
  else {
    FUN_0040b670(param_1 + 0x2e0,"graveState");
  }
  FUN_0040b5f0(param_1 + 0x2d4,"curFrame");
  if (2 < 0x00000004) {
    FUN_0040b670(param_1 + 0x2e4,"hideOnFirstFrame");
    FUN_0040b440(param_1 + 0x2e8,"startCondition");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b440(param_1 + 0x34c,"startSound");
  return;
}
