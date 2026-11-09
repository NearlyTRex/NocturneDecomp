// Name: core_event.cpp_CEventList_validateCondition_FUN_004a6c90
// Address: 004a6c90
// Address Range: [[004a6c90, 004a6cc9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_004a6c90(CEventList *this_ptr,char *expression)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_004a6c90(CEventList *this_ptr,char *expression)

{
  int iVar1;
  
  if (*expression != '\0') {
    _DAT_01c56ecc = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_004a6d10(this_ptr,expression);
    _DAT_01c56ecc = 0;
    if (iVar1 < 0) {
      return &DAT_01c56ed0;
    }
  }
  return (char *)0x0;
}
