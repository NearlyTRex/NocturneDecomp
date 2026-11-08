// Name: FUN_0047baf0
// Address: 0047baf0
// Address Range: [[0047baf0, 0047bbc5]]
// Convention: unknown
// Signature: void FUN_0047baf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047baf0(void)

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
  if ((_DAT_01c37788 != 0) && (_DAT_01c2a38c != 0)) {
    if (0 < DAT_006141bc) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 4;
        *(uint *)((int)local_12c8 + iVar2) = *(uint *)(&DAT_01c2a38c + iVar2);
        iVar2 = iVar1;
      } while (iVar1 < DAT_006141bc * 4);
    }
    iVar2 = FUN_0055f500();
    if (iVar2 != 0) {
      iVar2 = DAT_006141b8 * DAT_006141c0 >> 0x1f;
      uVar3 = (int)((DAT_006141b8 * DAT_006141c0 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
      iVar2 = 0;
      if (0 < DAT_006141bc) {
        iVar1 = 0;
        do {
          if ((*(uint **)(&DAT_01c2a38c + iVar1) != (uint *)0x0) &&
             (*(int *)((int)local_12c8 + iVar1) != 0)) {
            puVar5 = *(uint **)(&DAT_01c2a38c + iVar1);
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
        } while (iVar2 < DAT_006141bc);
      }
      FUN_0055f550(1);
    }
  }
  return;
}
