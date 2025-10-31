// Name: crt_cpp.c_reportPureVirtualError_FUN_00605b23
// Address: 00605b23
// Address Range: [[00605b23, 00605b61]]
// Convention: __watcallStack
// Signature: void crt_cpp.c_reportPureVirtualError_FUN_00605b23(char * error_message, int exit_code)
// Cross-references:
//   crt_cpp.c_handlePureVirtualCall_FUN_006015f1 (006015f1) at 00601610 [UNCONDITIONAL_CALL]
//   crt_cpp.c_pureVirtualStub_FUN_005fee9f (005fee9f) at 005feea6 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
//   crt_startup.c_ExitApplication_FUN_0060b534
//   crt_startup.c_WriteErrorAndExit_FUN_00606620

#include "nocturne.h"

void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_00605b23(char *error_message,int exit_code)

{
  int iVar1;
  ushort in_DS;
  int in_stack_0000000c;
  
  iVar1 = crt_debug_c_TriggerDebuggerBreak_FUN_0060b500(error_message,in_DS);
  if (iVar1 != 0) {
    crt_startup_c_ExitApplication_FUN_0060b534(in_stack_0000000c);
    return;
  }
  crt_startup_c_WriteErrorAndExit_FUN_00606620((char *)exit_code,in_stack_0000000c);
  return;
}


// Assembly code:
// 00605b23: PUSH ESI
//   Label: crt_cpp.c_reportPureVirtualError_FUN_00605b23
// 00605b24: MOV AX,DS
// 00605b26: AND EAX,0xffff
// 00605b2b: PUSH EAX
// 00605b2c: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00605b30: PUSH EDX
// 00605b31: CALL crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
//   XREF to: 0060b500 (UNCONDITIONAL_CALL)
// 00605b36: ADD ESP,0x8
// 00605b39: TEST EAX,EAX
// 00605b3b: JZ 0x00605b4c
//   XREF to: 00605b4c (CONDITIONAL_JUMP)
// 00605b3d: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00605b41: PUSH ESI
// 00605b42: CALL crt_startup.c_ExitApplication_FUN_0060b534
//   XREF to: 0060b534 (UNCONDITIONAL_CALL)
// 00605b47: ADD ESP,0x4
// 00605b4a: POP ESI
// 00605b4b: RET
// 00605b4c: PUSH EBX
//   Label: LAB_00605b4c
// 00605b4d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00605b51: PUSH ECX
// 00605b52: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00605b56: PUSH EBX
// 00605b57: CALL crt_startup.c_WriteErrorAndExit_FUN_00606620
//   XREF to: 00606620 (UNCONDITIONAL_CALL)
// 00605b5c: ADD ESP,0x8
// 00605b5f: POP EBX
// 00605b60: POP ESI
// 00605b61: RET
