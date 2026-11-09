// Name: core_cloth.cpp_CClothList_remove_FUN_005b1640
// Address: 005b1640
// Address Range: [[005b1640, 005b173d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_remove_FUN_005b1640(CClothList *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_remove_FUN_005b1640(CClothList *this_ptr,int index)

{
  CClothList CVar1;
  uint uVar2;
  CClothList *pCVar3;
  CClothList *pCVar4;
  CClothList *pCVar5;
  int iVar6;
  CClothList *pCVar7;
  CClothList *pCVar8;
  
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x5f1;
    core_main_c_FUN_004e4500("CClothList::remove - invalid index");
  }
  if (*(int *)(this_ptr + index * 4 + 0x194) != 0) {
    uVar2 = core_necklace_cpp_FUN_005ade00(*(int *)(this_ptr + index * 4 + 0x194),0);
    FUN_005b7fdc(uVar2);
  }
  iVar6 = index + 1;
  if (iVar6 < *(int *)this_ptr) {
    pCVar5 = this_ptr + iVar6 * 0x28 + -0x24;
    pCVar4 = this_ptr + iVar6 * 0x28 + 4;
    pCVar3 = this_ptr + iVar6 * 4;
    do {
      pCVar7 = pCVar4;
      pCVar8 = pCVar5;
      do {
        CVar1 = *pCVar7;
        *pCVar8 = CVar1;
        if (CVar1 == (CClothList)0x0) break;
        CVar1 = pCVar7[1];
        pCVar7 = pCVar7 + 2;
        pCVar8[1] = CVar1;
        pCVar8 = pCVar8 + 2;
      } while (CVar1 != (CClothList)0x0);
      *(uint *)(pCVar3 + 400) = *(uint *)(pCVar3 + 0x194);
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 0x28;
      pCVar4 = pCVar4 + 0x28;
      pCVar3 = pCVar3 + 4;
    } while (iVar6 < *(int *)this_ptr);
  }
  iVar6 = *(int *)this_ptr;
  *(int *)this_ptr = iVar6 + -1;
  this_ptr[(iVar6 + -1) * 0x28 + 4] = (CClothList)0x0;
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = 0;
  return;
}
