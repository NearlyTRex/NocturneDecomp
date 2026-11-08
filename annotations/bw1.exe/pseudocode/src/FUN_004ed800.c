// Name: FUN_004ed800
// Address: 004ed800
// Address Range: [[004ed800, 004ed84f]]
// Convention: unknown
// Signature: undefined4 FUN_004ed800(int param_1)

#include "nocturne.h"

uint FUN_004ed800(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1fe8c) != 0) {
    iVar1 = FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1fe6c) == 4)) {
      iVar1 = FUN_00524770(param_1 + 0x158);
      if (*(int *)(iVar1 + 0x24) == 10) {
        return 0;
      }
    }
  }
  uVar2 = FUN_00531b10(param_1);
  return uVar2;
}
