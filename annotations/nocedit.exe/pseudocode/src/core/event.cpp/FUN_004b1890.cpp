// Name: core_event.cpp_FUN_004b1890
// Address: 004b1890
// Address Range: [[004b1890, 004b18d1]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_004b1890(void)

#include "nocturne.h"

int core_event_cpp_FUN_004b1890(void)

{
  int iVar1;
  int iVar2;
  int *condition_expression;
  int *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    condition_expression = in_stack_00000004 + 1;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,(char *)condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 0x19;
    } while (iVar2 < *in_stack_00000004);
  }
  return -1;
}
