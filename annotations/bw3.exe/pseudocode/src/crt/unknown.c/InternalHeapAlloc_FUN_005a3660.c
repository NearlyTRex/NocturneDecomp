// Name: crt_unknown.c_InternalHeapAlloc_FUN_005a3660
// Address: 005a3660
// Address Range: [[005a3660, 005a376d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005a3660(ulong size)

#include "nocturne.h"

void * __cdecl InternalHeapAlloc(ulong size)

{
  Heap *pHVar1;
  bool bVar2;
  int iVar3;
  Heap *pHVar4;
  void *pvStack_28;
  uint local_24;
  
  if ((size == 0) || (0xffffffd4 < size)) {
    return (void *)0x0;
  }
  local_24 = size + 0xb & 0xfffffff8;
  if (local_24 < 0x10) {
    local_24 = 0x10;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  pvStack_28 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if ((uint)g_INT_006075cc < local_24) {
        pHVar4 = g_SecondaryHeap;
        if (g_SecondaryHeap == (Heap *)0x0) {
          g_INT_006075cc = (int)g_SecondaryHeap;
          pHVar4 = g_MainHeap;
        }
      }
      else {
        g_INT_006075cc = 0;
        pHVar4 = g_MainHeap;
      }
      for (; pHVar4 != (Heap *)0x0; pHVar4 = pHVar4->next_heap_block) {
        pHVar1 = pHVar4[1].next_heap_block;
        g_SecondaryHeap = pHVar4;
        if ((size <= pHVar1) &&
           (pvStack_28 = (void *)FUN_005a9510(), pvStack_28 != (void *)0x0))
        goto LAB_005a3750;
        if ((uint)g_INT_006075cc < pHVar1) {
          g_INT_006075cc = (int)pHVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005a9818(size), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005a9880(size);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005a3750:
  g_CHAR_ARRAY_02d258e0[0] = '\0';
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return pvStack_28;
}
