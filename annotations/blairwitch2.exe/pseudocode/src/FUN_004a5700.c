// Name: FUN_004a5700
// Address: 004a5700
// Address Range: [[004a5700, 004a5f58]]
// Convention: unknown
// Signature: void FUN_004a5700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5700(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_520 [256];
  byte local_420 [256];
  byte local_320 [256];
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar5 = 0x1caf128;
    FUN_0040d540(0x1caf114);
    do {
      FUN_0040d540(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1caf1a0);
    FUN_0040d540(0x1caf1a0);
    FUN_0040d540(0x1caf1b4);
    FUN_0040d540(0x1caf1c8);
    FUN_0040d540(0x1caf1dc);
    FUN_0040d540(0x1caf1f0);
    FUN_0040d540(0x1caf204);
    FUN_0040d540(0x1caf218);
    FUN_0040d540(0x1caf22c);
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    DAT_00616040 = 0xffffffff;
    _DAT_01caf568 = 0;
    DAT_01caf4a0 = 0;
    return;
  }
  if (DAT_00616010 != 0) {
    iVar5 = 0x1caf128;
    FUN_0040d540(0x1caf114);
    do {
      FUN_0040d540(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1caf1a0);
    FUN_0040d540(0x1caf1a0);
    FUN_0040d540(0x1caf1b4);
    FUN_0040d540(0x1caf1c8);
    FUN_0040d540(0x1caf1dc);
    FUN_0040d540(0x1caf1f0);
    FUN_0040d540(0x1caf204);
    FUN_0040d540(0x1caf218);
    FUN_0040d540(0x1caf22c);
    DAT_00616040 = -1;
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    _DAT_01caf568 = 0;
    DAT_01caf4a0 = 0;
    FUN_00461070(&DAT_01cab7a8,0,0,local_420,0);
    FUN_005b7790(local_320,&DAT_005d59e3,local_420,&DAT_01cab788);
    FUN_0040d5a0(0x1caf114,local_320,0x280,0x1e0);
    iVar4 = 9;
    iVar5 = 0;
    FUN_0040dd20(0x1caf114,0xff);
    if (0 < _DAT_01cab9f0) {
      iVar1 = 0x1cab9f4;
      iVar6 = 0x1caf128;
      do {
        local_20 = iVar5 * 0x2e4;
        FUN_005b7790(local_220,"tab_%s",iVar1);
        local_1c = iVar5 * 0x14;
        FUN_00461070(local_220,0,0,local_120,0);
        FUN_005b7790(local_520,&DAT_005d59e3,local_120,&DAT_01cab788);
        FUN_0040d5a0(iVar6,local_520,0x5a,0x36);
        *(uint *)(&DAT_01cabb3c + local_20) = 0x215;
        *(int *)(&DAT_01cabb40 + local_20) = iVar4;
        iVar1 = iVar1 + 0x2e4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
        iVar4 = iVar4 + *(int *)(local_1c + 0x1caf138) + 10;
      } while (iVar5 < _DAT_01cab9f0);
    }
    FUN_0040d5a0(0x1caf1a0,"pentip",0x20,0x20);
    FUN_0040d5a0(0x1caf1b4,"pentipink",0x20,0x20);
    FUN_0040d5a0(0x1caf1c8,"xmarker",0x20,0x20);
    FUN_0040d5a0(0x1caf1dc,"questionmark",0x21,0x3f);
    FUN_0040d5a0(0x1caf1f0,"ltarrow",0x40,0x20);
    FUN_0040d5a0(0x1caf204,"rtarrow",0x40,0x20);
    FUN_0040d5a0(0x1caf218,"fieldnotes_exit",0x1e,0x20);
    FUN_0040dd20(0x1caf218,0xff);
    FUN_0040d5a0(0x1caf22c,"underline",0x100,8);
    DAT_00616010 = 0;
  }
  if (DAT_00616014 != 0) {
    FUN_004a2890(0x1caf240,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    FUN_004a27e0(0x1caf240);
    DAT_01cab7f0 = 0;
    if (0 < _DAT_01cab9f0) {
      iVar4 = 0x1cab9f4;
      do {
        iVar1 = FUN_004a3740(iVar4,0x1caf240);
        if (iVar1 == 0) goto LAB_004a57ae;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2e4;
      } while (iVar5 < _DAT_01cab9f0);
    }
    DAT_00616014 = 0;
  }
LAB_004a57ae:
  iVar5 = 0;
  FUN_0040d900(0x1caf114,0,0,0xffff);
  if (0 < _DAT_01cab9f0) {
    iVar4 = 0x1cab9f4;
    do {
      if ((*(int *)(iVar4 + 0x140) <= _DAT_01caf110) &&
         (_DAT_01caf110 < *(int *)(iVar4 + 0x140) + *(int *)(iVar4 + 0x144))) goto LAB_004a5802;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2e4;
    } while (iVar5 < _DAT_01cab9f0);
  }
  iVar5 = -1;
LAB_004a5802:
  iVar4 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01cab9f0) {
    iVar5 = 0x1cab9f4;
    iVar1 = 0x1caf128;
    do {
      if (iVar4 == local_14) {
        FUN_0040d900(iVar1,*(int *)(iVar5 + 0x148) + -2,*(int *)(iVar5 + 0x14c) + -2,0xffff);
      }
      else {
        FUN_0040dab0(iVar1,0x246,*(uint *)(iVar5 + 0x14c),0x246 - *(int *)(iVar5 + 0x148),0,
                     *(int *)(iVar4 * 0x14 + 0x1caf134) + -1,*(int *)(iVar4 * 0x14 + 0x1caf138) + -1
                     ,0xffff);
      }
      iVar1 = iVar1 + 0x14;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x2e4;
    } while (iVar4 < _DAT_01cab9f0);
  }
  _DAT_01caf568 = 0;
  FUN_004a3240(0x1caf240,_DAT_01caf110);
  if (*(int *)(0x01CB6900 + 0x244) != 0) {
    DAT_01caf4a0 = 0;
    DAT_00616040 = 0xffffffff;
    _DAT_01caf568 = 0;
    _DAT_01caf488 = 0;
    return;
  }
  iVar5 = FUN_004a1bb0(_DAT_01c2a37c,_DAT_01c2a380);
  if (-1 < iVar5) {
    FUN_004a1570(iVar5 * 0x2e4 + 0x1caba34);
    local_18 = 1;
  }
  iVar5 = FUN_004a1c60(_DAT_01c2a37c,_DAT_01c2a380);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = (int *)FUN_004a2730(_DAT_01caf110 * 0x144 + _DAT_01caf27c,_DAT_01c2a37c,_DAT_01c2a380);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c2a37c - *piVar2,_DAT_01c2a380 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01caf110) {
    FUN_0040d900(0x1caf1f0,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01caf110 < _DAT_01caf278 + -2) {
    FUN_0040d900(0x1caf204,0x000001F4,0x000001AE,0xffff);
  }
  FUN_0040d900(0x1caf218,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c2a37c) && (0x000001C0 <= _DAT_01c2a380)) &&
      (_DAT_01c2a37c < 0x00000262 + _DAT_01caf224)) &&
     (_DAT_01c2a380 < _DAT_01caf228 + 0x000001C0)) {
    uVar3 = FUN_0050fe80(&DAT_005d645b);
    FUN_004a1570(uVar3);
    local_18 = 1;
  }
  if (-1 < DAT_00616040) {
    if (_DAT_01caf568 == 0) {
      DAT_01caf4a0 = 0;
      DAT_00616040 = -1;
      _DAT_01caf488 = _DAT_01caf568;
    }
    else {
      FUN_004031c0(DAT_00616040,_DAT_01caf48c,_DAT_01caf490 + -1,_DAT_01caf494 + -1,0);
      FUN_004a8df0(_DAT_01511cbc,&DAT_01caf4a0,_DAT_01caf498,_DAT_01caf49c,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    FUN_0040d900(0x1caf1a0,_DAT_01c2a37c - 0x0000001F,_DAT_01c2a380 - 0x00000001,0xffff);
    return;
  }
  FUN_0040d900(0x1caf1b4,_DAT_01c2a37c - 0x0000001F,_DAT_01c2a380 - 0x00000001,0xffff);
  return;
}
