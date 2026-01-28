// Name: crt_memory.c_freeTypeArray_FUN_005feee9
// Address: 005feee9
// Address Range: [[005feee9, 005fef15]]
// Convention: __cdecl
// Signature: int __cdecl crt_memory_c_freeTypeArray_FUN_005feee9(void **obj_array,int obj_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

int __cdecl
crt_memory_c_freeTypeArray_FUN_005feee9(void **obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  WatcomTypeArrayInfo local_destroy_info;
  
  local_destroy_info.obj_count = obj_count;
  local_destroy_info.type_info = type_info;
  local_destroy_info.obj_array = obj_array;
  crt_memory_c_destroyTypeArray_FUN_005feeaf(&local_destroy_info);
  return (int)obj_array;
}
