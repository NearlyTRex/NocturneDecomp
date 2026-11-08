// Name: FUN_0048b020
// Address: 0048b020
// Address Range: [[0048b020, 0048b59d]]
// Convention: unknown
// Signature: undefined4 FUN_0048b020(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048b020(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_10a8 [1012];
  uint *puVar9;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_84;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  uint uStack_30;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar9 = &stack0xffffff7c;
  uStack_84 = uStack_30;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  FUN_00408b80(param_1,puVar9);
  fStack_9c = fStack_48;
  (&stack0xffffff68)[(uint)bVar8 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffbc + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffff6c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  if (*(float *)(param_1 + 0x5a8) <= 0.0) {
    iVar4 = FUN_0057b880(param_1);
    if (iVar4 == 0) {
      FUN_005609d0(0x02CF5680,param_1,"@@wp_nomana.wav" + 2,&stack0xffffff64);
      *(uint *)(param_1 + 0x300) = 0x3f800000;
      return 0;
    }
    *(uint *)(param_1 + 0x5a8) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x598) = 1;
  if ((*(int *)(param_1 + 0x594) != 0) && (*(int *)(param_1 + 0x59c) != 0)) {
    return 1;
  }
  iVar4 = FUN_00556700(_DAT_01c6e35c);
  if (iVar4 == 0) {
    _DAT_01c6e35c = FUN_005609d0(0x02CF5680,param_1,"wp_exorcism.wav @ .5",&stack0xffffff64)
    ;
  }
  *(uint *)(param_1 + 0x59c) = 0;
  iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x5a0) = *(uint *)(iVar4 + 0x2538);
  }
  uStack_74 = *(uint *)(param_1 + 0x2e8);
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_00408b00(param_1,&stack0xffffff88);
  fVar3 = fStack_94;
  fVar2 = fStack_98;
  fVar1 = fStack_9c;
  fStack_54 = fStack_90;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fStack_60 = fVar1 + fStack_54;
  fStack_5c = fVar2 + fStack_50;
  fStack_58 = fVar3 + fStack_4c;
  fStack_a8 = fVar1 + fStack_54;
  *(uint *)((int)&stack0xffffff5c + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff60 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fVar2 = fStack_9c;
  fStack_24 = (float)_DAT_005bdd8e / *(float *)(param_1 + 0x2e8);
  fVar1 = fStack_54 * fStack_24;
  fStack_6c = fVar1;
  fStack_68 = fStack_50 * fStack_24;
  fStack_64 = fStack_4c * fStack_24;
  *(float *)((int)&stack0xffffff44 + (uint)bVar8 * -8) =
       (&stack0xffffff98)[(uint)bVar8 * 0xfffffffe];
  *(uint *)((int)&stack0xffffff48 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fStack_b4 = fVar2 - fVar1;
  fStack_b0 = fStack_98 - fStack_bc;
  fStack_ac = fStack_94 - fStack_b8;
  fStack_3c = fStack_b4;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  FUN_0053ebe0(0x01ED78C8);
  FUN_0053ec90(0x01ED78C8,1);
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053ebd0(0x01ED78C8);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_0053ec10(0x01ED78C8,*(int *)(param_1 + 0x304));
  }
  iStack_1c = 0;
  while( true ) {
    fStack_14 = (float)FUN_0053ccc0(0x01ED78C8,&stack0xffffffc4,&stack0xffffff58);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_0048b40f;
    iStack_18 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),DAT_007e2cec);
    if ((iStack_18 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar4)) {
      iStack_18 = 0;
    }
    iVar4 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_01d22e04);
    iVar5 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_02cfd894);
    iStack_20 = iVar5;
    iVar6 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),DAT_007f8fc8);
    iVar7 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_01d0cf60);
    if (iStack_18 != 0) break;
    if (iVar4 == 0) {
      if (iVar5 == 0) {
        if (iVar6 == 0) {
          if (iVar7 == 0) goto LAB_0048b40f;
          FUN_004a7110(iVar7);
        }
        else {
          FUN_004461c0(iVar6);
        }
      }
      else {
        FUN_0056edc0(iVar5);
        iVar4 = FUN_0056ede0(iVar5,param_1);
        if (iVar4 != 0) {
          fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
          FUN_0056ee20(iVar5,fStack_14);
        }
        FUN_0053ec10(0x01ED78C8,iStack_20);
      }
    }
    else {
      iVar5 = FUN_004cc5d0(iVar4);
      if (iVar5 == 0) goto LAB_0048b40f;
      FUN_004cc040(iVar4,0x01ED78C8 + 0x14d138);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_0048b40f:
      *(uint *)(param_1 + 0x5a4) = 0;
      FUN_0053ebe0(0x01ED78C8);
      return 1;
    }
  }
  iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
  if ((((iVar4 == 0) ||
       (iVar4 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18), iVar4 == 0)) &&
      ((iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01c5bc48), iVar4 == 0 ||
       (iVar4 = FUN_0040c840(iStack_18,_DAT_01c5bc48), iVar4 == 0)))) &&
     (0.0 < *(float *)(iStack_18 + 0x2538))) {
    *(int *)(param_1 + 0x59c) = iStack_18;
  }
  goto LAB_0048b40f;
}
