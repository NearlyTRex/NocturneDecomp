// Name: crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
// Address: 00601ce0
// Address Range: [[00601ce0, 00601de5]]
// Convention: __cdecl
// Signature: void __cdecl crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(void *ptr)

#include "nocturne.h"

void __cdecl ValidateHeapIntegrity(void *ptr)

{
  Heap *pHVar1;
  Heap *pHVar2;
  ushort in_DS;
  
  if (ptr != (void *)0x0) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
    if (((DAT_03f9b210 == (Heap *)0x0) ||
        ((((ptr < DAT_03f9b210 ||
           (pHVar2 = DAT_03f9b210,
           (void *)((int)&DAT_03f9b210->heap_size + DAT_03f9b210->heap_size) <= ptr)) &&
          ((pHVar2 = DAT_03f9b210->heap_base, pHVar2 == (Heap *)0x0 ||
           ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))) &&
         ((pHVar2 = DAT_03f9b210->next_heap_block, pHVar2 == (Heap *)0x0 ||
          ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))))) &&
       ((pHVar1 = g_MainHeap, g_SecondaryHeap == (Heap *)0x0 ||
        ((((ptr < g_SecondaryHeap ||
           (pHVar2 = g_SecondaryHeap,
           (void *)((int)&g_SecondaryHeap->heap_size + g_SecondaryHeap->heap_size) <= ptr)) &&
          ((pHVar2 = g_SecondaryHeap->heap_base, pHVar2 == (Heap *)0x0 ||
           ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))) &&
         ((pHVar2 = g_SecondaryHeap->next_heap_block, pHVar2 == (Heap *)0x0 ||
          ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr))))))))))
    {
      while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
        if ((pHVar2 <= ptr) && (ptr < (void *)((int)&pHVar2->heap_size + pHVar2->heap_size)))
        goto LAB_00601d9c;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_00601d9c:
      CoalesceAndAddFreeBlock(ptr,(HeapBlock *)(uint)in_DS,(ushort)pHVar2);
      if ((pHVar2 < g_SecondaryHeap) && (DAT_00684edc < pHVar2[1].next_heap_block)) {
        DAT_00684edc = pHVar2[1].next_heap_block;
      }
      DAT_03f9b850 = 0;
      DAT_03f9b210 = pHVar2;
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  }
  return;
}
