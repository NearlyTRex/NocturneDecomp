// Name: crt_memory.c___arrinit__FUN_00608dc8
// Address: 00608dc8
// Address Range: [[00608dc8, 00608e11]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrinit__FUN_00608dc8(void *array_start,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl
__arrinit_(void *array_start,int element_count,WatcomTypeInfo *type_info)

{
  WATCOM_DEFAULT_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  uint local_1c;
  
  pWVar1 = type_info->ctor;
  local_1c = 0;
  iVar2 = type_info->instance_size;
  param0 = array_start;
  for (; local_1c < (uint)element_count; local_1c = local_1c + 1) {
    (*pWVar1)(param0);
    param0 = (void *)((int)param0 + iVar2);
  }
  return array_start;
}
