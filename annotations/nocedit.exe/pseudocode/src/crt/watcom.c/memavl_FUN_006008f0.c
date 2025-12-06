// Name: crt_watcom.c_memavl_FUN_006008f0
// Address: 006008f0
// Address Range: [[006008f0, 00600930]]
// Convention: __watcallRegister
// Signature: uint crt_watcom.c_memavl_FUN_006008f0(void)

#include "nocturne.h"

uint crt_watcom_c_memavl_FUN_006008f0(void)

{
  int *piVar1;
  Heap *pHVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  uVar3 = 0;
  for (pHVar2 = g_MainHeap; pHVar2 != (Heap *)0x0; pHVar2 = pHVar2->next_heap_block) {
    for (piVar1 = (int *)pHVar2[3].heap_base; (Heap **)piVar1 != &pHVar2[2].next_heap_block;
        piVar1 = (int *)piVar1[2]) {
      uVar3 = uVar3 + (*piVar1 - 4U & 0xfffffff8);
    }
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return uVar3;
}
