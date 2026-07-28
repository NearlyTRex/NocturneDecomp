// Name: crt_heap.c_SystemAllocWrapper_FUN_00568e08
// Address: 00568e08
// Address Range: [[00568e08, 00568e1a]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00568e08(ulong size)

#include "nocturne.h"

void * __cdecl SystemAllocWrapper(ulong size)

{
  void *pvVar1;
  
  FUN_0056f2d0();
  pvVar1 = (void *)AllocateNewHeapBlock(size);
  return pvVar1;
}
