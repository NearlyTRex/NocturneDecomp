// Name: core_cloth.cpp_CClothList_load_FUN_005b14a0
// Address: 005b14a0
// Address Range: [[005b14a0, 005b1542]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_005b14a0(CClothList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_005b14a0(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  int iVar2;
  CCloth *pCVar3;
  uint uVar4;
  CClothList *pCVar5;
  char (*filename) [40];
  int iVar6;
  
  iVar6 = 0;
  if (0 < this_ptr->count) {
    filename = this_ptr->filenames;
    pCVar5 = this_ptr;
    do {
      if (pCVar5->cloths[0] != (CCloth *)0x0) {
        uVar4 = core_necklace_cpp_FUN_005ade00(pCVar5->cloths[0],0);
        FUN_005b7fdc(uVar4);
      }
      iVar2 = operator_new(0x3ab30);
      pCVar3 = (CCloth *)0x0;
      if (iVar2 != 0) {
        pCVar3 = (CCloth *)core_necklace_cpp_FUN_005adda0(iVar2);
      }
      pCVar5->cloths[0] = pCVar3;
      if (pCVar3 == (CCloth *)0x0) {
        _DAT_01d046a0 = "..\\core\\cloth.cpp";
        _DAT_01d046a4 = 0x5b6;
        core_main_c_FUN_004e4500("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar5->cloths;
      pCVar5 = (CClothList *)pCVar5->filenames;
      iVar6 = iVar6 + 1;
      core_cloth_cpp_CCloth_load_FUN_005adeb0(*ppCVar1,*filename);
      filename = filename + 1;
    } while (iVar6 < this_ptr->count);
  }
  return;
}
