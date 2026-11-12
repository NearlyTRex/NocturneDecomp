// Name: crt_memory.c___arrfini_FUN_005b854f
// Address: 005b854f
// Address Range: [[005b854f, 005b857b]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrfini_FUN_005b854f(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  int local_c;
  WatcomTypeInfo *local_8;
  void *local_4;
  
  local_c = obj_count;
  local_8 = type_info;
  local_4 = obj_array;
  FUN_005b8515(&local_c);
  return obj_array;
}
