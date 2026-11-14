// Name: crt_unknown.c_InternalHeapAlloc_FUN_005b8590
// Address: 005b8590
// Address Range: [[005b8590, 005b869d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005b8590(ulong size)

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
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
  pvStack_28 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_0061eea8 < local_24) {
        uVar4 = DAT_0061eea4;
        if (DAT_0061eea4 == 0) {
          DAT_0061eea8 = DAT_0061eea4;
          uVar4 = DAT_0061eea0;
        }
      }
      else {
        DAT_0061eea8 = 0;
        uVar4 = DAT_0061eea0;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_0061eea4 = uVar4;
        if ((size <= uVar1) &&
           (pvStack_28 = (void *)FUN_005be3d0(), pvStack_28 != (void *)0x0))
        goto LAB_005b8680;
        if (DAT_0061eea8 < uVar1) {
          DAT_0061eea8 = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005be6d8(size), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005be740(size);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005b8680:
  DAT_026807a0 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  return pvStack_28;
}
