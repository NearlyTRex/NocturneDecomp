// Name: FUN_00588a50
// Address: 00588a50
// Address Range: [[00588a50, 00588dde]]
// Convention: unknown
// Signature: undefined4 FUN_00588a50(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00588a50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piStack_a4;
  byte *puStack_a0;
  byte *puStack_9c;
  uint uStack_98;
  int *piStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  uint uStack_80;
  int iStack_40;
  uint uStack_3c;
  uint auStack_38 [3];
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (_DAT_02661aec != (int *)0x0) {
    piStack_88 = _DAT_02661aec;
    iStack_8c = 0x588bef;
    (**(code **)(*_DAT_02661aec + 8))();
    _DAT_02661aec = (int *)0x0;
  }
  if (_DAT_02661ae8 != (int *)0x0) {
    piStack_88 = _DAT_02661ae8;
    iStack_8c = 0x588a7e;
    (**(code **)(*_DAT_02661ae8 + 8))();
    _DAT_02661ae8 = (int *)0x0;
  }
  if (_DAT_02661ae4 != (int *)0x0) {
    piStack_88 = _DAT_02661ae4;
    iStack_8c = 0x588a95;
    (**(code **)(*_DAT_02661ae4 + 8))();
    _DAT_02661ae4 = (int *)0x0;
  }
  if (((param_3 != 8) && (param_3 != 0x10)) && (param_3 != 0x20)) {
    return 0;
  }
  DAT_006141c0 = param_3;
  DAT_006141b8 = param_1;
  _DAT_02661afc = 0;
  DAT_006141bc = param_2;
  if (DAT_00622010 != 0) {
    piStack_88 = (int *)DAT_00622010;
    iStack_8c = 0x588ae5;
    FUN_005b86a0();
    DAT_00622010 = 0;
  }
  if (_DAT_02661af0 != 0) {
    piStack_88 = (int *)_DAT_02661af0;
    iStack_8c = 0x588b00;
    FUN_005b86a0();
    DAT_0070c62c = 0;
  }
  piStack_88 = (int *)(((int)((DAT_006141c0 + (DAT_006141c0 >> 0x1f) * -8) -
                             (uint)((DAT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                      DAT_006141bc * DAT_006141b8);
  iStack_8c = 0x588b34;
  DAT_00622010 = FUN_005b8580();
  if (DAT_00622010 == 0) {
    piStack_88 = (int *)"WDDVMEM: Fatal - out of frame buffer memory";
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xea;
    iStack_8c = 0x588b60;
    FUN_004e4500();
  }
  piStack_88 = (int *)(DAT_006141b8 * DAT_006141bc * 4 + 0x40);
  iStack_8c = 0x588b7b;
  _DAT_02661af0 = FUN_005b8580();
  if (_DAT_02661af0 == 0) {
    piStack_88 = (int *)"WDDVMEM: Fatal - out of Z buffer memory";
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xef;
    iStack_8c = 0x588ba6;
    FUN_004e4500();
  }
  piStack_88 = (int *)param_3;
  iStack_8c = param_2;
  DAT_0070c62c = _DAT_02661af0 + 0x10U & 0xfffffff0;
  iStack_90 = param_1;
  piStack_94 = _DAT_02661ae0;
  uStack_98 = 0x588bd4;
  iVar3 = (**(code **)(*_DAT_02661ae0 + 0x54))();
  if (iVar3 != 0) {
    if (param_3 != 0x20) {
      return 0;
    }
    uStack_98 = 0x18;
    puStack_a0 = (byte *)param_1;
    piStack_a4 = _DAT_02661ae0;
    iVar3 = (**(code **)(*_DAT_02661ae0 + 0x54))();
    if (iVar3 != 0) {
      return 0;
    }
    _DAT_02661afc = 1;
  }
  puStack_a0 = (byte *)&piStack_94;
  uStack_98 = 0x6c;
  puStack_9c = (byte *)0x0;
  piStack_a4 = (int *)0x588c38;
  FUN_005b77c0();
  uStack_98 = 0;
  piStack_94 = (int *)0x6c;
  iStack_90 = 0x21;
  uStack_2c = 0x6218;
  puStack_9c = &DAT_02661ae4;
  uStack_80 = 2;
  piStack_a4 = _DAT_02661ae0;
  puStack_a0 = (byte *)&piStack_94;
  iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))();
  if (iVar3 != 0) {
    iStack_90 = 1;
    iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))(_DAT_02661ae0,&piStack_a4,&DAT_02661ae4,0);
    if (iVar3 != 0) {
      uStack_3c = 0xa18;
      iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))(_DAT_02661ae0,&piStack_a4,&DAT_02661ae4,0);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  FUN_005b77c0(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar4 = (**(code **)(*_DAT_02661ae4 + 0x30))(_DAT_02661ae4,auStack_38,&DAT_02661ae8);
  iVar2 = DAT_00622010;
  iVar3 = DAT_006141bc;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (0 < DAT_006141bc) {
      iVar6 = DAT_006141c0 >> 0x1f;
      iVar1 = DAT_006141c0 + iVar6 * -8;
      iStack_40 = DAT_006141b8 * 4;
      iVar7 = 0;
      iVar5 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar5) =
             DAT_006141b8 * iVar4 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3) + iVar2;
        *(uint *)(&DAT_01c2b64c + iVar5) = DAT_0070c62c + iVar7;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + iStack_40;
        iVar5 = iVar5 + 4;
      } while (iVar4 < iVar3);
    }
    FUN_00401810(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar3 = 0;
    FUN_00589430();
    do {
      FUN_0055b1f0();
      iVar3 = iVar3 + 1;
      FUN_00589560();
    } while (iVar3 < 3);
    return 1;
  }
  _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d046a4 = 0x1bd;
  FUN_004e4500("setScreenResolution - Create back buffer failed!");
  return 0;
}
