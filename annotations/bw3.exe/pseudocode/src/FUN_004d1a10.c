// Name: FUN_004d1a10
// Address: 004d1a10
// Address Range: [[004d1a10, 004d1c40]]
// Convention: unknown
// Signature: undefined4 FUN_004d1a10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d1a10(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1034 [995];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  uStack_40 = _DAT_02cfd900;
  uStack_3c = _DAT_02cfd904;
  uStack_38 = _DAT_02cfd908;
  *(uint *)(param_1 + 0x594) = 1;
  if (*(int *)(param_1 + 0x598) != 0) {
    return 0;
  }
  iVar1 = FUN_0057b880(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
    if (iVar1 != 0) {
      *(float *)(iVar1 + 0x2538) = *(float *)(iVar1 + 0x2538) + _DAT_005c4a3f;
      if (0x42c80000 < *(int *)(iVar1 + 0x2538)) {
        *(uint *)(iVar1 + 0x2538) = 0x42c80000;
      }
      if (&stack0xffffffa8 != (uint *)(iVar1 + 0x20)) {
        uStack_58 = *(uint *)(iVar1 + 0x20);
        fStack_54 = *(float *)(iVar1 + 0x24);
        uStack_50 = *(uint *)(iVar1 + 0x28);
      }
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
      puVar2 = (uint *)&stack0xffffff90;
      puVar3 = &stack0xffffff78;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_4c = fStack_7c - fStack_88;
      fStack_48 = fStack_78 - fStack_84;
      fStack_44 = fStack_74 - fStack_80;
      fStack_34 = fStack_7c - fStack_88;
      (&stack0xffffffd0)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffffb8)[(uint)bVar4 * 0xfffffffe];
      *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      fStack_54 = fStack_30 + 1.0 + fStack_54;
      iVar1 = 0;
      do {
        uStack_1c = FUN_0040ce40(0xc0a00000,0x40a00000);
        uStack_28 = FUN_0040ce40(0xc0a00000,0x40a00000);
        uStack_14 = uStack_1c;
        uStack_24 = 0xc0a00000;
        uStack_20 = uStack_1c;
        if (&stack0xffffffc0 != &stack0xffffffd8) {
          uStack_3c = 0xc0a00000;
          uStack_38 = uStack_1c;
          uStack_40 = uStack_28;
        }
        iVar1 = iVar1 + 1;
        uStack_18 = uStack_28;
        uStack_10 = uStack_28;
        FUN_004a23c0(0x01C73654,&stack0xffffffa8,&stack0xffffffc0,0x20000,0x10000,5,0xffff);
      } while (iVar1 < 0x10);
    }
    FUN_005609d0(0x02CF5680,param_1,"wp_heal.wav",param_1 + 0x20);
    *(uint *)(param_1 + 0x300) = 0x40400000;
    return 1;
  }
  FUN_005609d0(0x02CF5680,param_1,"wp_nomana.wav",param_1 + 0x20);
  *(uint *)(param_1 + 0x300) = 0x3f800000;
  return 0;
}
