// Name: FUN_004e5fa0
// Address: 004e5fa0
// Address Range: [[004e5fa0, 004e5fe6]]
// Convention: unknown
// Signature: int FUN_004e5fa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e5fa0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cd56ac + 1;
  iVar1 = _DAT_01cd56ac * 0x44 + 0x1cd56b4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01cd56b0) {
    _DAT_01cd56ac = iVar2;
    return iVar1;
  }
  _DAT_01cd56b0 = _DAT_01cd56b0 + 1;
  _DAT_01cd56ac = iVar2;
  return iVar1;
}
