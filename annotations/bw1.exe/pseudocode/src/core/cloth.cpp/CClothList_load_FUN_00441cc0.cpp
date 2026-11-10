// Name: core_cloth.cpp_CClothList_load_FUN_00441cc0
// Address: 00441cc0
// Address Range: [[00441cc0, 00441d62]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  uint uVar3;
  CClothList *pCVar4;
  char (*filename) [40];
  int iVar5;
  
  iVar5 = 0;
  if (0 < this_ptr->count) {
    filename = this_ptr->filenames;
    pCVar4 = this_ptr;
    do {
      if (pCVar4->cloths[0] != (CCloth *)0x0) {
        uVar3 = core_cloth_cpp_FUN_0043e620(pCVar4->cloths[0],0);
        FUN_005c0344(uVar3);
      }
      this_ptr_00 = (CCloth *)debugAllocTracked1(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(this_ptr_00);
      }
      pCVar4->cloths[0] = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        _DAT_01d1d400 = "..\\core\\cloth.cpp";
        _DAT_01d1d404 = 0x5b6;
        core_main_c_FUN_005030e0("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar4->cloths;
      pCVar4 = (CClothList *)pCVar4->filenames;
      iVar5 = iVar5 + 1;
      core_cloth_cpp_CCloth_load_FUN_0043e6d0(*ppCVar1,*filename);
      filename = filename + 1;
    } while (iVar5 < this_ptr->count);
  }
  return;
}
