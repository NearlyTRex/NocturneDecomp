// Name: crt_process.c_execv_FUN_006101f0
// Address: 006101f0
// Address Range: [[006101f0, 0061022c]]
// Convention: __cdecl
// Signature: int crt_process.c_execv_FUN_006101f0(int argc, char * program, char * * argv)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f45d [UNCONDITIONAL_CALL]
// Globals:
//   ExitProcess* PTR_ExitProcess_00611534 = 00211d12
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
// Function calls:
//   crt_exit.c_ExitHookStub_FUN_0060b530
//   crt_process.c_spawnvp_FUN_0060f39c
//   crt_thread.c_GetTLS_FUN_0060242c
//   ExitProcess

#include "nocturne.h"

int __cdecl crt_process_c_execv_FUN_006101f0(int argc,char *program,char **argv)

{
  UINT uExitCode;
  ThreadData *pTVar1;
  int iVar2;
  
  uExitCode = crt_process_c_spawnvp_FUN_0060f39c(1,(char *)argc,(char **)program);
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  if (pTVar1->errno_value != 0) {
    return -1;
  }
  (*(code *)PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  iVar2 = (*PTR_ExitProcess_00611534)(uExitCode);
  return iVar2;
}


// Assembly code:
// 006101f0: PUSH EBX
//   Label: crt_process.c_execv_FUN_006101f0
// 006101f1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006101f5: PUSH EDX
// 006101f6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 006101fa: PUSH EBX
// 006101fb: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 006101ff: PUSH ECX
// 00610200: PUSH 0x1
// 00610202: CALL crt_process.c_spawnvp_FUN_0060f39c
//   XREF to: 0060f39c (UNCONDITIONAL_CALL)
// 00610207: ADD ESP,0x10
// 0061020a: MOV EBX,EAX
// 0061020c: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 00610212: CMP dword ptr [EAX + 0x4],0x0
// 00610216: JZ 0x0061021f
//   XREF to: 0061021f (CONDITIONAL_JUMP)
// 00610218: MOV EAX,0xffffffff
// 0061021d: POP EBX
// 0061021e: RET
// 0061021f: CALL dword ptr [PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478]
//   Label: LAB_0061021f
//   XREF to: 0060b530 (COMPUTED_CALL)
//   XREF to: 00685478 (READ)
// 00610225: PUSH EBX
// 00610226: CALL dword ptr CS:[0x611534]
//   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)
//   XREF to: 00611534 (READ)
