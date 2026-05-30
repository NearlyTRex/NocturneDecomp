// Name: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
// Address: 00524660
// MANUAL RECONSTRUCTION
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
  int iVar5;
  int local_14;
  int len;

  iVar5 = -1;
  len = (int)strlen(base_name);
  for (str1 = this_ptr->first_actor; str1 != (CDemonActor *)0x0; str1 = str1->next_actor) {
    iVar2 = _strnicmp(str1->actor_name,base_name,len);
    if (((iVar2 == 0) &&
        (iVar1 = sscanf
                           (str1->actor_name + len,"%d",&local_14), iVar1 == 1)) &&
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
