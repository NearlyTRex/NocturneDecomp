// Name: crt_memory.c_realloc_FUN_00601df0
// Address: 00601df0
// Address Range: [[00601df0, 00601e04]]
// Convention: __cdecl
// Signature: void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)

#include "nocturne.h"

void * __cdecl crt_memory_c_realloc_FUN_00601df0(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_realloc_implementation_FUN_00601e08(ptr,new_size);
  return pvVar1;
}
