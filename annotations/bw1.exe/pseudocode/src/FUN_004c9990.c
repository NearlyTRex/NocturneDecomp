// Name: FUN_004c9990
// Address: 004c9990
// Address Range: [[004c9990, 004c99d0]]
// Convention: unknown
// Signature: void FUN_004c9990(int param_1)

#include "nocturne.h"

void FUN_004c9990(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ff78) == 0) {
    return;
  }
  iVar1 = FUN_0040c600(*(int *)(param_1 + 0x1ff78),DAT_007c33e0);
  if (iVar1 != 0) {
    FUN_0040e210(iVar1,param_1 + 0x1fae8);
  }
  *(uint *)(param_1 + 0x1ff78) = 0;
  return;
}
