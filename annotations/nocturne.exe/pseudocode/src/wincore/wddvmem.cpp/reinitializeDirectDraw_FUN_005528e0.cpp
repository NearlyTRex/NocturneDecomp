// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005528e0
// Address: 005528e0
// Address Range: [[005528e0, 0055298b]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void)

{
  int iVar1;
  
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
    iVar1 = (**(code **)(*_DAT_02ddf550 + 0x50))(_DAT_02ddf550,_DAT_02de2098,0x11);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
