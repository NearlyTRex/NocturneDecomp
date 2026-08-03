// Name: core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
// Address: 0047dc30
// Address Range: [[0047dc30, 0047dc8a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList *this_ptr,char *condition_expression)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList *this_ptr,char *condition_expression)

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
      _DAT_01c08b5c = 0;
      iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10
                        (this_ptr,condition_expression);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"%s\n");
        return 0;
      }
    }
  }
  return iVar1;
}
