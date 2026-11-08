// Name: FUN_004c9a80
// Address: 004c9a80
// Address Range: [[004c9a80, 004c9ac2]]
// Convention: unknown
// Signature: int FUN_004c9a80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9a80(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cdde3c + 1;
  iVar1 = _DAT_01cdde3c * 0x28 + 0x1cdde44;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < _DAT_01cdde40) {
    _DAT_01cdde3c = iVar2;
    return iVar1;
  }
  _DAT_01cdde40 = _DAT_01cdde40 + 1;
  _DAT_01cdde3c = iVar2;
  return iVar1;
}
