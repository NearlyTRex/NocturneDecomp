// Name: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
// Address: 00524660
// Address Range: [[00524660, 005246fb]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_00524660(CDemonMission *this_ptr,char *out_buf,char *base_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_00524660(CDemonMission *this_ptr,char *out_buf,char *base_name)

{
  CDemonActor *str1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar1;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  char cVar1;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar6 = base_name;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  for (str1 = this_ptr->first_actor; str1 != (CDemonActor *)0x0; str1 = str1->next_actor) {
    iVar2 = _strnicmp(str1->actor_name,base_name,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar1 = sscanf
                           (str1->actor_name + (~uVar4 - 1),"%d",&local_14), iVar1 == 1)) &&
       (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    _sprintf(out_buf,"%s%d",base_name,iVar5);
    pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,out_buf);
  } while (pCVar3 != (CDemonActor *)0x0);
  return;
}
