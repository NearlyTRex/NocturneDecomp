// Name: core_mission.cpp_CDemonMission_FUN_00523b70
// Address: 00523b70
// Address Range: [[00523b70, 00523bd8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_00523b70(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523b70(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    if (in_stack_00000008->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
    }
    pCVar1 = *(CDemonActor **)this_ptr->unk4;
    if (pCVar1 != (CDemonActor *)0x0) {
      in_stack_00000008->next_actor = (CDemonActor *)0x0;
      in_stack_00000008->prev_actor = pCVar1;
      *(CDemonActor **)(*(int *)this_ptr->unk4 + 0x14c) = in_stack_00000008;
      *(CDemonActor **)this_ptr->unk4 = in_stack_00000008;
      return;
    }
    in_stack_00000008->next_actor = (CDemonActor *)0x0;
    in_stack_00000008->prev_actor = (CDemonActor *)0x0;
    this_ptr->first_actor = in_stack_00000008;
    *(CDemonActor **)this_ptr->unk4 = in_stack_00000008;
  }
  return;
}
