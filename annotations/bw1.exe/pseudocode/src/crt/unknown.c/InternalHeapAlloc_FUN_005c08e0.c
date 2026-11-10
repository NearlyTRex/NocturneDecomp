// Name: crt_unknown.c_InternalHeapAlloc_FUN_005c08e0
// Address: 005c08e0
// Address Range: [[005c08e0, 005c09ed]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005c08e0(ulong size)

#include "nocturne.h"

void * __cdecl InternalHeapAlloc(ulong size)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvStack_28;
  uint local_24;
  
  if ((size == 0) || (0xffffffd4 < size)) {
    return (void *)0x0;
  }
  local_24 = size + 0xb & 0xfffffff8;
  if (local_24 < 0x10) {
    local_24 = 0x10;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626618)();
  pvStack_28 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_00626228 < local_24) {
        uVar4 = DAT_00626224;
        if (DAT_00626224 == 0) {
          DAT_00626228 = DAT_00626224;
          uVar4 = DAT_00626220;
        }
      }
      else {
        DAT_00626228 = 0;
        uVar4 = DAT_00626220;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_00626224 = uVar4;
        if ((size <= uVar1) &&
           (pvStack_28 = (void *)FUN_005c66a0(), pvStack_28 != (void *)0x0))
        goto LAB_005c09d0;
        if (DAT_00626228 < uVar1) {
          DAT_00626228 = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005c69a8(size), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005c6a10(size);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005c09d0:
  DAT_02c9f690 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
  return pvStack_28;
}
