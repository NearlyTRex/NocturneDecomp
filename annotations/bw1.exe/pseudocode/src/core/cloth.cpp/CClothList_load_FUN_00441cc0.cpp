// Name: core_cloth.cpp_CClothList_load_FUN_00441cc0
// Address: 00441cc0
// Address Range: [[00441cc0, 00441d62]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

{
  CClothList *pCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  uint uVar3;
  CClothList *pCVar4;
  CClothList *filename;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)this_ptr) {
    filename = this_ptr + 4;
    pCVar4 = this_ptr;
    do {
      if (*(int *)(pCVar4 + 0x194) != 0) {
        uVar3 = core_cloth_cpp_FUN_0043e620(*(int *)(pCVar4 + 0x194),0);
        FUN_005c0344(uVar3);
      }
      this_ptr_00 = (CCloth *)FUN_005c0f32(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_FUN_0043e5c0(this_ptr_00);
      }
      *(CCloth **)(pCVar4 + 0x194) = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        _DAT_01d1d400 = "..\\core\\cloth.cpp";
        _DAT_01d1d404 = 0x5b6;
        core_main_c_FUN_005030e0("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar4 + 0x194;
      pCVar4 = pCVar4 + 4;
      iVar5 = iVar5 + 1;
      core_cloth_cpp_CCloth_load_FUN_0043e6d0(*(CCloth **)pCVar1,(char *)filename);
      filename = filename + 0x28;
    } while (iVar5 < *(int *)this_ptr);
  }
  return;
}
