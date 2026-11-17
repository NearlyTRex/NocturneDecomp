// Name: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
// Address: 0047dc90
// Address Range: [[0047dc90, 0047dcc9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression)

#include "nocturne.h"

char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression)

{
  int iVar1;
  
  if (*expression != '\0') {
    g_EventDryRun = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(this_ptr,expression);
    g_EventDryRun = 0;
    if (iVar1 < 0) {
      return g_EventErrorMessageBuffer;
    }
  }
  return (char *)0x0;
}
