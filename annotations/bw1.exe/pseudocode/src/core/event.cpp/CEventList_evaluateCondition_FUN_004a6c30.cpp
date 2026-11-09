// Name: core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
// Address: 004a6c30
// Address Range: [[004a6c30, 004a6c8a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList *this_ptr,char *condition_expression)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList *this_ptr,char *condition_expression)

{
  int iVar1;
  int iVar2;
  
  if ((condition_expression == (char *)0x0) || (*condition_expression == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = _stricmp(condition_expression,&DAT_005de189);
    iVar1 = 0;
    if (iVar2 != 0) {
      _DAT_01c56ecc = 0;
      iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_004a6d10
                        (this_ptr,condition_expression);
      if (iVar1 < 0) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,&DAT_005de18e,&DAT_01c56ed0);
        return 0;
      }
    }
  }
  return iVar1;
}
