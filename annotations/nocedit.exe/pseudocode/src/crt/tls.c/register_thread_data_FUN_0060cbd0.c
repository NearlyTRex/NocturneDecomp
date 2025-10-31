// Name: crt_tls.c_register_thread_data_FUN_0060cbd0
// Address: 0060cbd0
// Address Range: [[0060cbd0, 0060cc3b]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_register_thread_data_FUN_0060cbd0(void * tls_data, void * thread_param)
// Cross-references:
//   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 (0060a2d8) at 0060a303 [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a49f [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
//   ThreadRegistryEntry* g_ThreadDataRegistryList
// Function calls:
//   crt_memory.c_calloc_FUN_0060ca90
//   crt_memory.c_free_FUN_00601cd0
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   crt_unknown.c_CallReturnZero6_FUN_0060e880

#include "nocturne.h"

BOOL __cdecl crt_tls_c_register_thread_data_FUN_0060cbd0(void *tls_data,void *thread_param)

{
  ThreadRegistryEntry *ptr;
  int iVar1;
  BOOL BVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10)();
  BVar2 = 1;
  ptr = (ThreadRegistryEntry *)crt_memory_c_calloc_FUN_0060ca90(1,0x10);
  if (ptr == (ThreadRegistryEntry *)0x0) {
    BVar2 = 0;
  }
  else {
    iVar1 = crt_unknown_c_CallReturnZero6_FUN_0060e880();
    if (iVar1 == 0) {
      ptr->dataBuffer = thread_param;
      ptr->threadDataKey = tls_data;
      ptr->shouldFreeData = (uint)*(byte *)((int)thread_param + 0x52);
      ptr->next = g_ThreadDataRegistryList;
      g_ThreadDataRegistryList = ptr;
    }
    else {
      crt_memory_c_free_FUN_00601cd0(ptr);
      BVar2 = 0;
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14)();
  return BVar2;
}


// Assembly code:
// 0060cbd0: PUSH EBX
//   Label: crt_tls.c_register_thread_data_FUN_0060cbd0
// 0060cbd1: PUSH ESI
// 0060cbd2: PUSH EDI
// 0060cbd3: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060cbd7: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f10 (READ)
// 0060cbdd: PUSH 0x10
// 0060cbdf: MOV ESI,0x1
// 0060cbe4: PUSH ESI
// 0060cbe5: CALL crt_memory.c_calloc_FUN_0060ca90
//   XREF to: 0060ca90 (UNCONDITIONAL_CALL)
// 0060cbea: MOV EBX,EAX
// 0060cbec: ADD ESP,0x8
// 0060cbef: TEST EAX,EAX
// 0060cbf1: JZ 0x0060cc2e
//   XREF to: 0060cc2e (CONDITIONAL_JUMP)
// 0060cbf3: PUSH EDI
// 0060cbf4: CALL crt_unknown.c_CallReturnZero6_FUN_0060e880
//   XREF to: 0060e880 (UNCONDITIONAL_CALL)
// 0060cbf9: ADD ESP,0x4
// 0060cbfc: TEST EAX,EAX
// 0060cbfe: JZ 0x0060cc0d
//   XREF to: 0060cc0d (CONDITIONAL_JUMP)
// 0060cc00: PUSH EBX
// 0060cc01: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060cc06: XOR ESI,ESI
// 0060cc08: ADD ESP,0x4
// 0060cc0b: JMP 0x0060cc30
//   XREF to: 0060cc30 (UNCONDITIONAL_JUMP)
// 0060cc0d: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0060cc0d
// 0060cc11: MOV dword ptr [EBX + 0x8],EDI
// 0060cc14: MOV dword ptr [EBX + 0x4],EAX
// 0060cc17: XOR EAX,EAX
// 0060cc19: MOV AL,byte ptr [EDI + 0x52]
// 0060cc1c: MOV dword ptr [EBX + 0xc],EAX
// 0060cc1f: MOV EAX,[0x03f9c160]
//   XREF to: 03f9c160 (READ)
// 0060cc24: MOV dword ptr [0x03f9c160],EBX
//   XREF to: 03f9c160 (WRITE)
// 0060cc2a: MOV dword ptr [EBX],EAX
// 0060cc2c: JMP 0x0060cc30
//   XREF to: 0060cc30 (UNCONDITIONAL_JUMP)
// 0060cc2e: XOR ESI,ESI
//   Label: LAB_0060cc2e
// 0060cc30: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14]
//   Label: LAB_0060cc30
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f14 (READ)
// 0060cc36: MOV EAX,ESI
// 0060cc38: POP EDI
// 0060cc39: POP ESI
// 0060cc3a: POP EBX
// 0060cc3b: RET
