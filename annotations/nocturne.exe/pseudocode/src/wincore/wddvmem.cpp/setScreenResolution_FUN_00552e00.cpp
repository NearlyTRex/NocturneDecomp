// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
// Address: 00552e00
// Address Range: [[00552e00, 0055318e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int param_1,int param_2,int param_3)

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
  
  if (_DAT_02ddf55c != (int *)0x0) {
    piStack_88 = _DAT_02ddf55c;
    iStack_8c = 0x552f9f;
    (**(code **)(*_DAT_02ddf55c + 8))();
    _DAT_02ddf55c = (int *)0x0;
  }
  if (_DAT_02ddf558 != (int *)0x0) {
    piStack_88 = _DAT_02ddf558;
    iStack_8c = 0x552e2e;
    (**(code **)(*_DAT_02ddf558 + 8))();
    _DAT_02ddf558 = (int *)0x0;
  }
  if (_DAT_02ddf554 != (int *)0x0) {
    piStack_88 = _DAT_02ddf554;
    iStack_8c = 0x552e45;
    (**(code **)(*_DAT_02ddf554 + 8))();
    _DAT_02ddf554 = (int *)0x0;
  }
  if (((param_3 != 8) && (param_3 != 0x10)) && (param_3 != 0x20)) {
    return 0;
  }
  DAT_005b7624 = param_3;
  DAT_005b761c = param_1;
  _DAT_02ddf56c = 0;
  DAT_005b7620 = param_2;
  if (DAT_005c5010 != 0) {
    piStack_88 = (int *)DAT_005c5010;
    iStack_8c = 0x552e95;
    FUN_005638d0();
    DAT_005c5010 = 0;
  }
  if (_DAT_02ddf560 != 0) {
    piStack_88 = (int *)_DAT_02ddf560;
    iStack_8c = 0x552eb0;
    FUN_005638d0();
    DAT_006af62c = 0;
  }
  piStack_88 = (int *)(((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                             (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                      DAT_005b7620 * DAT_005b761c);
  iStack_8c = 0x552ee4;
  DAT_005c5010 = malloc();
  if (DAT_005c5010 == 0) {
    piStack_88 = (int *)"WDDVMEM: Fatal - out of frame buffer memory";
    PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
    INT_01cc4804 = 0xea;
    iStack_8c = 0x552f10;
    core_main_c_FUN_004c8440();
  }
  piStack_88 = (int *)(DAT_005b761c * DAT_005b7620 * 4 + 0x40);
  iStack_8c = 0x552f2b;
  _DAT_02ddf560 = malloc();
  if (_DAT_02ddf560 == 0) {
    piStack_88 = (int *)"WDDVMEM: Fatal - out of Z buffer memory";
    PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
    INT_01cc4804 = 0xef;
    iStack_8c = 0x552f56;
    core_main_c_FUN_004c8440();
  }
  piStack_88 = (int *)param_3;
  iStack_8c = param_2;
  DAT_006af62c = _DAT_02ddf560 + 0x10U & 0xfffffff0;
  iStack_90 = param_1;
  piStack_94 = _DAT_02ddf550;
  uStack_98 = 0x552f84;
  iVar3 = (**(code **)(*_DAT_02ddf550 + 0x54))();
  if (iVar3 != 0) {
    if (param_3 != 0x20) {
      return 0;
    }
    uStack_98 = 0x18;
    puStack_a0 = (byte *)param_1;
    piStack_a4 = _DAT_02ddf550;
    iVar3 = (**(code **)(*_DAT_02ddf550 + 0x54))();
    if (iVar3 != 0) {
      return 0;
    }
    _DAT_02ddf56c = 1;
  }
  puStack_a0 = (byte *)&piStack_94;
  uStack_98 = 0x6c;
  puStack_9c = (byte *)0x0;
  piStack_a4 = (int *)0x552fe8;
  memset();
  uStack_98 = 0;
  piStack_94 = (int *)0x6c;
  iStack_90 = 0x21;
  uStack_2c = 0x6218;
  puStack_9c = &DAT_02ddf554;
  uStack_80 = 2;
  piStack_a4 = _DAT_02ddf550;
  puStack_a0 = (byte *)&piStack_94;
  iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))();
  if (iVar3 != 0) {
    iStack_90 = 1;
    iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))(_DAT_02ddf550,&piStack_a4,&DAT_02ddf554,0);
    if (iVar3 != 0) {
      uStack_3c = 0xa18;
      iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))(_DAT_02ddf550,&piStack_a4,&DAT_02ddf554,0);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  memset(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar4 = (**(code **)(*_DAT_02ddf554 + 0x30))(_DAT_02ddf554,auStack_38,&DAT_02ddf558);
  iVar2 = DAT_005c5010;
  iVar3 = DAT_005b7620;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (0 < DAT_005b7620) {
      iVar6 = DAT_005b7624 >> 0x1f;
      iVar1 = DAT_005b7624 + iVar6 * -8;
      iStack_40 = DAT_005b761c * 4;
      iVar7 = 0;
      iVar5 = 0;
      do {
        *(int *)(&DAT_01bd2fa0 + iVar5) =
             DAT_005b761c * iVar4 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3) + iVar2;
        *(uint *)(&DAT_01bd4260 + iVar5) = DAT_006af62c + iVar7;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + iStack_40;
        iVar5 = iVar5 + 4;
      } while (iVar4 < iVar3);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401e30(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar3 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0();
    do {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      iVar3 = iVar3 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (iVar3 < 3);
    return 1;
  }
  PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
  INT_01cc4804 = 0x1d7;
  core_main_c_FUN_004c8440("setScreenResolution - Create back buffer failed!");
  return 0;
}
