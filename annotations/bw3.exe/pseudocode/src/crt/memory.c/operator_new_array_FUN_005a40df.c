// Name: crt_memory.c_operator_new_array_FUN_005a40df
// Address: 005a40df
// Address Range: [[005a40df, 005a40ec]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_operator_new_array_FUN_005a40df(uint size)

#include "nocturne.h"

void * __cdecl operator_new_array(uint size)

{
  void *pvVar1;
  
  pvVar1 = operator_new(size);
  return pvVar1;
}
