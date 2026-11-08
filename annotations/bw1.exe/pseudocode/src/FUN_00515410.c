// Name: FUN_00515410
// Address: 00515410
// Address Range: [[00515410, 00515528]]
// Convention: unknown
// Signature: void FUN_00515410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515410(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int local_18;
  
  bVar9 = 0;
  local_18 = 0;
  if (0 < (int)_DAT_01d227f4) {
    puVar5 = (uint *)&DAT_01d23ffc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d227f4) {
        uVar2 = uVar2 ^ _DAT_01d227f4;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = (float)puVar5[1] <= -(float)puVar5[2];
      if (*(float *)(&DAT_01d24000 + iVar3) <= -*(float *)(&DAT_01d24004 + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar4 = _DAT_01d227f8 * 0x40;
        _DAT_01d227f8 = _DAT_01d227f8 + 1;
        puVar7 = puVar5;
        puVar8 = (uint *)(&DAT_01d247fc + iVar4);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        break;
      case 1:
        FUN_00514fa0(&DAT_01d23ffc + iVar3,puVar5,&DAT_01d247fc + _DAT_01d227f8 * 0x40);
        _DAT_01d227f8 = _DAT_01d227f8 + 1;
        break;
      case 2:
        iVar6 = _DAT_01d227f8 * 0x40;
        _DAT_01d227f8 = _DAT_01d227f8 + 1;
        puVar7 = puVar5;
        puVar8 = (uint *)(&DAT_01d247fc + iVar6);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        FUN_00514fa0(puVar5,&DAT_01d23ffc + iVar3,&DAT_01d247fc + _DAT_01d227f8 * 0x40);
        _DAT_01d227f8 = _DAT_01d227f8 + 1;
      }
      local_18 = local_18 + 1;
      puVar5 = puVar5 + 0x10;
    } while (local_18 < (int)_DAT_01d227f4);
  }
  return;
}
