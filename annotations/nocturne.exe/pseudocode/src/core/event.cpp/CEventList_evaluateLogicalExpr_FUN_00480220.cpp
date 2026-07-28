// Name: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220
// Address: 00480220
// Address Range: [[00480220, 004802d9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220(CEventList *this_ptr,char *expression,int *parse_position)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220(CEventList *this_ptr,char *expression,int *parse_position)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(this_ptr,expression,parse_position);
  if (iVar2 < 0) {
    return iVar2;
  }
  while( true ) {
    while( true ) {
      cVar1 = expression[*parse_position];
      if (cVar1 == '\0') {
        return iVar2;
      }
      if (cVar1 != '|') break;
      iVar3 = *parse_position;
      iVar4 = iVar3 + 1;
      *parse_position = iVar4;
      if (expression[iVar4] == '|') {
        *parse_position = iVar3 + 2;
      }
      iVar3 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0
                        (this_ptr,expression,parse_position);
      if (iVar3 < 0) {
        return iVar3;
      }
      if ((iVar2 != 0) || (iVar3 != 0)) {
        iVar2 = 1;
      }
    }
    if (cVar1 != '&') {
      return iVar2;
    }
    iVar3 = *parse_position;
    iVar4 = iVar3 + 1;
    *parse_position = iVar4;
    if (expression[iVar4] == '&') {
      *parse_position = iVar3 + 2;
    }
    iVar3 = core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(this_ptr,expression,parse_position);
    if (iVar3 < 0) break;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar3;
}
