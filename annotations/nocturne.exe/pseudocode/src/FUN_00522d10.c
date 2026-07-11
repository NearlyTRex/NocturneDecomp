// Name: FUN_00522d10
// Address: 00522d10
// Address Range: [[00522d10, 00522dfb]]
// Convention: unknown
// Signature: void FUN_00522d10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522d10(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar3 = _DAT_02dc78f0;
  dVar2 = _DAT_02dc78e8;
  dVar1 = _DAT_02dc78e0;
  if (DAT_005bea68 == 2) {
    dVar1 = _DAT_005bea88 * _DAT_005927c6;
    _DAT_02dc83d8 = _DAT_02dc78e0 - _DAT_02dc7910 * dVar1;
    _DAT_02dc8418 = _DAT_02dc78e8 - _DAT_02dc7918 * dVar1;
    _DAT_02dc8458 = _DAT_02dc78f0 - _DAT_02dc7920 * dVar1;
    _DAT_02dc83e0 = _DAT_02dc78e0 + _DAT_02dc7910 * dVar1;
    _DAT_02dc8420 = _DAT_02dc78e8 + _DAT_02dc7918 * dVar1;
    _DAT_02dc8460 = _DAT_02dc78f0 + _DAT_02dc7920 * dVar1;
    return;
  }
  if (0 < DAT_005bea68) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 8;
      *(double *)(&DAT_02dc83d8 + iVar4) = dVar1;
      *(double *)(&DAT_02dc8418 + iVar4) = dVar2;
      *(double *)(&DAT_02dc8458 + iVar4) = dVar3;
      iVar4 = iVar5;
    } while (iVar5 < DAT_005bea68 * 8);
  }
  return;
}
