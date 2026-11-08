// Name: FUN_0047bc60
// Address: 0047bc60
// Address Range: [[0047bc60, 0047bc98]]
// Convention: unknown
// Signature: void FUN_0047bc60(int param_1)

#include "nocturne.h"

void FUN_0047bc60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 < 1) {
    FUN_0047baf0(param_1);
    return;
  }
  *(int *)(param_1 + 0x134) = iVar1 + -1;
  FUN_0047bba0(param_1,iVar1 + -1,iVar1);
  FUN_0047baf0(param_1);
  return;
}
