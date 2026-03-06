// Name: crt_memory.c___arrinit_FUN_005fe667
// Address: 005fe667
// Address Range: [[005fe667, 005fe6ae]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrinit_FUN_005fe667(void *array_start,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrinit(void *array_start,int element_count,WatcomTypeInfo *type_info)

{
  WATCOM_DEFAULT_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  uint uVar3;
  void *original_array_ptr;
  
  pWVar1 = type_info->ctor;
  iVar2 = type_info->instance_size;
  param0 = array_start;
  for (uVar3 = 0; uVar3 < (uint)element_count; uVar3 = uVar3 + 1) {
    (*pWVar1)(param0);
    param0 = (void *)((int)param0 + iVar2);
  }
  return array_start;
}
