// Name: crt_memory.c___vec_delete_FUN_005fe632
// Address: 005fe632
// Address Range: [[005fe632, 005fe658]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_delete_FUN_005fe632(void *object_ptr,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_delete(void *object_ptr,WatcomTypeInfo *type_info)

{
  if (object_ptr == (void *)0x0) {
    return (void *)0x0;
  }
  __arrfini(object_ptr,*(int *)((int)object_ptr + -4),type_info);
  return (int *)((int)object_ptr + -4);
}
