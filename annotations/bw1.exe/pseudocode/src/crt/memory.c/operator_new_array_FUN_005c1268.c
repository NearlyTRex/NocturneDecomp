// Name: crt_memory.c_operator_new_array_FUN_005c1268
// Address: 005c1268
// Address Range: [[005c1268, 005c1275]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_operator_new_array_FUN_005c1268(uint size)

#include "nocturne.h"

void * __cdecl operator_new_array(uint size)

{
  void *pvVar1;
  
  pvVar1 = operator_new(size);
  return pvVar1;
}
