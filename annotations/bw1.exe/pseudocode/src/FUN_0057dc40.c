// Name: FUN_0057dc40
// Address: 0057dc40
// Address Range: [[0057dc40, 0057dca3]]
// Convention: unknown
// Signature: undefined4 FUN_0057dc40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057dc40(void)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  
  if (_DAT_01c50948 != 0) {
    uVar2 = FUN_00582790();
    return uVar2;
  }
  iVar5 = 0;
  do {
    _DAT_00623de4 = DAT_00623ddc;
    puVar6 = *(ulonglong **)(&DAT_01c4354c + iVar5 * 4);
    uVar3 = (uint)(DAT_0061b498 * DAT_0061b4a0) >> 3;
    do {
      *puVar6 = _DAT_00623de4;
      puVar6[1] = _DAT_00623de4;
      puVar6[2] = _DAT_00623de4;
      puVar6[3] = _DAT_00623de4;
      puVar6 = puVar6 + 4;
      uVar4 = uVar3 - 0x20;
      bVar1 = 0x1f < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < DAT_0061b49c);
  return in_EAX;
}
