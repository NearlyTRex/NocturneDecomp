// Name: engine_mini3d.cpp_FUN_004f6560
// Address: 004f6560
// Address Range: [[004f6560, 004f6674]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f6560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f6560(void)

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
  if (0 < (int)_DAT_01d09b8c) {
    puVar5 = (uint *)&DAT_01d0ab98;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d09b8c) {
        uVar2 = uVar2 ^ _DAT_01d09b8c;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = (float)puVar5[2] <= (float)puVar5[1];
      if (*(float *)(&DAT_01d0aba0 + iVar3) <= *(float *)(&DAT_01d0ab9c + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar4 = _DAT_01d09b90 * 0x40;
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        puVar7 = puVar5;
        puVar8 = (uint *)(&DAT_01d0b398 + iVar4);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_FUN_004f6150
                  (&DAT_01d0ab98 + iVar3,puVar5,&DAT_01d0b398 + _DAT_01d09b90 * 0x40);
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        break;
      case 2:
        iVar6 = _DAT_01d09b90 * 0x40;
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        puVar7 = puVar5;
        puVar8 = (uint *)(&DAT_01d0b398 + iVar6);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        engine_mini3d_cpp_FUN_004f6150
                  (puVar5,&DAT_01d0ab98 + iVar3,&DAT_01d0b398 + _DAT_01d09b90 * 0x40);
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
      }
      local_18 = local_18 + 1;
      puVar5 = puVar5 + 0x10;
    } while (local_18 < (int)_DAT_01d09b8c);
  }
  return;
}
