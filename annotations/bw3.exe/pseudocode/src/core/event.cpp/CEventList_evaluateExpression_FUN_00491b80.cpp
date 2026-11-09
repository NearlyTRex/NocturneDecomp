// Name: core_event.cpp_CEventList_evaluateExpression_FUN_00491b80
// Address: 00491b80
// Address Range: [[00491b80, 00491bed]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_00491b80(CEventList *this_ptr,char *expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_00491b80(CEventList *this_ptr,char *expression)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_8;
  
  DAT_01c734b0 = 0;
  local_8 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00494630(this_ptr,expression,&local_8);
  if ((-1 < iVar2) && (expression[local_8] != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_01c734b0;
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
