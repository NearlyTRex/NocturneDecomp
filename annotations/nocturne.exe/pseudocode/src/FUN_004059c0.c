// Name: FUN_004059c0
// Address: 004059c0
// Address Range: [[004059c0, 00405a55]]
// Convention: unknown
// Signature: void FUN_004059c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = (&DAT_005c501c)[(*(int *)(param_1 + 0x18) + DAT_006b0264) * 0xc];
  iVar2 = param_1;
  if (1 < *(int *)(param_1 + 4)) {
    do {
      if ((int)(&DAT_005c501c)[(*(int *)(iVar2 + 0x24) + DAT_006b0264) * 0xc] < iVar4) {
        iVar4 = (&DAT_005c501c)[(*(int *)(iVar2 + 0x24) + DAT_006b0264) * 0xc];
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  iVar2 = DAT_006b0268 * 0x20;
  *(int *)(&DAT_006b02e8 + iVar2) = iVar4;
  uVar1 = _DAT_01c039dc;
  *(int *)(&DAT_006b02ec + iVar2) = DAT_006b0264;
  *(uint *)(&DAT_006b02f0 + iVar2) = uVar1;
  *(uint *)(&DAT_006b02f4 + iVar2) = _DAT_01c039e0;
  *(uint *)(&DAT_006b02f8 + iVar2) = _DAT_01c039e4;
  return;
}
