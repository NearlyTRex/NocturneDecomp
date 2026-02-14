// Name: crt_memory.c___arr_op_FUN_006020c2
// Address: 006020c2
// Address Range: [[006020c2, 006020fa]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c___arr_op_FUN_006020c2(void *dest,void *source,int count,int element_size,void *copy_func)

#include "nocturne.h"

void * __cdecl __arr_op(void *dest,void *source,int count,int element_size,void *copy_func)

{
  void *pvVar1;
  
  pvVar1 = dest;
  for (; count != 0; count = count + -1) {
    (*copy_func)(pvVar1,source);
    source = (void *)((int)source + element_size);
    pvVar1 = (void *)((int)pvVar1 + element_size);
  }
  return dest;
}
