// Name: crt_memory.c___vec_new_FUN_005ba29a
// Address: 005ba29a
// Address Range: [[005ba29a, 005ba2b3]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_new_FUN_005ba29a(void *array_memory,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005ba242(array_memory,element_count,type_info);
  return pvVar1;
}
