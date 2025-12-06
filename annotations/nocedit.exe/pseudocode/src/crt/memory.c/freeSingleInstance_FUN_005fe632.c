// Name: crt_memory.c_freeSingleInstance_FUN_005fe632
// Address: 005fe632
// Address Range: [[005fe632, 005fe658]]
// Convention: __cdecl
// Signature: void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)

#include "nocturne.h"

void * __cdecl
crt_memory_c_freeSingleInstance_FUN_005fe632(void *object_ptr,WatcomTypeInfo *type_info)

{
  if (object_ptr == (void *)0x0) {
    return (void *)0x0;
  }
  crt_memory_c_freeTypeArray_FUN_005feee9
            ((void **)object_ptr,*(int *)((int)object_ptr + -4),type_info);
  return (int *)((int)object_ptr + -4);
}
