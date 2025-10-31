// Name: crt_signal.c_consoleCtrlHandler_FUN_0060cf20
// Address: 0060cf20
// Address Range: [[0060cf20, 0060cf7e]]
// Convention: __stdcall
// Signature: BOOL crt_signal.c_consoleCtrlHandler_FUN_0060cf20(DWORD dwCtrlType)
// Cross-references:
//   crt_signal.c_registerConsoleHandler_FUN_0060cfb8 (0060cfb8) at 0060cfc3 [DATA]
//   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4 (0060cfe4) at 0060cfef [DATA]
// Function calls:
//   crt_signal.c_getSignalHandler_FUN_0060ceb4
//   crt_signal.c_processSignal_FUN_0060d128

#include "nocturne.h"

BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_0060cf20(DWORD dwCtrlType)

{
  SIGNAL_HANDLER pSVar1;
  
  if (dwCtrlType == 0) {
    pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(4);
    if (pSVar1 == (SIGNAL_HANDLER)0x0) {
      return 0;
    }
    crt_signal_c_processSignal_FUN_0060d128(4);
  }
  else {
    if (dwCtrlType != 1) {
      return 0;
    }
    pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(7);
    if (pSVar1 == (SIGNAL_HANDLER)0x0) {
      return 0;
    }
    crt_signal_c_processSignal_FUN_0060d128(7);
  }
  if ((pSVar1 != (SIGNAL_HANDLER)&DAT_00000002) && (pSVar1 != (SIGNAL_HANDLER)0x3)) {
    return (BOOL)&DAT_00000001;
  }
  return 0;
}


// Assembly code:
// 0060cf20: PUSH EBX
//   Label: crt_signal.c_consoleCtrlHandler_FUN_0060cf20
// 0060cf21: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060cf25: TEST EAX,EAX
// 0060cf27: JBE 0x0060cf30
//   XREF to: 0060cf30 (CONDITIONAL_JUMP)
// 0060cf29: CMP EAX,0x1
// 0060cf2c: JZ 0x0060cf4c
//   XREF to: 0060cf4c (CONDITIONAL_JUMP)
// 0060cf2e: JMP 0x0060cf70
//   XREF to: 0060cf70 (UNCONDITIONAL_JUMP)
// 0060cf30: PUSH 0x4
//   Label: LAB_0060cf30
// 0060cf32: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060cf37: ADD ESP,0x4
// 0060cf3a: MOV EBX,EAX
// 0060cf3c: TEST EAX,EAX
// 0060cf3e: JZ 0x0060cf7b
//   XREF to: 0060cf7b (CONDITIONAL_JUMP)
// 0060cf40: PUSH 0x4
// 0060cf42: CALL crt_signal.c_processSignal_FUN_0060d128
//   XREF to: 0060d128 (UNCONDITIONAL_CALL)
// 0060cf47: ADD ESP,0x4
// 0060cf4a: JMP 0x0060cf66
//   XREF to: 0060cf66 (UNCONDITIONAL_JUMP)
// 0060cf4c: PUSH 0x7
//   Label: LAB_0060cf4c
// 0060cf4e: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060cf53: ADD ESP,0x4
// 0060cf56: MOV EBX,EAX
// 0060cf58: TEST EAX,EAX
// 0060cf5a: JZ 0x0060cf7b
//   XREF to: 0060cf7b (CONDITIONAL_JUMP)
// 0060cf5c: PUSH 0x7
// 0060cf5e: CALL crt_signal.c_processSignal_FUN_0060d128
//   XREF to: 0060d128 (UNCONDITIONAL_CALL)
// 0060cf63: ADD ESP,0x4
// 0060cf66: CMP EBX,0x2
//   Label: LAB_0060cf66
// 0060cf69: JZ 0x0060cf70
//   XREF to: 0060cf70 (CONDITIONAL_JUMP)
// 0060cf6b: CMP EBX,0x3
// 0060cf6e: JNZ 0x0060cf76
//   XREF to: 0060cf76 (CONDITIONAL_JUMP)
// 0060cf70: XOR EAX,EAX
//   Label: LAB_0060cf70
// 0060cf72: POP EBX
// 0060cf73: RET 0x4
// 0060cf76: MOV EAX,0x1
//   Label: LAB_0060cf76
// 0060cf7b: POP EBX
//   Label: LAB_0060cf7b
// 0060cf7c: RET 0x4
