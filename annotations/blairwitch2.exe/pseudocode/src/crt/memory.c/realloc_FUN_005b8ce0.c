// Name: crt_memory.c_realloc_FUN_005b8ce0
// Address: 005b8ce0
// Address Range: [[005b8ce0, 005b8cf4]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_realloc_FUN_005b8ce0(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005b8cf8(ptr,new_size);
  return pvVar1;
}
