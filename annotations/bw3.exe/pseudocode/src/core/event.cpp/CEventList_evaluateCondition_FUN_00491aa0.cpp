// Name: core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
// Address: 00491aa0
// Address Range: [[00491aa0, 00491afa]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList *this_ptr,char *condition_expression)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList *this_ptr,char *condition_expression)

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
      iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_00491b80
                        (this_ptr,condition_expression);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s\n");
        return 0;
      }
    }
  }
  return iVar1;
}
