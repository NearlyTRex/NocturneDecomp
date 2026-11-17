// Name: crt_unknown.c_FUN_005cba50
// Address: 005cba50
// Address Range: [[005cba50, 005cba8b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cba50(void)

#include "nocturne.h"

uint FUN_005cba50(void)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626618)();
  pHVar1 = g_MainHeap;
  while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
    pHVar1 = pHVar2->next_heap_block;
    if (pHVar2->heap_size + -0x2c == *(int *)pHVar2[3].heap_size) {
      FUN_005cbaec(pHVar2);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
  return 0;
}
