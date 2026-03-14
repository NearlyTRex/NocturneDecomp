// Name: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
// Address: 0060a23c
// Address Range: [[0060a23c, 0060a278]]
// Convention: __cdecl
// Signature: void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)

#include "nocturne.h"

void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)

{
  DWORD DVar1;
  
  if (pThreadData == (void *)0x0) {
    pThreadData = calloc(1,g_RuntimeBufferSize);
    DVar1 = g_RuntimeBufferSize;
    if (pThreadData != (ThreadData *)0x0) {
      ((ThreadData *)pThreadData)->padding_0x52[0] = '\x01';
      *(DWORD *)(((ThreadData *)pThreadData)->unknown_E2 + 0xe) = DVar1;
    }
  }
  InitializeThreadContext(pThreadData);
  return pThreadData;
}
