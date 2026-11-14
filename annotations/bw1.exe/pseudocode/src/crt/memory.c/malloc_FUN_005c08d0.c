// Name: crt_memory.c_malloc_FUN_005c08d0
// Address: 005c08d0
// Address Range: [[005c08d0, 005c08dd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_malloc_FUN_005c08d0(ulong size)

#include "nocturne.h"

void * __cdecl malloc(ulong size)

{
  void *pvVar1;
  
  pvVar1 = InternalHeapAlloc(size);
  return pvVar1;
}
