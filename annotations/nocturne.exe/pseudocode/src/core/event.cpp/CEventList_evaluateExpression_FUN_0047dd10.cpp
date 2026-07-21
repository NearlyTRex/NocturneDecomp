// Name: core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
// Address: 0047dd10
// Address Range: [[0047dd10, 0047dd7d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(undefined4 param_1,int param_2)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_8;
  
  DAT_01c08b60 = 0;
  local_8 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220(param_1,param_2,&local_8);
  if ((-1 < iVar2) && (*(char *)(param_2 + local_8) != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  return iVar2;
}
