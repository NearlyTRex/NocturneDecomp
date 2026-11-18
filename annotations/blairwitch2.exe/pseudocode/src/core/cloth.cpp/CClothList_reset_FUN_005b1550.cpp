// Name: core_cloth.cpp_CClothList_reset_FUN_005b1550
// Address: 005b1550
// Address Range: [[005b1550, 005b15b8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_reset_FUN_005b1550(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_reset_FUN_005b1550(CClothList *this_ptr)

{
  CCloth *ptr;
  int iVar1;
  CClothList *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (pCVar2->cloths[0] != (CCloth *)0x0) {
        ptr = core_cloth_cpp_CCloth_dtor_FUN_005ade00(pCVar2->cloths[0],0);
        debugFreeChecked(ptr);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CClothList *)pCVar2->filenames;
    } while (iVar1 < this_ptr->count);
  }
  this_ptr->count = 0;
  memset(this_ptr->filenames,0,400);
  memset(this_ptr->cloths,0,0x28);
  return;
}
