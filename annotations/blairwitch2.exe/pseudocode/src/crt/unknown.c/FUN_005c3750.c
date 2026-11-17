// Name: crt_unknown.c_FUN_005c3750
// Address: 005c3750
// Address Range: [[005c3750, 005c378b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c3750(void)

#include "nocturne.h"

uint FUN_005c3750(void)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
  pHVar1 = g_Heap_PTR_0061eea0;
  while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
    pHVar1 = pHVar2->next_heap_block;
    if (pHVar2->heap_size + -0x2c == *(int *)pHVar2[3].heap_size) {
      FUN_005c37ec(pHVar2);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  return 0;
}
