// Name: crt_signal.c_setSignalHandler_FUN_0060ce60
// Address: 0060ce60
// Address Range: [[0060ce60, 0060ceb0]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER new_handler)
// Cross-references:
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d177 [UNCONDITIONAL_CALL]
//   crt_signal.c_raiseFPE_FUN_0060d028 (0060d028) at 0060d048 [UNCONDITIONAL_CALL]
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0d2 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d1ec (0060d1ec) at 0060d20a [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   SIGNAL_HANDLER[16] g_GlobalSignalHandlers
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

SIGNAL_HANDLER __watcallStack
crt_signal_c_setSignalHandler_FUN_0060ce60(int signal_number,SIGNAL_HANDLER new_handler)

{
  SIGNAL_HANDLER pSVar1;
  ThreadData *pTVar2;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pSVar1 = pTVar2->signal_handlers[signal_number + -1].handler;
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pTVar2->signal_handlers[signal_number + -1].handler = new_handler;
    return pSVar1;
  }
  pSVar1 = g_GlobalSignalHandlers[signal_number * 2];
  g_GlobalSignalHandlers[signal_number * 2] = new_handler;
  return pSVar1;
}


// Assembly code:
// 0060ce60: PUSH EBX
//   Label: crt_signal.c_setSignalHandler_FUN_0060ce60
// 0060ce61: PUSH ESI
// 0060ce62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060ce66: CMP EBX,0x7
// 0060ce69: JZ 0x0060ce70
//   XREF to: 0060ce70 (CONDITIONAL_JUMP)
// 0060ce6b: CMP EBX,0x4
// 0060ce6e: JNZ 0x0060ce8c
//   XREF to: 0060ce8c (CONDITIONAL_JUMP)
// 0060ce70: LEA EAX,[EBX*0x8 + 0x0]
//   Label: LAB_0060ce70
// 0060ce77: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060ce7b: MOV EBX,dword ptr [EAX + 0x685504]
//   XREF to: 00685504 (DATA)
// 0060ce81: MOV dword ptr [EAX + 0x685504],ESI
//   XREF to: 00685504 (DATA)
// 0060ce87: MOV EAX,EBX
// 0060ce89: POP ESI
// 0060ce8a: POP EBX
// 0060ce8b: RET
// 0060ce8c: LEA ESI,[EBX*0x8 + 0x0]
//   Label: LAB_0060ce8c
// 0060ce93: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060ce99: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58]
// 0060ce9d: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060cea3: ADD EAX,ESI
// 0060cea5: MOV ESI,dword ptr [ESP + 0x10]
// 0060cea9: MOV dword ptr [EAX + 0x58],ESI
// 0060ceac: MOV EAX,EBX
// 0060ceae: POP ESI
// 0060ceaf: POP EBX
// 0060ceb0: RET
