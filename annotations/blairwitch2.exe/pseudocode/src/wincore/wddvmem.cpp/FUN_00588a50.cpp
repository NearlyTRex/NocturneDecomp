// Name: wincore_wddvmem.cpp_FUN_00588a50
// Address: 00588a50
// Address Range: [[00588a50, 00588dde]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_FUN_00588a50(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_FUN_00588a50(int width,int height,int bits_per_pixel)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piStack_a4;
  int *piStack_94;
  int iStack_90;
  int iStack_8c;
  uint auStack_38 [3];
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (_DAT_02661aec != (int *)0x0) {
    iStack_8c = 0x588bef;
    (**(code **)(*_DAT_02661aec + 8))();
    _DAT_02661aec = (int *)0x0;
  }
  if (_DAT_02661ae8 != (int *)0x0) {
    iStack_8c = 0x588a7e;
    (**(code **)(*_DAT_02661ae8 + 8))();
    _DAT_02661ae8 = (int *)0x0;
  }
  if (_DAT_02661ae4 != (int *)0x0) {
    iStack_8c = 0x588a95;
    (**(code **)(*_DAT_02661ae4 + 8))();
    _DAT_02661ae4 = (int *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  DAT_006141c0 = bits_per_pixel;
  DAT_006141b8 = width;
  _DAT_02661afc = 0;
  DAT_006141bc = height;
  if (DAT_00622010 != (void *)0x0) {
    iStack_8c = 0x588ae5;
    FUN_005b86a0();
    DAT_00622010 = (void *)0x0;
  }
  if (_DAT_02661af0 != (void *)0x0) {
    iStack_8c = 0x588b00;
    FUN_005b86a0();
    DAT_0070c62c = 0;
  }
  iStack_8c = 0x588b34;
  DAT_00622010 = FUN_005b8580
                           (((int)((DAT_006141c0 + (DAT_006141c0 >> 0x1f) * -8) -
                                  (uint)((DAT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_006141bc * DAT_006141b8);
  if (DAT_00622010 == (void *)0x0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xea;
    iStack_8c = 0x588b60;
    core_main_c_FUN_004e4500();
  }
  iStack_8c = 0x588b7b;
  _DAT_02661af0 = FUN_005b8580(DAT_006141b8 * DAT_006141bc * 4 + 0x40);
  if (_DAT_02661af0 == (void *)0x0) {
    _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d046a4 = 0xef;
    iStack_8c = 0x588ba6;
    core_main_c_FUN_004e4500();
  }
  iStack_8c = height;
  DAT_0070c62c = (int)_DAT_02661af0 + 0x10U & 0xfffffff0;
  iStack_90 = width;
  piStack_94 = _DAT_02661ae0;
  iVar3 = (**(code **)(*_DAT_02661ae0 + 0x54))();
  if (iVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    piStack_a4 = _DAT_02661ae0;
    iVar3 = (**(code **)(*_DAT_02661ae0 + 0x54))();
    if (iVar3 != 0) {
      return 0;
    }
    _DAT_02661afc = 1;
  }
  piStack_a4 = (int *)0x588c38;
  memset(&piStack_94,0,0x6c);
  piStack_94 = (int *)0x6c;
  iStack_90 = 0x21;
  uStack_2c = 0x6218;
  piStack_a4 = _DAT_02661ae0;
  iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))();
  if (iVar3 != 0) {
    iStack_90 = 1;
    iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))(_DAT_02661ae0,&piStack_a4,&DAT_02661ae4,0);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*_DAT_02661ae0 + 0x18))(_DAT_02661ae0,&piStack_a4,&DAT_02661ae4,0),
       iVar3 != 0)) {
      return 0;
    }
  }
  memset(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar4 = (**(code **)(*_DAT_02661ae4 + 0x30))(_DAT_02661ae4,auStack_38,&DAT_02661ae8);
  pvVar2 = DAT_00622010;
  iVar3 = DAT_006141bc;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (0 < DAT_006141bc) {
      iVar7 = DAT_006141c0 >> 0x1f;
      iVar1 = DAT_006141c0 + iVar7 * -8;
      iVar5 = DAT_006141b8 * 4;
      iVar8 = 0;
      iVar6 = 0;
      do {
        *(void **)(&DAT_01c2a38c + iVar6) =
             (void *)(DAT_006141b8 * iVar4 * ((int)(iVar1 - (uint)(iVar7 << 2 < 0)) >> 3) +
                     (int)pvVar2);
        *(uint *)(&DAT_01c2b64c + iVar6) = DAT_0070c62c + iVar8;
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + iVar5;
        iVar6 = iVar6 + 4;
      } while (iVar4 < iVar3);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401810(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar3 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_00589430();
    do {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      iVar3 = iVar3 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    } while (iVar3 < 3);
    return 1;
  }
  _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d046a4 = 0x1bd;
  core_main_c_FUN_004e4500("setScreenResolution - Create back buffer failed!");
  return 0;
}
