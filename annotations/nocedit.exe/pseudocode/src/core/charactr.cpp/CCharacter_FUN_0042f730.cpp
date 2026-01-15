// Name: core_charactr.cpp_CCharacter_FUN_0042f730
// Address: 0042f730
// Address Range: [[0042f730, 0042f7f4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f730(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f730(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e500();
  iVar2 = 0;
  iVar1 = *(int *)this_ptr->carry_hands[0].field0_0x0;
  while (iVar1 < 0) {
    iVar2 = iVar2 + 1;
    if (1 < iVar2) goto LAB_0042f793;
    iVar1 = *(int *)this_ptr->carry_hands[1].field0_0x0;
    this_ptr = (CCharacter *)&(this_ptr->base_actor).orient_matrix.m[0].z;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
LAB_0042f793:
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}
