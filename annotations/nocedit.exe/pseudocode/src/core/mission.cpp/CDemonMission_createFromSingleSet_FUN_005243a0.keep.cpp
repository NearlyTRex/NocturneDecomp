// Name: core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0
// Address: 005243a0
// MANUAL RECONSTRUCTION
// Address Range: [[005243a0, 00524410]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_005243a0(CDemonMission *this_ptr,char *set_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_005243a0(CDemonMission *this_ptr,char *set_name)

{
  this_ptr->num_sets = 1;
  strcpy(this_ptr->set_names[0], set_name);
  this_ptr->current_set_index = 0;
  core_mission_cpp_CDemonMission_removeAllActors_FUN_00523f50(this_ptr);
  core_script_cpp_CScript_clear_FUN_00559870(g_CScriptPtr);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  this_ptr->current_set_index = -1;
  core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,0);
  return;
}
