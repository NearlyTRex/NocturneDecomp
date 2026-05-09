// Name: core_cloth.cpp_CClothList_process_FUN_0043c2d0
// Address: 0043c2d0
// MANUAL RECONSTRUCTION
// Address Range: [[0043c2d0, 0043c316]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_process_FUN_0043c2d0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_process_FUN_0043c2d0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)

{
  int iVar1;

  iVar1 = 0;
  if (0 < this_ptr->count) {
    do {
      core_cloth_cpp_CCloth_process_FUN_0043ab80
                (this_ptr->cloths[iVar1],position,euler,delta_time,floor_y,model_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->count);
  }
  return;
}
