// Name: crt_memory.c_malloc_FUN_006021da
// Address: 006021da
// Address Range: [[006021da, 006021e7]]
// Convention: __watcallStack
// Signature: void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)

#include "nocturne.h"

void * __watcallStack crt_memory_c_malloc_FUN_006021da(SIZE_T size)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(size);
  return pvVar1;
}
