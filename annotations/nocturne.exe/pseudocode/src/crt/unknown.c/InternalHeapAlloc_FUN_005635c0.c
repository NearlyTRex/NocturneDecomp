// Name: crt_unknown.c_InternalHeapAlloc_FUN_005635c0
// Address: 005635c0
// Address Range: [[005635c0, 005636cd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005635c0(ulong size)

#include "nocturne.h"

void * __cdecl InternalHeapAlloc(ulong size)

{
  Heap *pHVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  Heap *pHVar5;
  ushort in_DS;
  void *pvStack_28;
  uint local_24;
  
  if ((size == 0) || (0xffffffd4 < size)) {
    return (void *)0x0;
  }
  local_24 = size + 0xb & 0xfffffff8;
  if (local_24 < 0x10) {
    local_24 = 0x10;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
  pvStack_28 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if ((uint)g_INT_005c1688 < local_24) {
        pHVar5 = g_SecondaryHeap;
        if (g_SecondaryHeap == (Heap *)0x0) {
          g_INT_005c1688 = (int)g_SecondaryHeap;
          pHVar5 = g_MainHeap;
        }
      }
      else {
        g_INT_005c1688 = 0;
        pHVar5 = g_MainHeap;
      }
      for (; pHVar5 != (Heap *)0x0; pHVar5 = pHVar5->next_heap_block) {
        pHVar1 = pHVar5[1].next_heap_block;
        g_SecondaryHeap = pHVar5;
        if ((size <= pHVar1) &&
           (pvStack_28 = (void *)AllocateFromFreeList(size,in_DS),
           pvStack_28 != (void *)0x0)) goto LAB_005636b0;
        if ((uint)g_INT_005c1688 < pHVar1) {
          g_INT_005c1688 = (int)pHVar1;
        }
      }
      if ((bVar2) ||
         (pvVar3 = SystemAllocWrapper(size), pvVar3 == (void *)0x0)) break;
      bVar2 = true;
    }
    iVar4 = AllocatorFallbackStub(size);
    if (iVar4 == 0) break;
    bVar2 = false;
  }
LAB_005636b0:
  g_CHAR_ARRAY_02de5460[0] = '\0';
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return pvStack_28;
}
