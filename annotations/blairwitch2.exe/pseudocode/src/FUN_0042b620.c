// Name: FUN_0042b620
// Address: 0042b620
// Address Range: [[0042b620, 0042b753]]
// Convention: unknown
// Signature: void FUN_0042b620(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0042b620(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1020 [1001];
  uint uVar5;
  byte *puVar6;
  uint local_38;
  uint local_2c;
  uint local_20;
  uint local_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x10a28) == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + *(int *)(param_1 + 0x10a24) * 0x30 + 0x1134);
  puVar3 = (uint *)&stack0xffffff98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00591de0(&stack0xffffff98);
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4);
  *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_00592720(&stack0xffffff98);
  puVar2 = &stack0xffffffe0;
  puVar6 = &DAT_0265370c;
  local_20 = local_14;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8);
  uVar5 = DAT_0060b280;
  *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_0046b350(uVar5,puVar6,puVar2);
  FUN_0046b350(DAT_0060b280,&stack0xffffffd4,0);
  FUN_0046b350(DAT_0060b280,param_1 + 0x10a48,param_1 + 0x10a0c);
  FUN_0042b760(param_1,&DAT_0265370c);
  thunk_FUN_004e9810(DAT_0060b280);
  FUN_0046b350(DAT_0060b280,param_1 + 0x10a54,param_1 + 0x10a18);
  FUN_0042b760(param_1,&DAT_0265370c);
  thunk_FUN_004e9810(DAT_0060b280);
  FUN_00408a10(param_1);
  FUN_00408a10(param_1);
  return;
}
