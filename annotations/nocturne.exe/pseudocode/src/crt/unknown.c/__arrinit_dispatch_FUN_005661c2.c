// Name: crt_unknown.c___arrinit_dispatch_FUN_005661c2
// Address: 005661c2
// Address Range: [[005661c2, 005661f3]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c___arrinit_dispatch_FUN_005661c2(void *array_ptr,int element_count,WatcomTypeInfo *type_info)

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
