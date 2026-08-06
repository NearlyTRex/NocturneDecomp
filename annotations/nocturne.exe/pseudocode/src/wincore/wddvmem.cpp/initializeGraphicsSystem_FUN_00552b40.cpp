// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_00552b40
// Address: 00552b40
// Address Range: [[00552b40, 00552ca4]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_00552b40(int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_00552b40(int width,int height)

{
  int iVar1;
  
  DAT_005c5010 = malloc
                           (((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                                  (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowWidth * g_WindowHeight);
  if (DAT_005c5010 == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02ddf560 = malloc(g_WindowWidth * g_WindowHeight * 4 + 0x40);
  if (_DAT_02ddf560 == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 239;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_006af62c = (int)_DAT_02ddf560 + 0x10U & 0xfffffff0;
  if (_DAT_02ddf55c != (int *)0x0) {
    (**(code **)(*_DAT_02ddf55c + 8))(_DAT_02ddf55c);
    _DAT_02ddf55c = (int *)0x0;
  }
  if (_DAT_02ddf558 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf558 + 8))(_DAT_02ddf558);
    _DAT_02ddf558 = (int *)0x0;
  }
  if (_DAT_02ddf554 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf554 + 8))(_DAT_02ddf554);
    _DAT_02ddf554 = (int *)0x0;
  }
  if (_DAT_02ddf550 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf550 + 0x4c))(_DAT_02ddf550);
    (**(code **)(*_DAT_02ddf550 + 8))(_DAT_02ddf550);
    _DAT_02ddf550 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02ddf550,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02ddf550 + 0x50))(_DAT_02ddf550,_DAT_02de2098,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_00531780(_DAT_02de2098);
  return 1;
}
