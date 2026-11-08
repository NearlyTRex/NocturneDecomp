// Name: FUN_004e3b10
// Address: 004e3b10
// Address Range: [[004e3b10, 004e40dc]]
// Convention: unknown
// Signature: int FUN_004e3b10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e3b10(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_111c [1009];
  uint *puVar7;
  float fVar8;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  double dStack_38;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  iVar1 = FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x6e4) == 0) {
      iVar1 = FUN_0058a440(param_1);
      return iVar1;
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
    uStack_11c = uStack_c8;
    *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff3c + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffeec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d70(param_1,&stack0xfffffee4);
    fStack_74 = fStack_134;
    (&stack0xffffff90)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffed0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffed4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    uStack_84 = *(uint *)(param_1 + 0x444);
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_28 = uStack_84;
    FUN_00408cf0(param_1,&stack0xffffff74);
    fVar2 = fStack_70;
    fVar8 = fStack_74;
    fStack_128 = fStack_5c;
    *(uint *)((int)&stack0xfffffedc + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xfffffee0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_e0 = -fStack_128;
    fStack_80 = fVar8 + fStack_128;
    fStack_7c = fVar2 + fStack_124;
    fStack_78 = fStack_6c + fStack_120;
    fStack_ec = fVar8 + fStack_128;
    (&stack0xffffff18)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff84)[(uint)bVar5 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_dc = -fStack_124;
    fStack_d8 = -fStack_120;
    fStack_44 = fStack_e0;
    (&stack0xffffffc0)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff24 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (&stack0xffffff50 != &stack0xffffffbc) {
      fStack_b0 = fStack_44;
      fStack_ac = fStack_40;
      fStack_a8 = fStack_3c;
    }
    fStack_20 = SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac);
    if (fStack_20 <= 0.0) {
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_a8 = 0.0;
    }
    else {
      fVar8 = 1.0 / fStack_20;
      fStack_b0 = fStack_b0 * fVar8;
      fStack_ac = fStack_ac * fVar8;
      fStack_a8 = fStack_a8 * fVar8;
    }
    fVar6 = (float10)fpatan((float10)_DAT_005dc0da / (float10)_DAT_005f95d4,(float10)1);
    fVar8 = (float)fVar6;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1,fVar8);
    puVar7 = &stack0xffffff98;
    uStack_68 = uStack_50;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d70(param_1,puVar7);
    FUN_0049d7e0(0x01C3DEB4,&stack0xffffff8c,&stack0xffffff14,0x3f800000,0xff,0,0,fVar8);
    iVar1 = param_1;
    if (*(int *)(param_1 + 0x6e4) != 0) {
      *(uint *)(param_1 + 0x6e4) = 0;
      fVar2 = 1.4013e-45;
      do {
        fVar3 = (float)((int)fVar2 + 1);
        fStack_18 = fVar2;
        FUN_0049d7e0(0x01C3DEB4,&stack0xffffff8c,&stack0xffffff14,0x3f800000,0xff,0,0,
                     (float)(int)fVar2 * fVar8 * (float)_DAT_005dc0e2);
        fVar2 = fVar3;
      } while ((int)fVar3 < 10);
      fVar8 = fStack_ec - fStack_74;
      fStack_f8 = fStack_74;
      (&stack0xffffff0c)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff90)[(uint)bVar5 * 0xfffffffe];
      *(uint *)((int)&stack0xffffff10 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_bc = fVar8;
      fStack_b8 = fStack_e8 - fStack_70;
      fStack_b4 = fStack_e4 - fStack_6c;
      fStack_98 = fVar8;
      (&stack0xffffff6c)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_24 = SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
      if (0.0 < fStack_24) {
        fVar8 = 1.0 / fStack_24;
        fStack_98 = fStack_98 * fVar8;
        fStack_94 = fStack_94 * fVar8;
        fStack_90 = fStack_90 * fVar8;
      }
      else {
        fStack_94 = 0.0;
        fStack_98 = 0.0;
        fStack_90 = 0.0;
      }
      fStack_1c = *(float *)(param_1 + 0x6f0) * (float)_DAT_005dc0ea;
      fStack_110 = fStack_98 * fStack_1c;
      fStack_10c = fStack_94 * fStack_1c;
      fStack_108 = fStack_90 * fStack_1c;
      fStack_d4 = fStack_98 * fStack_1c;
      (&stack0xffffff30)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffef4 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xfffffef8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffff68 != &stack0xffffff2c) {
        fStack_98 = fStack_d4;
        fStack_94 = fStack_d0;
        fStack_90 = fStack_cc;
      }
      iVar4 = 0;
      do {
        fStack_a4 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        dStack_38 = (double)iVar4 * _DAT_005dc0f2;
        fStack_a4 = fStack_a4 * (float)dStack_38;
        fStack_18 = (float)iVar4;
        fStack_18 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        fStack_a0 = fStack_18 * (float)dStack_38;
        fStack_18 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        fStack_9c = fStack_18 * (float)dStack_38;
        iVar1 = FUN_0049d090(0x01C3DEB4,&stack0xffffff08,&stack0xffffff5c,0xffdc,5000,3,5000);
        iVar4 = iVar4 + 1;
        fStack_f8 = fStack_f8 + fStack_98;
        fStack_f4 = fStack_f4 + fStack_94;
        fStack_f0 = fStack_f0 + fStack_90;
      } while (iVar4 < 0x40);
    }
  }
  return iVar1;
}
