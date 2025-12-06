// Name: core_mission.cpp_CDemonMission_FUN_00523f50
// Address: 00523f50
// Address Range: [[00523f50, 00523fad]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523f50(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523f50(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *this_ptr_00;
  
  pCVar1 = this_ptr->first_actor;
  while (pCVar1 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
    pCVar1 = this_ptr->first_actor;
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  g_HeroCount = 0;
  this_ptr->field6_0x54c[0x338] = '\0';
  this_ptr->field6_0x54c[0x339] = '\0';
  this_ptr->field6_0x54c[0x33a] = '\0';
  this_ptr->field6_0x54c[0x33b] = '\0';
  core_setcolid_cpp_CDemonSet_FUN_00574560(this_ptr_00);
  this_ptr->field6_0x54c[0x14] = '\0';
  this_ptr->field6_0x54c[0x15] = '\0';
  this_ptr->field6_0x54c[0x16] = '\0';
  this_ptr->field6_0x54c[0x17] = '\0';
  return;
}
