// Name: core_bugs.cpp_CBugs_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004278c4]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_CBugs_FUN_004277e0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_CBugs_FUN_004277e0(uint param_1,
   CActorPropertyList* param_2) */

void core_bugs_cpp_CBugs_FUN_004277e0(void)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  char acStack_6c [96];
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_00000008);
  *(uint *)(extraout_EAX + 0x58) = 1;
  iVar2 = *(int *)(in_stack_00000008[7].properties[0x23].name + 0x1c) + 1;
  if (4 < iVar2) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_6c,"Bug model %d",iVar1);
      iVar1 = iVar1 + 1;
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
    } while (iVar1 < iVar2);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}
