// Name: core_patrpoin.cpp_FUN_0059c9c0
// Address: 0059c9c0
// Address Range: [[0059c9c0, 0059cb64]]
// Convention: unknown
// Signature: undefined4 core_patrpoin_cpp_FUN_0059c9c0(char *param_1,uint *param_2)

#include "nocturne.h"

uint core_patrpoin_cpp_FUN_0059c9c0(char *param_1,uint *param_2)

{
  char cVar1;
  SIZE_T count;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar9;
  char local_34 [28];
  char local_18 [8];
  SIZE_T local_10;
  CDemonActor *local_c;
  char *pcVar8;
  
  bVar9 = 0;
  local_c = (CDemonActor *)0x0;
  count = strtok(param_1,"0123456789");
  if ((int)count < 1) {
    return 0;
  }
  local_10 = count;
  _strncpy(local_34,param_1,count);
  local_34[count] = '\0';
  pcVar6 = param_1 + count;
  iVar2 = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= count) break;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    count = count + 1;
    local_18[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while( true );
  local_18[iVar2] = '\0';
  iVar2 = atoi(local_18);
  do {
    if (((local_c != (CDemonActor *)0x0) || (iVar2 < 0)) || (99 < iVar2)) {
      uVar3 = (CPatrolPoint *)core_actor_cpp_castToClassHash_FUN_0040c8f0(local_c,g_CPatrolPointClassInfo.name_hash)
      ;
      return uVar3;
    }
    local_34[local_10] = '\0';
    if ((int)*param_2 < 0) {
      iVar2 = iVar2 + -1;
    }
    if (0 < (int)*param_2) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 0) {
      uVar4 = (int)*param_2 >> 0x1f;
      if ((*param_2 ^ uVar4) - uVar4 == 1) {
        iVar2 = 99;
      }
      uVar4 = (int)*param_2 >> 0x1f;
      if ((*param_2 ^ uVar4) - uVar4 != 2) goto LAB_0059ca8e;
      uVar4 = *param_2;
      iVar2 = 0;
LAB_0059cab8:
      *param_2 = -uVar4;
    }
    else {
LAB_0059ca8e:
      if (99 < iVar2) {
        uVar4 = (int)*param_2 >> 0x1f;
        if ((*param_2 ^ uVar4) - uVar4 == 1) {
          iVar2 = 0;
        }
        uVar4 = (int)*param_2 >> 0x1f;
        if ((*param_2 ^ uVar4) - uVar4 == 2) {
          uVar4 = *param_2;
          iVar2 = 99;
          goto LAB_0059cab8;
        }
      }
    }
    IntegerToString(iVar2,local_18,10);
    pcVar6 = local_18;
    iVar5 = -1;
    pcVar8 = local_34;
    do {
      pcVar7 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar8 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    local_c = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(0x01D182F0,local_34);
  } while( true );
}
