// Name: core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
// Address: 00524700
// Address Range: [[00524700, 00524757]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission *this_ptr)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  CDemonActor *in_stack_00000008;
  char acStack_24 [24];
  
  in_stack_00000008->actor_name[0] = '\0';
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_00000008);
  core_mission_cpp_FUN_00524660();
  pcVar2 = acStack_24;
  do {
    cVar1 = *pcVar2;
    in_stack_00000008->actor_name[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    in_stack_00000008->actor_name[1] = cVar1;
    in_stack_00000008 = (CDemonActor *)(in_stack_00000008->actor_name + 2);
  } while (cVar1 != '\0');
  return;
}
