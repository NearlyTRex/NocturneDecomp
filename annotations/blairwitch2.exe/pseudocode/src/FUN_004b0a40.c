// Name: FUN_004b0a40
// Address: 004b0a40
// Address Range: [[004b0a40, 004b0a80]]
// Convention: unknown
// Signature: void FUN_004b0a40(int param_1)

#include "nocturne.h"

void FUN_004b0a40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x25608) == 0) {
    return;
  }
  iVar1 = FUN_0040c8f0(*(int *)(param_1 + 0x25608),DAT_007bc3e0);
  if (iVar1 != 0) {
    FUN_0040e670(iVar1,param_1 + 0x2437c);
  }
  *(uint *)(param_1 + 0x25608) = 0;
  return;
}
