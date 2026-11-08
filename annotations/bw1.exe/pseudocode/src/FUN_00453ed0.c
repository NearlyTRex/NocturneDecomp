// Name: FUN_00453ed0
// Address: 00453ed0
// Address Range: [[00451391, 00451398] [00453ed0, 00454292]]
// Convention: unknown
// Signature: void FUN_00453ed0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453ed0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  _DAT_01480e24 = _DAT_01480e24 + _DAT_01c43530 * 4;
  iVar9 = 0;
  if (0x10000 < _DAT_01480e24) {
    _DAT_01480e24 = _DAT_01480e24 + -0x10000;
    _DAT_01480e20 = _DAT_01480e20 + 1;
    if (0xf < _DAT_01480e20) {
      _DAT_01480e20 = 0;
    }
    FUN_0044ca20(0x1480e2c,_DAT_01480e20,_DAT_01480e24);
  }
  FUN_004515b0(param_1);
  if (DAT_0061b4a0 == 0x20) {
    _DAT_01c51d1c =
         (*(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff) << (DAT_01c4e9ec & 0x1f) |
         (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << (DAT_01c4e9d4 & 0x1f) |
         (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << (DAT_01c4e9e0 & 0x1f);
  }
  else {
    _DAT_01c51d1c =
         (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << 0x10 |
         (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << 8 |
         *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff;
  }
  if (DAT_0061b4a0 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c4354c + (uVar8 - _DAT_0134221c) * 4) + _DAT_01342218 * 2;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_01323d00 & 0x1f)) * 0x140;
      puVar5 = &DAT_01342220 + iVar4;
      iVar4 = iVar4 + 0xb23458;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00489f50(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_004895f3(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_0048a4b4(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00489b40(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_01323d04) {
        do {
          puVar1 = (uint *)(iVar4 + 0x1323d10);
          if (uVar8 != *puVar1) goto LAB_0045406c;
          puVar2 = (uint *)(iVar4 + 0x1323d08);
          puVar3 = (uint *)(iVar4 + 0x1323d0c);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_00454a10(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_01323d04);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_0045406c:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c4354c + (uVar8 - _DAT_0134221c) * 4) + _DAT_01342218 * 4;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_01323d00 & 0x1f)) * 0x140;
      puVar5 = &DAT_01342220 + iVar4;
      iVar4 = iVar4 + 0xb23458;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00488dd1(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00487eac(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_004892c5(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_0048838a(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_01323d04) {
        do {
          puVar1 = (uint *)(iVar4 + 0x1323d10);
          if (uVar8 != *puVar1) goto LAB_004541e3;
          puVar2 = (uint *)(iVar4 + 0x1323d08);
          puVar3 = (uint *)(iVar4 + 0x1323d0c);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_00454970(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_01323d04);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004541e3:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
