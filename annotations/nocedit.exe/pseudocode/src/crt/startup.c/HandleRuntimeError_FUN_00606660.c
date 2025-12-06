// Name: crt_startup.c_HandleRuntimeError_FUN_00606660
// Address: 00606660
// Address Range: [[00606660, 0060668d]]
// Convention: __cdecl
// Signature: void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)

#include "nocturne.h"

void __cdecl crt_startup_c_HandleRuntimeError_FUN_00606660(char *error_message,int error_level)

{
  int iVar1;
  ushort in_DS;
  int in_stack_0000000c;
  
  iVar1 = crt_debug_c_TriggerDebuggerBreak_FUN_0060b500(error_message,in_DS);
  if (iVar1 == 0) {
    crt_startup_c_WriteErrorAndExit_FUN_00606620((char *)error_level,in_stack_0000000c);
  }
  return;
}
