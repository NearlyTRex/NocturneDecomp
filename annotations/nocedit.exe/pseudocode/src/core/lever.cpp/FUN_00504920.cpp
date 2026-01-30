// Name: core_lever.cpp_FUN_00504920
// Address: 00504920
// Address Range: [[00504920, 00504b1c]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_FUN_00504920(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00504920(uint param_1, uint param_2)
    */

void __cdecl core_lever_cpp_FUN_00504920(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x418) == 0) goto LAB_00504aa4;
  if (*(float *)(in_stack_00000004 + 0x41c) <= *(float *)(in_stack_00000004 + 0x2dc)) {
    fVar1 = *(float *)(in_stack_00000004 + 0x2dc) - in_stack_00000008 * (float)6;
    *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
    if (fVar1 < *(float *)(in_stack_00000004 + 0x41c)) {
      *(uint *)(in_stack_00000004 + 0x418) = 0;
      *(uint *)(in_stack_00000004 + 0x2dc) = *(uint *)(in_stack_00000004 + 0x41c);
      if ((*(int *)(in_stack_00000004 + 0x40c) != 0) &&
         (*(float *)(in_stack_00000004 + 0x2dc) < (float)0.10000000000000001)) goto LAB_005049ad;
    }
  }
  else {
    fVar1 = in_stack_00000008 * (float)6 + *(float *)(in_stack_00000004 + 0x2dc);
    *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
    if (*(float *)(in_stack_00000004 + 0x41c) < fVar1) {
      *(uint *)(in_stack_00000004 + 0x418) = 0;
      *(uint *)(in_stack_00000004 + 0x2dc) = *(uint *)(in_stack_00000004 + 0x41c);
      if ((*(int *)(in_stack_00000004 + 0x40c) != 0) &&
         ((float)0.90000000000000002 < *(float *)(in_stack_00000004 + 0x2dc))) {
LAB_005049ad:
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
    }
  }
  if (*(int *)(in_stack_00000004 + 0x410) != 0) {
    core_lever_cpp_FUN_00504b20();
  }
  iVar3 = 0;
  iVar4 = 0;
  while (iVar4 < (int)g_CDemonSetPtr->actor_list_ptr) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CLeverClassInfo.name_hash);
    if ((pCVar2 == (CDemonActor *)0x0) || (in_stack_00000004 != *(int *)(pCVar2[3].actor_name + 8)))
    {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    else {
      core_lever_cpp_FUN_00504b20();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
  }
LAB_00504aa4:
  if (*(int *)(in_stack_00000004 + 0x40c) == 0) {
    if ((*(float *)(in_stack_00000004 + 0x2dc) < (float)0.10000000000000001) &&
       (*(char *)(in_stack_00000004 + 0x344) != '\0')) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
    if (((float)0.90000000000000002 < *(float *)(in_stack_00000004 + 0x2dc)) &&
       (*(char *)(in_stack_00000004 + 0x2e0) != '\0')) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      return;
    }
  }
  return;
}
