// Name: core_cloth.cpp_CClothList_process_FUN_00438550
// Address: 00438550
// Address Range: [[00438550, 00438596]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CClothList *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_process_FUN_00436e50
                (pCVar2->cloths[0],position,euler,delta_time,floor_y,model_ptr);
      pCVar2 = (CClothList *)pCVar2->filenames;
    } while (iVar1 < this_ptr->count);
  }
  return;
}
