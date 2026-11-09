// Name: wincore_wddvmem.cpp_FUN_0057a4b0
// Address: 0057a4b0
// Address Range: [[0057a4b0, 0057a587]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_0057a4b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_0057a4b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (_DAT_02d0bcfc == 0) {
    if (_DAT_01c6cee8 != 0) {
      _DAT_02d0bcf4 = 1;
      return;
    }
    if (0 < DAT_005fba1c) {
      iVar4 = DAT_005fba20 >> 0x1f;
      iVar2 = DAT_005fba20 + iVar4 * -8;
      iVar5 = 0;
      iVar6 = DAT_005fba18 * 4;
      iVar3 = 0;
      iVar1 = 0;
      do {
        *(int *)(&DAT_01c5faec + iVar1) =
             DAT_0060b010 + DAT_005fba18 * iVar3 * ((int)(iVar2 - (uint)(iVar4 << 2 < 0)) >> 3);
        iVar3 = iVar3 + 1;
        *(int *)(&DAT_01c60dac + iVar1) = DAT_0072ffac + iVar5;
        iVar5 = iVar5 + iVar6;
        iVar1 = iVar1 + 4;
      } while (iVar3 < DAT_005fba1c);
    }
    iVar2 = (**(code **)(*_DAT_02d0bce8 + 0x80))(_DAT_02d0bce8,0);
    if (iVar2 != 0) {
      _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d71de4 = 0x28f;
      core_main_c_FUN_004e4330("closeScreenDevice - Unable to unlock");
    }
    _DAT_02d0bcf4 = 1;
  }
  return;
}
