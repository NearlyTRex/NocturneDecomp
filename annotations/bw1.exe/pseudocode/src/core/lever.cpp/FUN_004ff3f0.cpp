// Name: core_lever.cpp_FUN_004ff3f0
// Address: 004ff3f0
// Address Range: [[004ff3f0, 004ff560]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004ff3f0(int param_1,float param_2,int param_3)

#include "nocturne.h"

void core_lever_cpp_FUN_004ff3f0(int param_1,float param_2,int param_3)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2dc) != param_2) {
    if (*(int *)(0x01D2C900 + 0x1008) == 0) {
      if ((param_2 <= 0.0) && (0.0 < *(float *)(param_1 + 0x2dc))) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,(char *)(param_1 + 0x344));
      }
      if ((1.0 <= param_2) && (*(float *)(param_1 + 0x2dc) < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,(char *)(param_1 + 0x2e0));
      }
    }
    if ((param_3 == 0) &&
       (((0.0 < param_2 && (*(float *)(param_1 + 0x2dc) <= 0.0)) ||
        (((int)param_2 < 0x3f800000 && (1.0 <= *(float *)(param_1 + 0x2dc))))))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x3a8);
    }
    *(float *)(param_1 + 0x2dc) = param_2;
    if (*(int *)(param_1 + 0x410) != 0) {
      core_lever_cpp_FUN_004ff3f0(*(int *)(param_1 + 0x410),param_2,param_3);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                          g_CLeverClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) && (param_1 == *(int *)(pCVar1[3].actor_name + 8))) {
        core_lever_cpp_FUN_004ff3f0(pCVar1,param_2,param_3);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return;
}
