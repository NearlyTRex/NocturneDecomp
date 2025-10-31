// Name: crt_startup.c_HandleRuntimeError_FUN_00606660
// Address: 00606660
// Address Range: [[00606660, 0060668d]]
// Convention: __cdecl
// Signature: void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
// Cross-references:
//   crt_stack.c_stack_overflow_handler_FUN_005ffa22 (005ffa22) at 005ffa2a [UNCONDITIONAL_CALL]
//   crt_startup.c_reportAbnormalTermination_FUN_00601628 (00601628) at 00601632 [UNCONDITIONAL_CALL]
//   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30 (0060ad30) at 0060ad37 [UNCONDITIONAL_CALL]
//   crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f (0060477f) at 00604786 [UNCONDITIONAL_CALL]
//   crt_sync.c_allocate_critical_section_FUN_00609f24 (00609f24) at 00609f69 [UNCONDITIONAL_CALL]
//   crt_tls.c_create_thread_local_data_FUN_0060cac0 (0060cac0) at 0060caeb [UNCONDITIONAL_CALL]
//   crt_tls.c_getThreadLocalData_FUN_0060caf8 (0060caf8) at 0060cb44 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_00608f20 (00608f20) at 00608f70 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
//   crt_startup.c_WriteErrorAndExit_FUN_00606620

#include "nocturne.h"

void __cdecl crt_startup_c_HandleRuntimeError_FUN_00606660(char *error_message,int error_level)

{
  int iVar1;
  ushort in_DS;
  int in_stack_0000000c;
  
  iVar1 = crt_debug_c_TriggerDebuggerBreak_FUN_0060b500(error_message,in_DS);
  if (iVar1 == 0) {
    crt_startup_c_WriteErrorAndExit_FUN_00606620((char *)error_level,in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 00606660: PUSH EBX
//   Label: crt_startup.c_HandleRuntimeError_FUN_00606660
// 00606661: MOV AX,DS
// 00606663: AND EAX,0xffff
// 00606668: PUSH EAX
// 00606669: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060666d: PUSH EDX
// 0060666e: CALL crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
//   XREF to: 0060b500 (UNCONDITIONAL_CALL)
// 00606673: ADD ESP,0x8
// 00606676: TEST EAX,EAX
// 00606678: JNZ 0x0060668c
//   XREF to: 0060668c (CONDITIONAL_JUMP)
// 0060667a: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060667e: PUSH EBX
// 0060667f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00606683: PUSH ECX
// 00606684: CALL crt_startup.c_WriteErrorAndExit_FUN_00606620
//   XREF to: 00606620 (UNCONDITIONAL_CALL)
// 00606689: ADD ESP,0x8
// 0060668c: POP EBX
//   Label: LAB_0060668c
// 0060668d: RET
