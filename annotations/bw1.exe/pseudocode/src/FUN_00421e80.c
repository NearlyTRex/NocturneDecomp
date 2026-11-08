// Name: FUN_00421e80
// Address: 00421e80
// Address Range: [[00421e80, 00421ff7]]
// Convention: unknown
// Signature: void FUN_00421e80(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421e80(int param_1)

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
  uint uStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar4 = 0;
  *(uint *)(param_1 + 0x5e8) = 0;
  if ((0.0 < *(float *)(param_1 + 0x390)) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    if (*(int *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar2 = (uint *)&stack0xffffff6c;
      puVar3 = &stack0xffffff84;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_10 = local_7c + fStack_70;
      fStack_c = fStack_78 + fStack_6c;
      fStack_8 = fStack_74 + fStack_68;
      fStack_1c = local_7c + fStack_70;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xfffffff4 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      fStack_34 = fStack_1c * _DAT_005d4c04;
      fStack_30 = fStack_18 * _DAT_005d4c04;
      fStack_2c = fStack_14 * _DAT_005d4c04;
      fStack_28 = fStack_1c * _DAT_005d4c04;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      FUN_00408b40(param_1,&stack0xffffffd8);
      uStack_4c = uStack_40;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      fStack_64 = fStack_70 - local_7c;
      fStack_60 = fStack_6c - fStack_78;
      fStack_5c = fStack_68 - fStack_74;
      fStack_58 = fStack_70 - local_7c;
      *(uint *)((int)&stack0xffffffac + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      FUN_0041dac0(param_1 + 0x394,&stack0xffffffb4,param_1 + 0x30,&stack0xffffffa8,
                   *(uint *)(param_1 + 0x390));
      return;
    }
    *(uint *)(param_1 + 0x5e8) = 0xffffffff;
  }
  return;
}
