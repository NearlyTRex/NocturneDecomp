// Name: crt_unknown.c_FUN_0060ced8
// Address: 0060ced8
// Address Range: [[0060ced8, 0060cefb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060ced8()
// Cross-references:
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0a5 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   undefined4 g_GlobalSignalHandlers[1]
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

SIGNAL_HANDLER
crt_unknown_c_FUN_0060ced8
          (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,int param_5
          )

{
  ThreadData *pTVar1;
  
  if ((param_5 != 7) && (param_5 != 4)) {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(unaff_EBX);
    return (SIGNAL_HANDLER)pTVar1->signal_handlers[param_5].flags;
  }
  return g_GlobalSignalHandlers[param_5 * 2 + 1];
}


// Assembly code:
// 0060ced8: PUSH EBX
//   Label: crt_unknown.c_FUN_0060ced8
// 0060ced9: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060cedd: CMP EBX,0x7
// 0060cee0: JZ 0x0060cee7
//   XREF to: 0060cee7 (CONDITIONAL_JUMP)
// 0060cee2: CMP EBX,0x4
// 0060cee5: JNZ 0x0060cef0
//   XREF to: 0060cef0 (CONDITIONAL_JUMP)
// 0060cee7: MOV EAX,dword ptr [EBX*0x8 + 0x685508]
//   Label: LAB_0060cee7
//   XREF to: 00685508 (DATA)
// 0060ceee: POP EBX
// 0060ceef: RET
// 0060cef0: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060cef0
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060cef6: MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c]
// 0060cefa: POP EBX
// 0060cefb: RET
