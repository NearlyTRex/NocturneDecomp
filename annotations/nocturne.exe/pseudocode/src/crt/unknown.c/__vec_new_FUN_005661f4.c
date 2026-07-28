// Name: crt_unknown.c___vec_new_FUN_005661f4
// Address: 005661f4
// Address Range: [[005661f4, 00566219]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c___vec_new_FUN_005661f4(void *dest,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl __vec_new(void *dest,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  if (dest == (void *)0x0) {
    return (void *)0x0;
  }
  *(int *)dest = element_count;
  pvVar1 = __arrinit_dispatch
                     ((void *)((int)dest + 4),element_count,type_info);
  return pvVar1;
}
