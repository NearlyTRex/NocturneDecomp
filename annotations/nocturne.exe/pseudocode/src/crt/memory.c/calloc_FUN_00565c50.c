// Name: crt_memory.c_calloc_FUN_00565c50
// Address: 00565c50
// Address Range: [[00565c50, 00565c74]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_calloc_FUN_00565c50(SIZE_T count,SIZE_T size)

#include "nocturne.h"

void * __cdecl calloc(SIZE_T count,SIZE_T size)

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
