// Name: core_litecone.cpp_FUN_00506bc0
// Address: 00506bc0
// Address Range: [[00506bc0, 00506c1f]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506bc0()

#include "nocturne.h"

/* Signature: byte actors_other_litecone.cpp_FUN_00506bc0(uint param_1) */

void core_litecone_cpp_FUN_00506bc0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x160) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x164));
    if (iVar1 != 0) {
      *(uint *)(in_stack_00000004 + 0x160) = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x1c8));
    if (iVar1 != 0) {
      *(uint *)(in_stack_00000004 + 0x160) = 0;
      return;
    }
  }
  return;
}
