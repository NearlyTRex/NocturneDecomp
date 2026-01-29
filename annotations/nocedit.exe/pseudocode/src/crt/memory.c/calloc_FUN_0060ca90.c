// Name: crt_memory.c_calloc_FUN_0060ca90
// Address: 0060ca90
// Address Range: [[0060ca90, 0060cab4]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_calloc_FUN_0060ca90(ulong count,ulong size)

#include "nocturne.h"

void * __cdecl calloc(ulong count,ulong size)

{
  void *dest;
  void *pvVar1;
  
  dest = malloc(count * size);
  pvVar1 = (void *)0x0;
  if (dest != (void *)0x0) {
    pvVar1 = memset(dest,0,count * size);
  }
  return pvVar1;
}
