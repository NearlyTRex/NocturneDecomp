// Name: FUN_00412a60
// Address: 00412a60
// Address Range: [[00412a60, 00412aff]]
// Convention: unknown
// Signature: void FUN_00412a60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412a60(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)(param_1 + 0x20) != 2) {
    do {
      iVar1 = iVar1 + 1;
      if (4 < iVar1) {
        return;
      }
    } while (iVar1 != *(int *)(param_1 + 0x20));
  }
  *(uint *)(param_1 + 0x7c + iVar1 * 0x2c) = 0;
  if (DAT_007dffb8 < _DAT_01c5fadc) {
    iVar1 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x34) = iVar1;
    if (2 < iVar1) {
      *(uint *)(param_1 + 0x34) = 2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 < 0) {
      *(uint *)(param_1 + 0x34) = 0;
    }
  }
  DAT_007dffb8 = _DAT_01c5fadc;
  if ((*(int *)(param_1 + 0x34) < 2) && (0 < *(int *)(param_1 + 0x34))) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x34) != 2) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
