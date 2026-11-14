// Name: core_mission.cpp_FUN_0051ba60
// Address: 0051ba60
// Address Range: [[0051ba60, 0051baca]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051ba60(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_mission_cpp_FUN_0051ba60(void)

{
  char cVar1;
  char (*pacVar2) [256];
  CDemonMission *in_stack_00000004;
  char *in_stack_00000008;
  
  pacVar2 = in_stack_00000004->set_names;
  in_stack_00000004->num_sets = 1;
  do {
    cVar1 = *in_stack_00000008;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  in_stack_00000004->current_set_index = 0;
  core_mission_cpp_CDemonMission_removeAllActors_FUN_0051b5a0(in_stack_00000004);
  core_script_cpp_CScript_clear_FUN_00543740(g_CScriptPtr);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(in_stack_00000004);
  in_stack_00000004->current_set_index = -1;
  core_mission_cpp_FUN_0051b610();
  return;
}
