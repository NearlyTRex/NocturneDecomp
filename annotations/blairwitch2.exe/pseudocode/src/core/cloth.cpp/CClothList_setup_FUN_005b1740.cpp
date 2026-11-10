// Name: core_cloth.cpp_CClothList_setup_FUN_005b1740
// Address: 005b1740
// Address Range: [[005b1740, 005b177e]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setup_FUN_005b1740(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setup_FUN_005b1740(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_005ae680(pCVar1->cloths[0],position,euler,model_ptr);
      pCVar1 = (CClothList *)pCVar1->filenames;
    } while (iVar2 < this_ptr->count);
  }
  return;
}
