// Name: wincore_wddvmem.cpp_FUN_00553ba0
// Address: 00553ba0
// Address Range: [[00553ba0, 00553c9f] [00553ca1, 00553d11]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_00553ba0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_00553ba0(void)

{
  int iVar1;
  
  if ((INT_02dc9d60 == 0) || (_DAT_02ddf568 == 0)) {
    if (_DAT_02ddf554 != (int *)0x0) {
      (**(code **)(*_DAT_02ddf554 + 0x6c))(_DAT_02ddf554);
      (**(code **)(*_DAT_02ddf558 + 0x6c))(_DAT_02ddf558);
      if (_DAT_02ddf55c != (int *)0x0) {
        iVar1 = (**(code **)(*_DAT_02ddf554 + 0x7c))(_DAT_02ddf554,_DAT_02ddf55c);
        if (iVar1 != 0) {
          PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
          INT_01cc4804 = 0x3df;
          core_main_c_FUN_004c8440("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005324a0
                      (DAT_005b761c,DAT_005b7620,DAT_005b7624);
    if (iVar1 == 0) {
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
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(DAT_005b761c,DAT_005b7620,DAT_005b7624);
    }
    SetFocus(_DAT_02de2098);
  }
  return;
}
