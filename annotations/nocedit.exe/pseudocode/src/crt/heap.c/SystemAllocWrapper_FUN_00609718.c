// Name: crt_heap.c_SystemAllocWrapper_FUN_00609718
// Address: 00609718
// Address Range: [[00609718, 0060972a]]
// Convention: __cdecl
// Signature: void * crt_heap.c_SystemAllocWrapper_FUN_00609718(ulong size)

#include "nocturne.h"

void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00609718(ulong size)

{
  void *pvVar1;
  uint in_stack_00000008;
  
  crt_heap_c_CompactHeapBlocks_FUN_0060c920();
  pvVar1 = (void *)crt_heap_c_AllocateNewHeapBlock_FUN_00609668(in_stack_00000008);
  return pvVar1;
}
