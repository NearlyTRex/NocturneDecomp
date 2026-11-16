// Name: crt_memory.c___vec_new_FUN_005c267a
// Address: 005c267a
// Address Range: [[005c267a, 005c2693]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_new_FUN_005c267a(void *array_memory,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005c2622(array_memory,element_count,type_info);
  return pvVar1;
}
