// Name: crt_unknown.c_FUN_005ae8c0
// Address: 005ae8c0
// Address Range: [[005ae8c0, 005ae8fb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ae8c0(void)

#include "nocturne.h"

uint FUN_005ae8c0(void)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  pHVar1 = g_Heap_PTR_006075c4;
  while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
    pHVar1 = pHVar2->next_heap_block;
    if (pHVar2->heap_size + -0x2c == *(int *)pHVar2[3].heap_size) {
      FUN_005ae95c(pHVar2);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return 0;
}
