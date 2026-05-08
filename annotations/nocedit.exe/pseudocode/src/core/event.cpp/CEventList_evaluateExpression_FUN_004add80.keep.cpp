// Name: core_event.cpp_CEventList_evaluateExpression_FUN_004add80
// Address: 004add80
// MANUAL RECONSTRUCTION
// Address Range: [[004add80, 004added]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004add80(CEventList *this_ptr,char *expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004add80(CEventList *this_ptr,char *expression)

{
  int iVar2;
  int local_8;

  g_EventErrorMessageBuffer[0] = '\0';
  local_8 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(this_ptr,expression,&local_8);
  if ((-1 < iVar2) && (expression[local_8] != '\0')) {
    strcpy(g_EventErrorMessageBuffer, "Syntax error");
    return -1;
  }
  return iVar2;
}
