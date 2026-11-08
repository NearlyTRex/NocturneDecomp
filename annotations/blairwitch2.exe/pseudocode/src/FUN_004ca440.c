// Name: FUN_004ca440
// Address: 004ca440
// Address Range: [[004ca440, 004ca539]]
// Convention: unknown
// Signature: void FUN_004ca440(int param_1)

#include "nocturne.h"

void FUN_004ca440(int param_1)

{
  int iStack_c;
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"model name");
  FUN_0040b8e0(param_1 + 0x434,&DAT_005d95c5);
  if (0x00000004 < 2) {
    FUN_0040b960(&iStack_c,"active");
    *(uint *)(param_1 + 0x43c) = 0;
    if (iStack_c != 0) {
      *(uint *)(param_1 + 0x43c) = 1;
    }
  }
  else {
    FUN_0040b960(param_1 + 0x43c,"graveState");
  }
  FUN_0040b8e0(param_1 + 0x430,"curFrame");
  if (2 < 0x00000004) {
    FUN_0040b960(param_1 + 0x440,"hideOnFirstFrame");
    FUN_0040b730(param_1 + 0x444,"startCondition");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b730(param_1 + 0x4a8,"startSound");
  return;
}
