// Name: crt_memory.c___arrfini_FUN_005a3de6
// Address: 005a3de6
// Address Range: [[005a3de6, 005a3e12]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrfini_FUN_005a3de6(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  int local_c;
  WatcomTypeInfo *local_8;
  void *local_4;
  
  local_c = obj_count;
  local_8 = type_info;
  local_4 = obj_array;
  FUN_005a3dac(&local_c);
  return obj_array;
}
