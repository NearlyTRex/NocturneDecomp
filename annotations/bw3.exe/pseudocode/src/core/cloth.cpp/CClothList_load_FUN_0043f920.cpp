// Name: core_cloth.cpp_CClothList_load_FUN_0043f920
// Address: 0043f920
// Address Range: [[0043f920, 0043f9c2]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_0043f920(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043f920(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  uint uVar3;
  CClothList *pCVar4;
  char (*pacVar5) [40];
  int iVar6;
  
  iVar6 = 0;
  if (0 < this_ptr->count) {
    pacVar5 = this_ptr->filenames;
    pCVar4 = this_ptr;
    do {
      if (pCVar4->cloths[0] != (CCloth *)0x0) {
        uVar3 = core_cloth_cpp_FUN_0043c280(pCVar4->cloths[0],0);
        FUN_005a30c4(uVar3);
      }
      this_ptr_00 = (CCloth *)operator_new(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_0043c220(this_ptr_00);
      }
      pCVar4->cloths[0] = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        _DAT_01d71de0 = "..\\core\\cloth.cpp";
        _DAT_01d71de4 = 0x5b6;
        core_main_c_FUN_004e4330("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar4->cloths;
      pCVar4 = (CClothList *)pCVar4->filenames;
      iVar6 = iVar6 + 1;
      core_cloth_cpp_FUN_0043c330(*ppCVar1,pacVar5);
      pacVar5 = pacVar5 + 1;
    } while (iVar6 < this_ptr->count);
  }
  return;
}
