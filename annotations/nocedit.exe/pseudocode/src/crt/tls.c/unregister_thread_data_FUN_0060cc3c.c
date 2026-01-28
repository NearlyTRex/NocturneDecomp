// Name: crt_tls.c_unregister_thread_data_FUN_0060cc3c
// Address: 0060cc3c
// Address Range: [[0060cc3c, 0060cc8f]]
// Convention: __cdecl
// Signature: void __cdecl crt_tls_c_unregister_thread_data_FUN_0060cc3c(void *threadDataKey)

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
