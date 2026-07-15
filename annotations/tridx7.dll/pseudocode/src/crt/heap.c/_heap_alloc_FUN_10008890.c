// Name: crt_heap.c__heap_alloc_FUN_10008890
// Address: 10008890
// Address Range: [[10008890, 100088a4]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c__heap_alloc_FUN_10008890(size_t size)

#include "nocturne.h"

void * __cdecl _heap_alloc(size_t size)

{
  LPVOID pvVar1;
  
  pvVar1 = HeapAlloc(DAT_10241974,0,size);
  return pvVar1;
}
