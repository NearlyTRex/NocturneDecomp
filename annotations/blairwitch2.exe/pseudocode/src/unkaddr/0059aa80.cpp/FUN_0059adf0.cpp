// Name: unkaddr_0059aa80.cpp_FUN_0059adf0
// Address: 0059adf0
// Address Range: [[0059adf0, 0059ae32]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059adf0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void unkaddr_0059aa80_cpp_FUN_0059adf0(int param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 4) <= param_2) && (param_2 <= *(int *)(param_1 + 0xc))) &&
      (*(int *)(param_1 + 8) <= param_3)) && (param_3 <= *(int *)(param_1 + 0x10))) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"Hooray");
    unkaddr_0059aa80_cpp_FUN_0059ab70(param_1,0);
    return;
  }
  return;
}
