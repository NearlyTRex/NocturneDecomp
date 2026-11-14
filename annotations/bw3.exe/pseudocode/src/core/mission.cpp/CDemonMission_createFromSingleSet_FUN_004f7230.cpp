// Name: core_mission.cpp_CDemonMission_createFromSingleSet_FUN_004f7230
// Address: 004f7230
// Address Range: [[004f7230, 004f729a]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_004f7230(CDemonMission *this_ptr,char *set_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_004f7230(CDemonMission *this_ptr,char *set_name)

{
  char cVar1;
  char (*pacVar2) [256];
  
  pacVar2 = this_ptr->set_names;
  this_ptr->num_sets = 1;
  do {
    cVar1 = *set_name;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = set_name[1];
    set_name = set_name + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  this_ptr->current_set_index = 0;
  core_mission_cpp_CDemonMission_removeAllActors_FUN_004f6d70(this_ptr);
  core_script_cpp_CScript_clear_FUN_00528d50(g_CScriptPtr);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(this_ptr);
  this_ptr->current_set_index = -1;
  core_mission_cpp_CDemonMission_loadSet_FUN_004f6de0(this_ptr,0);
  return;
}
