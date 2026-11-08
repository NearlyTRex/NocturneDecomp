// Name: FUN_004c90b0
// Address: 004c90b0
// Address Range: [[004c90b0, 004c911a]]
// Convention: unknown
// Signature: void FUN_004c90b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c90b0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1000 [989];
  uint auStack_84 [12];
  uint auStack_54 [12];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [2];
  
  bVar4 = 0;
  FUN_0054d9c0(param_1 + 0x158,_DAT_01d22da0);
  puVar2 = auStack_54;
  puVar3 = auStack_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_24 = 0;
  uStack_20 = 0x3f333333;
  uStack_1c = 0x3e99999a;
  FUN_00583260(&uStack_24,auStack_84);
  *unaff_ESI = uStack_18;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(uint *)((int)auStack_14 + (uint)bVar4 * 0xfffffff8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       auStack_14[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  return;
}
