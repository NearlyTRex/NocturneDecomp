// Name: crt_signal.c_raiseFPE_FUN_0060d028
// Address: 0060d028
// Address Range: [[0060d028, 0060d066]]
// Convention: __cdecl
// Signature: int crt_signal.c_raiseFPE_FUN_0060d028(int fpe_code)
// Cross-references:
//   crt_exception.c_ExceptionHandler_FUN_0060a9d8 (0060a9d8) at 0060aaf0 [UNCONDITIONAL_CALL]
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d14e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_signal.c_getSignalHandler_FUN_0060ceb4
//   crt_signal.c_setSignalHandler_FUN_0060ce60

#include "nocturne.h"

int __cdecl crt_signal_c_raiseFPE_FUN_0060d028(int fpe_code)

{
  SIGNAL_HANDLER pSVar1;
  
  pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(2);
  if (((pSVar1 != (SIGNAL_HANDLER)&DAT_00000001) && (pSVar1 != (SIGNAL_HANDLER)&DAT_00000002)) &&
     (pSVar1 != (SIGNAL_HANDLER)0x3)) {
    crt_signal_c_setSignalHandler_FUN_0060ce60(2,(SIGNAL_HANDLER)&DAT_00000002);
    (*pSVar1)(2);
    return 0;
  }
  return -1;
}


// Assembly code:
// 0060d028: PUSH EBX
//   Label: crt_signal.c_raiseFPE_FUN_0060d028
// 0060d029: PUSH 0x2
// 0060d02b: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060d030: ADD ESP,0x4
// 0060d033: MOV EBX,EAX
// 0060d035: CMP EAX,0x1
// 0060d038: JZ 0x0060d060
//   XREF to: 0060d060 (CONDITIONAL_JUMP)
// 0060d03a: CMP EAX,0x2
// 0060d03d: JZ 0x0060d060
//   XREF to: 0060d060 (CONDITIONAL_JUMP)
// 0060d03f: CMP EAX,0x3
// 0060d042: JZ 0x0060d060
//   XREF to: 0060d060 (CONDITIONAL_JUMP)
// 0060d044: PUSH 0x2
// 0060d046: PUSH 0x2
// 0060d048: CALL crt_signal.c_setSignalHandler_FUN_0060ce60
//   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
// 0060d04d: ADD ESP,0x8
// 0060d050: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060d054: PUSH EDX
// 0060d055: PUSH 0x2
// 0060d057: CALL EBX
// 0060d059: ADD ESP,0x8
// 0060d05c: XOR EAX,EAX
// 0060d05e: POP EBX
// 0060d05f: RET
// 0060d060: MOV EAX,0xffffffff
//   Label: LAB_0060d060
// 0060d065: POP EBX
// 0060d066: RET
