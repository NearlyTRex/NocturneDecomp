// Name: core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
// Address: 0048e340
// Address Range: [[0048e340, 0048e39a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList *this_ptr,char *condition_expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList *this_ptr,char *condition_expression)

{
  int iVar1;
  int iVar2;
  
  if ((condition_expression == (char *)0x0) || (*condition_expression == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = _stricmp(condition_expression,"none");
    iVar1 = 0;
    if (iVar2 != 0) {
      g_EventDryRun = 0;
      iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0048e420
                        (this_ptr,condition_expression);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s\n");
        return 0;
      }
    }
  }
  return iVar1;
}
