// Name: crt_memory.c___vec_new_FUN_00601272
// Address: 00601272
// Address Range: [[00601272, 0060128b]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_new_FUN_00601272(void *array_memory,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl
__vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = __vec_new_(array_memory,element_count,type_info);
  return pvVar1;
}
