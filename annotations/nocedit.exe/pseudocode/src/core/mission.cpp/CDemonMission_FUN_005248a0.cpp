// Name: core_mission.cpp_CDemonMission_FUN_005248a0
// Address: 005248a0
// Address Range: [[005248a0, 005248d2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_005248a0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_005248a0(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  uint *in_stack_00000008;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    (*((this_ptr_00->vtable)._ub)->calculateChecksum)(this_ptr_00,in_stack_00000008);
  }
  return;
}
