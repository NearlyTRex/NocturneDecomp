// Name: engine_2d.c_resetGraphicsSystem_FUN_00403760
// Address: 00403760
// Address Range: [[00403760, 00403764]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00403760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00403760(void)

{
  int iVar1;
  
  _DAT_02ddf568 = 1;
  if (INT_02dc9d60 != 0) {
    if (DAT_005b7624 < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(g_WindowWidth,g_WindowHeight,0x10);
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00402600("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00402600("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00402600("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00402600("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    }
    engine_special_cpp_clearScreen_FUN_0052ee70();
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005324a0
                      (g_WindowWidth,g_WindowHeight,DAT_005b7624);
    if (iVar1 == 0) {
      _DAT_01c02594 = iVar1;
      INT_02dc9d60 = iVar1;
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
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                (g_WindowWidth,g_WindowHeight,DAT_005b7624);
    }
  }
  return;
}
