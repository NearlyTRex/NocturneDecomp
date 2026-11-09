// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_00579690
// Address: 00579690
// Address Range: [[00579690, 0057973b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00579690(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00579690(void)

{
  HRESULT HVar1;
  int iVar2;
  
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
    iVar2 = (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}
