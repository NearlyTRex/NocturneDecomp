// Name: core_mission.cpp_CDemonMission_FUN_00523f20
// Address: 00523f20
// Address Range: [[00523f20, 00523f4a]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523f20(CDemonMission *this_ptr)

{
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(this_ptr,in_stack_00000008);
    if (in_stack_0000000c != 0) {
      core_actor_cpp_deleteActor_FUN_00408820(in_stack_00000008);
      return;
    }
  }
  return;
}
