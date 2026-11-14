// Name: wincore_wddvmem.cpp_FUN_00579bb0
// Address: 00579bb0
// Address Range: [[00579bb0, 0057a0d1]]
// Convention: unknown
// Signature: undefined4 wincore_wddvmem_cpp_FUN_00579bb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wincore_wddvmem_cpp_FUN_00579bb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *dest;
  int *piStack_110;
  int *piStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_b4;
  uint auStack_b0 [2];
  uint uStack_a8;
  void *pvStack_a0;
  uint uStack_98;
  int iStack_40;
  uint auStack_38 [4];
  int iStack_28;
  int iStack_24;
  
  if (_DAT_02d0bcec != (int *)0x0) {
    iStack_f8 = 0x579dd7;
    (**(code **)(*_DAT_02d0bcec + 8))();
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    iStack_f8 = 0x579be1;
    (**(code **)(*_DAT_02d0bce8 + 8))();
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 != (int *)0x0) {
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
  if (DAT_0060b010 != (void *)0x0) {
    iStack_f8 = 0x579c72;
    FUN_005a3770();
    DAT_0060b010 = (void *)0x0;
  }
  if (_DAT_02d0bcf0 != (void *)0x0) {
    iStack_f8 = 0x579c8c;
    FUN_005a3770();
    DAT_0072ffac = 0;
  }
  iStack_f8 = 0x579cbf;
  DAT_0060b010 = malloc
                           (((int)((DAT_005fba20 + (DAT_005fba20 >> 0x1f) * -8) -
                                  (uint)((DAT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_005fba18 * DAT_005fba1c);
  if (DAT_0060b010 == (void *)0x0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xed;
    iStack_f8 = 0x579cea;
    core_main_c_FUN_004e4330();
  }
  iStack_f8 = 0x579d05;
  _DAT_02d0bcf0 = malloc(DAT_005fba18 * DAT_005fba1c * 4 + 0x40);
  if (_DAT_02d0bcf0 == (void *)0x0) {
    _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d71de4 = 0xf2;
    iStack_f8 = 0x579d31;
    core_main_c_FUN_004e4330();
  }
  iStack_f8 = param_2;
  DAT_0072ffac = (int)_DAT_02d0bcf0 + 0x10U & 0xfffffff0;
  iStack_fc = param_1;
  piStack_100 = _DAT_02d0bce0;
  iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
  if ((iVar1 != 0) && (param_2 < 0x1e0)) {
    _DAT_02d0bd00 = 0x280;
    _DAT_02d0bd0c = (0x280 - param_1) / 2;
    _DAT_02d0bd10 = (0x1e0 - param_2) / 2;
    piStack_110 = _DAT_02d0bce0;
    _DAT_02d0bd04 = 0x1e0;
    iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
  }
  if (iVar1 != 0) {
    if (param_3 != 0x20) {
      return 0;
    }
    piStack_110 = _DAT_02d0bce0;
    iVar1 = (**(code **)(*_DAT_02d0bce0 + 0x54))();
    if (iVar1 != 0) {
      return 0;
    }
    _DAT_02d0bd08 = 0x18;
    _DAT_02d0bcfc = 1;
  }
  piStack_110 = (int *)0x579e31;
  memset(&piStack_100,0,0x6c);
  piStack_100 = (int *)0x6c;
  uStack_98 = 0x6218;
  iStack_fc = 0x21;
  piStack_110 = _DAT_02d0bce0;
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
  memset(auStack_38,0,4);
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
        *(void **)(&DAT_01c5faec + iVar5) =
             (void *)(DAT_005fba18 * iVar1 * ((int)(iVar2 - (uint)(iVar3 << 2 < 0)) >> 3) +
                     (int)DAT_0060b010);
        iVar1 = iVar1 + 1;
        *(uint *)(&DAT_01c60dac + iVar5) = DAT_0072ffac + iVar4;
        iVar4 = iVar4 + iStack_40;
        iVar5 = iVar5 + 4;
      } while (iVar1 < DAT_005fba1c);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401810(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar1 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_0057a770();
    do {
      memset(auStack_b0,0,0x6c);
      auStack_b0[0] = 0x6c;
      iVar2 = (**(code **)(*_DAT_02d0bce8 + 100))(_DAT_02d0bce8,0,auStack_b0,1,0);
      if (iVar2 != 0) {
        _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d71de4 = 0x1ec;
        core_main_c_FUN_004e4330("Clear of back buffer failed");
      }
      iVar2 = 0;
      dest = pvStack_a0;
      if (0 < _DAT_02d0bd04) {
        do {
          iVar5 = _DAT_02d0bd00 * _DAT_02d0bd08 >> 0x1f;
          memset
                    (dest,0,(int)((_DAT_02d0bd00 * _DAT_02d0bd08 + iVar5 * -8) -
                                 (uint)(iVar5 << 2 < 0)) >> 3);
          iVar2 = iVar2 + 1;
          dest = (void *)((int)dest + iStack_b4);
        } while (iVar2 < _DAT_02d0bd04);
      }
      iVar2 = (**(code **)(*_DAT_02d0bce8 + 0x80))(_DAT_02d0bce8,0);
      if (iVar2 != 0) {
        _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d71de4 = 0x1f6;
        core_main_c_FUN_004e4330("Unlock of back buffer clear failed");
      }
      _DAT_02d0bcf4 = 1;
      iVar1 = iVar1 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    } while (iVar1 < 3);
    return 1;
  }
  _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d71de4 = 0x1d1;
  core_main_c_FUN_004e4330("setScreenResolution - Create back buffer failed!");
  return 0;
}
