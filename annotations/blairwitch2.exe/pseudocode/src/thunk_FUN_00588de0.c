// Name: thunk_FUN_00588de0
// Address: 00402ac0
// Address Range: [[00402ac0, 00402ac4]]
// Convention: unknown
// Signature: void thunk_FUN_00588de0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00588de0(void)

{
  int iVar1;
  
  _DAT_02661af8 = 1;
  if (_DAT_0264bba0 != 0) {
    if (DAT_006141c0 < 0x10) {
      FUN_00588a50(DAT_006141b8,DAT_006141bc,0x10);
      FUN_0055b1f0();
      FUN_00401fe0("You have hit a kludge in the program.",0,0);
      FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      FUN_00401fe0("Press any key to continue.",0,0x42);
      FUN_00589560();
      FUN_0058ead0();
    }
    FUN_0055b1f0();
    if (_DAT_02661aec != (int *)0x0) {
      (**(code **)(*_DAT_02661aec + 8))(_DAT_02661aec);
      _DAT_02661aec = (int *)0x0;
    }
    if (_DAT_02661ae8 != (int *)0x0) {
      (**(code **)(*_DAT_02661ae8 + 8))(_DAT_02661ae8);
      _DAT_02661ae8 = (int *)0x0;
    }
    if (_DAT_02661ae4 != (int *)0x0) {
      (**(code **)(*_DAT_02661ae4 + 8))(_DAT_02661ae4);
      _DAT_02661ae4 = (int *)0x0;
    }
    if (_DAT_02661ae0 != (int *)0x0) {
      (**(code **)(*_DAT_02661ae0 + 0x4c))(_DAT_02661ae0);
      (**(code **)(*_DAT_02661ae0 + 8))(_DAT_02661ae0);
      _DAT_02661ae0 = (int *)0x0;
    }
    iVar1 = FUN_0055f770(DAT_006141b8,DAT_006141bc,DAT_006141c0);
    if (iVar1 == 0) {
      _DAT_01c37788 = iVar1;
      _DAT_0264bba0 = iVar1;
      if (_DAT_02661aec != (int *)0x0) {
        (**(code **)(*_DAT_02661aec + 8))(_DAT_02661aec);
        _DAT_02661aec = (int *)0x0;
      }
      if (_DAT_02661ae8 != (int *)0x0) {
        (**(code **)(*_DAT_02661ae8 + 8))(_DAT_02661ae8);
        _DAT_02661ae8 = (int *)0x0;
      }
      if (_DAT_02661ae4 != (int *)0x0) {
        (**(code **)(*_DAT_02661ae4 + 8))(_DAT_02661ae4);
        _DAT_02661ae4 = (int *)0x0;
      }
      if (_DAT_02661ae0 != (int *)0x0) {
        (**(code **)(*_DAT_02661ae0 + 0x4c))(_DAT_02661ae0);
        (**(code **)(*_DAT_02661ae0 + 8))(_DAT_02661ae0);
        _DAT_02661ae0 = (int *)0x0;
      }
      iVar1 = DirectDrawCreate(0,&DAT_02661ae0,0);
      if (iVar1 == 0) {
        (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
      }
      FUN_00588a50(DAT_006141b8,DAT_006141bc,DAT_006141c0);
    }
  }
  return;
}
