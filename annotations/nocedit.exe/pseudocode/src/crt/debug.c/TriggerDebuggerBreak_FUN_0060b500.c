// Name: crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
// Address: 0060b500
// Address Range: [[0060b500, 0060b516] [0060b528, 0060b52a]]
// Convention: __cdecl
// Signature: int crt_debug.c_TriggerDebuggerBreak_FUN_0060b500(char * error_message, ushort flags)
// Cross-references:
//   crt_cpp.c_reportPureVirtualError_FUN_00605b23 (00605b23) at 00605b31 [UNCONDITIONAL_CALL]
//   crt_startup.c_HandleRuntimeError_FUN_00606660 (00606660) at 0060666e [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 g_DebuggerIsAttached

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


// Assembly code:
// 0060b500: CMP byte ptr [0x00685474],0x0
//   Label: crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
//   XREF to: 00685474 (READ)
// 0060b507: JZ 0x0060b528
//   XREF to: 0060b528 (CONDITIONAL_JUMP)
// 0060b509: XOR EAX,EAX
// 0060b50b: MOV AX,word ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0060b510: PUSH EAX
// 0060b511: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b515: PUSH EDX
// 0060b516: INT3
// 0060b528: XOR EAX,EAX
//   Label: LAB_0060b528
// 0060b52a: RET
