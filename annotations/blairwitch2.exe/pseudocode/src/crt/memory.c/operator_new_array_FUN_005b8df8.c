// Name: crt_memory.c_operator_new_array_FUN_005b8df8
// Address: 005b8df8
// Address Range: [[005b8df8, 005b8e05]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_operator_new_array_FUN_005b8df8(uint size)

#include "nocturne.h"

void * __cdecl operator_new_array(uint size)

{
  void *pvVar1;
  
  pvVar1 = operator_new(size);
  return pvVar1;
}
