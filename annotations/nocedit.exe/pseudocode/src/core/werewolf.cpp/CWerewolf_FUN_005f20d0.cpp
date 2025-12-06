// Name: core_werewolf.cpp_CWerewolf_FUN_005f20d0
// Address: 005f20d0
// Address Range: [[005f20d0, 005f21da]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005f20d0(CWerewolf * this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000014;
  uint uStack00000018;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  if (*(int *)(this_ptr->field6_0xbed8 + 0x10) == 0) {
    if (this_ptr->type != 2) {
      return;
    }
  }
  else {
    pcStack00000010 = (char *)0x0;
    pcStack0000000c = (char *)0x447a0000;
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    if (this_ptr->type != 2) {
      return;
    }
  }
  pcStack00000014 = (char *)0x0;
  pcStack00000010 = "CWayPoint";
  pcStack0000000c = (char *)0x1;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  uStack00000018 = 0;
  pcStack00000014 = "CWayPoint";
  pcStack00000010 = (char *)0x1;
  pcStack0000000c = this_ptr->field8_0xbef0 + 4;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}
