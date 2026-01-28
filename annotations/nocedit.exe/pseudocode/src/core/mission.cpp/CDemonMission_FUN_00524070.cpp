// Name: core_mission.cpp_CDemonMission_FUN_00524070
// Address: 00524070
// Address Range: [[00524070, 0052409b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_00524070(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524070(CDemonMission *this_ptr)

{
  uint *in_stack_00000008;
  
  *(uint *)(this_ptr->unk4 + 4) = *in_stack_00000008;
  *(uint *)(this_ptr->unk4 + 8) = in_stack_00000008[1];
  *(uint *)(this_ptr->unk4 + 0xc) = in_stack_00000008[2];
  *(uint *)(this_ptr->unk4 + 0x10) = in_stack_00000008[3];
  return;
}
