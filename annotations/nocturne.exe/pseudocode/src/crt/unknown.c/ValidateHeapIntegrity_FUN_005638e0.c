// Name: crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0
// Address: 005638e0
// Address Range: [[005638e0, 005639e5]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_ValidateHeapIntegrity_FUN_005638e0(void *ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ValidateHeapIntegrity(void *ptr)

{
  int *piVar1;
  int *piVar2;
  ushort in_DS;
  
  if (ptr != (void *)0x0) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
    if (((_DAT_02de4e10 == (int *)0x0) ||
        ((((ptr < _DAT_02de4e10 ||
           (piVar2 = _DAT_02de4e10, (void *)(*_DAT_02de4e10 + (int)_DAT_02de4e10) <= ptr)) &&
          ((piVar2 = (int *)_DAT_02de4e10[1], piVar2 == (int *)0x0 ||
           ((ptr < piVar2 || ((void *)(*piVar2 + (int)piVar2) <= ptr)))))) &&
         ((piVar2 = (int *)_DAT_02de4e10[2], piVar2 == (int *)0x0 ||
          ((ptr < piVar2 || ((void *)(*piVar2 + (int)piVar2) <= ptr)))))))) &&
       ((piVar1 = DAT_005c1680, DAT_005c1684 == (int *)0x0 ||
        ((((ptr < DAT_005c1684 ||
           (piVar2 = DAT_005c1684, (void *)(*DAT_005c1684 + (int)DAT_005c1684) <= ptr)) &&
          ((piVar2 = (int *)DAT_005c1684[1], piVar2 == (int *)0x0 ||
           ((ptr < piVar2 || ((void *)(*piVar2 + (int)piVar2) <= ptr)))))) &&
         ((piVar2 = (int *)DAT_005c1684[2], piVar2 == (int *)0x0 ||
          ((ptr < piVar2 || ((void *)(*piVar2 + (int)piVar2) <= ptr)))))))))) {
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        if ((piVar2 <= ptr) && (ptr < (void *)(*piVar2 + (int)piVar2))) goto LAB_0056399c;
        piVar1 = (int *)piVar2[2];
      }
    }
    else {
LAB_0056399c:
      CoalesceAndAddFreeBlock(ptr,(HeapBlock *)(uint)in_DS,(ushort)piVar2);
      if ((piVar2 < DAT_005c1684) && (DAT_005c1688 < (uint)piVar2[5])) {
        DAT_005c1688 = piVar2[5];
      }
      DAT_02de5460 = 0;
      _DAT_02de4e10 = piVar2;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  }
  return;
}
