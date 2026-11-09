// Name: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00
// Address: 004fcd00
// Address Range: [[004fcd00, 004fcd9b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00(CDemonMission *this_ptr,char *out_buf,char *base_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00(CDemonMission *this_ptr,char *out_buf,char *base_name)

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
  for (pcVar6 = *(char **)(this_ptr + 0x1114); pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x14c)) {
    iVar2 = _strnicmp(pcVar6,base_name,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = sscanf(pcVar6 + (~uVar4 - 1),&DAT_005de8eb), iVar2 == 1))
       && (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    FUN_005b7790(out_buf,&DAT_005de8ee,base_name,iVar5);
    pCVar3 = core_mission_cpp_FUN_004fc740(this_ptr,out_buf);
  } while (pCVar3 != (CDemonActor *)0x0);
  return;
}
