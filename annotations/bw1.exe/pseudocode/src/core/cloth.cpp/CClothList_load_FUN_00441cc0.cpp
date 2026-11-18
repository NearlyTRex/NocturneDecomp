// Name: core_cloth.cpp_CClothList_load_FUN_00441cc0
// Address: 00441cc0
// Address Range: [[00441cc0, 00441d62]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  CClothList *pCVar3;
  char (*filename) [40];
  int iVar4;
  
  iVar4 = 0;
  if (0 < this_ptr->count) {
    filename = this_ptr->filenames;
    pCVar3 = this_ptr;
    do {
      if (pCVar3->cloths[0] != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(pCVar3->cloths[0],0);
        debugFreeChecked(pCVar2);
      }
      this_ptr_00 = operator_new(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(this_ptr_00);
      }
      pCVar3->cloths[0] = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        g_CHAR_PTR_01d1d400 = "..\\core\\cloth.cpp";
        g_INT_01d1d404 = 0x5b6;
        core_main_c_displayErrorAndQuit_FUN_005030e0("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar3->cloths;
      pCVar3 = (CClothList *)pCVar3->filenames;
      iVar4 = iVar4 + 1;
      core_cloth_cpp_CCloth_load_FUN_0043e6d0(*ppCVar1,*filename);
      filename = filename + 1;
    } while (iVar4 < this_ptr->count);
  }
  return;
}
