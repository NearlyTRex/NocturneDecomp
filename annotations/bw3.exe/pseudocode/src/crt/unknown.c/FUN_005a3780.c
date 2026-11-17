// Name: crt_unknown.c_FUN_005a3780
// Address: 005a3780
// Address Range: [[005a3780, 005a3885]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a3780(Heap *param_1)

#include "nocturne.h"

void FUN_005a3780(Heap *param_1)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  if (param_1 != (Heap *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
    if (((g_INT_02d25290 == 0) ||
        ((((param_1 < (uint)g_INT_02d25290 ||
           (pHVar2 = (Heap *)g_INT_02d25290,
           (Heap *)(*(int *)g_INT_02d25290 + g_INT_02d25290) <= param_1)) &&
          ((pHVar2 = *(Heap **)(g_INT_02d25290 + 4), pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = *(Heap **)(g_INT_02d25290 + 8), pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))) &&
       ((pHVar1 = g_Heap_PTR_006075c4, g_Heap_PTR_006075c8 == (Heap *)0x0 ||
        ((((param_1 < g_Heap_PTR_006075c8 ||
           (pHVar2 = g_Heap_PTR_006075c8,
           (Heap *)((int)&g_Heap_PTR_006075c8->heap_size + g_Heap_PTR_006075c8->heap_size) <=
           param_1)) &&
          ((pHVar2 = g_Heap_PTR_006075c8->heap_base, pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = g_Heap_PTR_006075c8->next_heap_block, pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))))) {
      while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
        if ((pHVar2 <= param_1) && (param_1 < (Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size))
           ) goto LAB_005a383c;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_005a383c:
      FUN_005a95c0();
      if ((pHVar2 < g_Heap_PTR_006075c8) && ((uint)g_INT_006075cc < pHVar2[1].next_heap_block)) {
        g_INT_006075cc = (int)pHVar2[1].next_heap_block;
      }
      g_CHAR_ARRAY_02d258e0[0] = '\0';
      g_INT_02d25290 = (int)pHVar2;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  }
  return;
}
