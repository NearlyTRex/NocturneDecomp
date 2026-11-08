// Name: FUN_0042d500
// Address: 0042d500
// Address Range: [[0042d500, 0042d85f]]
// Convention: unknown
// Signature: void FUN_0042d500(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d500(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_0046d540(DAT_005f2afc);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0xcd90) == -1)) {
    return;
  }
  uVar4 = FUN_0054ea40(param_1 + 0x158);
  if (*(int *)(param_1 + 0xcd90) == -2) {
    iVar3 = FUN_0054a310(uVar4,&DAT_005b8276,0);
    *(int *)(param_1 + 0xcd90) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = FUN_0054a310(uVar4,&DAT_005b827b,0);
    *(int *)(param_1 + 0xcdb4) = iVar3;
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0xcd90) = 0xffffffff;
      return;
    }
    uVar5 = FUN_0054a310(uVar4,&DAT_005b827e,1);
    *(uint *)(param_1 + 0xcdb8) = uVar5;
    uVar5 = FUN_0054a310(uVar4,&DAT_005b8281,1);
    *(uint *)(param_1 + 0xcdbc) = uVar5;
    uVar5 = FUN_0054a310(uVar4,&DAT_005b8284,1);
    *(uint *)(param_1 + 0xcdc0) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e1_left",0);
    *(uint *)(param_1 + 0xcd94) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e2_left",0);
    *(uint *)(param_1 + 0xcd98) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e3_left",0);
    *(uint *)(param_1 + 0xcd9c) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e4_left",0);
    *(uint *)(param_1 + 0xcda0) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e1_right",0);
    *(uint *)(param_1 + 0xcda4) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e2_right",0);
    *(uint *)(param_1 + 0xcda8) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e3_right",0);
    *(uint *)(param_1 + 0xcdac) = uVar5;
    uVar5 = FUN_0054a310(uVar4,"e4_right",0);
    *(uint *)(param_1 + 0xcdb0) = uVar5;
  }
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0xcd94) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xcd94) * 4) = 0;
    }
    if (*(int *)(iVar3 + 0xcda4) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xcda4) * 4) = 0;
    }
    piVar1 = (int *)(iVar3 + 0xcdb4);
    iVar3 = iVar3 + 4;
    *(uint *)(param_1 + 0x2298 + *piVar1 * 4) = 0;
  } while (iVar3 != param_1 + 0x10);
  fVar2 = (float)_DAT_01c5fad0 * _DAT_005b82ce;
  *(float *)(param_1 + 0xcd88) = *(float *)(param_1 + 0xcd88) - fVar2;
  if (*(int *)(param_1 + 0xcd84) == 1) {
    if (*(float *)(param_1 + 0xcd88) <= 0.0) {
      uVar5 = FUN_0040ce40(0x40a00000,0x41000000);
      *(uint *)(param_1 + 0xcd78) = 0;
      *(uint *)(param_1 + 0xcd7c) = 0;
      *(uint *)(param_1 + 0xcd84) = 0;
      *(uint *)(param_1 + 0xcd88) = uVar5;
    }
  }
  else if (*(float *)(param_1 + 0xcd88) <= 0.0) {
    *(uint *)(param_1 + 0xcd7c) = 3;
    *(uint *)(param_1 + 0xcd84) = 1;
    *(uint *)(param_1 + 0xcd88) = 0x3d4ccccd;
    *(uint *)(param_1 + 0xcd78) = 3;
  }
  *(float *)(param_1 + 0xcd8c) = *(float *)(param_1 + 0xcd8c) - fVar2;
  if (*(float *)(param_1 + 0xcd8c) <= 0.0) {
    iVar3 = *(int *)(0x01ED73E0 + 4);
    if (param_1 == iVar3) {
      *(uint *)(iVar3 + 0xcd8c) = 0x3e19999a;
      uVar6 = FUN_005a35cc();
      *(uint *)(iVar3 + 0xcd80) = uVar6 & 3;
    }
    else {
      *(uint *)(param_1 + 0xcd80) = 0;
      *(uint *)(param_1 + 0xcd8c) = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xcd78) * 4 + param_1 + 0xcd94);
  if (iVar3 != -1) {
    FUN_0042d390(uVar4,*(uint *)(param_1 + 0xcd90),iVar3);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xcd7c) * 4 + param_1 + 0xcda4);
  if (iVar3 != -1) {
    FUN_0042d390(uVar4,*(uint *)(param_1 + 0xcd90),iVar3);
  }
  FUN_0042d390(uVar4,*(uint *)(param_1 + 0xcd90),
               *(uint *)(param_1 + 0xcdb4 + *(int *)(param_1 + 0xcd80) * 4));
  return;
}
