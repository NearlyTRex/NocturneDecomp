// Name: crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
// Address: 0060b500
// Address Range: [[0060b500, 0060b516] [0060b528, 0060b52a]]
// Convention: __cdecl
// Signature: int crt_debug.c_TriggerDebuggerBreak_FUN_0060b500(char * error_message, ushort flags)

#include "nocturne.h"

int __cdecl crt_debug_c_TriggerDebuggerBreak_FUN_0060b500(char *error_message,ushort flags)

{
  code *pcVar1;
  int iVar2;
  
  if (g_DebuggerIsAttached != '\0') {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return 0;
}
