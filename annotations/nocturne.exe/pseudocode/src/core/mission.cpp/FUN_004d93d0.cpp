// Name: core_mission.cpp_FUN_004d93d0
// Address: 004d93d0
// Address Range: [[004d93d0, 004d9431]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d93d0(CDemonMission *param_1,char *param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004d93d0(CDemonMission *param_1,char *param_2)

{
  char cVar1;
  char (*pacVar2) [256];
  
  pacVar2 = param_1->set_names;
  param_1->num_sets = 1;
  do {
    cVar1 = *param_2;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [256])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  param_1->current_set_index = 0;
  core_mission_cpp_FUN_004d8fc0(param_1);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(param_1);
  param_1->current_set_index = -1;
  core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(param_1,0);
  return;
}
