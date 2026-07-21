// Name: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680
// Address: 004d9680
// Address Range: [[004d9680, 004d971b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  for (iVar3 = *(int *)(param_1 + 0x514); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x144)) {
    iVar2 = _strnicmp(iVar3,param_3,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = sscanf(iVar3 + (~uVar4 - 1),&DAT_00589e5f,&local_14),
        iVar2 == 1)) && (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    _sprintf(param_2,&DAT_00589e62,param_3,iVar5);
    iVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(param_1,param_2);
  } while (iVar3 != 0);
  return;
}
