// Name: crt_memory.c_realloc_FUN_005a3e50
// Address: 005a3e50
// Address Range: [[005a3e50, 005a3e64]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_realloc_FUN_005a3e50(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005a3e68(ptr,new_size);
  return pvVar1;
}
