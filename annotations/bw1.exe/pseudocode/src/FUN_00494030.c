// Name: FUN_00494030
// Address: 00494030
// Address Range: [[00494030, 00494105]]
// Convention: unknown
// Signature: void FUN_00494030(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494030(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_12c8 [1200];
  
  bVar7 = 0;
  if ((_DAT_01c50948 != 0) && (_DAT_01c4354c != 0)) {
    if (0 < DAT_0061b49c) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 4;
        *(uint *)((int)local_12c8 + iVar2) = *(uint *)(&DAT_01c4354c + iVar2);
        iVar2 = iVar1;
      } while (iVar1 < DAT_0061b49c * 4);
    }
    iVar2 = FUN_00581f50();
    if (iVar2 != 0) {
      iVar2 = DAT_0061b498 * DAT_0061b4a0 >> 0x1f;
      uVar3 = (int)((DAT_0061b498 * DAT_0061b4a0 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
      iVar2 = 0;
      if (0 < DAT_0061b49c) {
        iVar1 = 0;
        do {
          if ((*(uint **)(&DAT_01c4354c + iVar1) != (uint *)0x0) &&
             (*(int *)((int)local_12c8 + iVar1) != 0)) {
            puVar5 = *(uint **)(&DAT_01c4354c + iVar1);
            puVar6 = *(uint **)((int)local_12c8 + iVar1);
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(byte *)puVar6 = *(byte *)puVar5;
              puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
              puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar2 < DAT_0061b49c);
      }
      FUN_00581fa0(1);
    }
  }
  return;
}
