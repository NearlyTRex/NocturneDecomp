// Name: crt_memory.c___arrinit_dispatch_FUN_00601200
// Address: 00601200
// Address Range: [[00601200, 00601231]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrinit_dispatch_FUN_00601200(void *array_ptr,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __arrinit_dispatch(void *array_ptr,int element_count,WatcomTypeInfo *type_info)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (array_ptr != (void *)0x0) {
    if ((char)type_info->type_flags == '\x04') {
      pcVar1 = (code *)__arrinit_;
    }
    else {
      pcVar1 = (code *)__arrinit;
    }
    pvVar2 = (void *)(*pcVar1)(array_ptr,element_count,type_info);
  }
  return pvVar2;
}
