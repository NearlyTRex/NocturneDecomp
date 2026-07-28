// Name: crt_startup.c_HandleRuntimeError_FUN_0056ddc0
// Address: 0056ddc0
// Address Range: [[0056ddc0, 0056dded]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_HandleRuntimeError_FUN_0056ddc0(char *error_message,int error_level)

#include "nocturne.h"

void __cdecl HandleRuntimeError(char *error_message,int error_level)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = TriggerDebuggerBreak(error_message,in_DS);
  if (iVar1 == 0) {
    WriteErrorAndExit(error_message,error_level);
  }
  return;
}
