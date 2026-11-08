// Name: FUN_0049caa0
// Address: 0049caa0
// Address Range: [[0049caa0, 0049ce34]]
// Convention: unknown
// Signature: void FUN_0049caa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049caa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_28;
  
  FUN_0049ce40(param_1);
  uVar11 = _DAT_01c3f5ac;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar10 = *(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x14);
  iVar9 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar12 + 1;
  iVar7 = iVar10 + 1;
  if (_DAT_01c3f544 == 0) {
    FUN_00403250(iVar3,iVar7,iVar6,iVar9,_DAT_01c3f5ac,_DAT_01c3f5b0);
  }
  else {
    uVar2 = _DAT_01c3f5b0;
    if (_DAT_01c3f544 != 0) {
      iVar1 = (_DAT_01c3f5b0 & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar1]);
      uVar2 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar2;
    FUN_00518290(iVar12,iVar10,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c3f544 != 0) {
      iVar4 = (uVar11 & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar11 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar11;
    FUN_00518010(iVar3,iVar7,iVar6,iVar9);
  }
  iVar4 = *(int *)(param_1 + 0x1c) + -1;
  iVar5 = *(int *)(param_1 + 0x20) + -1;
  iVar12 = *(int *)(param_1 + 0x18) + 1;
  iVar10 = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar7 = iVar10;
    local_28 = iVar4;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2c);
    iVar6 = iVar12;
    iVar3 = iVar5;
    local_28 = *(int *)(param_1 + 0x30);
  }
  if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_0049c500(iVar7,iVar6,local_28,iVar3,uVar8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_0049c500(iVar10,iVar12,iVar4,*(uint *)(param_1 + 0x24),uVar8);
    if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_0049c750(iVar10,iVar12,iVar4,*(uint *)(param_1 + 0x24),uVar8,0);
    if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_0049c500(iVar10,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8);
    if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_0049c750(iVar10,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8,1);
    return;
  }
  if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_0049c500(iVar10,iVar12,*(uint *)(param_1 + 0x24),iVar5,uVar8);
  if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_0049c750(iVar10,iVar12,*(uint *)(param_1 + 0x24),iVar5,uVar8,2);
  if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_0049c500(*(uint *)(param_1 + 0x28),iVar12,iVar4,iVar5,uVar8);
  if ((param_1 == _DAT_01c3f5d0) && (_DAT_01c3f5d4 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_0049c750(*(uint *)(param_1 + 0x28),iVar12,iVar4,iVar5,uVar8,3);
  return;
}
