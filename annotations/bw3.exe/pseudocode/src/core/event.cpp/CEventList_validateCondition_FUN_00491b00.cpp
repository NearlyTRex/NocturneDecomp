// Name: core_event.cpp_CEventList_validateCondition_FUN_00491b00
// Address: 00491b00
// Address Range: [[00491b00, 00491b39]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_00491b00(CEventList *this_ptr,char *expression)

#include "nocturne.h"

char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_00491b00(CEventList *this_ptr,char *expression)

{
  int iVar1;
  
  if (*expression != '\0') {
    g_INT_01c734ac = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_00491b80(this_ptr,expression);
    g_INT_01c734ac = 0;
    if (iVar1 < 0) {
      return g_CHAR_ARRAY_01c734b0;
    }
  }
  return (char *)0x0;
}
