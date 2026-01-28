// Name: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
// Address: 0060a23c
// Address Range: [[0060a23c, 0060a278]]
// Convention: __cdecl
// Signature: void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)

#include "nocturne.h"

void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)

{
  DWORD DVar1;
  ThreadData *in_stack_00000004;
  
  if (in_stack_00000004 == (ThreadData *)0x0) {
    in_stack_00000004 = crt_memory_c_calloc_FUN_0060ca90(1,g_RuntimeBufferSize);
    DVar1 = g_RuntimeBufferSize;
    if (in_stack_00000004 != (ThreadData *)0x0) {
      in_stack_00000004->padding_0x52[0] = '\x01';
      *(DWORD *)(in_stack_00000004->unknown_E2 + 0xe) = DVar1;
    }
  }
  crt_thread_c_InitializeThreadContext_FUN_0060ccf0(in_stack_00000004);
  return in_stack_00000004;
}
