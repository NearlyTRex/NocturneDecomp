// Name: crt_unknown.c_FUN_0060d1ec
// Address: 0060d1ec
// Address Range: [[0060d1ec, 0060d212]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d1ec()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060d214 (0060d214) at 0060d21a [DATA]
// Function calls:
//   crt_signal.c_setSignalHandler_FUN_0060ce60
//   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   crt_unknown.c_FUN_0060cf80

#include "nocturne.h"

void crt_unknown_c_FUN_0060d1ec(void)

{
  int iVar1;
  
  iVar1 = crt_unknown_c_FUN_0060cf80();
  if (iVar1 != 0) {
    crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
    crt_signal_c_setSignalHandler_FUN_0060ce60(4,(SIGNAL_HANDLER)&DAT_00000002);
    crt_signal_c_setSignalHandler_FUN_0060ce60(7,(SIGNAL_HANDLER)&DAT_00000002);
  }
  return;
}


// Assembly code:
// 0060d1ec: CALL crt_unknown.c_FUN_0060cf80
//   Label: crt_unknown.c_FUN_0060d1ec
//   XREF to: 0060cf80 (UNCONDITIONAL_CALL)
// 0060d1f1: TEST EAX,EAX
// 0060d1f3: JZ 0x0060d212
//   XREF to: 0060d212 (CONDITIONAL_JUMP)
// 0060d1f5: CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)
// 0060d1fa: PUSH 0x2
// 0060d1fc: PUSH 0x4
// 0060d1fe: CALL crt_signal.c_setSignalHandler_FUN_0060ce60
//   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
// 0060d203: ADD ESP,0x8
// 0060d206: PUSH 0x2
// 0060d208: PUSH 0x7
// 0060d20a: CALL crt_signal.c_setSignalHandler_FUN_0060ce60
//   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
// 0060d20f: ADD ESP,0x8
// 0060d212: RET
//   Label: LAB_0060d212
