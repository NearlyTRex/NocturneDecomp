// Name: shape_memdbg.cpp_malloc_FUN_00564c18
// Address: 00564c18
// Address Range: [[00564c18, 00564c25]]
// Convention: __cdecl
// Signature: void * __cdecl shape_memdbg_cpp_malloc_FUN_00564c18(SIZE_T size)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_malloc_FUN_00564c18(SIZE_T size)

{
  void *pvVar1;
  
  pvVar1 = operator_new(size);
  return pvVar1;
}
