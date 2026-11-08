// Name: FUN_004f17a0
// Address: 004f17a0
// Address Range: [[004f17a0, 004f1888]]
// Convention: unknown
// Signature: void FUN_004f17a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f17a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  *(uint *)(param_1 + 0x4b6f0) = 2;
  FUN_005ae680(param_1 + 0x10bc0,param_1 + 0x20,param_1 + 0x30,param_1 + 0x2b4);
  iVar1 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01cb0700);
  if (iVar1 != 0) {
    puVar4 = (uint *)(iVar1 + 0x25a18);
    puVar5 = (uint *)(param_1 + 0x10f58);
    for (uVar3 = *(int *)(param_1 + 0x10cc4) * 0x47 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  uVar2 = FUN_005035c0(iVar1 + 0x2b4,*(uint *)(iVar1 + 700));
  FUN_00503950(param_1 + 0x2b4,uVar2);
  FUN_00503620(param_1 + 0x2b4,1,1);
  FUN_00436710(PTR_DAT_00609ed0,">@%s attacking hero\n" + 2,param_1);
  return;
}
