// Name: core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
// Address: 004d8c60
// Address Range: [[004d8c60, 004d8cc8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(int param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(param_1,param_2);
    }
    iVar1 = *(int *)(param_1 + 0x518);
    if (iVar1 != 0) {
      param_2[0x144] = '\0';
      param_2[0x145] = '\0';
      param_2[0x146] = '\0';
      param_2[0x147] = '\0';
      *(int *)(param_2 + 0x148) = iVar1;
      *(char **)(*(int *)(param_1 + 0x518) + 0x144) = param_2;
      *(char **)(param_1 + 0x518) = param_2;
      return;
    }
    param_2[0x144] = '\0';
    param_2[0x145] = '\0';
    param_2[0x146] = '\0';
    param_2[0x147] = '\0';
    param_2[0x148] = '\0';
    param_2[0x149] = '\0';
    param_2[0x14a] = '\0';
    param_2[0x14b] = '\0';
    *(char **)(param_1 + 0x514) = param_2;
    *(char **)(param_1 + 0x518) = param_2;
  }
  return;
}
