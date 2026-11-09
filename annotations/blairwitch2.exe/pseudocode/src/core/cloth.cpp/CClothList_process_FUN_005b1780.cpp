// Name: core_cloth.cpp_CClothList_process_FUN_005b1780
// Address: 005b1780
// Address Range: [[005b1780, 005b17c6]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_process_FUN_005b1780(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_process_FUN_005b1780(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CClothList *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_process_FUN_005afdf0
                (*(CCloth **)(pCVar2 + 0x194),position,euler,delta_time,floor_y,model_ptr);
      pCVar2 = pCVar2 + 4;
    } while (iVar1 < *(int *)this_ptr);
  }
  return;
}
