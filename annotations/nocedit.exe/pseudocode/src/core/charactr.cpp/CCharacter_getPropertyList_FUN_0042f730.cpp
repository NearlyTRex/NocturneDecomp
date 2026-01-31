// Name: core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
// Address: 0042f730
// Address Range: [[0042f730, 0042f7f4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730 (CCharacter *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730
          (CCharacter *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e500(property_list);
  iVar2 = 0;
  iVar1 = *(int *)this_ptr->carry_hands[0].unk1;
  while (iVar1 < 0) {
    iVar2 = iVar2 + 1;
    if (1 < iVar2) goto LAB_0042f793;
    iVar1 = *(int *)this_ptr->carry_hands[1].unk1;
    this_ptr = (CCharacter *)&(this_ptr->base).orient_matrix.m[0].z;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
LAB_0042f793:
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  return;
}
