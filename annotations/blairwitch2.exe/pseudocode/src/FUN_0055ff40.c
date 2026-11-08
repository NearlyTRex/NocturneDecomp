// Name: FUN_0055ff40
// Address: 0055ff40
// Address Range: [[0055ff40, 00560021]]
// Convention: unknown
// Signature: undefined4 FUN_0055ff40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055ff40(int param_1)

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
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  if ((param_1 == 0) && (_DAT_0264bd00 == 0)) {
    puVar6 = (uint *)&DAT_01c2a38c;
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
    iVar3 = DAT_006141b8 * DAT_006141c0 >> 0x1f;
    uVar1 = (int)((DAT_006141b8 * DAT_006141c0 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
    FUN_005890c0();
    FUN_0055f500();
    if (0 < DAT_006141bc) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        puVar6 = *(uint **)((int)local_12c4 + iVar5);
        puVar7 = *(uint **)(&DAT_01c2a38c + iVar5);
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
      } while (iVar3 < DAT_006141bc);
    }
    FUN_0055f550(0);
    FUN_00589170();
  }
  _DAT_0264bd00 = 0;
  uVar2 = (*_DAT_0264bbc0)();
  return uVar2;
}
