// Name: crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
// Address: 005fe667
// Address Range: [[005fe667, 005fe6ae]]
// Convention: __cdecl
// Signature: void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
          (void *array_start,int element_count,WatcomTypeInfo *type_info)

{
  WATCOM_DEFAULT_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  int loop_counter;
  WatcomTypeInfo *temp_type_info;
  void *original_array_ptr;
  
  pWVar1 = type_info->ctor;
  loop_counter = 0;
  iVar2 = type_info->instance_size;
  param0 = array_start;
  for (; (uint)loop_counter < (uint)element_count; loop_counter = loop_counter + 1) {
    (*pWVar1)(param0);
    param0 = (void *)((int)param0 + iVar2);
  }
  return array_start;
}
