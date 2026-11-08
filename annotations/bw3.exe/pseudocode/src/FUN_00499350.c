// Name: FUN_00499350
// Address: 00499350
// Address Range: [[00499350, 0049959e]]
// Convention: unknown
// Signature: void FUN_00499350(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499350(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte auStack_54 [4];
  uint uStack_50;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x48) = 1;
    *(uint *)(param_1 + 0x50) = 0;
  }
  else {
    lVar1 = (longlong)*(int *)(param_1 + 0x44) * (longlong)_DAT_01c5fad0;
    iVar3 = *(int *)(param_1 + 0x40) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  FUN_00509f30(param_1);
  iVar3 = _DAT_01c5fad0 / 2;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)((_DAT_01c5fad0 + (_DAT_01c5fad0 >> 0x1f) * -4) -
             (uint)((_DAT_01c5fad0 >> 0x1f) << 1 < 0)) >> 2);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = param_1 + 100;
    FUN_0045aae0(iVar3,param_1);
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0xa0) = iVar4;
    iVar4 = (iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0);
    iVar5 = iVar4 >> 0x1f;
    *(char *)(param_1 + 0x80) =
         (char)((int)(((iVar4 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
    FUN_0045ab30(iVar3,0x41000000);
    iVar4 = 0x01ED78C8;
    *(uint *)(param_1 + 0x84) = 0;
    FUN_005372f0(iVar4,iVar3);
    iVar3 = *(int *)(param_1 + 0x50) + _DAT_01c5fad0;
    *(int *)(param_1 + 0x50) = iVar3;
    uVar2 = 0x01C73654;
    if (0x1000 < iVar3) {
      *(int *)(param_1 + 0x50) = iVar3 + -0x1000;
      FUN_004a2560(uVar2,param_1,0x40000000,0,0x4000);
      FUN_004a23c0(0x01C73654,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_004a23c0(0x01C73654,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_004a23c0(0x01C73654,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_004a23c0(0x01C73654,param_1,0,0x20000,0x10000,0,0xffff);
    }
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    uStack_18 = 0x41a00000;
    uStack_14 = 0x40800000;
  }
  else if (*(int *)(param_1 + 0x4c) == 2) {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  else {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(0x01ED78C8 + 0x14f0a8) <= iVar3) break;
    iVar5 = *(int *)(0x01ED78C8 + 0x14f0ac + iVar4);
    FUN_0042abb0(auStack_54);
    uStack_50 = uStack_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar5 + 0x154) + 0x100))(iVar5,param_1,uStack_14,auStack_54);
  }
  return;
}
