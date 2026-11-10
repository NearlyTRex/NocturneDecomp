// Name: core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0
// Address: 0042f6f0
// Address Range: [[0042f6f0, 0042f76e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  CDemonActor *this_ptr_00;
  CCharacter *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(&this_ptr->model);
  if (0 < this_ptr->fire_count) {
    this_ptr_00 = &this_ptr->flames[0].base;
    pCVar2 = this_ptr;
    do {
      if ((*(int *)(&(this_ptr->model).field_0x2140 + *(int *)pCVar2->fires * 4) != 0) &&
         (*(int *)(pCVar1->bone_list + *(int *)&pCVar2->fires[0].field_0x4 * 0x24 + 0x20) != -1)) {
        (*((UActorVTable *)(this_ptr_00->actor_name + 0x154))->_ub->renderTransparent)(this_ptr_00);
      }
      pCVar2 = (CCharacter *)((pCVar2->base).actor_name + 0x18);
      iVar3 = iVar3 + 1;
      this_ptr_00 = (CDemonActor *)&this_ptr_00[1].next_actor;
    } while (iVar3 < this_ptr->fire_count);
  }
  return;
}
