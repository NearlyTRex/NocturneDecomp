// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
// Address: 00552e00
// Address Range: [[00552e00, 0055318e]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int width,int height,int bits_per_pixel)

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
  
  if (_DAT_02ddf55c != (int *)0x0) {
    iStack_8c = 0x552f9f;
    (**(code **)(*_DAT_02ddf55c + 8))();
    _DAT_02ddf55c = (int *)0x0;
  }
  if (_DAT_02ddf558 != (int *)0x0) {
    iStack_8c = 0x552e2e;
    (**(code **)(*_DAT_02ddf558 + 8))();
    _DAT_02ddf558 = (int *)0x0;
  }
  if (_DAT_02ddf554 != (int *)0x0) {
    iStack_8c = 0x552e45;
    (**(code **)(*_DAT_02ddf554 + 8))();
    _DAT_02ddf554 = (int *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  DAT_005b7624 = bits_per_pixel;
  g_WindowWidth = width;
  _DAT_02ddf56c = 0;
  g_WindowHeight = height;
  if (DAT_005c5010 != (void *)0x0) {
    iStack_8c = 0x552e95;
    free(DAT_005c5010);
    DAT_005c5010 = (void *)0x0;
  }
  if (_DAT_02ddf560 != (void *)0x0) {
    iStack_8c = 0x552eb0;
    free(_DAT_02ddf560);
    DAT_006af62c = 0;
  }
  iStack_8c = 0x552ee4;
  DAT_005c5010 = malloc
                           (((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                                  (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowHeight * g_WindowWidth);
  if (DAT_005c5010 == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    iStack_8c = 0x552f10;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  iStack_8c = 0x552f2b;
  _DAT_02ddf560 = malloc(g_WindowWidth * g_WindowHeight * 4 + 0x40);
  if (_DAT_02ddf560 == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 239;
    iStack_8c = 0x552f56;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  }
  iStack_8c = height;
  DAT_006af62c = (int)_DAT_02ddf560 + 0x10U & 0xfffffff0;
  iStack_90 = width;
  piStack_94 = _DAT_02ddf550;
  iVar3 = (**(code **)(*_DAT_02ddf550 + 0x54))();
  if (iVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    piStack_a4 = _DAT_02ddf550;
    iVar3 = (**(code **)(*_DAT_02ddf550 + 0x54))();
    if (iVar3 != 0) {
      return 0;
    }
    _DAT_02ddf56c = 1;
  }
  piStack_a4 = (int *)0x552fe8;
  memset(&piStack_94,0,0x6c);
  piStack_94 = (int *)0x6c;
  iStack_90 = 0x21;
  uStack_2c = 0x6218;
  piStack_a4 = _DAT_02ddf550;
  iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))();
  if (iVar3 != 0) {
    iStack_90 = 1;
    iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))(_DAT_02ddf550,&piStack_a4,&DAT_02ddf554,0);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*_DAT_02ddf550 + 0x18))(_DAT_02ddf550,&piStack_a4,&DAT_02ddf554,0),
       iVar3 != 0)) {
      return 0;
    }
  }
  memset(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar4 = (**(code **)(*_DAT_02ddf554 + 0x30))(_DAT_02ddf554,auStack_38,&DAT_02ddf558);
  pvVar2 = DAT_005c5010;
  iVar3 = g_WindowHeight;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (0 < g_WindowHeight) {
      iVar7 = DAT_005b7624 >> 0x1f;
      iVar1 = DAT_005b7624 + iVar7 * -8;
      iVar5 = g_WindowWidth * 4;
      iVar8 = 0;
      iVar6 = 0;
      do {
        *(void **)(&DAT_01bd2fa0 + iVar6) =
             (void *)(g_WindowWidth * iVar4 * ((int)(iVar1 - (uint)(iVar7 << 2 < 0)) >> 3) +
                     (int)pvVar2);
        *(uint *)(&DAT_01bd4260 + iVar6) = DAT_006af62c + iVar8;
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + iVar5;
        iVar6 = iVar6 + 4;
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
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 471;
  core_main_c_displayErrorAndQuit_FUN_004c8440("setScreenResolution - Create back buffer failed!");
  return 0;
}
