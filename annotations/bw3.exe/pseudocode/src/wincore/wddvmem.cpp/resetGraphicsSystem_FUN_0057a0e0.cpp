// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0
// Address: 0057a0e0
// Address Range: [[0057a0e0, 0057a2e4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_0057a0e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_0057a0e0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  _DAT_02d0bcf8 = 1;
  if (_DAT_02cf5fcc != 0) {
    if (DAT_005fba20 < 0x10) {
      wincore_wddvmem_cpp_FUN_00579bb0(DAT_005fba18,DAT_005fba1c,0x10);
      engine_special_cpp_clearScreen_FUN_00560d70();
      engine_2d_c_drawText_FUN_00401fe0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fe0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_FUN_0057a8a0();
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    engine_special_cpp_clearScreen_FUN_00560d70();
    if (_DAT_02d0bcec != (int *)0x0) {
      (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
      _DAT_02d0bcec = (int *)0x0;
    }
    if (_DAT_02d0bce8 != (int *)0x0) {
      (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
      _DAT_02d0bce8 = (int *)0x0;
    }
    if (_DAT_02d0bce4 != (int *)0x0) {
      (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
      _DAT_02d0bce4 = (int *)0x0;
    }
    if (_DAT_02d0bce0 != (int *)0x0) {
      (**(code **)(*_DAT_02d0bce0 + 0x4c))(_DAT_02d0bce0);
      (**(code **)(*_DAT_02d0bce0 + 8))(_DAT_02d0bce0);
      _DAT_02d0bce0 = (int *)0x0;
    }
    iVar1 = engine_special_cpp_FUN_00565a90(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
    if (iVar1 == 0) {
      _DAT_01c6cee8 = iVar1;
      _DAT_02cf5fcc = iVar1;
      if (_DAT_02d0bcec != (int *)0x0) {
        (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
        _DAT_02d0bcec = (int *)0x0;
      }
      if (_DAT_02d0bce8 != (int *)0x0) {
        (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
        _DAT_02d0bce8 = (int *)0x0;
      }
      if (_DAT_02d0bce4 != (int *)0x0) {
        (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
        _DAT_02d0bce4 = (int *)0x0;
      }
      if (_DAT_02d0bce0 != (int *)0x0) {
        (**(code **)(*_DAT_02d0bce0 + 0x4c))(_DAT_02d0bce0);
        (**(code **)(*_DAT_02d0bce0 + 8))(_DAT_02d0bce0);
        _DAT_02d0bce0 = (int *)0x0;
      }
      HVar2 = DirectDrawCreate
                        ((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02d0bce0,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
      }
      wincore_wddvmem_cpp_FUN_00579bb0(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
    }
  }
  return;
}
