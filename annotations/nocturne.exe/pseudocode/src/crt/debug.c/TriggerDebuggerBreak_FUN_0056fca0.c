// Name: crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0
// Address: 0056fca0
// Address Range: [[0056fca0, 0056fcb6] [0056fcc8, 0056fcca]]
// Convention: __cdecl
// Signature: int __cdecl crt_debug_c_TriggerDebuggerBreak_FUN_0056fca0(char *error_message,ushort flags)

#include "nocturne.h"

int __cdecl TriggerDebuggerBreak(char *error_message,ushort flags)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_005c2050 != '\0') {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)(flags);
    return iVar2;
  }
  return 0;
}
