// Name: FUN_004c9790
// Address: 004c9790
// Address Range: [[004c9790, 004c97d6]]
// Convention: unknown
// Signature: int FUN_004c9790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9790(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cbcaf4 + 1;
  iVar1 = _DAT_01cbcaf4 * 0x44 + 0x1cbcafc;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01cbcaf8) {
    _DAT_01cbcaf4 = iVar2;
    return iVar1;
  }
  _DAT_01cbcaf8 = _DAT_01cbcaf8 + 1;
  _DAT_01cbcaf4 = iVar2;
  return iVar1;
}
