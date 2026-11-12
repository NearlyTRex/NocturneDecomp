// Name: crt_memory.c___arrfini_FUN_005c1066
// Address: 005c1066
// Address Range: [[005c1066, 005c1092]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrfini_FUN_005c1066(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  int local_c;
  WatcomTypeInfo *local_8;
  void *local_4;
  
  local_c = obj_count;
  local_8 = type_info;
  local_4 = obj_array;
  FUN_005c102c(&local_c);
  return obj_array;
}
