// Name: crt_memory.c___vec_new_FUN_005a5584
// Address: 005a5584
// Address Range: [[005a5584, 005a559d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_new_FUN_005a5584(void *array_memory,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005a5544(array_memory,element_count,type_info);
  return pvVar1;
}
