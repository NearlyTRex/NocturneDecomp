// Name: FUN_004ce900
// Address: 004ce900
// Address Range: [[004ce900, 004ce948]]
// Convention: unknown
// Signature: int FUN_004ce900(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ce900(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01d276b4 + 1;
  iVar1 = _DAT_01d276b4 * 0x48 + 0x1d276bc;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01d276b8) {
    _DAT_01d276b4 = iVar2;
    return iVar1;
  }
  _DAT_01d276b8 = _DAT_01d276b8 + 1;
  _DAT_01d276b4 = iVar2;
  return iVar1;
}
