// Name: core_cloth.cpp_CClothList_applyRotation_FUN_0043c3a0
// Address: 0043c3a0
// Address Range: [[0043c3a0, 0043c3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_applyRotation_FUN_0043c3a0(CClothList *this_ptr,CVector3f *euler)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_applyRotation_FUN_0043c3a0(CClothList *this_ptr,CVector3f *euler)

{
  int iVar1;
  CClothList *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_applyRotation_FUN_0043e1a0(pCVar2->cloths[0],euler);
      pCVar2 = (CClothList *)pCVar2->filenames;
    } while (iVar1 < this_ptr->count);
  }
  return;
}
