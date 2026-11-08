// Name: FUN_00467f70
// Address: 00467f70
// Address Range: [[00467f70, 00468235]]
// Convention: unknown
// Signature: void FUN_00467f70(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467f70(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = _DAT_01c35e54;
  uVar3 = _DAT_01c35e50;
  uVar2 = _DAT_01c35e4c;
  uVar1 = _DAT_01c35e48;
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  param_6 = param_6 + *(int *)(param_1 + 0xc);
  _DAT_01c35e48 = *(uint *)(param_1 + 0x10);
  _DAT_01c35e50 = *(uint *)(param_1 + 0x18);
  _DAT_01c35e4c = *(uint *)(param_1 + 0x14);
  _DAT_01c35e54 = *(uint *)(param_1 + 0x1c);
  if (_DAT_01ba5c30 == 0) {
    uVar5 = FUN_00402800();
    uVar6 = FUN_00402840();
    FUN_00402830();
    FUN_00402850(_DAT_01ba5c2c);
    switch(param_7) {
    case 1:
      FUN_00402540(param_2,param_3,param_5);
      break;
    case 2:
      FUN_00402600(param_2,param_3,param_5);
      break;
    case 3:
      param_5 = param_5 + -5;
    case 0:
      goto LAB_00468187;
    case 4:
      FUN_00402600(param_2,param_3,param_5 + -5);
      break;
    case 5:
      FUN_004026d0(param_2,param_3,param_4,param_5);
      break;
    case 6:
      param_5 = (param_5 + -10 + param_6) / 2;
LAB_00468187:
      FUN_00402440(param_2,param_3,param_5);
      break;
    case 7:
      FUN_004026d0(param_2,param_3,param_4,(param_5 + -10 + param_6) / 2);
    }
    FUN_00402850(uVar6);
    FUN_00402810(uVar5);
    _DAT_01c35e48 = uVar1;
    _DAT_01c35e4c = uVar2;
    _DAT_01c35e50 = uVar3;
    _DAT_01c35e54 = uVar4;
    return;
  }
  uVar5 = FUN_004a96e0();
  FUN_004a9700(_DAT_01ba5c28,uVar5);
  switch(param_7) {
  case 0:
    goto LAB_0046803a;
  case 1:
    FUN_004a91a0(_DAT_01ba5c30,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 2:
    FUN_004a92a0(_DAT_01ba5c30,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 3:
    param_5 = param_5 - *(int *)(_DAT_01ba5c30 + 0x41f0) / 2;
    goto LAB_0046803a;
  case 4:
    FUN_004a92a0(_DAT_01ba5c30,param_3,param_5 - *(int *)(_DAT_01ba5c30 + 0x41f0) / 2,0xfffffffd,
                 0xffffffff,param_2);
    break;
  case 5:
    FUN_004a93a0(_DAT_01ba5c30,param_3,param_4,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 6:
    param_5 = ((param_5 + param_6 + 1) - *(int *)(_DAT_01ba5c30 + 0x41f0)) / 2;
LAB_0046803a:
    FUN_004a90b0(_DAT_01ba5c30,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 7:
    FUN_004a93a0(_DAT_01ba5c30,param_3,param_4,
                 ((param_5 + param_6 + 1) - *(int *)(_DAT_01ba5c30 + 0x41f0)) / 2,0xfffffffd,
                 0xffffffff,param_2);
  }
  FUN_004a9700(uVar5);
  _DAT_01c35e48 = uVar1;
  _DAT_01c35e50 = uVar3;
  _DAT_01c35e4c = uVar2;
  _DAT_01c35e54 = uVar4;
  return;
}
