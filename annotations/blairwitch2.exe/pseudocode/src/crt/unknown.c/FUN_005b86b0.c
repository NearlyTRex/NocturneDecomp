// Name: crt_unknown.c_FUN_005b86b0
// Address: 005b86b0
// Address Range: [[005b86b0, 005b87b5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b86b0(Heap *param_1)

#include "nocturne.h"

void FUN_005b86b0(Heap *param_1)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  if (param_1 != (Heap *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
    if (((g_INT_02680150 == 0) ||
        ((((param_1 < (uint)g_INT_02680150 ||
           (pHVar2 = (Heap *)g_INT_02680150,
           (Heap *)(*(int *)g_INT_02680150 + g_INT_02680150) <= param_1)) &&
          ((pHVar2 = *(Heap **)(g_INT_02680150 + 4), pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = *(Heap **)(g_INT_02680150 + 8), pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))) &&
       ((pHVar1 = g_MainHeap, g_SecondaryHeap == (Heap *)0x0 ||
        ((((param_1 < g_SecondaryHeap ||
           (pHVar2 = g_SecondaryHeap,
           (Heap *)((int)&g_SecondaryHeap->heap_size + g_SecondaryHeap->heap_size) <= param_1)) &&
          ((pHVar2 = g_SecondaryHeap->heap_base, pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = g_SecondaryHeap->next_heap_block, pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))))) {
      while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
        if ((pHVar2 <= param_1) && (param_1 < (Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size))
           ) goto LAB_005b876c;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_005b876c:
      FUN_005be480();
      if ((pHVar2 < g_SecondaryHeap) && ((uint)g_INT_0061eea8 < pHVar2[1].next_heap_block)) {
        g_INT_0061eea8 = (int)pHVar2[1].next_heap_block;
      }
      g_CHAR_ARRAY_026807a0[0] = '\0';
      g_INT_02680150 = (int)pHVar2;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  }
  return;
}
