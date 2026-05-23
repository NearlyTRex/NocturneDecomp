// Name: core_charactr.cpp_CCharacter_renderFlames_FUN_0042b110
// Address: 0042b110
// MANUAL RECONSTRUCTION
// Address Range: [[0042b110, 0042b18e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042b110(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042b110(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  CDemonActor *this_ptr_00;
  int iVar3;

  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
  if (0 < this_ptr->fire_count) {
    do {
      this_ptr_00 = &this_ptr->flames[iVar3].base;
      if (((this_ptr->model).part_data.visibility_flags[this_ptr->fires[iVar3].bone_part] != 0) &&
         (pCVar1->bone_list[this_ptr->fires[iVar3].bone_index].parent_index != -1)) {
        (*((this_ptr_00->vtable)._ub)->renderTransparent)(this_ptr_00);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->fire_count);
  }
  return;
}
