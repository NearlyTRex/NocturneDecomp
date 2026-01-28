// Name: crt_cpp.c_reportPureVirtualError_FUN_00605b23
// Address: 00605b23
// Address Range: [[00605b23, 00605b61]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_00605b23(char *error_message,int exit_code)

#include "nocturne.h"

void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_00605b23(char *error_message,int exit_code)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = crt_debug_c_TriggerDebuggerBreak_FUN_0060b500(error_message,in_DS);
  if (iVar1 != 0) {
    crt_startup_c_ExitApplication_FUN_0060b534(exit_code);
    return;
  }
  crt_startup_c_WriteErrorAndExit_FUN_00606620(error_message,exit_code);
  return;
}
