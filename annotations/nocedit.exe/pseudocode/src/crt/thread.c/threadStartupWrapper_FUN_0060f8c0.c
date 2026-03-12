// Name: crt_thread.c_threadStartupWrapper_FUN_0060f8c0
// Address: 0060f8c0
// Address Range: [[0060f8c0, 0060f95c]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c_threadStartupWrapper_FUN_0060f8c0(ThreadStartupInfo *info)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl threadStartupWrapper(ThreadStartupInfo *info)

{
  code *pcVar1;
  BOOL BVar2;
  ThreadData *pTVar3;
  uint uStackY_38;
  int aiStackY_34 [2];
  ExceptionFrame local_28;
  byte *local_20;
  int iVar1;
  
  pcVar1 = info->thread_proc;
  if (g_EmergencyExitFlag == 0) {
    iVar1 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
    *(DWORD *)(&stack0xffffffd4 + iVar1) = g_RuntimeBufferSize;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0;
    *(int *)((int)aiStackY_34 + iVar1) = (int)&local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x60f8ff;
    memset
              (*(void **)((int)aiStackY_34 + iVar1),*(int *)((int)aiStackY_34 + iVar1 + 4),
               *(ulong *)(&stack0xffffffd4 + iVar1));
    *(int *)(&stack0xffffffd4 + iVar1) = (int)&local_28 + iVar1;
    *(DWORD *)(&stack0x000000c8 + iVar1) = g_RuntimeBufferSize;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0x60f913;
    BVar2 = initialize_thread_tls_data(*(void **)(&stack0xffffffd4 + iVar1));
    if (BVar2 == 0) {
      return;
    }
  }
  pTVar3 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  info->tls_ptr = &pTVar3->thread_handle;
  aiStackY_34[1] = 0x60f933;
  (*g_SetEventFunc)(info->start_event);
  aiStackY_34[1] = 0x60f93c;
  installExceptionHandler(&local_28);
  (*PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24)();
  aiStackY_34[1] = 0x60f949;
  (*pcVar1)();
  SomethingThatCallsExitThreadAfterCommunicate();
  return;
}
