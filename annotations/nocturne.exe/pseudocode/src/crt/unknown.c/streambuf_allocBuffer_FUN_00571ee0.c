// Name: crt_unknown.c_streambuf_allocBuffer_FUN_00571ee0
// Address: 00571ee0
// Address Range: [[00571ee0, 00571eed]]
// Convention: __watcallStack
// Signature: void * __watcallStack crt_unknown_c_streambuf_allocBuffer_FUN_00571ee0(uint size)

#include "nocturne.h"

void * __watcallStack streambuf_allocBuffer(uint size)

{
  void *pvVar1;
  
  pvVar1 = malloc(size);
  return pvVar1;
}
