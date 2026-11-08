// Name: FUN_0048a420
// Address: 0048a420
// Address Range: [[0048a420, 0048b011]]
// Convention: unknown
// Signature: void FUN_0048a420(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a420(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_11e8 [982];
  uint *puVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  byte auStack_26c [4];
  float fStack_268;
  uint uStack_244;
  uint uStack_23c;
  int iStack_238;
  uint uStack_234;
  float afStack_230 [6];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [4];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  float afStack_19c [4];
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float afStack_178 [4];
  float fStack_168;
  uint uStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  uint uStack_138;
  float afStack_134 [3];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float afStack_e8 [5];
  uint uStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  uint uStack_60;
  float afStack_5c [4];
  float afStack_4c [4];
  uint uStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar6 = &uStack_b0;
  uStack_b0 = afStack_e8[2];
  afStack_ac[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 3];
  afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  FUN_00408b80(param_1,puVar6);
  fStack_1dc = afStack_10c[2];
  afStack_1fc[(uint)bVar5 * -2 + 9] = afStack_10c[(uint)bVar5 * -2 + 3];
  iVar1 = param_1;
  fVar7 = param_2;
  afStack_1fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  FUN_0057b160(iVar1,fVar7);
  *(float *)(param_1 + 0x5a8) = *(float *)(param_1 + 0x5a8) - param_2;
  if (*(float *)(param_1 + 0x5a8) <= 0.0) {
    *(uint *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x598) == 0) {
    if (*(int *)(param_1 + 0x594) != 0) {
      FUN_00556be0(_DAT_01c6e35c);
      _DAT_01c6e35c = 0;
    }
  }
  else {
    iStack_18 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_02d24d7c);
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
    pfVar3 = afStack_160 + 0xb;
    afStack_134[0] = (float)uStack_d4;
    afStack_160[(uint)bVar5 * -2 + 0xc] = afStack_e8[(uint)bVar5 * -2 + 6];
    afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    FUN_00408b80(param_1,pfVar3);
    fStack_110 = afStack_5c[3];
    afStack_10c[(uint)bVar5 * -2] = afStack_4c[(uint)bVar5 * -2];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (afStack_1c0 + 5 != &fStack_110) {
      fStack_1ac = fStack_110;
      fStack_1a8 = afStack_10c[0];
      uStack_1a4 = afStack_10c[1];
    }
    if (iStack_18 == 0) {
      FUN_004a3af0(0x01C73654,afStack_1c0 + 5,&DAT_02cfd900,1,0,2);
      uVar8 = 7;
      uVar2 = 4;
    }
    else {
      uVar8 = 4;
      uVar2 = 3;
    }
    FUN_004a3af0(0x01C73654,afStack_1c0 + 5,&DAT_02cfd900,1,0,uVar8);
    *(float *)(param_1 + 0x5a4) = *(float *)(param_1 + 0x5a4) - param_2;
    if (*(float *)(param_1 + 0x5a4) <= 0.0) {
      if (afStack_19c + 5 != afStack_1fc + 8) {
        fStack_188 = fStack_1dc;
        fStack_184 = fStack_1d8;
        fStack_180 = fStack_1d4;
      }
      iVar1 = *(int *)(param_1 + 0x59c);
      if ((iVar1 == 0) || (*(float *)(iVar1 + 0x2538) <= 0.0)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
        uStack_140 = afStack_160[2];
        afStack_160[(uint)bVar5 * -2 + 9] = afStack_160[(uint)bVar5 * -2 + 3];
        afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        afStack_4c[2] = (float)uStack_140;
        uStack_3c = uStack_138;
        puVar6 = &uStack_1a0;
        afStack_4c[3] = fStack_13c + _DAT_005bdd4e;
        uStack_1a0 = uStack_140;
        afStack_19c[(uint)bVar5 * -2] = afStack_4c[(uint)bVar5 * -2 + 3];
        afStack_19c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        FUN_00408b80(param_1,puVar6);
        afStack_19c[2] = fStack_1e8;
        afStack_19c[(uint)bVar5 * -2 + 3] = afStack_1fc[(uint)bVar5 * -2 + 6];
        afStack_19c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_1fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if (afStack_178 + 2 != afStack_19c + 2) {
          afStack_178[2] = afStack_19c[2];
          afStack_178[3] = afStack_19c[3];
          fStack_168 = fStack_18c;
        }
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        pfVar3 = afStack_230;
        pfVar4 = &fStack_218;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar4 = *pfVar3;
          pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
          pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_1c4 = fStack_218 + fStack_20c;
        afStack_1c0[0] = fStack_214 + fStack_208;
        afStack_1c0[1] = fStack_210 + fStack_204;
        afStack_1fc[2] = fStack_218 + fStack_20c;
        afStack_1fc[(uint)bVar5 * -2 + 3] = afStack_1c0[(uint)bVar5 * -2];
        afStack_1fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_1c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        afStack_1c0[2] = afStack_1fc[2] * _DAT_005bdd52;
        afStack_1c0[3] = afStack_1fc[3] * _DAT_005bdd52;
        fStack_1b0 = fStack_1ec * _DAT_005bdd52;
        fStack_8c = afStack_1fc[2] * _DAT_005bdd52;
        afStack_ac[(uint)bVar5 * -2 + 9] = afStack_1c0[(uint)bVar5 * -2 + 3];
        afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_1c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (afStack_e8 + 0xb != afStack_ac + 8) {
          fStack_bc = fStack_8c;
          fStack_b8 = fStack_88;
          fStack_b4 = fStack_84;
        }
        iVar1 = *(int *)(param_1 + 0x59c);
        afStack_ac[2] = *(float *)(iVar1 + 0x20) + fStack_bc;
        afStack_ac[3] = *(float *)(iVar1 + 0x24) + fStack_b8;
        fStack_9c = *(float *)(iVar1 + 0x28) + fStack_b4;
        fStack_98 = afStack_ac[2];
        afStack_ac[(uint)bVar5 * -2 + 6] = afStack_ac[(uint)bVar5 * -2 + 3];
        afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (afStack_178 + 2 != afStack_ac + 5) {
          afStack_178[2] = fStack_98;
          afStack_178[3] = fStack_94;
          fStack_168 = fStack_90;
        }
        afStack_178[3] = fStack_b8 * _DAT_005bdd52 + afStack_178[3];
      }
      fStack_c4 = afStack_178[3] - fStack_184;
      fStack_c0 = fStack_168 - fStack_180;
      fStack_c8 = afStack_178[2] - fStack_188;
      fStack_17c = afStack_178[2] - fStack_188;
      afStack_178[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 9];
      afStack_178[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      if (afStack_1fc + 0xb != &fStack_17c) {
        fStack_1d0 = fStack_17c;
        fStack_1cc = afStack_178[0];
        fStack_1c8 = afStack_178[1];
      }
      fStack_1d0 = fStack_1d0 * _DAT_005bdd56;
      fStack_1cc = fStack_1cc * _DAT_005bdd56;
      fStack_1c8 = fStack_1c8 * _DAT_005bdd56;
      fStack_128 = fStack_188 + fStack_1d0;
      fStack_124 = fStack_184 + fStack_1cc;
      fStack_120 = fStack_180 + fStack_1c8;
      fStack_ec = fStack_128;
      afStack_e8[(uint)bVar5 * -2] = afStack_160[(uint)bVar5 * -2 + 0xf];
      afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      if (afStack_160 + 0x11 != &fStack_ec) {
        fStack_11c = fStack_ec;
        fStack_118 = afStack_e8[0];
        fStack_114 = afStack_e8[1];
      }
      fStack_28 = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_2c = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_14 = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_34 = fStack_2c;
      fStack_11c = fStack_11c + fStack_14;
      fStack_30 = fStack_28;
      fStack_118 = fStack_118 + fStack_2c;
      fStack_114 = fStack_114 + fStack_28;
      FUN_004a3c50(0x01C73654,afStack_19c + 5,afStack_160 + 0x11,0,0x3e800000,0x3fa00000,uVar2,
                   0x3e800000,0xffff);
      fStack_74 = afStack_178[2] - fStack_188;
      fStack_70 = afStack_178[3] - fStack_184;
      fStack_6c = fStack_168 - fStack_180;
      fStack_80 = afStack_178[2] - fStack_188;
      afStack_ac[(uint)bVar5 * -2 + 0xc] = afStack_ac[(uint)bVar5 * -2 + 0xf];
      afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      if (afStack_1fc + 0xb != afStack_ac + 0xb) {
        fStack_1d0 = fStack_80;
        fStack_1cc = fStack_7c;
        fStack_1c8 = fStack_78;
      }
      fStack_1d0 = fStack_1d0 * _DAT_005bdd5a;
      fStack_1cc = fStack_1cc * _DAT_005bdd5a;
      fStack_1c8 = fStack_1c8 * _DAT_005bdd5a;
      fStack_200 = fStack_188 + fStack_1d0;
      afStack_1fc[0] = fStack_184 + fStack_1cc;
      afStack_1fc[1] = fStack_180 + fStack_1c8;
      fStack_14c = fStack_200;
      afStack_160[(uint)bVar5 * -2 + 6] = afStack_1fc[(uint)bVar5 * -2];
      afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_1fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (afStack_10c + 5 != afStack_160 + 5) {
        fStack_f8 = fStack_14c;
        fStack_f4 = fStack_148;
        fStack_f0 = fStack_144;
      }
      fStack_2c = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_28 = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_14 = (float)FUN_0040ce40(0xbf800000,0x3f800000);
      fStack_20 = fStack_28;
      fStack_f8 = fStack_f8 + fStack_14;
      fStack_1c = fStack_2c;
      fStack_f4 = fStack_f4 + fStack_28;
      fStack_f0 = fStack_f0 + fStack_2c;
      FUN_004a3c50(0x01C73654,afStack_160 + 0x11,afStack_10c + 5,0,0x3fa00000,0x3fa00000,uVar2,
                   0x3e800000,0xffff);
      FUN_004a3c50(0x01C73654,afStack_10c + 5,afStack_178 + 2,0,0x3fa00000,0x3e800000,uVar2,
                   0x3e800000,0xffff);
      *(uint *)(param_1 + 0x5a4) = 0x3d4ccccd;
      FUN_0045aae0(param_1 + 0x5ac,afStack_160 + 0x11);
      FUN_0045aae0(param_1 + 0x5ec,afStack_10c + 5);
    }
    FUN_005372f0(0x01ED78C8,param_1 + 0x5ac);
    FUN_005372f0(0x01ED78C8,param_1 + 0x5ec);
    if ((*(int *)(param_1 + 0x59c) != 0) && (0.0 < *(float *)(*(int *)(param_1 + 0x59c) + 0x2538)))
    {
      FUN_0042abb0(auStack_26c);
      fStack_268 = param_2 * _DAT_005bdd5e;
      uStack_244 = 10;
      uStack_23c = 0x6f;
      iStack_238 = param_1;
      uStack_234 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 0x154) + 0x108))
                (*(int *)(param_1 + 0x59c),auStack_26c);
      iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,auStack_26c);
      }
      *(uint *)(*(int *)(param_1 + 0x59c) + 0x3254) = 0x3dcccccd;
      if (iStack_18 == 0) {
        *(uint *)(*(int *)(param_1 + 0x59c) + 0x3258) = 2;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x59c) + 0x3258) = 1;
      }
      if (*(float *)(*(int *)(param_1 + 0x59c) + 0x2538) <= 0.0) {
        if ((iVar1 != 0) && (0.0 < *(float *)(iVar1 + 0x2538))) {
          *(uint *)(iVar1 + 0x2538) = *(uint *)(param_1 + 0x5a0);
        }
        uVar9 = 6;
        iVar1 = *(int *)(param_1 + 0x59c);
        uVar8 = 0;
        uVar2 = 1;
        uStack_68 = *(uint *)(iVar1 + 0x20);
        uStack_60 = *(uint *)(iVar1 + 0x28);
        pfVar3 = afStack_ac + 0x14;
        fStack_64 = *(float *)(iVar1 + 0x24) + _DAT_005bdd62;
        uStack_164 = *(uint *)(iVar1 + 0x20);
        afStack_160[(uint)bVar5 * -2] = afStack_ac[(uint)bVar5 * -2 + 0x12];
        afStack_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        afStack_5c[0] = 0.0;
        afStack_5c[1] = 3.0;
        afStack_5c[2] = 0.0;
        FUN_004a3af0(0x01C73654,&uStack_164,pfVar3,uVar2,uVar8,uVar9);
        FUN_005609d0(0x02CF5680,param_1,"wp_exorcism_success.wav",param_1 + 0x20);
        *(uint *)(param_1 + 0x59c) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x598);
  *(uint *)(param_1 + 0x598) = 0;
  *(uint *)(param_1 + 0x594) = uVar2;
  return;
}
