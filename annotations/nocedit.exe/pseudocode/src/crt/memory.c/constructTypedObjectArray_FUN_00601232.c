// Name: crt_memory.c_constructTypedObjectArray_FUN_00601232
// Address: 00601232
// Address Range: [[00601232, 00601257]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_constructTypedObjectArray_FUN_00601232 (void *dest,int element_count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructTypedObjectArray_FUN_00601232
          (void *dest,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  if (dest == (void *)0x0) {
    return (void *)0x0;
  }
  *(int *)dest = element_count;
  pvVar1 = crt_memory_c_dispatchObjectArrayConstructor_FUN_00601200
                     ((void *)((int)dest + 4),element_count,type_info);
  return pvVar1;
}
