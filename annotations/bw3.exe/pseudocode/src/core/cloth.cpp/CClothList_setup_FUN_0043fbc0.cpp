// Name: core_cloth.cpp_CClothList_setup_FUN_0043fbc0
// Address: 0043fbc0
// Address Range: [[0043fbc0, 0043fbfe]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setup_FUN_0043fbc0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setup_FUN_0043fbc0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  CClothList *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_0043cb00(pCVar1->cloths[0],position,euler,model_ptr);
      pCVar1 = (CClothList *)pCVar1->filenames;
    } while (iVar2 < this_ptr->count);
  }
  return;
}
