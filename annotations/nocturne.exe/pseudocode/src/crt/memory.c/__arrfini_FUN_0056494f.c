// Name: crt_memory.c___arrfini_FUN_0056494f
// Address: 0056494f
// Address Range: [[0056494f, 0056497b]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrfini_FUN_0056494f(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  WatcomTypeArrayInfo local_c;
  
  local_c.obj_count = obj_count;
  local_c.type_info = type_info;
  local_c.obj_array = obj_array;
  __arrdtor(&local_c);
  return obj_array;
}
