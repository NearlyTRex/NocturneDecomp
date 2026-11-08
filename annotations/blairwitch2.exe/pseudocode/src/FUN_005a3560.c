// Name: FUN_005a3560
// Address: 005a3560
// Address Range: [[005a3560, 005a3b0a]]
// Convention: unknown
// Signature: void FUN_005a3560(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3560(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_117c [1010];
  uint *puVar6;
  uint uVar7;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  uint uStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  float fStack_140;
  float fStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  uint uStack_104;
  uint uStack_f8;
  float fStack_f4;
  float fStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_c8;
  uint uStack_bc;
  uint uStack_b0;
  uint uStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_74;
  uint uStack_68;
  uint uStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar3 == 0) || (iVar3 = FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar3 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  fStack_14 = (float)(param_1 + 0x2b4);
  FUN_00546a90(fStack_14,*(uint *)(param_1 + 0x11850));
  puVar6 = &stack0xfffffe78;
  uStack_188 = uStack_d4;
  *(uint *)((int)&stack0xfffffe7c + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff30 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffe80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_00408d70(param_1,puVar6);
  fStack_170 = fStack_c8;
  *(uint *)((int)&stack0xfffffe94 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff3c + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xfffffe98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_00546a90(fStack_14,*(uint *)(param_1 + 0x11854));
  puVar6 = &stack0xfffffe84;
  uStack_17c = uStack_bc;
  *(uint *)((int)&stack0xfffffe88 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffe8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_00408d70(param_1,puVar6);
  fStack_38 = fStack_ec;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff18 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_50 = fStack_38 - fStack_170;
  fStack_4c = fStack_34 - fStack_16c;
  fStack_48 = fStack_30 - fStack_168;
  fStack_164 = fStack_38 - fStack_170;
  (&stack0xfffffea0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xfffffea4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fVar2 = fStack_170;
  fVar1 = SQRT(fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160);
  fStack_8c = fStack_164 * _DAT_005f01ba;
  fStack_88 = fStack_160 * _DAT_005f01ba;
  fStack_84 = fStack_15c * _DAT_005f01ba;
  fStack_e0 = fStack_164 * _DAT_005f01ba;
  *(uint *)((int)&stack0xffffff24 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_98 = fVar2 + fStack_e0;
  fStack_94 = fStack_16c + fStack_dc;
  fStack_90 = fStack_168 + fStack_d8;
  fStack_140 = fVar2 + fStack_e0;
  *(uint *)((int)&stack0xfffffec4 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffec8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_1c = fVar1;
  if (fVar1 <= 0.0) {
    fStack_160 = 0.0;
    fStack_164 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_164 = fStack_164 * fVar1;
    fStack_160 = fStack_160 * fVar1;
    fStack_15c = fStack_15c * fVar1;
  }
  fStack_134 = 0.0;
  uStack_130 = 0xbf800000;
  uStack_12c = 0;
  fStack_160 = fStack_160 * _DAT_005f01be;
  fStack_15c = fStack_15c * _DAT_005f01be;
  fStack_164 = fStack_164 * _DAT_005f01be;
  if (&stack0xfffffe9c != &stack0xfffffecc) {
    fStack_160 = -1.0;
    fStack_15c = 0.0;
    fStack_164 = 0.0;
  }
  fStack_44 = *(float *)(param_1 + 0x11354) * param_2;
  fStack_40 = *(float *)(param_1 + 0x11358) * param_2;
  fStack_3c = *(float *)(param_1 + 0x1135c) * param_2;
  fStack_128 = fStack_44;
  (&stack0xfffffedc)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xfffffee0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_194 = fStack_128 * _DAT_005f01c2;
  fStack_190 = fStack_124 * _DAT_005f01c2;
  fStack_18c = fStack_120 * _DAT_005f01c2;
  fStack_110 = fStack_128 * _DAT_005f01c2;
  *(float *)((int)&stack0xfffffef4 + (uint)bVar5 * -8) =
       (&stack0xfffffe70)[(uint)bVar5 * 0xfffffffe];
  *(uint *)((int)&stack0xfffffef8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xfffffe74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  iVar3 = FUN_0040d060(SQRT(fStack_108 * fStack_108 +
                            fStack_110 * fStack_110 + fStack_10c * fStack_10c) +
                       (float)_DAT_005f01c6);
  if (iVar3 != 0) {
    FUN_004c9730(0x01CB8284,&stack0xfffffec0,&stack0xfffffe9c,1);
  }
  iVar3 = *(int *)(param_1 + 0x11868) + -1;
  *(int *)(param_1 + 0x11868) = iVar3;
  if ((*(int *)(param_1 + 0x11864) != 0) && (iVar3 == 0)) {
    FUN_004089d0(param_1);
    uStack_198 = 0x40000000;
    uStack_1a0 = 0;
    uStack_19c = 0xbf000000;
    FUN_00408cf0(param_1,&stack0xfffffe60);
    uStack_74 = uStack_b0;
    *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff58 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    uStack_158 = 0;
    uStack_150 = 0x3f000000;
    uStack_154 = 0x3e4ccccd;
    FUN_00591530(&stack0xfffffea8,*(int *)(param_1 + 0x11850) * 0x30 + param_1 + 0x1134);
    puVar6 = &stack0xfffffeb4;
    uStack_14c = uStack_11c;
    *(uint *)((int)&stack0xfffffeb8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffee8 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffeec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d70(param_1,puVar6);
    uVar7 = 0x4000;
    puVar6 = &stack0xffffff8c;
    uVar4 = 0x3fc00000;
    uStack_80 = uStack_104;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff00 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff04 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_0049d230(0x01C3DEB4,&stack0xffffff80,uVar4,puVar6,uVar7);
    FUN_00408a10(param_1);
  }
  if (*(int *)(param_1 + 0x11868) == 0) {
    *(uint *)(param_1 + 0x11868) = 2;
  }
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar3 + 0x24) == 0) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      param_2 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = param_2;
      if (param_2 <= 0.0) {
        *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
        uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11741);
        *(uint *)(param_1 + 0x11848) = uVar4;
      }
    }
  }
  else {
    FUN_00551050(*(uint *)(param_1 + 0x11848));
  }
  if (*(int *)(param_1 + 0x10a78) != 0) {
    iStack_20 = param_1 + 0x10af8;
    iVar3 = FUN_0059daa0(iStack_20,"Chasing");
    if ((((iVar3 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20),
         fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28),
         fStack_24 = SQRT(fVar2 * fVar2 + fVar1 * fVar1), _DAT_005ff350 < fStack_24)) &&
        (fStack_24 <= _DAT_005ff354)) &&
       (fStack_14 = (float)FUN_0040cf60(0,0x3f800000), (float)_DAT_005f01ce < fStack_14)) {
      FUN_00408de0(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
      uStack_f8 = uStack_68;
      (&stack0xffffff0c)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff9c + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff10 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_f4 = 0.0;
      FUN_005838f0(&stack0xffffff08);
      uStack_5c = uStack_a4;
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff60 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (ABS(fStack_58) < (float)_DAT_005f01d6) {
        FUN_0059d8e0(iStack_20,"LeapAttack");
        return;
      }
    }
  }
  return;
}
