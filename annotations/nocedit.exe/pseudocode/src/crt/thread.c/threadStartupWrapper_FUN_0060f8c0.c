// Name: crt_thread.c_threadStartupWrapper_FUN_0060f8c0
// Address: 0060f8c0
// Address Range: [[0060f8c0, 0060f95c]]
// Convention: __cdecl
// Signature: void crt_thread.c_threadStartupWrapper_FUN_0060f8c0(ThreadStartupInfo * info)
// Cross-references:
//   crt_thread.c_create_thread_with_sync_FUN_0060f960 (0060f960) at 0060f9fa [DATA]
// Globals:
//   SetEvent* PTR_SetEvent_00611624 = 00212194
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
//   DWORD g_RuntimeBufferSize = 0xf4
//   int g_EmergencyExitFlag
// Function calls:
//   crt_exception.c_installExceptionHandler_FUN_0060aba8
//   crt_memory.c_memset_FUN_005fde40
//   crt_sync.c_CriticalSectionStub_FUN_00602458
//   crt_thread.c_GetTLS_FUN_0060242c
//   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
//   crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
//   SetEvent

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl crt_thread_c_threadStartupWrapper_FUN_0060f8c0(ThreadStartupInfo *info)

{
  int iVar1;
  BOOL BVar2;
  ThreadData *pTVar3;
  BADSPACEBASE *in_ESP;
  undefined4 uStackY_38;
  int aiStackY_34 [2];
  ExceptionFrame local_28;
  code *local_20;
  
  local_20 = (code *)info->thread_proc;
  if (g_EmergencyExitFlag == 0) {
    iVar1 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
    *(DWORD *)(&stack0xffffffd4 + iVar1) = g_RuntimeBufferSize;
    *(undefined4 *)((int)aiStackY_34 + iVar1 + 4) = 0;
    *(int *)((int)aiStackY_34 + iVar1) = (int)&local_28 + iVar1;
    *(undefined4 *)((int)&uStackY_38 + iVar1) = 0x60f8ff;
    crt_memory_c_memset_FUN_005fde40
              (*(void **)((int)aiStackY_34 + iVar1),*(int *)((int)aiStackY_34 + iVar1 + 4),
               *(ulong *)(&stack0xffffffd4 + iVar1));
    *(int *)(&stack0xffffffd4 + iVar1) = (int)&local_28 + iVar1;
    *(DWORD *)(&stack0x000000c8 + iVar1) = g_RuntimeBufferSize;
    *(undefined4 *)((int)aiStackY_34 + iVar1 + 4) = 0x60f913;
    BVar2 = crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8(*(void **)(&stack0xffffffd4 + iVar1));
    if (BVar2 == 0) {
      return;
    }
  }
  pTVar3 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  info->tls_ptr = (ThreadData **)&pTVar3->thread_handle;
  aiStackY_34[1] = 0x60f933;
  (*PTR_SetEvent_00611624)(info->start_event);
  aiStackY_34[1] = 0x60f93c;
  crt_exception_c_installExceptionHandler_FUN_0060aba8(&local_28);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24)();
  aiStackY_34[1] = 0x60f949;
  (*local_20)();
  crt_unknown_c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878();
  return;
}


// Assembly code:
// 0060f8c0: PUSH EBX
//   Label: crt_thread.c_threadStartupWrapper_FUN_0060f8c0
// 0060f8c1: PUSH ESI
// 0060f8c2: PUSH EDI
// 0060f8c3: PUSH ES
// 0060f8c4: PUSH FS
// 0060f8c6: PUSH GS
// 0060f8c8: PUSH EBP
// 0060f8c9: MOV EBP,ESP
// 0060f8cb: SUB ESP,0xc
// 0060f8ce: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0060f8d1: MOV EDX,dword ptr [0x03f9b220]
//   XREF to: 03f9b220 (READ)
// 0060f8d7: MOV EAX,dword ptr [ESI]
// 0060f8d9: MOV EDI,dword ptr [ESI + 0x4]
// 0060f8dc: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060f8df: TEST EDX,EDX
// 0060f8e1: JNZ 0x0060f91a
//   XREF to: 0060f91a (CONDITIONAL_JUMP)
// 0060f8e3: MOV EAX,[0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060f8e8: ADD EAX,0x3
// 0060f8eb: AND AL,0xfc
// 0060f8ed: SUB ESP,EAX
// 0060f8ef: MOV EBX,ESP
// 0060f8f1: MOV ECX,dword ptr [0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060f8f7: PUSH ECX
// 0060f8f8: PUSH EDX
// 0060f8f9: PUSH EBX
// 0060f8fa: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060f8ff: ADD ESP,0xc
// 0060f902: MOV EAX,[0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060f907: PUSH EBX
// 0060f908: MOV dword ptr [EBX + 0xf0],EAX
// 0060f90e: CALL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
//   XREF to: 0060a2d8 (UNCONDITIONAL_CALL)
// 0060f913: ADD ESP,0x4
// 0060f916: TEST EAX,EAX
// 0060f918: JZ 0x0060f951
//   XREF to: 0060f951 (CONDITIONAL_JUMP)
// 0060f91a: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060f91a
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f920: ADD EAX,0xde
// 0060f925: MOV dword ptr [ESI + 0x10],EAX
// 0060f928: MOV EAX,dword ptr [ESI + 0xc]
// 0060f92b: PUSH EAX
// 0060f92c: CALL dword ptr CS:[0x611624]
//   XREF to: EXTERNAL:00000094 (COMPUTED_CALL)
//   XREF to: 00611624 (READ)
// 0060f933: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x28] (DATA)
// 0060f936: PUSH EAX
// 0060f937: CALL crt_exception.c_installExceptionHandler_FUN_0060aba8
//   XREF to: 0060aba8 (UNCONDITIONAL_CALL)
// 0060f93c: ADD ESP,0x4
// 0060f93f: CALL dword ptr [PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24]
//   XREF to: 00602458 (COMPUTED_CALL)
//   XREF to: 00684f24 (READ)
// 0060f945: PUSH EDI
// 0060f946: CALL dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x20] (READ)
// 0060f949: ADD ESP,0x4
// 0060f94c: CALL crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
//   XREF to: 0060e878 (UNCONDITIONAL_CALL)
// 0060f951: MOV ESP,EBP
//   Label: LAB_0060f951
// 0060f953: POP EBP
// 0060f954: POP GS
// 0060f956: POP FS
// 0060f958: POP ES
// 0060f959: POP EDI
// 0060f95a: POP ESI
// 0060f95b: POP EBX
// 0060f95c: RET
