// Name: crt_unknown.c_InternalHeapAlloc_FUN_005635c0
// Address: 005635c0
// Address Range: [[005635c0, 005636cd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005635c0(ulong size)

#include "nocturne.h"

void * __cdecl InternalHeapAlloc(ulong size)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
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
      if (DAT_005c1688 < local_24) {
        uVar5 = DAT_005c1684;
        if (DAT_005c1684 == 0) {
          DAT_005c1688 = DAT_005c1684;
          uVar5 = DAT_005c1680;
        }
      }
      else {
        DAT_005c1688 = 0;
        uVar5 = DAT_005c1680;
      }
      for (; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 8)) {
        uVar1 = *(uint *)(uVar5 + 0x14);
        DAT_005c1684 = uVar5;
        if ((size <= uVar1) &&
           (pvStack_28 = (void *)AllocateFromFreeList(),
           pvStack_28 != (void *)0x0)) goto LAB_005636b0;
        if (DAT_005c1688 < uVar1) {
          DAT_005c1688 = uVar1;
        }
      }
      if ((bVar2) ||
         (pvVar3 = SystemAllocWrapper(size), pvVar3 == (void *)0x0)) break;
      bVar2 = true;
    }
    iVar4 = FUN_00568e70(size);
    if (iVar4 == 0) break;
    bVar2 = false;
  }
LAB_005636b0:
  DAT_02de5460 = 0;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return pvStack_28;
}
