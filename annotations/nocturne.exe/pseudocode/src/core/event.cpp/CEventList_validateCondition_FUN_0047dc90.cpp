// Name: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
// Address: 0047dc90
// Address Range: [[0047dc90, 0047dcc9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression)

{
  int iVar1;
  
  if (*expression != '\0') {
    _DAT_01c08b5c = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(this_ptr,expression);
    _DAT_01c08b5c = 0;
    if (iVar1 < 0) {
      return &DAT_01c08b60;
    }
  }
  return (char *)0x0;
}
