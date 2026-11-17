// Name: core_event.cpp_CEventList_validateCondition_FUN_0048e3a0
// Address: 0048e3a0
// Address Range: [[0048e3a0, 0048e3d9]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(CEventList *this_ptr,char *expression)

#include "nocturne.h"

char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(CEventList *this_ptr,char *expression)

{
  int iVar1;
  
  if (*expression != '\0') {
    g_INT_01c3dd0c = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0048e420(this_ptr,expression);
    g_INT_01c3dd0c = 0;
    if (iVar1 < 0) {
      return g_CHAR_ARRAY_01c3dd10;
    }
  }
  return (char *)0x0;
}
