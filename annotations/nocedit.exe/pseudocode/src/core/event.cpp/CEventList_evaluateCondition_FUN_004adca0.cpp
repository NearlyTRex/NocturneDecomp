// Name: core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
// Address: 004adca0
// Address Range: [[004adca0, 004adcfa]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004adca0 (CEventList *this_ptr,char *condition_expression)

#include "nocturne.h"

int __cdecl
core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
          (CEventList *this_ptr,char *condition_expression)

{
  int iVar1;
  int iVar2;
  
  if ((condition_expression == (char *)0x0) || (*condition_expression == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(condition_expression,"none");
    iVar1 = 0;
    if (iVar2 != 0) {
      DAT_02d0a45c = 0;
      iVar1 = core_event_cpp_CEventList_FUN_004add80(this_ptr);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n",&DAT_02d0a460);
        return 0;
      }
    }
  }
  return iVar1;
}
