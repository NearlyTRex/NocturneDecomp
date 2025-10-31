// Name: crt_util.c_invokeRuntimeHandler_FUN_0060ac20
// Address: 0060ac20
// Address Range: [[0060ac20, 0060ac2f]]
// Convention: __cdecl
// Signature: void crt_util.c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC * * ppHandler)
// Cross-references:
//   crt_exit.c_ProcessExitHandlers_FUN_0060ac88 (0060ac88) at 0060acd7 [UNCONDITIONAL_CALL]
//   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30 (0060ac30) at 0060ac72 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC **ppHandler)

{
  if (*ppHandler != (RUNTIME_HANDLER_FUNC *)0x0) {
    (**ppHandler)();
  }
  return;
}


// Assembly code:
// 0060ac20: PUSH ES
//   Label: crt_util.c_invokeRuntimeHandler_FUN_0060ac20
// 0060ac21: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060ac25: CMP dword ptr [EAX],0x0
// 0060ac28: JZ 0x0060ac2e
//   XREF to: 0060ac2e (CONDITIONAL_JUMP)
// 0060ac2a: PUSH DS
// 0060ac2b: POP ES
// 0060ac2c: CALL dword ptr [EAX]
// 0060ac2e: POP ES
//   Label: LAB_0060ac2e
// 0060ac2f: RET
