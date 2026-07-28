// Name: core_charactr.cpp_CCharacter_renderFlames_FUN_00427290
// Address: 00427290
// Address Range: [[00427290, 0042730e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  CDemonActor *this_ptr_00;
  CCharacter *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(&this_ptr->model);
  if (0 < this_ptr->fire_count) {
    this_ptr_00 = &this_ptr->flames[0].base;
    pCVar2 = this_ptr;
    do {
      if (((this_ptr->model).part_data.visibility_flags[pCVar2->fires[0].bone_part] != 0) &&
         (pCVar1->bone_list[pCVar2->fires[0].bone_index].parent_index != -1)) {
        (*((UActorVTable *)(this_ptr_00->actor_name + 0x14c))->_ub->renderTransparent)(this_ptr_00);
      }
      pCVar2 = (CCharacter *)((pCVar2->base).actor_name + 0x18);
      iVar3 = iVar3 + 1;
      this_ptr_00 = (CDemonActor *)&this_ptr_00[1].vtable;
    } while (iVar3 < this_ptr->fire_count);
  }
  return;
}
