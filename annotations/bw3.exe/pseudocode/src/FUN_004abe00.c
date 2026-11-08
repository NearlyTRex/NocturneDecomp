// Name: FUN_004abe00
// Address: 004abe00
// Address Range: [[004abe00, 004ac6ae]]
// Convention: unknown
// Signature: void FUN_004abe00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004abe00(int param_1)

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
    iVar5 = 0x1d19bc0;
    FUN_0040d400(0x1d19bac);
    do {
      FUN_0040d400(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1d19c38);
    FUN_0040d400(0x1d19c38);
    FUN_0040d400(0x1d19c4c);
    FUN_0040d400(0x1d19c60);
    FUN_0040d400(0x1d19c74);
    FUN_0040d400(0x1d19c9c);
    FUN_0040d400(0x1d19cb0);
    FUN_0040d400(0x1d19cc4);
    FUN_0040d400(0x1d19cd8);
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    return;
  }
  if (DAT_005fe370 != 0) {
    iVar5 = 0x1d19bc0;
    FUN_0040d400(0x1d19bac);
    do {
      FUN_0040d400(iVar5);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != 0x1d19c38);
    FUN_0040d400(0x1d19c38);
    FUN_0040d400(0x1d19c4c);
    FUN_0040d400(0x1d19c60);
    FUN_0040d400(0x1d19c74);
    FUN_0040d400(0x1d19c9c);
    FUN_0040d400(0x1d19cb0);
    FUN_0040d400(0x1d19cc4);
    FUN_0040d400(0x1d19cd8);
    DAT_005fe3a8 = -1;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    FUN_00465e50(&DAT_01d0cfc8,0,0,local_120,0);
    FUN_005a28c0(local_520,&DAT_005c0d12,local_120,&DAT_01d0cfa8);
    FUN_0040d460(0x1d19bac,local_520,0x280,0x1e0);
    iVar4 = 9;
    iVar5 = 0;
    FUN_0040dbb0(0x1d19bac,0xff);
    if (0 < _DAT_01d0d210) {
      iVar1 = 0x1d0d214;
      iVar6 = 0x1d19bc0;
      do {
        local_20 = iVar5 * 0x2e4;
        FUN_005a28c0(local_420,"tab_%s",iVar1);
        local_1c = iVar5 * 0x14;
        FUN_00465e50(local_420,0,0,local_220,0);
        FUN_005a28c0(local_320,&DAT_005c0d12,local_220,&DAT_01d0cfa8);
        FUN_0040d460(iVar6,local_320,0x5a,0x36);
        *(uint *)(&DAT_01d0d35c + local_20) = 0x215;
        *(int *)(&DAT_01d0d360 + local_20) = iVar4;
        iVar1 = iVar1 + 0x2e4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
        iVar4 = iVar4 + *(int *)(local_1c + 0x1d19bd0) + 10;
      } while (iVar5 < _DAT_01d0d210);
    }
    FUN_0040d460(0x1d19c38,"pentip",0x20,0x20);
    FUN_0040d460(0x1d19c4c,"pentipink",0x20,0x20);
    FUN_0040d460(0x1d19c60,"xmarker",0x10,0x10);
    FUN_0040d460(0x1d19c74,"questionmark",0x21,0x3f);
    FUN_0040d460(0x1d19c88,"twanabox",0x80,0x4a);
    FUN_0040d460(0x1d19c9c,"ltarrow",0x40,0x20);
    FUN_0040d460(0x1d19cb0,"rtarrow",0x40,0x20);
    FUN_0040d460(0x1d19cc4,"fieldnotes_exit",0x1e,0x20);
    FUN_0040dbb0(0x1d19cc4,0xff);
    FUN_0040d460(0x1d19cd8,"underline",0x100,8);
    DAT_005fe370 = 0;
  }
  DAT_01d19cf0 = '\0';
  if (DAT_005fe374 != 0) {
    FUN_004a8eb0(0x1d19d30,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    FUN_004a8e00(0x1d19d30);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      iVar4 = 0x1d0d214;
      do {
        iVar1 = FUN_004a9d90(iVar4,0x1d19d30);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2e4;
      } while (iVar5 < _DAT_01d0d210);
    }
  }
  iVar5 = 0;
  FUN_0040d6f0(0x1d19bac,0,0,0xffff);
  if (0 < _DAT_01d0d210) {
    iVar4 = 0x1d0d214;
    do {
      if ((*(int *)(iVar4 + 0x140) <= _DAT_01d19ba8) &&
         (_DAT_01d19ba8 < *(int *)(iVar4 + 0x140) + *(int *)(iVar4 + 0x144))) goto LAB_004abf0c;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2e4;
    } while (iVar5 < _DAT_01d0d210);
  }
  iVar5 = -1;
LAB_004abf0c:
  iVar4 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01d0d210) {
    iVar5 = 0x1d0d214;
    iVar1 = 0x1d19bc0;
    do {
      if (iVar4 == local_14) {
        FUN_0040d6f0(iVar1,*(int *)(iVar5 + 0x148) + -2,*(int *)(iVar5 + 0x14c) + -2,0xffff);
      }
      else {
        FUN_0040d8a0(iVar1,0x246,*(uint *)(iVar5 + 0x14c),0x246 - *(int *)(iVar5 + 0x148),0,
                     *(int *)(iVar4 * 0x14 + 0x1d19bcc) + -1,*(int *)(iVar4 * 0x14 + 0x1d19bd0) + -1
                     ,0xffff);
      }
      iVar1 = iVar1 + 0x14;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x2e4;
    } while (iVar4 < _DAT_01d0d210);
  }
  _DAT_01d1a058 = 0;
  FUN_004a98b0(0x1d19d30,_DAT_01d19ba8);
  if (*(int *)(0x01D2130C + 0x24c) != 0) {
    DAT_01d19f90 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    _DAT_01d19f78 = 0;
    return;
  }
  iVar5 = FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
  if (-1 < iVar5) {
    FUN_004a7a70(iVar5 * 0x2e4 + 0x1d0d254);
    local_18 = 1;
  }
  iVar5 = FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = (int *)FUN_004a8d50(_DAT_01d19ba8 * 0x144 + _DAT_01d19d6c,_DAT_01c5fadc,_DAT_01c5fae0);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c5fadc - *piVar2,_DAT_01c5fae0 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01d19ba8) {
    FUN_0040d6f0(0x1d19c9c,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01d19ba8 < _DAT_01d19d68 + -2) {
    FUN_0040d6f0(0x1d19cb0,0x000001F4,0x000001AE,0xffff);
  }
  if (DAT_01d19cf0 != '\0') {
    FUN_004b0a20(_DAT_01549ac0,&DAT_01d19cf0,0x000000FA,0x000001AE,0,0xffffffff);
  }
  FUN_0040d6f0(0x1d19cc4,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c5fadc) && (0x000001C0 <= _DAT_01c5fae0)) &&
      (_DAT_01c5fadc < 0x00000262 + _DAT_01d19cd0)) &&
     (_DAT_01c5fae0 < 0x000001C0 + _DAT_01d19cd4)) {
    uVar3 = FUN_00508960(&DAT_005c17b4);
    FUN_004a7a70(uVar3);
    local_18 = 1;
  }
  if (-1 < DAT_005fe3a8) {
    if (_DAT_01d1a058 == 0) {
      DAT_01d19f90 = 0;
      DAT_005fe3a8 = -1;
      _DAT_01d19f78 = _DAT_01d1a058;
    }
    else {
      FUN_004031c0(DAT_005fe3a8,_DAT_01d19f7c,_DAT_01d19f80 + -1,_DAT_01d19f84 + -1,0);
      FUN_004b0a20(_DAT_01549aa4,&DAT_01d19f90,_DAT_01d19f88,_DAT_01d19f8c,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    FUN_0040d6f0(0x1d19c38,_DAT_01c5fadc - 0x0000001F,_DAT_01c5fae0 - 0x00000001,0xffff);
    return;
  }
  FUN_0040d6f0(0x1d19c4c,_DAT_01c5fadc - 0x0000001F,_DAT_01c5fae0 - 0x00000001,0xffff);
  return;
}
