// Name: FUN_004512a0
// Address: 004512a0
// Address Range: [[004512a0, 004512ef]]
// Convention: unknown
// Signature: void FUN_004512a0(int param_1)

#include "nocturne.h"

void FUN_004512a0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00495f68(*(int *)(param_1 + 0x144) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x148));
  }
  return;
}
