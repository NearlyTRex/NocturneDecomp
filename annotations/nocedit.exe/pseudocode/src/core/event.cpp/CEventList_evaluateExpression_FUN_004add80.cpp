// Name: core_event.cpp_CEventList_evaluateExpression_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004added]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004add80(CEventList *this_ptr,char *expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004add80(CEventList *this_ptr,char *expression)

{
  char cVar2;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_8;
  char cVar1;
  
  g_EventErrorMessageBuffer[0] = '\0';
  local_8 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(this_ptr,expression,&local_8);
  if ((-1 < iVar2) && (expression[local_8] != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = g_EventErrorMessageBuffer;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    return -1;
  }
  return iVar2;
}
