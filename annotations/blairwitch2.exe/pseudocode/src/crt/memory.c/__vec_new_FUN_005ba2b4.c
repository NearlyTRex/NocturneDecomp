// Name: crt_memory.c___vec_new_FUN_005ba2b4
// Address: 005ba2b4
// Address Range: [[005ba2b4, 005ba2cd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_new_FUN_005ba2b4(void *array_memory,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005ba274(array_memory,element_count,type_info);
  return pvVar1;
}
