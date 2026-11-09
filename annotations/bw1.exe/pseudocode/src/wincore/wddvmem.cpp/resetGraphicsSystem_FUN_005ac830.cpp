// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830
// Address: 005ac830
// Address Range: [[005ac830, 005aca34]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ac830(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ac830(void)

{
  int iVar1;
  HRESULT HVar2;
  
  _DAT_02c99318 = 1;
  if (_DAT_02c83370 != 0) {
    if (DAT_0061b4a0 < 0x10) {
      wincore_wddvmem_cpp_FUN_005ac300(DAT_0061b498,DAT_0061b49c,0x10);
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_2d_c_drawText_FUN_00401fe0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fe0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_FUN_005acff0();
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    engine_special_cpp_clearScreen_FUN_0057dc40();
    if (_DAT_02c9930c != (int *)0x0) {
      (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
      _DAT_02c9930c = (int *)0x0;
    }
    if (_DAT_02c99308 != (int *)0x0) {
      (**(code **)(*_DAT_02c99308 + 8))(_DAT_02c99308);
      _DAT_02c99308 = (int *)0x0;
    }
    if (_DAT_02c99304 != (int *)0x0) {
      (**(code **)(*_DAT_02c99304 + 8))(_DAT_02c99304);
      _DAT_02c99304 = (int *)0x0;
    }
    if (_DAT_02c99300 != (int *)0x0) {
      (**(code **)(*_DAT_02c99300 + 0x4c))(_DAT_02c99300);
      (**(code **)(*_DAT_02c99300 + 8))(_DAT_02c99300);
      _DAT_02c99300 = (int *)0x0;
    }
    iVar1 = engine_special_cpp_FUN_005821c0(DAT_0061b498,DAT_0061b49c,DAT_0061b4a0);
    if (iVar1 == 0) {
      _DAT_01c50948 = iVar1;
      _DAT_02c83370 = iVar1;
      if (_DAT_02c9930c != (int *)0x0) {
        (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
        _DAT_02c9930c = (int *)0x0;
      }
      if (_DAT_02c99308 != (int *)0x0) {
        (**(code **)(*_DAT_02c99308 + 8))(_DAT_02c99308);
        _DAT_02c99308 = (int *)0x0;
      }
      if (_DAT_02c99304 != (int *)0x0) {
        (**(code **)(*_DAT_02c99304 + 8))(_DAT_02c99304);
        _DAT_02c99304 = (int *)0x0;
      }
      if (_DAT_02c99300 != (int *)0x0) {
        (**(code **)(*_DAT_02c99300 + 0x4c))(_DAT_02c99300);
        (**(code **)(*_DAT_02c99300 + 8))(_DAT_02c99300);
        _DAT_02c99300 = (int *)0x0;
      }
      HVar2 = DirectDrawCreate
                        ((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02c99300,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (**(code **)(*_DAT_02c99300 + 0x50))(_DAT_02c99300,_DAT_02c9be68,0x11);
      }
      wincore_wddvmem_cpp_FUN_005ac300(DAT_0061b498,DAT_0061b49c,DAT_0061b4a0);
    }
  }
  return;
}
