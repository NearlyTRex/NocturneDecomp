// Name: core_mission.cpp_CDemonMission_FUN_00523b70
// Address: 00523b70
// Address Range: [[00523b70, 00523bd8]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523b70(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    if (in_stack_00000008->actor_name[0] == '\0') {
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
    }
    iVar1 = *(int *)this_ptr->field6_0x54c;
    if (iVar1 != 0) {
      in_stack_00000008->next_actor = (CDemonActor *)0x0;
      in_stack_00000008->field28_0x150 = iVar1;
      *(CDemonActor **)(*(int *)this_ptr->field6_0x54c + 0x14c) = in_stack_00000008;
      *(CDemonActor **)this_ptr->field6_0x54c = in_stack_00000008;
      return;
    }
    in_stack_00000008->next_actor = (CDemonActor *)0x0;
    in_stack_00000008->field28_0x150 = 0;
    this_ptr->first_actor = in_stack_00000008;
    *(CDemonActor **)this_ptr->field6_0x54c = in_stack_00000008;
  }
  return;
}
