// Name: core_cloth.cpp_CClothList_load_FUN_005b14a0
// Address: 005b14a0
// Address Range: [[005b14a0, 005b1542]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_005b14a0(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_005b14a0(CClothList *this_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CClothList *pCVar5;
  CClothList *filename;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)this_ptr) {
    filename = this_ptr + 4;
    pCVar5 = this_ptr;
    do {
      if (*(int *)(pCVar5 + 0x194) != 0) {
        uVar4 = core_necklace_cpp_FUN_005ade00(*(int *)(pCVar5 + 0x194),0);
        FUN_005b7fdc(uVar4);
      }
      iVar2 = FUN_005b8be2(0x3ab30);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = core_necklace_cpp_FUN_005adda0(iVar2);
      }
      *(int *)(pCVar5 + 0x194) = iVar3;
      if (iVar3 == 0) {
        _DAT_01d046a0 = "..\\core\\cloth.cpp";
        _DAT_01d046a4 = 0x5b6;
        core_main_c_FUN_004e4500("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar5 + 0x194;
      pCVar5 = pCVar5 + 4;
      iVar6 = iVar6 + 1;
      core_cloth_cpp_CCloth_load_FUN_005adeb0(*(CCloth **)pCVar1,(char *)filename);
      filename = filename + 0x28;
    } while (iVar6 < *(int *)this_ptr);
  }
  return;
}
