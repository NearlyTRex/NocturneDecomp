// Name: crt_heap.c_SystemAllocWrapper_FUN_00609718
// Address: 00609718
// Address Range: [[00609718, 0060972a]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00609718(ulong size)

#include "nocturne.h"

void * __cdecl SystemAllocWrapper(ulong size)

{
  void *pvVar1;
  
  CompactHeapBlocks();
  pvVar1 = (void *)AllocateNewHeapBlock(size);
  return pvVar1;
}
