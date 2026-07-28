// Name: crt_memory.c_realloc_FUN_00564a70
// Address: 00564a70
// Address Range: [[00564a70, 00564a84]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_realloc_FUN_00564a70(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = realloc_(ptr,new_size);
  return pvVar1;
}
