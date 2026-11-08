// Name: FUN_004be0f0
// Address: 004be0f0
// Address Range: [[004be0f0, 004be961]]
// Convention: unknown
// Signature: void FUN_004be0f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be0f0(int param_1)

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
    iVar5 = 0x1cc7ba8;
    FUN_0040d1c0(0x1cc7b94);
    do {
      FUN_0040d1c0(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1cc7c20);
    FUN_0040d1c0(0x1cc7c20);
    FUN_0040d1c0(0x1cc7c34);
    FUN_0040d1c0(0x1cc7c48);
    FUN_0040d1c0(0x1cc7c5c);
    FUN_0040d1c0(0x1cc7c84);
    FUN_0040d1c0(0x1cc7c98);
    FUN_0040d1c0(0x1cc7cac);
    FUN_0040d1c0(0x1cc7cc0);
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    DAT_0061d310 = 0xffffffff;
    _DAT_01cc8000 = 0;
    DAT_01cc7f38 = 0;
    return;
  }
  if (DAT_0061d2e0 != 0) {
    iVar5 = 0x1cc7ba8;
    FUN_0040d1c0(0x1cc7b94);
    do {
      FUN_0040d1c0(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1cc7c20);
    FUN_0040d1c0(0x1cc7c20);
    FUN_0040d1c0(0x1cc7c34);
    FUN_0040d1c0(0x1cc7c48);
    FUN_0040d1c0(0x1cc7c5c);
    FUN_0040d1c0(0x1cc7c84);
    FUN_0040d1c0(0x1cc7c98);
    FUN_0040d1c0(0x1cc7cac);
    FUN_0040d1c0(0x1cc7cc0);
    DAT_0061d310 = -1;
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    _DAT_01cc8000 = 0;
    DAT_01cc7f38 = 0;
    FUN_00479580(&DAT_01cc4228,0,0,local_420,0);
    FUN_005bfb40(local_320,&DAT_005df825,local_420,&DAT_01cc4208);
    FUN_0040d220(0x1cc7b94,local_320,0x280,0x1e0);
    iVar4 = 9;
    iVar5 = 0;
    FUN_0040d970(0x1cc7b94,0xff);
    if (0 < _DAT_01cc4470) {
      iVar1 = 0x1cc4474;
      iVar6 = 0x1cc7ba8;
      do {
        local_20 = iVar5 * 0x2e4;
        FUN_005bfb40(local_220,"tab_%s",iVar1);
        local_1c = iVar5 * 0x14;
        FUN_00479580(local_220,0,0,local_120,0);
        FUN_005bfb40(local_520,&DAT_005df825,local_120,&DAT_01cc4208);
        FUN_0040d220(iVar6,local_520,0x5a,0x36);
        *(uint *)(&DAT_01cc45bc + local_20) = 0x215;
        *(int *)(&DAT_01cc45c0 + local_20) = iVar4;
        iVar1 = iVar1 + 0x2e4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
        iVar4 = iVar4 + *(int *)(local_1c + 0x1cc7bb8) + 10;
      } while (iVar5 < _DAT_01cc4470);
    }
    FUN_0040d220(0x1cc7c20,"pentipink",0x20,0x20);
    FUN_0040d220(0x1cc7c34,"pentip",0x20,0x20);
    FUN_0040d220(0x1cc7c48,"xmarker",0x10,0x10);
    FUN_0040d220(0x1cc7c5c,"questionmark",0x21,0x3f);
    FUN_0040d220(0x1cc7c70,"twanabox",0x80,0x4a);
    FUN_0040d220(0x1cc7c84,"ltarrow",0x40,0x20);
    FUN_0040d220(0x1cc7c98,"rtarrow",0x40,0x20);
    FUN_0040d220(0x1cc7cac,"fieldnotes_exit",0x1e,0x20);
    FUN_0040d970(0x1cc7cac,0xff);
    FUN_0040d220(0x1cc7cc0,"underline",0x100,8);
    DAT_0061d2e0 = 0;
  }
  if (DAT_0061d2e4 != 0) {
    FUN_004bb270(0x1cc7cd4,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    FUN_004bb1c0(0x1cc7cd4);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      iVar4 = 0x1cc4474;
      do {
        iVar1 = FUN_004bc130(iVar4,0x1cc7cd4);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2e4;
      } while (iVar5 < _DAT_01cc4470);
    }
  }
  iVar5 = 0;
  FUN_0040d4b0(0x1cc7b94,0,0,0xffff);
  if (0 < _DAT_01cc4470) {
    iVar4 = 0x1cc4474;
    do {
      if ((*(int *)(iVar4 + 0x140) <= _DAT_01cc7b90) &&
         (_DAT_01cc7b90 < *(int *)(iVar4 + 0x140) + *(int *)(iVar4 + 0x144))) goto LAB_004be1f2;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2e4;
    } while (iVar5 < _DAT_01cc4470);
  }
  iVar5 = -1;
LAB_004be1f2:
  iVar4 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01cc4470) {
    iVar5 = 0x1cc4474;
    iVar1 = 0x1cc7ba8;
    do {
      if (iVar4 == local_14) {
        FUN_0040d4b0(iVar1,*(int *)(iVar5 + 0x148) + -2,*(int *)(iVar5 + 0x14c) + -2,0xffff);
      }
      else {
        FUN_0040d660(iVar1,0x246,*(uint *)(iVar5 + 0x14c),0x246 - *(int *)(iVar5 + 0x148),0,
                     *(int *)(iVar4 * 0x14 + 0x1cc7bb4) + -1,*(int *)(iVar4 * 0x14 + 0x1cc7bb8) + -1
                     ,0xffff);
      }
      iVar1 = iVar1 + 0x14;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x2e4;
    } while (iVar4 < _DAT_01cc4470);
  }
  _DAT_01cc8000 = 0;
  FUN_004bbc70(0x1cc7cd4,_DAT_01cc7b90);
  if (*(int *)(0x01CCF390 + 0x244) != 0) {
    DAT_01cc7f38 = 0;
    DAT_0061d310 = 0xffffffff;
    _DAT_01cc8000 = 0;
    _DAT_01cc7f1c = 0;
    return;
  }
  iVar5 = FUN_004ba490(_DAT_01c4353c,_DAT_01c43540);
  if (-1 < iVar5) {
    FUN_004b9e30(iVar5 * 0x2e4 + 0x1cc44b4);
    local_18 = 1;
  }
  iVar5 = FUN_004ba540(_DAT_01c4353c,_DAT_01c43540);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = (int *)FUN_004bb110(_DAT_01cc7b90 * 0x144 + _DAT_01cc7d10,_DAT_01c4353c,_DAT_01c43540);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c4353c - *piVar2,_DAT_01c43540 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01cc7b90) {
    FUN_0040d4b0(0x1cc7c84,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01cc7b90 < _DAT_01cc7d0c + -2) {
    FUN_0040d4b0(0x1cc7c98,0x000001F4,0x000001AE,0xffff);
  }
  FUN_0040d4b0(0x1cc7cac,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c4353c) && (0x000001C0 <= _DAT_01c43540)) &&
      (_DAT_01c4353c < 0x00000262 + _DAT_01cc7cb8)) &&
     (_DAT_01c43540 < _DAT_01cc7cbc + 0x000001C0)) {
    uVar3 = FUN_00531090(&DAT_005e02c5);
    FUN_004b9e30(uVar3);
    local_18 = 1;
  }
  if (-1 < DAT_0061d310) {
    if (_DAT_01cc8000 == 0) {
      DAT_01cc7f38 = 0;
      DAT_0061d310 = -1;
      _DAT_01cc7f1c = _DAT_01cc8000;
    }
    else {
      FUN_004031c0(DAT_0061d310,_DAT_01cc7f20,_DAT_01cc7f24 + -1,_DAT_01cc7f28 + -1,0);
      FUN_004c1dd0(_DAT_0152d240,&DAT_01cc7f38,_DAT_01cc7f2c,_DAT_01cc7f30,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    FUN_0040d4b0(0x1cc7c20,_DAT_01c4353c - 0x0000001F,_DAT_01c43540 - 0x00000001,0xffff);
    return;
  }
  FUN_0040d4b0(0x1cc7c34,_DAT_01c4353c - 0x0000001F,_DAT_01c43540 - 0x00000001,0xffff);
  return;
}
