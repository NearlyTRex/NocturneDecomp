// Name: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
// Address: 0060ccf0
// Address Range: [[0060ccf0, 0060cd19]]
// Convention: __cdecl
// Signature: void crt_thread.c_InitializeThreadContext_FUN_0060ccf0(ThreadData * pThreadData)

#include "nocturne.h"

void __cdecl crt_thread_c_InitializeThreadContext_FUN_0060ccf0(ThreadData *pThreadData)

{
  void *pvVar1;
  
  if (pThreadData != (ThreadData *)0x0) {
    pThreadData->random_seed = 1;
    crt_memory_c_GetMemoryBounds_FUN_0060a6a0(pThreadData,(uint *)0x0);
    pvVar1 = (void *)(*PTR_GetCurrentThreadId_00611584)();
    pThreadData->cleanup_data = pvVar1;
  }
  return;
}
