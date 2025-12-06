// Name: crt_tls.c_getThreadLocalData_FUN_0060caf8
// Address: 0060caf8
// Address Range: [[0060caf8, 0060cbcc]]
// Convention: __watcallRegister
// Signature: void * crt_tls.c_getThreadLocalData_FUN_0060caf8(void)

#include "nocturne.h"

void * crt_tls_c_getThreadLocalData_FUN_0060caf8(void)

{
  ThreadRegistryEntry *pTVar1;
  DWORD dwTlsIndex;
  DWORD currentThreadId;
  void *lpTlsValue;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
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
    if ((uint *)lpTlsValue == (uint *)0x0) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Unable to resize thread-specific data\r\n",1);
    }
    uVar3 = *(uint *)((int)pTVar1->dataBuffer + 0xf0);
    puVar4 = (uint *)pTVar1->dataBuffer;
    puVar5 = (uint *)lpTlsValue;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
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
  *(byte *)((int)lpTlsValue + 0x52) = 1;
  *(byte *)((int)lpTlsValue + 0x53) = 0;
  (*PTR_TlsSetValue_00611658)(dwTlsIndex,lpTlsValue);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14)();
  return (uint *)lpTlsValue;
}
