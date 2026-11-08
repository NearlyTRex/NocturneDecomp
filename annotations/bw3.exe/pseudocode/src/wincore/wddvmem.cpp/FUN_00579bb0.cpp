// Name: FUN_00579bb0
// Address: 00579bb0
// Address Range: [[00579bb0, 0057a0d1]]
// Convention: unknown
// Signature: undefined4 FUN_00579bb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00579bb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_110;
  byte *puStack_10c;
  byte *puStack_108;
  int iStack_104;
  int *piStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  uint uStack_ec;
  int iStack_b4;
  uint auStack_b0 [2];
  uint uStack_a8;
  int iStack_a0;
  uint uStack_98;
  int iStack_40;
  uint auStack_38 [4];
  int iStack_28;
  int iStack_24;
  
  if (_DAT_02d0bcec != (int *)0x0) {
    piStack_f4 = _DAT_02d0bcec;
    iStack_f8 = 0x579dd7;
    (**(code **)(*_DAT_02d0bcec + 8))();
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    piStack_f4 = _DAT_02d0bce8;
    iStack_f8 = 0x579be1;
    (**(code **)(*_DAT_02d0bce8 + 8))();
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 != (int *)0x0) {
    piStack_f4 = _DAT_02d0bce4;
    iStack_f8 = 0x579bf8;
    (**(code **)(*_DAT_02d0bce4 + 8))();
    _DAT_02d0bce4 = (int *)0x0;
  }
  if (((param_3 != 8) && (param_3 != 0x10)) && (param_3 != 0x20)) {
    return 0;
  }
  DAT_005fba20 = param_3;
  _DAT_02d0bd08 = param_3;
  DAT_005fba18 = param_1;
  _DAT_02d0bd0c = 0;
  DAT_005fba1c = param_2;
  _DAT_02d0bd10 = 0;
  _DAT_02d0bd00 = param_1;
  _DAT_02d0bcfc = 0;
  _DAT_02d0bd04 = param_2;
  if (DAT_0060b010 != 0) {
    piStack_f4 = (int *)DAT_0060b010;
    iStack_f8 = 0x579c72;
    FUN_005a3770();
    DAT_0060b010 = 0;
  }
  if (_DAT_02d0bcf0 != 0) {
    piStack_f4 = (int *)_DAT_02d0bcf0;
    iStack_f8 = 0x579c8c;
    FUN_005a3770();
    DAT_0072ffac = 0;
  }
  piStack_f4 = (int *)(((int)((DAT_005fba20 + (DAT_005fba20 >> 0x1f) * -8) -
                             (uint)((DAT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                      DAT_005fba18 * DAT_005fba1c);
  iStack_f8 = 0x579cbf;
  DAT_0060b010 = FUN_005a3650();
  if (DAT_0060b010 == 0) {
    piStack_f4 = (int *)"WDDVMEM: Fatal - out of frame buffer memory";
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xed;
    iStack_f8 = 0x579cea;
    FUN_004e4330();
  }
  piStack_f4 = (int *)(DAT_005fba18 * DAT_005fba1c * 4 + 0x40);
  iStack_f8 = 0x579d05;
  _DAT_02d0bcf0 = FUN_005a3650();
  if (_DAT_02d0bcf0 == 0) {
    piStack_f4 = (int *)"WDDVMEM: Fatal - out of Z buffer memory";
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xf2;
    iStack_f8 = 0x579d31;
    FUN_004e4330();
  }
  piStack_f4 = (int *)param_3;
  iStack_f8 = param_2;
  DAT_0072ffac = _DAT_02d0bcf0 + 0x10U & 0xfffffff0;
  iStack_fc = param_1;
  piStack_100 = _DAT_02d0bce0;
  iStack_104 = 0x579d5f;
  iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
  if ((iVar1 != 0) && (param_2 < 0x1e0)) {
    _DAT_02d0bd00 = 0x280;
    _DAT_02d0bd0c = (0x280 - param_1) / 2;
    _DAT_02d0bd10 = (0x1e0 - param_2) / 2;
    iStack_104 = param_3;
    puStack_108 = (byte *)0x1e0;
    puStack_10c = (byte *)0x280;
    piStack_110 = _DAT_02d0bce0;
    _DAT_02d0bd04 = 0x1e0;
    iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
  }
  if (iVar1 != 0) {
    if (param_3 != 0x20) {
      return 0;
    }
    iStack_104 = 0x18;
    puStack_108 = (byte *)_DAT_02d0bd04;
    puStack_10c = (byte *)_DAT_02d0bd00;
    piStack_110 = _DAT_02d0bce0;
    iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
    if (iVar1 != 0) {
      return 0;
    }
    _DAT_02d0bd08 = 0x18;
    _DAT_02d0bcfc = 1;
  }
  puStack_10c = (byte *)&piStack_100;
  iStack_104 = 0x6c;
  puStack_108 = (byte *)0x0;
  piStack_110 = (int *)0x579e31;
  FUN_005a28f0();
  iStack_104 = 0;
  piStack_100 = (int *)0x6c;
  uStack_98 = 0x6218;
  uStack_ec = 2;
  puStack_108 = &DAT_02d0bce4;
  iStack_fc = 0x21;
  piStack_110 = _DAT_02d0bce0;
  puStack_10c = (byte *)&piStack_100;
  iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x18))();
  if (iVar1 != 0) {
    iStack_fc = 1;
    iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x18))(_DAT_02d0bce0,&piStack_110,&DAT_02d0bce4,0);
    if (iVar1 != 0) {
      uStack_a8 = 0xa18;
      iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x18))(_DAT_02d0bce0,&piStack_110,&DAT_02d0bce4,0);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  FUN_005a28f0(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar1 = (**(code **)(*_DAT_02d0bce4 + 0x30))(_DAT_02d0bce4,auStack_38,&DAT_02d0bce8);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < DAT_005fba1c) {
      iVar3 = DAT_005fba20 >> 0x1f;
      iVar2 = DAT_005fba20 + iVar3 * -8;
      iStack_40 = DAT_005fba18 * 4;
      iVar4 = 0;
      iVar5 = 0;
      do {
        *(int *)(&DAT_01c5faec + iVar5) =
             DAT_005fba18 * iVar1 * ((int)(iVar2 - (uint)(iVar3 << 2 < 0)) >> 3) + DAT_0060b010;
        iVar1 = iVar1 + 1;
        *(uint *)(&DAT_01c60dac + iVar5) = DAT_0072ffac + iVar4;
        iVar4 = iVar4 + iStack_40;
        iVar5 = iVar5 + 4;
      } while (iVar1 < DAT_005fba1c);
    }
    FUN_00401810(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar1 = 0;
    FUN_0057a770();
    do {
      FUN_005a28f0(auStack_b0,0,0x6c);
      auStack_b0[0] = 0x6c;
      iVar2 = (**(code **)(*_DAT_02d0bce8 + 100))(_DAT_02d0bce8,0,auStack_b0,1,0);
      if (iVar2 != 0) {
        _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d71de4 = 0x1ec;
        FUN_004e4330("Clear of back buffer failed");
      }
      iVar5 = 0;
      iVar2 = iStack_a0;
      if (0 < _DAT_02d0bd04) {
        do {
          iVar3 = _DAT_02d0bd00 * _DAT_02d0bd08 >> 0x1f;
          FUN_005a28f0(iVar2,0,(int)((_DAT_02d0bd00 * _DAT_02d0bd08 + iVar3 * -8) -
                                    (uint)(iVar3 << 2 < 0)) >> 3);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + iStack_b4;
        } while (iVar5 < _DAT_02d0bd04);
      }
      iVar2 = (**(code **)(*_DAT_02d0bce8 + 0x80))(_DAT_02d0bce8,0);
      if (iVar2 != 0) {
        _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d71de4 = 0x1f6;
        FUN_004e4330("Unlock of back buffer clear failed");
      }
      _DAT_02d0bcf4 = 1;
      iVar1 = iVar1 + 1;
      FUN_0057a8a0();
    } while (iVar1 < 3);
    return 1;
  }
  _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d71de4 = 0x1d1;
  FUN_004e4330("setScreenResolution - Create back buffer failed!");
  return 0;
}
