// Name: crt_tls.c_register_thread_data_FUN_0060cbd0
// Address: 0060cbd0
// Address Range: [[0060cbd0, 0060cc3b]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_register_thread_data_FUN_0060cbd0(void * tls_data, void * thread_param)

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
