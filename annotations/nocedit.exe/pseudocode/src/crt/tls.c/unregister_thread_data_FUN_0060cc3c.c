// Name: crt_tls.c_unregister_thread_data_FUN_0060cc3c
// Address: 0060cc3c
// Address Range: [[0060cc3c, 0060cc8f]]
// Convention: __cdecl
// Signature: void crt_tls.c_unregister_thread_data_FUN_0060cc3c(void * threadDataKey)
// Cross-references:
//   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334 (0060a334) at 0060a35a [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
//   ThreadRegistryEntry* g_ThreadDataRegistryList
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void __cdecl crt_tls_c_unregister_thread_data_FUN_0060cc3c(void *threadDataKey)

{
  ThreadRegistryEntry *pTVar1;
  ThreadRegistryEntry *ptr;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10)();
  pTVar1 = (ThreadRegistryEntry *)&g_ThreadDataRegistryList;
  ptr = g_ThreadDataRegistryList;
  do {
    if (ptr == (ThreadRegistryEntry *)0x0) {
LAB_0060cc86:
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14)();
      return;
    }
    if (threadDataKey == ptr->threadDataKey) {
      if (ptr->shouldFreeData != 0) {
        crt_memory_c_free_FUN_00601cd0(ptr->dataBuffer);
      }
      pTVar1->next = ptr->next;
      crt_memory_c_free_FUN_00601cd0(ptr);
      goto LAB_0060cc86;
    }
    pTVar1 = ptr;
    ptr = ptr->next;
  } while( true );
}


// Assembly code:
// 0060cc3c: PUSH EBX
//   Label: crt_tls.c_unregister_thread_data_FUN_0060cc3c
// 0060cc3d: PUSH ESI
// 0060cc3e: PUSH EDI
// 0060cc3f: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060cc43: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f10 (READ)
// 0060cc49: MOV EBX,dword ptr [0x03f9c160]
//   XREF to: 03f9c160 (READ)
// 0060cc4f: MOV ESI,0x3f9c160
//   XREF to: 03f9c160 (DATA)
// 0060cc54: TEST EBX,EBX
// 0060cc56: JZ 0x0060cc86
//   XREF to: 0060cc86 (CONDITIONAL_JUMP)
// 0060cc58: CMP EDI,dword ptr [EBX + 0x4]
//   Label: LAB_0060cc58
// 0060cc5b: JNZ 0x0060cc7e
//   XREF to: 0060cc7e (CONDITIONAL_JUMP)
// 0060cc5d: CMP dword ptr [EBX + 0xc],0x0
// 0060cc61: JZ 0x0060cc6f
//   XREF to: 0060cc6f (CONDITIONAL_JUMP)
// 0060cc63: MOV EDI,dword ptr [EBX + 0x8]
// 0060cc66: PUSH EDI
// 0060cc67: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060cc6c: ADD ESP,0x4
// 0060cc6f: MOV EDI,dword ptr [EBX]
//   Label: LAB_0060cc6f
// 0060cc71: PUSH EBX
// 0060cc72: MOV dword ptr [ESI],EDI
//   XREF to: 03f9c160 (WRITE)
// 0060cc74: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060cc79: ADD ESP,0x4
// 0060cc7c: JMP 0x0060cc86
//   XREF to: 0060cc86 (UNCONDITIONAL_JUMP)
// 0060cc7e: MOV ESI,EBX
//   Label: LAB_0060cc7e
// 0060cc80: MOV EBX,dword ptr [EBX]
// 0060cc82: TEST EBX,EBX
// 0060cc84: JNZ 0x0060cc58
//   XREF to: 0060cc58 (CONDITIONAL_JUMP)
// 0060cc86: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14]
//   Label: LAB_0060cc86
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f14 (READ)
// 0060cc8c: POP EDI
// 0060cc8d: POP ESI
// 0060cc8e: POP EBX
// 0060cc8f: RET
