// Name: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680
// Address: 004d9680
// Address Range: [[004d9680, 004d971b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(CDemonMission *this_ptr,char *out_buf,char *base_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(CDemonMission *this_ptr,char *out_buf,char *base_name)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar6 = base_name;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  for (pcVar6 = *(char **)(this_ptr->set_names[3] + 0xcc); pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x144)) {
    iVar2 = _strnicmp(pcVar6,base_name,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = sscanf(pcVar6 + (~uVar4 - 1),"%d",&local_14),
        iVar2 == 1)) && (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    _sprintf(out_buf,"%s%d",base_name,iVar5);
    pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(this_ptr,out_buf);
  } while (pCVar3 != (CDemonActor *)0x0);
  return;
}
