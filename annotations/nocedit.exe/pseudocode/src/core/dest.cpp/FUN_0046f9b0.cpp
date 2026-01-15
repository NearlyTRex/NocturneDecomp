// Name: core_dest.cpp_FUN_0046f9b0
// Address: 0046f9b0
// Address Range: [[0046f9b0, 0046fb69]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046f9b0()

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_FUN_0046f9b0(uint param_1) */

void core_dest_cpp_FUN_0046f9b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if ((*(int *)(in_stack_00000004 + 0x1f0) != 0) && (*(int *)(in_stack_00000004 + 0x158) == 0)) {
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar2);
      local_28 = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
      local_24 = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
      local_20 = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
      if ((SQRT(local_20 * local_20 + local_28 * local_28 + local_24 * local_24) <
           (float)0.10000000000000001) && (iVar1 = core_dest_cpp_FUN_0046fd50(), iVar1 != 0)) break;
      iVar2 = iVar2 + 4;
    }
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x158);
  if (iVar2 != 0) {
    local_34 = *(float *)(iVar2 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
    local_30 = *(float *)(iVar2 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
    local_2c = *(float *)(iVar2 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
    if (&local_1c != &local_34) {
      local_1c = local_34;
      local_18 = local_30;
      fStack_14 = local_2c;
    }
    if ((((float)0.25 <= ABS(local_1c)) || ((float)0.25 <= ABS(local_18))) ||
       ((float)0.25 <= ABS(fStack_14))) {
      *(uint *)(in_stack_00000004 + 0x184) = 0;
      *(uint *)(in_stack_00000004 + 0x1f0) = 0;
      return;
    }
    if ((*(int *)(in_stack_00000004 + 0x1ec) != 0) ||
       ((*(int *)(in_stack_00000004 + 0x184) == 0 && (*(int *)(in_stack_00000004 + 0x1f0) == 0)))) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
    *(uint *)(in_stack_00000004 + 0x184) = 1;
  }
  *(uint *)(in_stack_00000004 + 0x1f0) = 0;
  return;
}
