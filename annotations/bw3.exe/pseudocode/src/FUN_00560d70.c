// Name: FUN_00560d70
// Address: 00560d70
// Address Range: [[00560d70, 00560dd3]]
// Convention: unknown
// Signature: undefined4 FUN_00560d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560d70(void)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  
  if (_DAT_01c6cee8 != 0) {
    uVar2 = FUN_00566060();
    return uVar2;
  }
  iVar5 = 0;
  do {
    _DAT_00604d24 = DAT_00604d1c;
    puVar6 = *(ulonglong **)(&DAT_01c5faec + iVar5 * 4);
    uVar3 = (uint)(DAT_005fba18 * DAT_005fba20) >> 3;
    do {
      *puVar6 = _DAT_00604d24;
      puVar6[1] = _DAT_00604d24;
      puVar6[2] = _DAT_00604d24;
      puVar6[3] = _DAT_00604d24;
      puVar6 = puVar6 + 4;
      uVar4 = uVar3 - 0x20;
      bVar1 = 0x1f < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < DAT_005fba1c);
  return in_EAX;
}
