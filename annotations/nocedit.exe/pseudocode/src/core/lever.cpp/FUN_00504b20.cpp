// Name: core_lever.cpp_FUN_00504b20
// Address: 00504b20
// Address Range: [[00504b20, 00504c88]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_00504b20(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00504b20(uint param_1, uint param_2)
    */

void core_lever_cpp_FUN_00504b20(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(float *)(in_stack_00000004 + 0x2dc) != in_stack_00000008) {
    if (*(int *)(g_CDemonMissionPtr->unk1 + 4) == 0) {
      if ((in_stack_00000008 <= 0.0) && (0.0 < *(float *)(in_stack_00000004 + 0x2dc))) {
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
      if ((1.0 <= in_stack_00000008) && (*(float *)(in_stack_00000004 + 0x2dc) < 1.0)) {
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
    }
    if (((0.0 < in_stack_00000008) && (*(float *)(in_stack_00000004 + 0x2dc) <= 0.0)) ||
       (((int)in_stack_00000008 < 0x3f800000 && (1.0 <= *(float *)(in_stack_00000004 + 0x2dc))))) {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    *(float *)(in_stack_00000004 + 0x2dc) = in_stack_00000008;
    if (*(int *)(in_stack_00000004 + 0x410) != 0) {
      core_lever_cpp_FUN_00504b20();
    }
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                          g_CLeverClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) &&
         (in_stack_00000004 == *(int *)(pCVar1[3].actor_name + 8))) {
        core_lever_cpp_FUN_00504b20();
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
