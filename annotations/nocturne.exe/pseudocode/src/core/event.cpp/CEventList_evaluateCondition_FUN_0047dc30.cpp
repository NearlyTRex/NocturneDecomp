// Name: core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
// Address: 0047dc30
// Address Range: [[0047dc30, 0047dc8a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = _stricmp(param_2,"none");
    iVar1 = 0;
    if (iVar2 != 0) {
      _DAT_01c08b5c = 0;
      iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(param_1,param_2);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"%s\n",&DAT_01c08b60)
        ;
        return 0;
      }
    }
  }
  return iVar1;
}
