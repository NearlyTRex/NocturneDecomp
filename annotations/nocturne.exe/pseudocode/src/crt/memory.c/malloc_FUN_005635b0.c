// Name: crt_memory.c_malloc_FUN_005635b0
// Address: 005635b0
// Address Range: [[005635b0, 005635bd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_malloc_FUN_005635b0(ulong size)

#include "nocturne.h"

void * __cdecl malloc(ulong size)

{
  void *pvVar1;
  
  pvVar1 = InternalHeapAlloc(size);
  return pvVar1;
}
