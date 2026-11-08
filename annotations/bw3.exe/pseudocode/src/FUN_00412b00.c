// Name: FUN_00412b00
// Address: 00412b00
// Address Range: [[00412b00, 00412bbd]]
// Convention: unknown
// Signature: void FUN_00412b00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412b00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 5 + 0xc;
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = iVar1 + 1;
      if (param_2 * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != *(int *)(param_1 + 0x20));
  }
  iVar1 = param_2 * 4 + param_1;
  if (DAT_007dffb8 < _DAT_01c5fadc) {
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
    *(uint *)(param_1 + 0x34) = 1;
    if (4 < *(int *)(iVar1 + 0x38)) {
      *(uint *)(iVar1 + 0x38) = 4;
    }
  }
  else {
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + -1;
    *(uint *)(param_1 + 0x34) = 1;
    if (*(int *)(iVar1 + 0x38) < 0) {
      *(uint *)(iVar1 + 0x38) = 0;
    }
  }
  DAT_007dffb8 = _DAT_01c5fadc;
  iVar1 = *(int *)(param_2 * 4 + param_1 + 0x38);
  if ((iVar1 < 4) && (0 < iVar1)) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x38 + param_2 * 4) != 4) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
