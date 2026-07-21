// Name: core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
// Address: 004d9720
// Address Range: [[004d9720, 004d9777]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(undefined4 param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_2c [32];
  
  *param_2 = '\0';
  pcVar2 = (char *)core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_2);
  if (*pcVar2 == 'C') {
    pcVar2 = pcVar2 + 1;
  }
  core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(param_1,local_2c,pcVar2);
  pcVar2 = local_2c;
  do {
    cVar1 = *pcVar2;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
