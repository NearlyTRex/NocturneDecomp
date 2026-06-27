// Name: core_cloth.cpp_CClothList_render_FUN_0043c320
// Address: 0043c320
// Address Range: [[0043c320, 0043c394]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_render_FUN_0043c320(CClothList *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_render_FUN_0043c320(CClothList *this_ptr,CDeformableModelInstance *model_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  
  if ((model_ptr != (CDeformableModelInstance *)0x0) &&
     (iVar2 = 0, pCVar1 = this_ptr, 0 < this_ptr->count)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(pCVar1->cloths[0],model_ptr);
      pCVar1 = (CClothList *)pCVar1->filenames;
    } while (iVar2 < this_ptr->count);
  }
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_render_FUN_0043bae0(pCVar1->cloths[0],model_ptr);
      pCVar1 = (CClothList *)pCVar1->filenames;
    } while (iVar2 < this_ptr->count);
  }
  return;
}
