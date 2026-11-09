// Name: core_cloth.cpp_CClothList_load_FUN_0043f920
// Address: 0043f920
// Address Range: [[0043f920, 0043f9c2]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_0043f920(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043f920(CClothList *this_ptr)

{
  CClothList *pCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  uint uVar3;
  CClothList *pCVar4;
  CClothList *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)this_ptr) {
    pCVar5 = this_ptr + 4;
    pCVar4 = this_ptr;
    do {
      if (*(int *)(pCVar4 + 0x194) != 0) {
        uVar3 = core_cloth_cpp_FUN_0043c280(*(int *)(pCVar4 + 0x194),0);
        FUN_005a30c4(uVar3);
      }
      this_ptr_00 = (CCloth *)FUN_005a3cb2(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_FUN_0043c220(this_ptr_00);
      }
      *(CCloth **)(pCVar4 + 0x194) = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        _DAT_01d71de0 = "..\\core\\cloth.cpp";
        _DAT_01d71de4 = 0x5b6;
        core_main_c_FUN_004e4330("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar4 + 0x194;
      pCVar4 = pCVar4 + 4;
      iVar6 = iVar6 + 1;
      core_cloth_cpp_FUN_0043c330(*(uint *)pCVar1,pCVar5);
      pCVar5 = pCVar5 + 0x28;
    } while (iVar6 < *(int *)this_ptr);
  }
  return;
}
