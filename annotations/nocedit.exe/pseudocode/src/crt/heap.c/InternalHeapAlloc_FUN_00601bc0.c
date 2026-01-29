// Name: crt_heap.c_InternalHeapAlloc_FUN_00601bc0
// Address: 00601bc0
// Address Range: [[00601bc0, 00601ccd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_InternalHeapAlloc_FUN_00601bc0(ulong size)

#include "nocturne.h"

void * __cdecl InternalHeapAlloc(ulong size)

{
  Heap *pHVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  Heap *pHVar5;
  ushort in_DS;
  void *pvVar6;
  Heap *local_24;
  
  if ((size == 0) || (0xffffffd4 < size)) {
    return (void *)0x0;
  }
  local_24 = (Heap *)(size + 0xb & 0xfffffff8);
  if (local_24 < (Heap *)&DAT_00000010) {
    local_24 = (Heap *)&DAT_00000010;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  pvVar6 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_00684edc < local_24) {
        pHVar5 = g_SecondaryHeap;
        if (g_SecondaryHeap == (Heap *)0x0) {
          DAT_00684edc = g_SecondaryHeap;
          pHVar5 = g_MainHeap;
        }
      }
      else {
        DAT_00684edc = (Heap *)0x0;
        pHVar5 = g_MainHeap;
      }
      for (; pHVar5 != (Heap *)0x0; pHVar5 = pHVar5->next_heap_block) {
        pHVar1 = pHVar5[1].next_heap_block;
        g_SecondaryHeap = pHVar5;
        if ((size <= pHVar1) &&
           (pvVar6 = AllocateFromFreeList
                               (size,(HeapBlock *)(uint)in_DS,(ushort)pvVar6), pvVar6 != (void *)0x0
           )) goto LAB_00601cb0;
        if (DAT_00684edc < pHVar1) {
          DAT_00684edc = pHVar1;
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
LAB_00601cb0:
  DAT_03f9b850 = 0;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return pvVar6;
}
