// Name: crt_memory.c_realloc_FUN_005c10d0
// Address: 005c10d0
// Address Range: [[005c10d0, 005c10e4]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_realloc_FUN_005c10d0(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005c10e8(ptr,new_size);
  return pvVar1;
}
