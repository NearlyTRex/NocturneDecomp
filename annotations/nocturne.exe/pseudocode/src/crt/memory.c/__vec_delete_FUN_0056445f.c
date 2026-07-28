// Name: crt_memory.c___vec_delete_FUN_0056445f
// Address: 0056445f
// Address Range: [[0056445f, 00564485]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_delete_FUN_0056445f(void *object_ptr,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_delete(void *object_ptr,WatcomTypeInfo *type_info)

{
  if (object_ptr == (void *)0x0) {
    return (void *)0x0;
  }
  __arrfini(object_ptr,*(int *)((int)object_ptr + -4),type_info);
  return (int *)((int)object_ptr + -4);
}
