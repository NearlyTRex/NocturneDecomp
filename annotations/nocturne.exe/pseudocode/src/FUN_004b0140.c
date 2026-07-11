// Name: FUN_004b0140
// Address: 004b0140
// Address Range: [[004b0140, 004b0186]]
// Convention: unknown
// Signature: int FUN_004b0140(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b0140(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c7ccec + 1;
  iVar1 = _DAT_01c7ccec * 0x44 + 0x1c7ccf4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01c7ccf0) {
    _DAT_01c7ccec = iVar2;
    return iVar1;
  }
  _DAT_01c7ccf0 = _DAT_01c7ccf0 + 1;
  _DAT_01c7ccec = iVar2;
  return iVar1;
}
