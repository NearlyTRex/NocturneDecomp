// Name: core_hpatrol.cpp_findNextPatrolPoint_FUN_0059c9c0
// Address: 0059c9c0
// Address Range: [[0059c9c0, 0059cb64]]
// Convention: __cdecl
// Signature: CPatrolPoint * __cdecl core_hpatrol_cpp_findNextPatrolPoint_FUN_0059c9c0(char *current_name,int *direction)

#include "nocturne.h"

CPatrolPoint * __cdecl core_hpatrol_cpp_findNextPatrolPoint_FUN_0059c9c0(char *current_name,int *direction)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_34 [28];
  char local_18 [8];
  char *local_10;
  CDemonActor *local_c;
  
  bVar9 = 0;
  local_c = (CDemonActor *)0x0;
  pcVar2 = strtok(current_name,"0123456789");
  if ((int)pcVar2 < 1) {
    return (CPatrolPoint *)0x0;
  }
  local_10 = pcVar2;
  _strncpy(local_34,current_name,(SIZE_T)pcVar2);
  local_34[(int)pcVar2] = '\0';
  pcVar7 = current_name + (int)pcVar2;
  iVar3 = 0;
  do {
    uVar5 = 0xffffffff;
    pcVar8 = current_name;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if ((char *)(~uVar5 - 1) <= pcVar2) break;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
    local_18[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  } while( true );
  local_18[iVar3] = '\0';
  iVar3 = atoi(local_18);
  do {
    if (((local_c != (CDemonActor *)0x0) || (iVar3 < 0)) || (99 < iVar3)) {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (local_c,g_CPatrolPointClassInfo.name_hash);
      return (CPatrolPoint *)pCVar4;
    }
    local_34[(int)local_10] = '\0';
    if (*direction < 0) {
      iVar3 = iVar3 + -1;
    }
    if (0 < *direction) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 < 0) {
      uVar5 = *direction >> 0x1f;
      if ((*direction ^ uVar5) - uVar5 == 1) {
        iVar3 = 99;
      }
      uVar5 = *direction >> 0x1f;
      if ((*direction ^ uVar5) - uVar5 != 2) goto LAB_0059ca8e;
      iVar6 = *direction;
      iVar3 = 0;
LAB_0059cab8:
      *direction = -iVar6;
    }
    else {
LAB_0059ca8e:
      if (99 < iVar3) {
        uVar5 = *direction >> 0x1f;
        if ((*direction ^ uVar5) - uVar5 == 1) {
          iVar3 = 0;
        }
        uVar5 = *direction >> 0x1f;
        if ((*direction ^ uVar5) - uVar5 == 2) {
          iVar6 = *direction;
          iVar3 = 99;
          goto LAB_0059cab8;
        }
      }
    }
    IntegerToString(iVar3,local_18,10);
    pcVar2 = local_18;
    iVar6 = -1;
    pcVar7 = local_34;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar2;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_c = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(0x01D182F0,local_34);
  } while( true );
}
