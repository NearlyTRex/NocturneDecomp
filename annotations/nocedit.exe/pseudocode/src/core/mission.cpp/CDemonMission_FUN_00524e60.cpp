// Name: core_mission.cpp_CDemonMission_FUN_00524e60
// Address: 00524e60
// Address Range: [[00524e60, 00524ee5]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00524e60(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524e60(CDemonMission *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  FILE *in_stack_00000008;
  int in_stack_0000000c;
  
  for (actor_ptr = this_ptr->first_actor; actor_ptr != (CDemonActor *)0x0;
      actor_ptr = actor_ptr->next_actor) {
    if ((in_stack_0000000c != 0) ||
       ((((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHero"), iVar1 == 0 &&
          (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CEnemy"), iVar1 == 0))
         && (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CNPC"), iVar1 == 0))
        && (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon"), iVar1 == 0)
        ))) {
      (*actor_ptr->vtable->writeDependencies)(actor_ptr,in_stack_00000008);
    }
  }
  return;
}
