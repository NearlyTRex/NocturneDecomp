// Name: crt_memory.c_malloc_FUN_00601bb0
// Address: 00601bb0
// Address Range: [[00601bb0, 00601bbd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_malloc_FUN_00601bb0(ulong size)

#include "nocturne.h"

void * __cdecl crt_memory_c_malloc_FUN_00601bb0(ulong size)

{
  void *pvVar1;
  
  pvVar1 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(size);
  return pvVar1;
}
