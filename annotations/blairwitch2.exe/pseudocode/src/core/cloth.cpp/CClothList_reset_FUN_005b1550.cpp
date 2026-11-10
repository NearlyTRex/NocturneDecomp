// Name: core_cloth.cpp_CClothList_reset_FUN_005b1550
// Address: 005b1550
// Address Range: [[005b1550, 005b15b8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_reset_FUN_005b1550(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_reset_FUN_005b1550(CClothList *this_ptr)

{
  uint uVar1;
  int iVar2;
  CClothList *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (pCVar3->cloths[0] != (CCloth *)0x0) {
        uVar1 = core_necklace_cpp_FUN_005ade00(pCVar3->cloths[0],0);
        FUN_005b7fdc(uVar1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CClothList *)pCVar3->filenames;
    } while (iVar2 < this_ptr->count);
  }
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return;
}
