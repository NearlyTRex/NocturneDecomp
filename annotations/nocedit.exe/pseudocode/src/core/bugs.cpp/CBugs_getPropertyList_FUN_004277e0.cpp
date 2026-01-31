// Name: core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004278c4]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  int in_stack_0000000c;
  char acStack_68 [92];
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(property_list);
  *(uint *)(extraout_EAX + 0x58) = 1;
  iVar2 = *(int *)(in_stack_0000000c + 0x122c4) + 1;
  if (4 < iVar2) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      sprintf(acStack_68,"Bug model %d",iVar1);
      iVar1 = iVar1 + 1;
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
    } while (iVar1 < iVar2);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
