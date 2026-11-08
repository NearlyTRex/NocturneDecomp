// Name: FUN_0054cf40
// Address: 0054cf40
// Address Range: [[0054cf40, 0054cf7f]]
// Convention: unknown
// Signature: int FUN_0054cf40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054cf40(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_02026358 = 0;
  iVar2 = 0x01CCF390;
  if (*(int *)(0x01CCF390 + 0x244) == 0) {
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar2 = _DAT_01d06ab4 * 4;
    if ((iVar1 != 0) && (iVar2 = iVar1, *(int *)(iVar1 + 0x1ff60) != 0)) {
      _DAT_02026358 = *(uint *)(iVar1 + 0x1ff68);
    }
  }
  return iVar2;
}
