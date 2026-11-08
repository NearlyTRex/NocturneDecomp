// Name: FUN_0052bc60
// Address: 0052bc60
// Address Range: [[0052bc60, 0052bc9f]]
// Convention: unknown
// Signature: int FUN_0052bc60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052bc60(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_0200a3a4 = 0;
  iVar2 = 0x01CB6900;
  if (*(int *)(0x01CB6900 + 0x244) == 0) {
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar2 = _DAT_01cedef4 * 4;
    if ((iVar1 != 0) && (iVar2 = iVar1, *(int *)(iVar1 + 0x255f0) != 0)) {
      _DAT_0200a3a4 = *(uint *)(iVar1 + 0x255f8);
    }
  }
  return iVar2;
}
