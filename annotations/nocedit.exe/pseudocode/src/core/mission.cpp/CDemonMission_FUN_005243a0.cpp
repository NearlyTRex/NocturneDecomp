// Name: core_mission.cpp_CDemonMission_FUN_005243a0
// Address: 005243a0
// Address Range: [[005243a0, 00524410]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_005243a0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_005243a0(CDemonMission *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000008;
  
  pcVar2 = this_ptr->field4_0x148;
  this_ptr->set_list = (void *)0x1;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  core_mission_cpp_CDemonMission_FUN_00523f50(this_ptr);
  core_script_cpp_CScript_FreeSomething1_FUN_00559870();
  core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  this_ptr->field0_0x0[0] = -1;
  this_ptr->field0_0x0[1] = -1;
  this_ptr->field0_0x0[2] = -1;
  this_ptr->field0_0x0[3] = -1;
  core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
  return;
}
