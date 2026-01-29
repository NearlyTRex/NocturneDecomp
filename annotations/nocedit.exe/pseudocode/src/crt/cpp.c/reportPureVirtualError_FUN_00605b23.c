// Name: crt_cpp.c_reportPureVirtualError_FUN_00605b23
// Address: 00605b23
// Address Range: [[00605b23, 00605b61]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_00605b23(char *error_message,int exit_code)

#include "nocturne.h"

void __watcallStack reportPureVirtualError(char *error_message,int exit_code)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = TriggerDebuggerBreak(error_message,in_DS);
  if (iVar1 != 0) {
    ExitApplication(exit_code);
    return;
  }
  WriteErrorAndExit(error_message,exit_code);
  return;
}
