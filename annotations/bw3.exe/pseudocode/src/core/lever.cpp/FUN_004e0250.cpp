// Name: core_lever.cpp_FUN_004e0250
// Address: 004e0250
// Address Range: [[004e0250, 004e04ac]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004e0250(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lever_cpp_FUN_004e0250(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *commands;
  
  if (*(int *)(param_1 + 0x418) == 0) goto LAB_004e0268;
  fVar1 = *(float *)(param_1 + 0x2dc);
  if (*(float *)(param_1 + 0x41c) <= fVar1) {
    fVar2 = fVar1 - param_2 * (float)_DAT_005c6902;
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (fVar2 < *(float *)(param_1 + 0x41c)) {
      *(uint *)(param_1 + 0x418) = 0;
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x41c);
      if ((*(int *)(param_1 + 0x40c) != 0) && (*(float *)(param_1 + 0x2dc) < (float)_DAT_005c690a))
      {
        commands = (char *)(param_1 + 0x344);
        goto LAB_004e033c;
      }
    }
  }
  else {
    fVar2 = param_2 * (float)_DAT_005c6902 + fVar1;
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (*(float *)(param_1 + 0x41c) < fVar2) {
      *(uint *)(param_1 + 0x418) = 0;
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x41c);
      if ((*(int *)(param_1 + 0x40c) != 0) && ((float)_DAT_005c6912 < *(float *)(param_1 + 0x2dc)))
      {
        commands = (char *)(param_1 + 0x2e0);
LAB_004e033c:
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,commands);
      }
    }
  }
  if (((0.0 < *(float *)(param_1 + 0x2dc)) && (fVar1 <= 0.0)) ||
     ((*(int *)(param_1 + 0x2dc) < 0x3f800000 && (1.0 <= fVar1)))) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x3a8);
  }
  if (*(int *)(param_1 + 0x410) != 0) {
    core_lever_cpp_FUN_004e04b0(*(int *)(param_1 + 0x410),*(uint *)(param_1 + 0x2dc),0);
  }
  iVar5 = 0;
  iVar4 = 0;
  while (iVar4 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar5),
                       g_CLeverClassInfo.name_hash);
    if ((iVar3 == 0) || (param_1 != *(int *)(iVar3 + 0x410))) {
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
    else {
      core_lever_cpp_FUN_004e04b0(iVar3,*(uint *)(*(int *)(iVar3 + 0x410) + 0x2dc),0);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
  }
LAB_004e0268:
  if (*(int *)(param_1 + 0x40c) == 0) {
    if ((*(float *)(param_1 + 0x2dc) < (float)_DAT_005c690a) && (*(char *)(param_1 + 0x344) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,(char *)(param_1 + 0x344))
      ;
    }
    if (((float)_DAT_005c6912 < *(float *)(param_1 + 0x2dc)) && (*(char *)(param_1 + 0x2e0) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,(char *)(param_1 + 0x2e0))
      ;
      return;
    }
  }
  return;
}
