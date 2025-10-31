// Name: crt_signal.c_getSignalHandler_FUN_0060ceb4
// Address: 0060ceb4
// Address Range: [[0060ceb4, 0060ced7]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)
// Cross-references:
//   crt_signal.c_consoleCtrlHandler_FUN_0060cf20 (0060cf20) at 0060cf4e [UNCONDITIONAL_CALL]
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d12f [UNCONDITIONAL_CALL]
//   crt_signal.c_raiseFPE_FUN_0060d028 (0060d028) at 0060d02b [UNCONDITIONAL_CALL]
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0c6 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060cf80 (0060cf80) at 0060cf83 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   SIGNAL_HANDLER[16] g_GlobalSignalHandlers
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

SIGNAL_HANDLER __watcallStack crt_signal_c_getSignalHandler_FUN_0060ceb4(int signal_number)

{
  ThreadData *pTVar1;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    return pTVar1->signal_handlers[signal_number + -1].handler;
  }
  return g_GlobalSignalHandlers[signal_number * 2];
}


// Assembly code:
// 0060ceb4: PUSH EBX
//   Label: crt_signal.c_getSignalHandler_FUN_0060ceb4
// 0060ceb5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060ceb9: CMP EBX,0x7
// 0060cebc: JZ 0x0060cec3
//   XREF to: 0060cec3 (CONDITIONAL_JUMP)
// 0060cebe: CMP EBX,0x4
// 0060cec1: JNZ 0x0060cecc
//   XREF to: 0060cecc (CONDITIONAL_JUMP)
// 0060cec3: MOV EAX,dword ptr [EBX*0x8 + 0x685504]
//   Label: LAB_0060cec3
//   XREF to: 00685504 (DATA)
// 0060ceca: POP EBX
// 0060cecb: RET
// 0060cecc: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060cecc
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060ced2: MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58]
// 0060ced6: POP EBX
// 0060ced7: RET
