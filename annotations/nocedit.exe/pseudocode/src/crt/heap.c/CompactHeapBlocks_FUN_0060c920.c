// Name: crt_heap.c_CompactHeapBlocks_FUN_0060c920
// Address: 0060c920
// Address Range: [[0060c920, 0060c95b]]
// Convention: __cdecl
// Signature: void crt_heap.c_CompactHeapBlocks_FUN_0060c920(void)

#include "nocturne.h"

void __cdecl crt_heap_c_CompactHeapBlocks_FUN_0060c920(void)

{
  HeapBlock *pHVar1;
  HeapBlock *block;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  pHVar1 = (HeapBlock *)g_MainHeap;
  while (block = pHVar1, block != (HeapBlock *)0x0) {
    pHVar1 = block->next;
    if (block->size - 0x2c == **(int **)(block->free_list_area + 4)) {
      crt_heap_c_UnlinkAndFreeBlock_FUN_0060c9bc(block);
    }
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return;
}
