// Name: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
// Address: 0060ccf0
// Address Range: [[0060ccf0, 0060cd19]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c_InitializeThreadContext_FUN_0060ccf0(ThreadData *pThreadData)

#include "nocturne.h"

void __cdecl InitializeThreadContext(ThreadData *pThreadData)

{
  void *pvVar1;
  
  if (pThreadData != (ThreadData *)0x0) {
    pThreadData->random_seed = 1;
    __GetStackLimits(pThreadData,(uint *)0x0);
    pvVar1 = (void *)(*g_GetCurrentThreadIdFunc)();
    pThreadData->cleanup_data = pvVar1;
  }
  return;
}
