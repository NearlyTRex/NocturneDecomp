// Name: FUN_00566260
// Address: 00566260
// Address Range: [[00566260, 00566341]]
// Convention: unknown
// Signature: undefined4 FUN_00566260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566260(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint local_12c4 [1200];
  
  bVar8 = 0;
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  if ((param_1 == 0) && (_DAT_02cf612c == 0)) {
    puVar6 = (uint *)&DAT_01c5faec;
    puVar7 = local_12c4;
    for (iVar3 = 0x4b0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    iVar3 = DAT_005fba18 * DAT_005fba20 >> 0x1f;
    uVar1 = (int)((DAT_005fba18 * DAT_005fba20 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
    FUN_0057a3c0();
    FUN_00565820();
    if (0 < DAT_005fba1c) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        puVar6 = *(uint **)((int)local_12c4 + iVar5);
        puVar7 = *(uint **)(&DAT_01c5faec + iVar5);
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(byte *)puVar7 = *(byte *)puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < DAT_005fba1c);
    }
    FUN_00565870(0);
    FUN_0057a4b0();
  }
  _DAT_02cf612c = 0;
  uVar2 = (*_DAT_02cf5fec)();
  return uVar2;
}
