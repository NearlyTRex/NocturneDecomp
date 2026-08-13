// Name: core_mission.cpp_CDemonMission_calculateAllActorChecksums_FUN_004d98c0
// Address: 004d98c0
// Address Range: [[004d98c0, 004d98f2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_calculateAllActorChecksums_FUN_004d98c0(CDemonMission *this_ptr,uint *checksum)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_calculateAllActorChecksums_FUN_004d98c0(CDemonMission *this_ptr,uint *checksum)

{
  CDemonActor *this_ptr_00;
  
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    (*((this_ptr_00->vtable)._ub)->calculateChecksum)(this_ptr_00,checksum);
  }
  return;
}
