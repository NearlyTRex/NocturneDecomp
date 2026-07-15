// Name: crt_heap.c_malloc_FUN_10008830
// Address: 10008830
// Address Range: [[10008830, 10008843]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_malloc_FUN_10008830(size_t size)

#include "nocturne.h"

void * __cdecl malloc(size_t size)

{
  void *pvVar1;
  
  pvVar1 = _nh_malloc(size,DAT_10017780);
  return pvVar1;
}
