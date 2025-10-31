// Name: crt_signal.c_processSignal_FUN_0060d128
// Address: 0060d128
// Address Range: [[0060d128, 0060d1a4]]
// Convention: __watcallStack
// Signature: int crt_signal.c_processSignal_FUN_0060d128(int signal_number)
// Cross-references:
//   crt_signal.c_consoleCtrlHandler_FUN_0060cf20 (0060cf20) at 0060cf42 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d1a8 (0060d1a8) at 0060d1d6 [DATA]
// Globals:
//   void* switchdataD_0060d0f8 = 0060d15b
// Function calls:
//   crt_signal.c_getSignalHandler_FUN_0060ceb4
//   crt_signal.c_raiseFPE_FUN_0060d028
//   crt_signal.c_setSignalHandler_FUN_0060ce60
//   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   crt_startup.c_reportAbnormalTermination_FUN_00601628
//   crt_unknown.c_FUN_0060cf80

#include "nocturne.h"

int __watcallStack crt_signal_c_processSignal_FUN_0060d128(int signal_number)

{
  SIGNAL_HANDLER pSVar1;
  int iVar2;
  
  pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(signal_number);
  switch(signal_number) {
  case 1:
    break;
  case 2:
    crt_signal_c_raiseFPE_FUN_0060d028(0x8c);
    return 0;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    goto switchD_0060d141_caseD_c;
  default:
    return -1;
  }
  if (pSVar1 == (SIGNAL_HANDLER)&DAT_00000002) {
    crt_startup_c_reportAbnormalTermination_FUN_00601628();
  }
switchD_0060d141_caseD_c:
  if (((pSVar1 != (SIGNAL_HANDLER)&DAT_00000001) && (pSVar1 != (SIGNAL_HANDLER)&DAT_00000002)) &&
     (pSVar1 != (SIGNAL_HANDLER)0x3)) {
    crt_signal_c_setSignalHandler_FUN_0060ce60(signal_number,(SIGNAL_HANDLER)&DAT_00000002);
    (*pSVar1)(signal_number);
  }
  iVar2 = crt_unknown_c_FUN_0060cf80();
  if (iVar2 != 0) {
    return 0;
  }
  crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
  return 0;
}


// Assembly code:
// 0060d128: PUSH EBX
//   Label: crt_signal.c_processSignal_FUN_0060d128
// 0060d129: PUSH ESI
// 0060d12a: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060d12e: PUSH ESI
// 0060d12f: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060d134: ADD ESP,0x4
// 0060d137: LEA EDX,[ESI + -0x1]
// 0060d13a: MOV EBX,EAX
// 0060d13c: CMP EDX,0xb
// 0060d13f: JA 0x0060d198
//   XREF to: 0060d198 (CONDITIONAL_JUMP)
// 0060d141: JMP dword ptr CS:[EDX*0x4 + 0x60d0f8]
//   Label: switchD
//   XREF to: 0060d149 (COMPUTED_JUMP)
//   XREF to: 0060d15b (COMPUTED_JUMP)
//   XREF to: 0060d165 (COMPUTED_JUMP)
//   XREF to: 0060d0f8 (DATA)
// 0060d149: PUSH 0x8c
//   Label: caseD_2
// 0060d14e: CALL crt_signal.c_raiseFPE_FUN_0060d028
//   XREF to: 0060d028 (UNCONDITIONAL_CALL)
// 0060d153: ADD ESP,0x4
// 0060d156: XOR EAX,EAX
// 0060d158: POP ESI
// 0060d159: POP EBX
// 0060d15a: RET
// 0060d15b: CMP EAX,0x2
//   Label: caseD_1
// 0060d15e: JNZ 0x0060d165
//   XREF to: 0060d165 (CONDITIONAL_JUMP)
// 0060d160: CALL crt_startup.c_reportAbnormalTermination_FUN_00601628
//   XREF to: 00601628 (UNCONDITIONAL_CALL)
// 0060d165: CMP EBX,0x1
//   Label: caseD_c
// 0060d168: JZ 0x0060d185
//   XREF to: 0060d185 (CONDITIONAL_JUMP)
// 0060d16a: CMP EBX,0x2
// 0060d16d: JZ 0x0060d185
//   XREF to: 0060d185 (CONDITIONAL_JUMP)
// 0060d16f: CMP EBX,0x3
// 0060d172: JZ 0x0060d185
//   XREF to: 0060d185 (CONDITIONAL_JUMP)
// 0060d174: PUSH 0x2
// 0060d176: PUSH ESI
// 0060d177: CALL crt_signal.c_setSignalHandler_FUN_0060ce60
//   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
// 0060d17c: ADD ESP,0x8
// 0060d17f: PUSH ESI
// 0060d180: CALL EBX
// 0060d182: ADD ESP,0x4
// 0060d185: CALL crt_unknown.c_FUN_0060cf80
//   Label: LAB_0060d185
//   XREF to: 0060cf80 (UNCONDITIONAL_CALL)
// 0060d18a: TEST EAX,EAX
// 0060d18c: JNZ 0x0060d1a0
//   XREF to: 0060d1a0 (CONDITIONAL_JUMP)
// 0060d18e: CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)
// 0060d193: XOR EAX,EAX
// 0060d195: POP ESI
// 0060d196: POP EBX
// 0060d197: RET
// 0060d198: MOV EAX,0xffffffff
//   Label: default
// 0060d19d: POP ESI
// 0060d19e: POP EBX
// 0060d19f: RET
// 0060d1a0: XOR EAX,EAX
//   Label: LAB_0060d1a0
// 0060d1a2: POP ESI
// 0060d1a3: POP EBX
// 0060d1a4: RET
