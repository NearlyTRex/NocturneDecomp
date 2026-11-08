// Name: FUN_00442820
// Address: 00442820
// Address Range: [[0043fcd1, 0043fcd8] [00442820, 00442be2]]
// Convention: unknown
// Signature: void FUN_00442820(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442820(int param_1)

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
  
  _DAT_01465924 = _DAT_01465924 + _DAT_01c2a370 * 4;
  iVar9 = 0;
  if (0x10000 < _DAT_01465924) {
    _DAT_01465924 = _DAT_01465924 + -0x10000;
    _DAT_01465920 = _DAT_01465920 + 1;
    if (0xf < _DAT_01465920) {
      _DAT_01465920 = 0;
    }
    FUN_0043b380(0x146592c,_DAT_01465920,_DAT_01465924);
  }
  FUN_0043fef0(param_1);
  if (DAT_006141c0 == 0x20) {
    _DAT_01c38b5c =
         (*(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff) << (DAT_01c3582c & 0x1f) |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << (DAT_01c35814 & 0x1f) |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << (DAT_01c35820 & 0x1f);
  }
  else {
    _DAT_01c38b5c =
         (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << 0x10 |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << 8 |
         *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff;
  }
  if (DAT_006141c0 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c2a38c + (uVar8 - _DAT_01326d1c) * 4) + _DAT_01326d18 * 2;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_01308800 & 0x1f)) * 0x140;
      puVar5 = &DAT_01326d20 + iVar4;
      iVar4 = iVar4 + 0xb07f58;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00471a60(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00471103(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00471fc4(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_00471650(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_01308804) {
        do {
          puVar1 = (uint *)(iVar4 + 0x1308810);
          if (uVar8 != *puVar1) goto LAB_004429bc;
          puVar2 = (uint *)(iVar4 + 0x1308808);
          puVar3 = (uint *)(iVar4 + 0x130880c);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_00443360(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_01308804);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004429bc:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)(param_1 + 0x148) + -1) {
      iVar6 = *(int *)(&DAT_01c2a38c + (uVar8 - _DAT_01326d1c) * 4) + _DAT_01326d18 * 4;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * uVar8 * 4;
      iVar4 = ((int)uVar8 >> (DAT_01308800 & 0x1f)) * 0x140;
      puVar5 = &DAT_01326d20 + iVar4;
      iVar4 = iVar4 + 0xb07f58;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_004708e1(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_0046f9bc(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          FUN_00470dd5(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          FUN_0046fe9a(iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x144));
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < _DAT_01308804) {
        do {
          puVar1 = (uint *)(iVar4 + 0x1308810);
          if (uVar8 != *puVar1) goto LAB_00442b33;
          puVar2 = (uint *)(iVar4 + 0x1308808);
          puVar3 = (uint *)(iVar4 + 0x130880c);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          FUN_004432c0(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar9 < _DAT_01308804);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00442b33:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
