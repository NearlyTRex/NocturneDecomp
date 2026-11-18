// Name: crt_memory.c_calloc_FUN_005a4b20
// Address: 005a4b20
// Address Range: [[005a4b20, 005a4b44]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_calloc_FUN_005a4b20(uint count,uint size)

#include "nocturne.h"

void * __cdecl calloc(uint count,uint size)

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
