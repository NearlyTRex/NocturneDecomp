// Name: crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068
// Address: 0060d068
// Address Range: [[0060d068, 0060d0f4]]
// Convention: unknown
// Signature: undefined crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068()
// Globals:
//   VOID_FUNC* PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84 = 00601628
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_signal.c_getSignalHandler_FUN_0060ceb4
//   crt_signal.c_registerConsoleHandler_FUN_0060cfb8
//   crt_signal.c_setSignalHandler_FUN_0060ce60
//   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   crt_unknown.c_FUN_0060ced8
//   crt_unknown.c_FUN_0060cf80
//   crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0

#include "nocturne.h"

/* Signature: undefined1 unk_DoSomethingAndSetCtrlHandler(undefined4 param_1, undefined4 param_2) */

SIGNAL_HANDLER crt_unknown_c_DoSomethingAndSetCtrlHandler_FUN_0060d068(void)

{
  int iVar1;
  SIGNAL_HANDLER pSVar2;
  int in_stack_00000004;
  SIGNAL_HANDLER in_stack_00000008;
  
  if ((0 < in_stack_00000004) && (in_stack_00000004 < 0xd)) {
    PTR_crt_startup_c_reportAbnormalTermination_FUN_00684c84 = (VOID_FUNC *)&LAB_0060d01c;
    if ((in_stack_00000008 != (SIGNAL_HANDLER)&DAT_00000002) &&
       (in_stack_00000008 != (SIGNAL_HANDLER)0x3)) {
      iVar1 = crt_unknown_c_FUN_0060ced8();
      if ((iVar1 != 0) && (in_stack_00000004 == 2)) {
        crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0();
      }
    }
    pSVar2 = crt_signal_c_getSignalHandler_FUN_0060ceb4(in_stack_00000004);
    crt_signal_c_setSignalHandler_FUN_0060ce60(in_stack_00000004,in_stack_00000008);
    iVar1 = crt_unknown_c_FUN_0060cf80();
    if (iVar1 == 0) {
      crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
    }
    else {
      crt_signal_c_registerConsoleHandler_FUN_0060cfb8();
    }
    return pSVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(9);
  return (SIGNAL_HANDLER)0x3;
}


// Assembly code:
// 0060d068: PUSH EBX
//   Label: crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068
// 0060d069: PUSH ESI
// 0060d06a: PUSH EDI
// 0060d06b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060d06f: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060d073: CMP EBX,0x1
// 0060d076: JL 0x0060d07d
//   XREF to: 0060d07d (CONDITIONAL_JUMP)
// 0060d078: CMP EBX,0xc
// 0060d07b: JLE 0x0060d090
//   XREF to: 0060d090 (CONDITIONAL_JUMP)
// 0060d07d: PUSH 0x9
//   Label: LAB_0060d07d
// 0060d07f: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060d084: MOV EAX,0x3
// 0060d089: ADD ESP,0x4
// 0060d08c: POP EDI
// 0060d08d: POP ESI
// 0060d08e: POP EBX
// 0060d08f: RET
// 0060d090: MOV dword ptr [0x00684c84],0x60d01c
//   Label: LAB_0060d090
//   XREF to: 00684c84 (WRITE)
//   XREF to: 0060d01c (DATA)
// 0060d09a: CMP EDI,0x2
// 0060d09d: JZ 0x0060d0c5
//   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
// 0060d09f: CMP EDI,0x3
// 0060d0a2: JZ 0x0060d0c5
//   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
// 0060d0a4: PUSH EBX
// 0060d0a5: CALL crt_unknown.c_FUN_0060ced8
//   XREF to: 0060ced8 (UNCONDITIONAL_CALL)
// 0060d0aa: ADD ESP,0x4
// 0060d0ad: TEST EAX,EAX
// 0060d0af: JZ 0x0060d0c5
//   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
// 0060d0b1: CMP EBX,0x2
// 0060d0b4: JNZ 0x0060d0c5
//   XREF to: 0060d0c5 (CONDITIONAL_JUMP)
// 0060d0b6: PUSH 0x9f
// 0060d0bb: PUSH 0x0
// 0060d0bd: CALL crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
//   XREF to: 0060e8e0 (UNCONDITIONAL_CALL)
// 0060d0c2: ADD ESP,0x8
// 0060d0c5: PUSH EBX
//   Label: LAB_0060d0c5
// 0060d0c6: CALL crt_signal.c_getSignalHandler_FUN_0060ceb4
//   XREF to: 0060ceb4 (UNCONDITIONAL_CALL)
// 0060d0cb: ADD ESP,0x4
// 0060d0ce: PUSH EDI
// 0060d0cf: PUSH EBX
// 0060d0d0: MOV ESI,EAX
// 0060d0d2: CALL crt_signal.c_setSignalHandler_FUN_0060ce60
//   XREF to: 0060ce60 (UNCONDITIONAL_CALL)
// 0060d0d7: ADD ESP,0x8
// 0060d0da: CALL crt_unknown.c_FUN_0060cf80
//   XREF to: 0060cf80 (UNCONDITIONAL_CALL)
// 0060d0df: TEST EAX,EAX
// 0060d0e1: JZ 0x0060d0ea
//   XREF to: 0060d0ea (CONDITIONAL_JUMP)
// 0060d0e3: CALL crt_signal.c_registerConsoleHandler_FUN_0060cfb8
//   XREF to: 0060cfb8 (UNCONDITIONAL_CALL)
// 0060d0e8: JMP 0x0060d0ef
//   XREF to: 0060d0ef (UNCONDITIONAL_JUMP)
// 0060d0ea: CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   Label: LAB_0060d0ea
//   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)
// 0060d0ef: MOV EAX,ESI
//   Label: LAB_0060d0ef
// 0060d0f1: POP EDI
// 0060d0f2: POP ESI
// 0060d0f3: POP EBX
// 0060d0f4: RET
