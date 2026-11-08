// Name: FUN_00450020
// Address: 00450020
// Address Range: [[0044d4d1, 0044d4d8] [00450020, 004503e2]]
// Convention: unknown
// Signature: void FUN_00450020(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450020(int param_1)

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
  
  _DAT_0149d6d4 = _DAT_0149d6d4 + _DAT_01c5fad0 * 4;
  iVar9 = 0;
  if (0x10000 < _DAT_0149d6d4) {
    _DAT_0149d6d4 = _DAT_0149d6d4 + -0x10000;
    _DAT_0149d6d0 = _DAT_0149d6d0 + 1;
    if (0xf < _DAT_0149d6d0) {
      _DAT_0149d6d0 = 0;
    }
    FUN_00448b60(0x149d6dc,_DAT_0149d6d0,_DAT_0149d6d4);
  }
  FUN_0044d6f0(param_1);
  if (DAT_005fba20 == 0x20) {
    _DAT_01c6e2bc =
         (*(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff) << (DAT_01c6af8c & 0x1f) |
         (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << (DAT_01c6af74 & 0x1f) |
         (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << (DAT_01c6af80 & 0x1f);
  }
  else {
    _DAT_01c6e2bc =
         (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << 0x10 |
         (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << 8 |
         *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff;
  }
  if (DAT_005fba20 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c5faec + (uVar8 - _DAT_0135eacc) * 4) + _DAT_0135eac8 * 2;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_013405b0 & 0x1f)) * 0x140;
      puVar5 = &DAT_0135ead0 + iVar4;
      iVar4 = iVar4 + 0xb3fd08;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00472ad0(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00472173(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00473034(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_004726c0(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_013405b4) {
        do {
          puVar1 = (uint *)(iVar4 + 0x13405c0);
          if (uVar8 != *puVar1) goto LAB_004501bc;
          puVar2 = (uint *)(iVar4 + 0x13405b8);
          puVar3 = (uint *)(iVar4 + 0x13405bc);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_00450b60(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_013405b4);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004501bc:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c5faec + (uVar8 - _DAT_0135eacc) * 4) + _DAT_0135eac8 * 4;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_013405b0 & 0x1f)) * 0x140;
      puVar5 = &DAT_0135ead0 + iVar4;
      iVar4 = iVar4 + 0xb3fd08;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00471951(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00470a2c(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00471e45(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00470f0a(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_013405b4) {
        do {
          puVar1 = (uint *)(iVar4 + 0x13405c0);
          if (uVar8 != *puVar1) goto LAB_00450333;
          puVar2 = (uint *)(iVar4 + 0x13405b8);
          puVar3 = (uint *)(iVar4 + 0x13405bc);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_00450ac0(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_013405b4);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00450333:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
