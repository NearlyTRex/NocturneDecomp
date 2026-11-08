// Name: FUN_00480480
// Address: 00480480
// Address Range: [[00480480, 00480745]]
// Convention: unknown
// Signature: void FUN_00480480(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480480(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = _DAT_01c4f014;
  uVar3 = _DAT_01c4f010;
  uVar2 = _DAT_01c4f00c;
  uVar1 = _DAT_01c4f008;
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  param_6 = param_6 + *(int *)(param_1 + 0xc);
  _DAT_01c4f008 = *(uint *)(param_1 + 0x10);
  _DAT_01c4f010 = *(uint *)(param_1 + 0x18);
  _DAT_01c4f00c = *(uint *)(param_1 + 0x14);
  _DAT_01c4f014 = *(uint *)(param_1 + 0x1c);
  if (_DAT_01bc11ec == 0) {
    uVar5 = FUN_00402800();
    uVar6 = FUN_00402840();
    FUN_00402830();
    FUN_00402850(_DAT_01bc11e8);
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
      goto LAB_00480697;
    case 4:
      FUN_00402600(param_2,param_3,param_5 + -5);
      break;
    case 5:
      FUN_004026d0(param_2,param_3,param_4,param_5);
      break;
    case 6:
      param_5 = (param_5 + -10 + param_6) / 2;
LAB_00480697:
      FUN_00402440(param_2,param_3,param_5);
      break;
    case 7:
      FUN_004026d0(param_2,param_3,param_4,(param_5 + -10 + param_6) / 2);
    }
    FUN_00402850(uVar6);
    FUN_00402810(uVar5);
    _DAT_01c4f008 = uVar1;
    _DAT_01c4f00c = uVar2;
    _DAT_01c4f010 = uVar3;
    _DAT_01c4f014 = uVar4;
    return;
  }
  uVar5 = FUN_004c2690();
  FUN_004c26b0(_DAT_01bc11e4,uVar5);
  switch(param_7) {
  case 0:
    goto LAB_0048054a;
  case 1:
    FUN_004c2150(_DAT_01bc11ec,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 2:
    FUN_004c2250(_DAT_01bc11ec,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 3:
    param_5 = param_5 - *(int *)(_DAT_01bc11ec + 0x41f0) / 2;
    goto LAB_0048054a;
  case 4:
    FUN_004c2250(_DAT_01bc11ec,param_3,param_5 - *(int *)(_DAT_01bc11ec + 0x41f0) / 2,0xfffffffd,
                 0xffffffff,param_2);
    break;
  case 5:
    FUN_004c2350(_DAT_01bc11ec,param_3,param_4,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 6:
    param_5 = ((param_5 + param_6 + 1) - *(int *)(_DAT_01bc11ec + 0x41f0)) / 2;
LAB_0048054a:
    FUN_004c2060(_DAT_01bc11ec,param_3,param_5,0xfffffffd,0xffffffff,param_2);
    break;
  case 7:
    FUN_004c2350(_DAT_01bc11ec,param_3,param_4,
                 ((param_5 + param_6 + 1) - *(int *)(_DAT_01bc11ec + 0x41f0)) / 2,0xfffffffd,
                 0xffffffff,param_2);
  }
  FUN_004c26b0(uVar5);
  _DAT_01c4f008 = uVar1;
  _DAT_01c4f010 = uVar3;
  _DAT_01c4f00c = uVar2;
  _DAT_01c4f014 = uVar4;
  return;
}
