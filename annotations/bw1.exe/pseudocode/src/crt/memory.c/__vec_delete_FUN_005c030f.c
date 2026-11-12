// Name: crt_memory.c___vec_delete_FUN_005c030f
// Address: 005c030f
// Address Range: [[005c030f, 005c0335]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___vec_delete_FUN_005c030f(void *object_ptr,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_delete(void *object_ptr,WatcomTypeInfo *type_info)

{
  if (object_ptr == (void *)0x0) {
    return (void *)0x0;
  }
  __arrfini(object_ptr,*(int *)((int)object_ptr + -4),type_info);
  return (int *)((int)object_ptr + -4);
}
