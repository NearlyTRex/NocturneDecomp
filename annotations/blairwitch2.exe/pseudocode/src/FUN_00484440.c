// Name: FUN_00484440
// Address: 00484440
// Address Range: [[00484440, 004847d4]]
// Convention: unknown
// Signature: void FUN_00484440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484440(int param_1)

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
  
  FUN_004847e0(param_1);
  uVar11 = _DAT_01c263ec;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar10 = *(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x14);
  iVar9 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar12 + 1;
  iVar7 = iVar10 + 1;
  if (_DAT_01c25f84 == 0) {
    FUN_00403250(iVar3,iVar7,iVar6,iVar9,_DAT_01c263ec,_DAT_01c263f0);
  }
  else {
    uVar2 = _DAT_01c263f0;
    if (_DAT_01c25f84 != 0) {
      iVar1 = (_DAT_01c263f0 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar1] << 8 | (uint)(byte)(&DAT_01c3583a)[iVar1]);
      uVar2 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar2;
    FUN_004f9340(iVar12,iVar10,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c25f84 != 0) {
      iVar4 = (uVar11 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar4] |
                   (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      uVar11 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar11;
    FUN_004f90d0(iVar3,iVar7,iVar6,iVar9);
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
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_00483ea0(iVar7,iVar6,local_28,iVar3,uVar8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00483ea0(iVar10,iVar12,iVar4,*(uint *)(param_1 + 0x24),uVar8);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_004840f0(iVar10,iVar12,iVar4,*(uint *)(param_1 + 0x24),uVar8,0);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00483ea0(iVar10,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_004840f0(iVar10,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8,1);
    return;
  }
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_00483ea0(iVar10,iVar12,*(uint *)(param_1 + 0x24),iVar5,uVar8);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_004840f0(iVar10,iVar12,*(uint *)(param_1 + 0x24),iVar5,uVar8,2);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_00483ea0(*(uint *)(param_1 + 0x28),iVar12,iVar4,iVar5,uVar8);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_004840f0(*(uint *)(param_1 + 0x28),iVar12,iVar4,iVar5,uVar8,3);
  return;
}
