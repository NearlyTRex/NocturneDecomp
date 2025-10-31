// Name: crt_unknown.c_FUN_0060cf80
// Address: 0060cf80
// Address Range: [[0060cf80, 0060cfb5]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060cf80()
// Cross-references:
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d185 [UNCONDITIONAL_CALL]
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0da [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d1ec (0060d1ec) at 0060d1ec [UNCONDITIONAL_CALL]
// Function calls:
//   crt_signal.c_getSignalHandler_FUN_0060ceb4

#include "nocturne.h"

/* Signature: undefined1 FUN_0060cf80() */

undefined4 crt_unknown_c_FUN_0060cf80(void)

{
  SIGNAL_HANDLER pSVar1;
  SIGNAL_HANDLER pSVar2;
  
  pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(4);
  pSVar2 = crt_signal_c_getSignalHandler_FUN_0060ceb4(7);
  if (((pSVar1 == (SIGNAL_HANDLER)&DAT_00000002) || (pSVar1 == (SIGNAL_HANDLER)0x3)) &&
     ((pSVar2 == (SIGNAL_HANDLER)&DAT_00000002 || (pSVar2 == (SIGNAL_HANDLER)0x3)))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 0060cf80: PUSH EBX
//   Label: crt_unknown.c_FUN_0060cf80
// 0060cf81: PUSH 0x4
// 0060cf83: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060cf88: ADD ESP,0x4
// 0060cf8b: PUSH 0x7
// 0060cf8d: MOV EBX,EAX
// 0060cf8f: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060cf94: ADD ESP,0x4
// 0060cf97: CMP EBX,0x2
// 0060cf9a: JZ 0x0060cfa1
//   XREF to: 0060cfa1 (CONDITIONAL_JUMP)
// 0060cf9c: CMP EBX,0x3
// 0060cf9f: JNZ 0x0060cfab
//   XREF to: 0060cfab (CONDITIONAL_JUMP)
// 0060cfa1: CMP EAX,0x2
//   Label: LAB_0060cfa1
// 0060cfa4: JZ 0x0060cfb2
//   XREF to: 0060cfb2 (CONDITIONAL_JUMP)
// 0060cfa6: CMP EAX,0x3
// 0060cfa9: JZ 0x0060cfb2
//   XREF to: 0060cfb2 (CONDITIONAL_JUMP)
// 0060cfab: MOV EAX,0x1
//   Label: LAB_0060cfab
// 0060cfb0: POP EBX
// 0060cfb1: RET
// 0060cfb2: XOR EAX,EAX
//   Label: LAB_0060cfb2
// 0060cfb4: POP EBX
// 0060cfb5: RET
