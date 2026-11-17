// Name: crt_unknown.c_FUN_0056f2d0
// Address: 0056f2d0
// Address Range: [[0056f2d0, 0056f30b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056f2d0(void)

#include "nocturne.h"

uint FUN_0056f2d0(void)

{
  Heap *pHVar1;
  Heap *pHVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
  pHVar1 = g_Heap_PTR_005c1680;
  while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
    pHVar1 = pHVar2->next_heap_block;
    if (pHVar2->heap_size + -0x2c == *(int *)pHVar2[3].heap_size) {
      FUN_0056f36c(pHVar2);
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return 0;
}
