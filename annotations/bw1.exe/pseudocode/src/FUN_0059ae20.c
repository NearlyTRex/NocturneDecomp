// Name: FUN_0059ae20
// Address: 0059ae20
// Address Range: [[0059ae20, 0059aee8]]
// Convention: unknown
// Signature: void FUN_0059ae20(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0059ae20(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_100c [1007];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  iVar1 = FUN_00468900(param_1 + 0x158);
  puVar3 = *(uint **)(iVar1 + 0x350);
  puVar4 = &stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_2c = *(uint *)(param_1 + 0x310);
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00408b00(param_1,&stack0xffffffd0);
  fStack_24 = fStack_18;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffec + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_48 = fStack_48 + fStack_24;
  fStack_44 = fStack_44 + fStack_20;
  fStack_40 = fStack_40 + fStack_1c;
  fStack_3c = fStack_3c + fStack_24;
  fStack_38 = fStack_38 + fStack_20;
  fStack_34 = fStack_34 + fStack_1c;
  puVar3 = &stack0xffffffb8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
