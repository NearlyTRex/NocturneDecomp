// Name: crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0
// Address: 005638e0
// Address Range: [[005638e0, 005639e5]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_ValidateHeapIntegrity_FUN_005638e0(void *ptr)

#include "nocturne.h"

void __cdecl ValidateHeapIntegrity(void *ptr)

{
  Heap *pHVar1;
  Heap *pHVar2;
  ushort in_DS;
  
  if (ptr != (void *)0x0) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
    if (((g_INT_02de4e10 == 0) ||
        ((((ptr < (uint)g_INT_02de4e10 ||
           (pHVar2 = (Heap *)g_INT_02de4e10,
           (void *)(*(int *)g_INT_02de4e10 + g_INT_02de4e10) <= ptr)) &&
          ((pHVar2 = *(Heap **)(g_INT_02de4e10 + 4), pHVar2 == (Heap *)0x0 ||
           ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))) &&
         ((pHVar2 = *(Heap **)(g_INT_02de4e10 + 8), pHVar2 == (Heap *)0x0 ||
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
        goto LAB_0056399c;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_0056399c:
      CoalesceAndAddFreeBlock(ptr,(HeapBlock *)(uint)in_DS,(ushort)pHVar2);
      if ((pHVar2 < g_SecondaryHeap) && ((uint)g_INT_005c1688 < pHVar2[1].next_heap_block)) {
        g_INT_005c1688 = (int)pHVar2[1].next_heap_block;
      }
      g_CHAR_ARRAY_02de5460[0] = '\0';
      g_INT_02de4e10 = (int)pHVar2;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  }
  return;
}
