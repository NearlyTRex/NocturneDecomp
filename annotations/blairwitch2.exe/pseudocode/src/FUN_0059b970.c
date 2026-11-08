// Name: FUN_0059b970
// Address: 0059b970
// Address Range: [[0059b970, 0059ba0f]]
// Convention: unknown
// Signature: void FUN_0059b970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b970(int param_1)

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
  *(uint *)(param_1 + 0x74 + iVar1 * 0x2c) = 0;
  if (_DAT_026677e4 < _DAT_01c2a37c) {
    iVar1 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (2 < iVar1) {
      *(uint *)(param_1 + 0x30) = 2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30) + -1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 0) {
      *(uint *)(param_1 + 0x30) = 0;
    }
  }
  _DAT_026677e4 = _DAT_01c2a37c;
  if ((*(int *)(param_1 + 0x30) < 2) && (0 < *(int *)(param_1 + 0x30))) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
