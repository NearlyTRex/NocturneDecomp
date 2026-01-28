// Name: crt_watcom.c_memmax_FUN_00600940
// Address: 00600940
// Address Range: [[00600940, 00600984]]
// Convention: unknown
// Signature: uint crt_watcom_c_memmax_FUN_00600940(void)

#include "nocturne.h"

uint crt_watcom_c_memmax_FUN_00600940(void)

{
  int *piVar1;
  Heap *pHVar2;
  uint uVar3;
  uint uVar4;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  uVar4 = 0;
  for (pHVar2 = g_MainHeap; pHVar2 != (Heap *)0x0; pHVar2 = pHVar2->next_heap_block) {
    for (piVar1 = pHVar2[3].heap_base; (Heap **)piVar1 != &pHVar2[2].next_heap_block;
        piVar1 = (int *)piVar1[2]) {
      uVar3 = *piVar1 - 4U & 0xfffffff8;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return uVar4;
}
