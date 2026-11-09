// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0
// Address: 0057a2f0
// Address Range: [[0057a2f0, 0057a3bd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)

{
  HRESULT HVar1;
  
  _DAT_02d0bcf8 = 0;
  if (_DAT_02cf5fcc == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_00565be0();
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
  HVar1 = DirectDrawCreate((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02d0bce0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
  }
  wincore_wddvmem_cpp_FUN_00579bb0(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
  return;
}
