// Name: engine_2d.c_reinitializeGraphicsSystem_FUN_00403770
// Address: 00403770
// Address Range: [[00403770, 00403774]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00403770(void)

{
  int iVar1;
  
  _DAT_02ddf568 = 0;
  if (INT_02dc9d60 == 0) {
    return;
  }
  engine_special_cpp_restoreVideoMode_FUN_005325f0();
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
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(DAT_005b761c,DAT_005b7620,DAT_005b7624);
  return;
}
