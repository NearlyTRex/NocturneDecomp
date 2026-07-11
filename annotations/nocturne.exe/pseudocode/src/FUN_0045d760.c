// Name: FUN_0045d760
// Address: 0045d760
// Address Range: [[0045d760, 0045da25]]
// Convention: unknown
// Signature: void FUN_0045d760(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d760(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = _DAT_01c00c64;
  uVar3 = _DAT_01c00c60;
  uVar2 = _DAT_01c00c5c;
  uVar1 = _DAT_01c00c58;
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  param_6 = param_6 + *(int *)(param_1 + 0xc);
  _DAT_01c00c58 = *(uint *)(param_1 + 0x10);
  _DAT_01c00c60 = *(uint *)(param_1 + 0x18);
  _DAT_01c00c5c = *(uint *)(param_1 + 0x14);
  _DAT_01c00c64 = *(uint *)(param_1 + 0x1c);
  if (_DAT_01b4d718 == 0) {
    uVar5 = FUN_00402e20();
    uVar6 = FUN_00402e60();
    FUN_00402e50();
    FUN_00402e70(_DAT_01b4d714);
    switch(param_7) {
    case 1:
      FUN_00402b60(param_2,param_3,param_5);
      break;
    case 2:
      FUN_00402c20(param_2,param_3,param_5);
      break;
    case 3:
      param_5 = param_5 + -5;
    case 0:
      goto LAB_0045d977;
    case 4:
      FUN_00402c20(param_2,param_3,param_5 + -5);
      break;
    case 5:
      FUN_00402cf0(param_2,param_3,param_4,param_5);
      break;
    case 6:
      param_5 = (param_5 + -10 + param_6) / 2;
LAB_0045d977:
      FUN_00402a60(param_2,param_3,param_5);
      break;
    case 7:
      FUN_00402cf0(param_2,param_3,param_4,(param_5 + -10 + param_6) / 2);
    }
    FUN_00402e70(uVar6);
    FUN_00402e30(uVar5);
    _DAT_01c00c58 = uVar1;
    _DAT_01c00c5c = uVar2;
    _DAT_01c00c60 = uVar3;
    _DAT_01c00c64 = uVar4;
    return;
  }
  uVar5 = FUN_00491140();
  FUN_00491150(_DAT_01b4d710,uVar5);
  switch(param_7) {
  case 0:
    goto LAB_0045d82a;
  case 1:
    FUN_00490be0(_DAT_01b4d718,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 2:
    FUN_00490ce0(_DAT_01b4d718,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 3:
    param_5 = param_5 - *(int *)(_DAT_01b4d718 + 0x3170) / 2;
    goto LAB_0045d82a;
  case 4:
    FUN_00490ce0(_DAT_01b4d718,param_3,param_5 - *(int *)(_DAT_01b4d718 + 0x3170) / 2,0xfffffffd,
                 0xffffffff,param_2);
    break;
  case 5:
    FUN_00490de0(_DAT_01b4d718,param_3,param_4,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 6:
    param_5 = ((param_5 + param_6 + 1) - *(int *)(_DAT_01b4d718 + 0x3170)) / 2;
LAB_0045d82a:
    FUN_00490af0(_DAT_01b4d718,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 7:
    FUN_00490de0(_DAT_01b4d718,param_3,param_4,
                 ((param_5 + param_6 + 1) - *(int *)(_DAT_01b4d718 + 0x3170)) / 2,0xfffffffd,
                 0xffffffff,param_2);
  }
  FUN_00491150(uVar5);
  _DAT_01c00c58 = uVar1;
  _DAT_01c00c60 = uVar3;
  _DAT_01c00c5c = uVar2;
  _DAT_01c00c64 = uVar4;
  return;
}
