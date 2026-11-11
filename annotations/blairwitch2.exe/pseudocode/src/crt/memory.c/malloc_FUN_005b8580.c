// Name: crt_memory.c_malloc_FUN_005b8580
// Address: 005b8580
// Address Range: [[005b8580, 005b858d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_malloc_FUN_005b8580(ulong size)

#include "nocturne.h"

void * __cdecl malloc(ulong size)

{
  void *pvVar1;
  
  pvVar1 = InternalHeapAlloc(size);
  return pvVar1;
}
