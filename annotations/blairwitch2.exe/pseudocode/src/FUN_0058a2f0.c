// Name: FUN_0058a2f0
// Address: 0058a2f0
// Address Range: [[0058a2f0, 0058a43e]]
// Convention: unknown
// Signature: void FUN_0058a2f0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a2f0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_104c [999];
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x42c) != 0) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar2 = (uint *)&stack0xffffff6c;
    puVar3 = &stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_40 = local_7c + fStack_70;
    fStack_3c = fStack_78 + fStack_6c;
    fStack_38 = fStack_74 + fStack_68;
    fStack_1c = local_7c + fStack_70;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_28 = fStack_1c * _DAT_005ee53e;
    fStack_24 = fStack_18 * _DAT_005ee53e;
    fStack_20 = fStack_14 * _DAT_005ee53e;
    fStack_10 = fStack_1c * _DAT_005ee53e;
    *(uint *)((int)&stack0xfffffff4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8);
    *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00408d70(param_1,&stack0xfffffff0);
    uStack_34 = uStack_4c;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_64 = fStack_70 - local_7c;
    fStack_60 = fStack_6c - fStack_78;
    fStack_5c = fStack_68 - fStack_74;
    fStack_58 = fStack_70 - local_7c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_005b1c80(param_1 + 0x464,&stack0xffffffcc,param_1 + 0x30,&stack0xffffffa8,
                 *(uint *)(param_1 + 0x6c0));
    return;
  }
  return;
}
