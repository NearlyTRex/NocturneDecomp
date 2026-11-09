// Name: core_event.cpp_CEventList_evaluateExpression_FUN_004a6d10
// Address: 004a6d10
// Address Range: [[004a6d10, 004a6d7d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004a6d10(CEventList *this_ptr,char *expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004a6d10(CEventList *this_ptr,char *expression)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_8;
  
  DAT_01c56ed0 = 0;
  local_8 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004a97b0(this_ptr,expression,&local_8);
  if ((-1 < iVar2) && (expression[local_8] != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_01c56ed0;
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
