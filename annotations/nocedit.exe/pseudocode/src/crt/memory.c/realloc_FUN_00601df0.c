// Name: crt_memory.c_realloc_FUN_00601df0
// Address: 00601df0
// Address Range: [[00601df0, 00601e04]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_realloc_FUN_00601df0(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = realloc_(ptr,new_size);
  return pvVar1;
}
