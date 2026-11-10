// Name: crt_unknown.c_InternalHeapAlloc_FUN_005a3660
// Address: 005a3660
// Address Range: [[005a3660, 005a376d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005a3660(ulong size)

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
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  pvStack_28 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_006075cc < local_24) {
        uVar4 = DAT_006075c8;
        if (DAT_006075c8 == 0) {
          DAT_006075cc = DAT_006075c8;
          uVar4 = DAT_006075c4;
        }
      }
      else {
        DAT_006075cc = 0;
        uVar4 = DAT_006075c4;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_006075c8 = uVar4;
        if ((size <= uVar1) &&
           (pvStack_28 = (void *)FUN_005a9510(), pvStack_28 != (void *)0x0))
        goto LAB_005a3750;
        if (DAT_006075cc < uVar1) {
          DAT_006075cc = uVar1;
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
  DAT_02d258e0 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return pvStack_28;
}
