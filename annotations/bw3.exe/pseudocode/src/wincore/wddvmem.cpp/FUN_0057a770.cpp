// Name: wincore_wddvmem.cpp_FUN_0057a770
// Address: 0057a770
// Address Range: [[0057a770, 0057a897]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_0057a770(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_0057a770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01c6cee8 != 0) {
    (*_DAT_02cf6058)(&DAT_01c6af98,&DAT_01c6a070);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
    return;
  }
  if (_DAT_02d0bcec != (int *)0x0) {
    (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
    _DAT_02d0bcec = (int *)0x0;
  }
  if (DAT_005fba20 == 8) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(byte *)(iVar2 + 0x2d0bd18) = (&DAT_01c6af98)[iVar3];
      *(byte *)(iVar2 + 0x2d0bd19) = (&DAT_01c6af99)[iVar3];
      *(byte *)(iVar2 + 0x2d0bd1a) = (&DAT_01c6af9a)[iVar3];
      iVar3 = iVar3 + 3;
      *(byte *)(iVar2 + 0x2d0bd1b) = 1;
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    iVar2 = (**(code **)(*_DAT_02d0bce0 + 0x14))(_DAT_02d0bce0,4,0x2d0bd18,&DAT_02d0bcec,0);
    if (iVar2 != 0) {
      _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d71de4 = 0x301;
      core_main_c_FUN_004e4330("setpal - Unable to create palette object");
    }
    iVar2 = (**(code **)(*_DAT_02d0bce4 + 0x7c))(_DAT_02d0bce4,_DAT_02d0bcec);
    if (iVar2 != 0) {
      _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d71de4 = 0x307;
      core_main_c_FUN_004e4330("setpal - Unable to set front buffer palette");
    }
  }
  if (DAT_005fba20 < 9) {
    return;
  }
  wincore_wddvmem_cpp_FUN_0057a5b0();
  return;
}
