// Name: crt_tls.c_getThreadLocalData_FUN_0060caf8
// Address: 0060caf8
// Address Range: [[0060caf8, 0060cbcc]]
// Convention: __watcallRegister
// Signature: void * crt_tls.c_getThreadLocalData_FUN_0060caf8(void)
// Cross-references:
//   crt_tls.c_get_thread_local_data_FUN_0060a1fc (0060a1fc) at 0060a228 [UNCONDITIONAL_CALL]
// Globals:
//   GetCurrentThreadId* PTR_GetCurrentThreadId_00611584 = 00211e84
//   TlsSetValue* PTR_TlsSetValue_00611658 = 0021226c
//   TerminatedCString s_Unable_to_resize_thread__00659648
//   TerminatedCString s_Unable_to_resize_thread__00659670
//   DWORD g_TLSIndex = 0xffffffff
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
//   DWORD g_RuntimeBufferSize = 0xf4
//   ThreadRegistryEntry* g_ThreadDataRegistryList
// Function calls:
//   crt_memory.c_calloc_FUN_0060ca90
//   crt_memory.c_realloc_FUN_00601df0
//   crt_startup.c_HandleRuntimeError_FUN_00606660
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   TlsSetValue

#include "nocturne.h"

void * crt_tls_c_getThreadLocalData_FUN_0060caf8(void)

{
  ThreadRegistryEntry *pTVar1;
  DWORD dwTlsIndex;
  DWORD currentThreadId;
  void *lpTlsValue;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10)();
  currentThreadId = (*PTR_GetCurrentThreadId_00611584)();
  for (pTVar1 = g_ThreadDataRegistryList;
      (pTVar1 != (ThreadRegistryEntry *)0x0 && ((void *)currentThreadId != pTVar1->threadDataKey));
      pTVar1 = pTVar1->next) {
  }
  if (pTVar1->shouldFreeData == 0) {
    lpTlsValue = crt_memory_c_calloc_FUN_0060ca90(1,g_RuntimeBufferSize);
    if ((undefined4 *)lpTlsValue == (undefined4 *)0x0) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Unable to resize thread-specific data\r\n",1);
    }
    uVar3 = *(uint *)((int)pTVar1->dataBuffer + 0xf0);
    puVar4 = (undefined4 *)pTVar1->dataBuffer;
    puVar5 = (undefined4 *)lpTlsValue;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    pTVar1->shouldFreeData = 1;
  }
  else {
    lpTlsValue = crt_memory_c_realloc_FUN_00601df0(pTVar1->dataBuffer,g_RuntimeBufferSize);
    if (lpTlsValue == (void *)0x0) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Unable to resize thread-specific data\r\n",1);
    }
  }
  pTVar1->dataBuffer = lpTlsValue;
  *(DWORD *)((int)lpTlsValue + 0xf0) = g_RuntimeBufferSize;
  dwTlsIndex = g_TLSIndex;
  *(undefined1 *)((int)lpTlsValue + 0x52) = 1;
  *(undefined1 *)((int)lpTlsValue + 0x53) = 0;
  (*PTR_TlsSetValue_00611658)(dwTlsIndex,lpTlsValue);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14)();
  return (undefined4 *)lpTlsValue;
}


// Assembly code:
// 0060caf8: PUSH EBX
//   Label: crt_tls.c_getThreadLocalData_FUN_0060caf8
// 0060caf9: PUSH ESI
// 0060cafa: PUSH EDI
// 0060cafb: PUSH EBP
// 0060cafc: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f10 (READ)
// 0060cb02: CALL dword ptr CS:[0x611584]
//   XREF to: register:00000000 (WRITE)
//   XREF to: 00611584 (READ)
// 0060cb09: MOV EBX,dword ptr [0x03f9c160]
//   XREF to: 03f9c160 (READ)
// 0060cb0f: TEST EBX,EBX
// 0060cb11: JZ 0x0060cb1e
//   XREF to: 0060cb1e (CONDITIONAL_JUMP)
// 0060cb13: CMP EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060cb13
// 0060cb16: JZ 0x0060cb1e
//   XREF to: 0060cb1e (CONDITIONAL_JUMP)
// 0060cb18: MOV EBX,dword ptr [EBX]
// 0060cb1a: TEST EBX,EBX
// 0060cb1c: JNZ 0x0060cb13
//   XREF to: 0060cb13 (CONDITIONAL_JUMP)
// 0060cb1e: CMP dword ptr [EBX + 0xc],0x0
//   Label: LAB_0060cb1e
// 0060cb22: JZ 0x0060cb4e
//   XREF to: 0060cb4e (CONDITIONAL_JUMP)
// 0060cb24: MOV EDI,dword ptr [0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060cb2a: PUSH EDI
// 0060cb2b: MOV EBP,dword ptr [EBX + 0x8]
// 0060cb2e: PUSH EBP
// 0060cb2f: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: register:00000000 (WRITE)
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 0060cb34: ADD ESP,0x8
// 0060cb37: MOV EBP,EAX
// 0060cb39: TEST EAX,EAX
// 0060cb3b: JNZ 0x0060cb9c
//   XREF to: 0060cb9c (CONDITIONAL_JUMP)
// 0060cb3d: PUSH 0x1
// 0060cb3f: PUSH 0x659648
//   XREF to: 00659648 (DATA)
// 0060cb44: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 0060cb49: ADD ESP,0x8
// 0060cb4c: JMP 0x0060cb9c
//   XREF to: 0060cb9c (UNCONDITIONAL_JUMP)
// 0060cb4e: MOV ESI,dword ptr [0x006854f8]
//   Label: LAB_0060cb4e
//   XREF to: 006854f8 (READ)
// 0060cb54: PUSH ESI
// 0060cb55: PUSH 0x1
// 0060cb57: CALL crt_memory.c_calloc_FUN_0060ca90
//   XREF to: 0060ca90 (UNCONDITIONAL_CALL)
// 0060cb5c: ADD ESP,0x8
// 0060cb5f: MOV EBP,EAX
// 0060cb61: TEST EAX,EAX
// 0060cb63: JNZ 0x0060cb74
//   XREF to: 0060cb74 (CONDITIONAL_JUMP)
// 0060cb65: PUSH 0x1
// 0060cb67: PUSH 0x659670
//   XREF to: 00659670 (DATA)
// 0060cb6c: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 0060cb71: ADD ESP,0x8
// 0060cb74: MOV ESI,dword ptr [EBX + 0x8]
//   Label: LAB_0060cb74
// 0060cb77: MOV EDI,EBP
// 0060cb79: MOV ECX,dword ptr [ESI + 0xf0]
// 0060cb7f: PUSH ES
// 0060cb80: MOV AX,DS
// 0060cb82: MOV ES,AX
// 0060cb84: PUSH EDI
// 0060cb85: MOV EAX,ECX
// 0060cb87: SHR ECX,0x2
// 0060cb8a: MOVSD.REP ES:EDI,ESI
// 0060cb8c: MOV CL,AL
// 0060cb8e: AND CL,0x3
// 0060cb91: MOVSB.REP ES:EDI,ESI
// 0060cb93: POP EDI
// 0060cb94: POP ES
// 0060cb95: MOV dword ptr [EBX + 0xc],0x1
// 0060cb9c: MOV dword ptr [EBX + 0x8],EBP
//   Label: LAB_0060cb9c
// 0060cb9f: MOV EAX,[0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060cba4: PUSH EBP
// 0060cba5: MOV dword ptr [EBP + 0xf0],EAX
// 0060cbab: MOV EAX,[0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060cbb0: MOV byte ptr [EBP + 0x52],0x1
// 0060cbb4: PUSH EAX
// 0060cbb5: MOV byte ptr [EBP + 0x53],0x0
// 0060cbb9: CALL dword ptr CS:[0x611658]
//   XREF to: EXTERNAL:000000a1 (COMPUTED_CALL)
//   XREF to: 00611658 (READ)
// 0060cbc0: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f14 (READ)
// 0060cbc6: MOV EAX,EBP
// 0060cbc8: POP EBP
// 0060cbc9: POP EDI
// 0060cbca: POP ESI
// 0060cbcb: POP EBX
// 0060cbcc: RET
