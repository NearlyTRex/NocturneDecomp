// Name: crt_memory.c___arrcopy_FUN_00600bc2
// Address: 00600bc2
// Address Range: [[00600bc2, 00600c16]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arrcopy_FUN_00600bc2(void *dest,void *source,int count,WatcomTypeInfo *type_info)

#include "nocturne.h"

void * __cdecl
__arrcopy(void *dest,void *source,int count,WatcomTypeInfo *type_info)

{
  WATCOM_COPY_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  
  pWVar1 = type_info->copy;
  iVar2 = type_info->instance_size;
  param0 = dest;
  for (; count != 0; count = count + -1) {
    (*pWVar1)(param0,source);
    source = (void *)((int)source + iVar2);
    param0 = (void *)((int)param0 + iVar2);
  }
  return dest;
}
