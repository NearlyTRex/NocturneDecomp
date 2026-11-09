// Name: core_lever.cpp_FUN_004e1d70
// Address: 004e1d70
// Address Range: [[004e1d70, 004e1f6c]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004e1d70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lever_cpp_FUN_004e1d70(int param_1,float param_2)

{
  float fVar1;
  CLever *this_ptr;
  int iVar2;
  int iVar3;
  char *commands;
  
  if (*(int *)(param_1 + 0x574) == 0) goto LAB_004e1ef4;
  if (*(float *)(param_1 + 0x578) <= *(float *)(param_1 + 0x438)) {
    fVar1 = *(float *)(param_1 + 0x438) - param_2 * (float)_DAT_005dbf3a;
    *(float *)(param_1 + 0x438) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x578)) {
      *(uint *)(param_1 + 0x574) = 0;
      *(uint *)(param_1 + 0x438) = *(uint *)(param_1 + 0x578);
      if ((*(int *)(param_1 + 0x568) != 0) && (*(float *)(param_1 + 0x438) < (float)_DAT_005dbf42))
      {
        commands = (char *)(param_1 + 0x4a0);
        goto LAB_004e1dfd;
      }
    }
  }
  else {
    fVar1 = param_2 * (float)_DAT_005dbf3a + *(float *)(param_1 + 0x438);
    *(float *)(param_1 + 0x438) = fVar1;
    if (*(float *)(param_1 + 0x578) < fVar1) {
      *(uint *)(param_1 + 0x574) = 0;
      *(uint *)(param_1 + 0x438) = *(uint *)(param_1 + 0x578);
      if ((*(int *)(param_1 + 0x568) != 0) && ((float)_DAT_005dbf4a < *(float *)(param_1 + 0x438)))
      {
        commands = (char *)(param_1 + 0x43c);
LAB_004e1dfd:
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,commands);
      }
    }
  }
  if (*(CLever **)(param_1 + 0x56c) != (CLever *)0x0) {
    core_lever_cpp_FUN_004e1f70(*(CLever **)(param_1 + 0x56c),*(float *)(param_1 + 0x438));
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
    this_ptr = (CLever *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar2),
                          g_CLeverClassInfo.name_hash);
    if ((this_ptr == (CLever *)0x0) || (param_1 != *(int *)&this_ptr->field_0x56c)) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      core_lever_cpp_FUN_004e1f70(this_ptr,*(float *)(*(int *)&this_ptr->field_0x56c + 0x438));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
LAB_004e1ef4:
  if (*(int *)(param_1 + 0x568) == 0) {
    if ((*(float *)(param_1 + 0x438) < (float)_DAT_005dbf42) && (*(char *)(param_1 + 0x4a0) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,(char *)(param_1 + 0x4a0))
      ;
    }
    if (((float)_DAT_005dbf4a < *(float *)(param_1 + 0x438)) && (*(char *)(param_1 + 0x43c) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,(char *)(param_1 + 0x43c))
      ;
      return;
    }
  }
  return;
}
