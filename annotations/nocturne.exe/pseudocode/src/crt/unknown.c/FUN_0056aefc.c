// Name: crt_unknown.c_FUN_0056aefc
// Address: 0056aefc
// Address Range: [[0056aefc, 0056af40]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056aefc(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056aefc(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  iVar3 = 0;
  for (puVar2 = _DAT_02de4e20; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    iVar1 = puVar2[1];
    if (((*(uint *)(iVar1 + 0xc) & param_1) != 0) &&
       (iVar3 = iVar3 + 1, (*(byte *)(iVar1 + 0xd) & 0x10) != 0)) {
      FUN_00568890(iVar1);
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return iVar3;
}
