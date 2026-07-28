// Name: core_mission.cpp_FUN_004d93d0
// Address: 004d93d0
// Address Range: [[004d93d0, 004d9431]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d93d0(CDemonMission *param_1,char *param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004d93d0(CDemonMission *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1->mission_name + 0xd0;
  param_1->mission_name[0xcc] = '\x01';
  param_1->mission_name[0xcd] = '\0';
  param_1->mission_name[0xce] = '\0';
  param_1->mission_name[0xcf] = '\0';
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  param_1->current_set_index = 0;
  core_mission_cpp_FUN_004d8fc0(param_1);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(param_1);
  param_1->current_set_index = -1;
  core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(param_1,0);
  return;
}
