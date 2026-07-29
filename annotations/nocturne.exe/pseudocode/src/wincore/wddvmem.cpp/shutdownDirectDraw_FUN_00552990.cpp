// Name: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_00552990
// Address: 00552990
// Address Range: [[00552990, 00552a14]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_shutdownDirectDraw_FUN_00552990(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_shutdownDirectDraw_FUN_00552990(void)

{
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
  if (_DAT_02ddf550 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*_DAT_02ddf550 + 0x4c))(_DAT_02ddf550);
  (**(code **)(*_DAT_02ddf550 + 8))(_DAT_02ddf550);
  _DAT_02ddf550 = (int *)0x0;
  return 1;
}
