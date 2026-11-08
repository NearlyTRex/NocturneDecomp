// Name: FUN_004a4dc0
// Address: 004a4dc0
// Address Range: [[004a4dc0, 004a5760]]
// Convention: unknown
// Signature: void FUN_004a4dc0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4dc0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1274 [1014];
  uint uStack_28c;
  uint uStack_280;
  uint uStack_274;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  uint uStack_250;
  uint uStack_244;
  uint uStack_238;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  float fStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  FUN_0057b160(param_1,param_2);
  if ((*(int *)(param_1 + 0x2d4) == 2) ||
     (iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01c5bc48), iVar1 != 0)) {
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x58c) <= *(int *)(iVar1 + 0x20b80))) {
      iVar1 = FUN_00556700(*(uint *)(param_1 + 0x25c4));
      if (iVar1 == 0) {
        uVar4 = FUN_005609d0(0x02CF5680,param_1,"wp_firestaff_loop.wav",param_1 + 0x20);
        *(uint *)(param_1 + 0x25c4) = uVar4;
      }
      uStack_1cc = 0;
      uStack_1c8 = 0x40200000;
      uStack_1c4 = 0;
      FUN_00408b80(param_1,&stack0xfffffe34);
      uStack_70 = uStack_274;
      (&stack0xffffff94)[(uint)bVar6 * 0xfffffffe] =
           *(uint *)(&stack0xfffffd90 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffd94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x634) = uStack_70;
      *(uint *)(param_1 + 0x638) = uStack_6c;
      *(uint *)(param_1 + 0x63c) = uStack_68;
      uStack_198 = 0x40300000;
      uStack_19c = 0;
      uStack_194 = 0;
      FUN_00408b80(param_1,&stack0xfffffe64);
      uStack_124 = uStack_250;
      (&stack0xfffffee0)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffdb4 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffdb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x8d8) = uStack_124;
      *(float *)(param_1 + 0x8dc) = fStack_120;
      *(uint *)(param_1 + 0x8e0) = uStack_11c;
      uStack_16c = 0;
      uStack_168 = 0x40400000;
      uStack_164 = 0;
      FUN_00408b80(param_1,&stack0xfffffe94);
      uStack_1b4 = uStack_244;
      *(uint *)((int)&stack0xfffffe50 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffdc0 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffe54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffdc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0xb7c) = uStack_1b4;
      *(uint *)(param_1 + 0xb80) = uStack_1b0;
      *(uint *)(param_1 + 0xb84) = uStack_1ac;
      uStack_12c = 0x40500000;
      uStack_128 = 0;
      uStack_130 = 0;
      FUN_00408b80(param_1,&stack0xfffffed0);
      uStack_220 = uStack_238;
      (&stack0xfffffde4)[(uint)bVar6 * 0xfffffffe] =
           *(uint *)(&stack0xfffffdcc + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffde8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffdd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0xe20) = uStack_220;
      *(uint *)(param_1 + 0xe24) = uStack_21c;
      *(uint *)(param_1 + 0xe28) = uStack_218;
      uStack_e8 = 0;
      uStack_e4 = 0x40600000;
      uStack_e0 = 0;
      FUN_00408b80(param_1,&stack0xffffff18);
      uStack_208 = uStack_ac;
      (&stack0xfffffdfc)[(uint)bVar6 * 0xfffffffe] =
           *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffe00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x10c4) = uStack_208;
      *(uint *)(param_1 + 0x10c8) = uStack_204;
      *(uint *)(param_1 + 0x10cc) = uStack_200;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0x40700000;
      FUN_00408b80(param_1,&stack0xffffff24);
      uStack_a0 = uStack_118;
      *(uint *)((int)&stack0xffffff64 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffeec + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x1368) = uStack_a0;
      *(uint *)(param_1 + 0x136c) = uStack_9c;
      *(uint *)(param_1 + 0x1370) = uStack_98;
      uStack_268 = 0;
      uStack_264 = 0xc0200000;
      uStack_260 = 0;
      FUN_00408b80(param_1,&stack0xfffffd98);
      uStack_4c = uStack_1f0;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffe14 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe18 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x160c) = uStack_4c;
      *(uint *)(param_1 + 0x1610) = uStack_48;
      *(uint *)(param_1 + 0x1614) = uStack_44;
      uStack_60 = 0xc0300000;
      uStack_5c = 0;
      uStack_64 = 0;
      FUN_00408b80(param_1,&stack0xffffff9c);
      uStack_100 = uStack_1d8;
      *(uint *)((int)&stack0xffffff04 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe2c + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff08 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x18b0) = uStack_100;
      *(uint *)(param_1 + 0x18b4) = uStack_fc;
      *(uint *)(param_1 + 0x18b8) = uStack_f8;
      uStack_22c = 0;
      uStack_228 = 0xc0400000;
      uStack_224 = 0;
      FUN_00408b80(param_1,&stack0xfffffdd4);
      uStack_10c = uStack_1c0;
      *(uint *)((int)&stack0xfffffef8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffe44 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffefc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x1b54) = uStack_10c;
      *(uint *)(param_1 + 7000) = uStack_108;
      *(uint *)(param_1 + 0x1b5c) = uStack_104;
      uStack_78 = 0xc0500000;
      uStack_74 = 0;
      uStack_7c = 0;
      FUN_00408b80(param_1,&stack0xffffff84);
      uStack_184 = uStack_13c;
      *(uint *)((int)&stack0xfffffe80 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffec8 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffe84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffecc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x1df8) = uStack_184;
      *(uint *)(param_1 + 0x1dfc) = uStack_180;
      *(uint *)(param_1 + 0x1e00) = uStack_17c;
      uStack_d0 = 0;
      uStack_cc = 0xc0600000;
      uStack_c8 = 0;
      FUN_00408b80(param_1,&stack0xffffff30);
      uStack_160 = uStack_28c;
      (&stack0xfffffea4)[(uint)bVar6 * 0xfffffffe] =
           *(uint *)(&stack0xfffffd78 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffea8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffd7c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x209c) = uStack_160;
      *(uint *)(param_1 + 0x20a0) = uStack_15c;
      *(uint *)(param_1 + 0x20a4) = uStack_158;
      uStack_b4 = 0xc0700000;
      uStack_b0 = 0;
      uStack_b8 = 0;
      FUN_00408b80(param_1,&stack0xffffff48);
      uStack_148 = uStack_280;
      (&stack0xfffffebc)[(uint)bVar6 * 0xfffffffe] =
           *(uint *)(&stack0xfffffd84 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffec0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffd88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      iVar1 = param_1 + 0x614;
      *(uint *)(param_1 + 0x2340) = uStack_148;
      *(uint *)(param_1 + 0x2344) = uStack_144;
      *(uint *)(param_1 + 0x2348) = uStack_140;
      do {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))(iVar1,param_2);
        iVar1 = iVar1 + 0x2a4;
      } while (iVar1 != param_1 + 0x25c4);
      uStack_150 = 0x40400000;
      uStack_154 = 0;
      uStack_14c = 0;
      FUN_00408b00(param_1,&stack0xfffffeac);
      fStack_190 = fStack_94;
      (&stack0xfffffe74)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff70 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffe78 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffda4 != &stack0xfffffe70) {
        fStack_25c = fStack_190;
        fStack_258 = fStack_18c;
        fStack_254 = fStack_188;
      }
      fStack_18 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_1c = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fVar2 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_14 = fVar2;
      fStack_30 = fStack_1c;
      fStack_2c = fStack_18;
      fStack_88 = *(float *)(param_1 + 0x20) - fStack_25c;
      fStack_84 = *(float *)(param_1 + 0x24) - fStack_258;
      fStack_80 = *(float *)(param_1 + 0x28) - fStack_254;
      fStack_1e4 = fStack_88;
      *(uint *)((int)&stack0xfffffe20 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffe24 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_1a8 = fStack_1e4 + fVar2;
      fStack_1a4 = fStack_1e0 + fStack_30;
      fStack_1a0 = fStack_1dc + fStack_2c;
      fStack_40 = fStack_1e4 + fVar2;
      (&stack0xffffffc4)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffe5c + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffe60 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffdec != &stack0xffffffc0) {
        fStack_214 = fStack_40;
        fStack_210 = fStack_3c;
        uStack_20c = uStack_38;
      }
      fStack_1c = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_18 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fVar2 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_14 = fVar2;
      fStack_24 = fStack_18;
      fStack_20 = fStack_1c;
      fStack_178 = *(float *)(param_1 + 0x20) + fStack_25c;
      fStack_174 = *(float *)(param_1 + 0x24) + fStack_258;
      fStack_170 = *(float *)(param_1 + 0x28) + fStack_254;
      fStack_f4 = fStack_178;
      *(uint *)((int)&stack0xffffff10 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffe8c + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff14 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffe90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_c4 = fStack_f4 + fVar2;
      fStack_c0 = fStack_f0 + fStack_24;
      fStack_bc = fStack_ec + fStack_20;
      fStack_58 = fStack_f4 + fVar2;
      (&stack0xffffffac)[(uint)bVar6 * 0xfffffffe] = (&stack0xffffff40)[(uint)bVar6 * 0xfffffffe];
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffe04 != &stack0xffffffa8) {
        fStack_1fc = fStack_58;
        uStack_1f8 = uStack_54;
        uStack_1f4 = uStack_50;
      }
      iVar1 = param_1 + 0x594;
      FUN_0045aae0(iVar1,&stack0xfffffdec);
      fStack_14 = (float)FUN_0040ce40(0x40f00000,0x41080000);
      FUN_0045ab30(iVar1,fStack_14);
      iVar3 = *(int *)(param_1 + 0x588) / 2;
      *(int *)(param_1 + 0x5d0) = iVar3;
      uVar4 = 0x01ED78C8;
      iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
      iVar5 = iVar3 >> 0x1f;
      *(char *)(param_1 + 0x5b0) =
           (char)((int)(((iVar3 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
      FUN_005372f0(uVar4,iVar1);
      iVar1 = param_1 + 0x5d4;
      FUN_0045aae0(iVar1,&stack0xfffffe04);
      fStack_14 = (float)FUN_0040ce40(0x40f00000,0x41080000);
      FUN_0045ab30(iVar1,fStack_14);
      iVar3 = *(int *)(param_1 + 0x588) / 2;
      *(int *)(param_1 + 0x610) = iVar3;
      iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
      iVar5 = iVar3 >> 0x1f;
      *(char *)(param_1 + 0x5f0) =
           (char)((int)(((iVar3 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
      FUN_005372f0(0x01ED78C8,iVar1);
      return;
    }
    FUN_00556be0(*(uint *)(param_1 + 0x25c4));
    *(uint *)(param_1 + 0x25c4) = 0;
  }
  return;
}
