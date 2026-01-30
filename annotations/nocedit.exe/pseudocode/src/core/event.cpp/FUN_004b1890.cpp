// Name: core_event.cpp_FUN_004b1890
// Address: 004b1890
// Address Range: [[004b1890, 004b18d1]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004b1890(int *param_1)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004b1890(int *param_1)

{
  int iVar1;
  int iVar2;
  int *condition_expression;
  
  iVar2 = 0;
  if (0 < *param_1) {
    condition_expression = param_1 + 1;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,(char *)condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 0x19;
    } while (iVar2 < *param_1);
  }
  return -1;
}
