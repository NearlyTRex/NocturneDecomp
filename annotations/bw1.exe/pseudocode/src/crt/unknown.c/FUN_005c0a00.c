// Name: crt_unknown.c_FUN_005c0a00
// Address: 005c0a00
// Address Range: [[005c0a00, 005c0b05]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0a00(Heap *param_1)

#include "nocturne.h"

void FUN_005c0a00(Heap *param_1)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  if (param_1 != (Heap *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626618)();
    if (((g_INT_02c9f040 == 0) ||
        ((((param_1 < (uint)g_INT_02c9f040 ||
           (pHVar2 = (Heap *)g_INT_02c9f040,
           (Heap *)(*(int *)g_INT_02c9f040 + g_INT_02c9f040) <= param_1)) &&
          ((pHVar2 = *(Heap **)(g_INT_02c9f040 + 4), pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = *(Heap **)(g_INT_02c9f040 + 8), pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))) &&
       ((pHVar1 = g_Heap_PTR_00626220, g_Heap_PTR_00626224 == (Heap *)0x0 ||
        ((((param_1 < g_Heap_PTR_00626224 ||
           (pHVar2 = g_Heap_PTR_00626224,
           (Heap *)((int)&g_Heap_PTR_00626224->heap_size + g_Heap_PTR_00626224->heap_size) <=
           param_1)) &&
          ((pHVar2 = g_Heap_PTR_00626224->heap_base, pHVar2 == (Heap *)0x0 ||
           ((param_1 < pHVar2 || ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1))
           )))) && ((pHVar2 = g_Heap_PTR_00626224->next_heap_block, pHVar2 == (Heap *)0x0 ||
                    ((param_1 < pHVar2 ||
                     ((Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= param_1)))))))))) {
      while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
        if ((pHVar2 <= param_1) && (param_1 < (Heap *)((int)&pHVar2->heap_size + pHVar2->heap_size))
           ) goto LAB_005c0abc;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_005c0abc:
      FUN_005c6750();
      if ((pHVar2 < g_Heap_PTR_00626224) && ((uint)g_INT_00626228 < pHVar2[1].next_heap_block)) {
        g_INT_00626228 = (int)pHVar2[1].next_heap_block;
      }
      g_CHAR_ARRAY_02c9f690[0] = '\0';
      g_INT_02c9f040 = (int)pHVar2;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
  }
  return;
}
