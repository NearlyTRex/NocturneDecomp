// Name: FUN_00512200
// Address: 00512200
// Address Range: [[00512200, 005123d0]]
// Convention: unknown
// Signature: void FUN_00512200(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512200(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar4 = 0;
  iVar1 = FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x4c0) < 2) && (*(int *)(param_1 + 0x4c8) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    if ((*(int *)(param_1 + 0x2d4) == 3) || (*(int *)(param_1 + 0x2d4) == 4)) {
      return;
    }
    iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x3b8);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x354);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x4c8) == 0) {
      *(uint *)(param_1 + 0x4c0) = 3;
    }
    else {
      *(uint *)(param_1 + 0x724) = 1;
    }
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_2c);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x514) == 0) || (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 != 0)) {
      FUN_00462540(param_1 + 0x158,0,0xffffffff);
      FUN_00408830(param_1);
      return;
    }
    *(uint *)(0x01ED78C8 + 0x15ac88) = 1;
    iStack_14 = (int)ROUND(*(float *)(param_1 + 0x20) * _DAT_005e32e0);
    iStack_10 = (int)ROUND(*(float *)(param_1 + 0x24) * _DAT_005e32e0);
    iStack_c = (int)ROUND(*(float *)(param_1 + 0x28) * _DAT_005e32e0);
    _DAT_01547200 = (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 8))(DAT_007e2a54,&iStack_14,0);
    FUN_00462540(param_1 + 0x158,0,0xffffffff);
    *(uint *)(0x01ED78C8 + 0x15ac88) = 0;
  }
  FUN_00408830(param_1);
  return;
}
