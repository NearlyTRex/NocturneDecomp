// Name: FUN_00576ab0
// Address: 00576ab0
// Address Range: [[00576ab0, 00577472]]
// Convention: unknown
// Signature: void FUN_00576ab0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576ab0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1188 [958];
  float *pfVar9;
  byte auStack_260 [48];
  uint auStack_230 [12];
  byte auStack_200 [48];
  uint auStack_1d0 [12];
  float fStack_1a0;
  float afStack_19c [4];
  float fStack_18c;
  float afStack_188 [3];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [4];
  float afStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
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
  float afStack_d0 [4];
  uint uStack_c0;
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
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float *pfStack_28;
  float *pfStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = FUN_004ce100((uint *)(param_1 + 0x20),0x42c80000);
  if (iVar4 == 0) {
    iVar4 = FUN_004ce100((uint *)(param_1 + 0x430),0x42c80000);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x430);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x434);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x438);
    return;
  }
  fStack_14 = (float)FUN_0040cf60(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x45c) = fStack_14 + *(float *)(param_1 + 0x45c);
  fStack_14 = (float)FUN_0040cf60(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x460) = fStack_14 + *(float *)(param_1 + 0x460);
  fStack_14 = (float)FUN_0040cf60(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x464) = fStack_14 + *(float *)(param_1 + 0x464);
  iVar4 = 0x01E661B8;
  afStack_170[0] = 4.0;
  afStack_170[1] = 0.0;
  afStack_170[2] = 0.0;
  if ((float *)(0x01E661B8 + 0x15ac70) != afStack_19c + 0xb) {
    *(float *)(0x01E661B8 + 0x15ac70) = 4.0;
    *(uint *)(iVar4 + 0x15ac74) = 0;
    *(uint *)(iVar4 + 0x15ac78) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x470) - param_2;
  *(float *)(param_1 + 0x470) = fVar1;
  iVar4 = 0x01E661B8;
  if (fVar1 <= 0.0) {
    if ((uint *)(param_1 + 0x474) != (uint *)(0x01E661B8 + 0x15ac70)) {
      *(uint *)(param_1 + 0x474) = *(uint *)(0x01E661B8 + 0x15ac70);
      *(uint *)(param_1 + 0x478) = *(uint *)(iVar4 + 0x15ac74);
      *(uint *)(param_1 + 0x47c) = *(uint *)(iVar4 + 0x15ac78);
    }
    fStack_14 = (float)FUN_0040cf60(0xc1200000,0x41200000);
    *(float *)(param_1 + 0x474) = fStack_14 + *(float *)(param_1 + 0x474);
    fStack_14 = (float)FUN_0040cf60(0x41700000,0x41c80000);
    *(float *)(param_1 + 0x478) = fStack_14 + *(float *)(param_1 + 0x478);
    fStack_14 = (float)FUN_0040cf60(0xc1200000,0x41200000);
    *(float *)(param_1 + 0x47c) = fStack_14 + *(float *)(param_1 + 0x47c);
    fStack_14 = (float)FUN_0040cf60(0x40c00000,0x41a00000);
    *(float *)(param_1 + 0x470) = fStack_14;
  }
  pfVar5 = (float *)(param_1 + 0x474);
  fStack_d4 = *(float *)(0x01E661B8 + 0x15ac70) - *pfVar5;
  afStack_d0[0] = *(float *)(0x01E661B8 + 0x15ac74) - *(float *)(param_1 + 0x478);
  afStack_d0[1] = *(float *)(0x01E661B8 + 0x15ac78) - *(float *)(param_1 + 0x47c);
  fStack_140 = fStack_d4;
  afStack_160[(uint)bVar8 * -2 + 9] = afStack_d0[(uint)bVar8 * -2];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_74 = fStack_140 * _DAT_005ecd2e;
  fStack_70 = fStack_13c * _DAT_005ecd2e;
  fStack_6c = fStack_138 * _DAT_005ecd2e;
  afStack_160[2] = fStack_140 * _DAT_005ecd2e;
  afStack_160[(uint)bVar8 * -2 + 3] = afStack_d0[(uint)bVar8 * -2 + 0x18];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
  pfVar9 = (float *)(param_1 + 0x45c);
  *pfVar5 = *pfVar5 + afStack_160[2];
  *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) + afStack_160[3];
  *(float *)(param_1 + 0x47c) = *(float *)(param_1 + 0x47c) + fStack_150;
  fStack_f8 = *pfVar5 - *pfVar9;
  fStack_f4 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x460);
  fStack_f0 = *(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x464);
  fStack_5c = *pfVar5 - *pfVar9;
  afStack_d0[(uint)bVar8 * -2 + 0x1e] = afStack_160[(uint)bVar8 * -2 + 0x1b];
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
  fStack_8c = fStack_5c * _DAT_005ecd32;
  fStack_88 = fStack_58 * _DAT_005ecd32;
  fStack_84 = fStack_54 * _DAT_005ecd32;
  fStack_bc = fStack_5c * _DAT_005ecd32;
  afStack_d0[(uint)bVar8 * -2 + 6] = afStack_d0[(uint)bVar8 * -2 + 0x12];
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
  *pfVar9 = *pfVar9 + fStack_bc;
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x460) + fStack_b8;
  *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) + fStack_b4;
  pfVar5 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
  fStack_14c = *(float *)(param_1 + 0x20);
  afStack_160[(uint)bVar8 * -2 + 6] = *pfVar5;
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] = pfVar5[(uint)bVar8 * -2 + 1];
  fStack_18 = -*(float *)(param_1 + 0x480);
  fStack_dc = -*(float *)(param_1 + 0x480);
  pfStack_20 = (float *)(param_1 + 0x444);
  fStack_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_ec = *pfVar9 - *(float *)(param_1 + 0x444);
  fStack_e8 = *(float *)(param_1 + 0x460) - *(float *)(param_1 + 0x448);
  fStack_e4 = *(float *)(param_1 + 0x464) - *(float *)(param_1 + 0x44c);
  fStack_50 = fStack_ec;
  afStack_d0[(uint)bVar8 * -2 + 0x21] = afStack_160[(uint)bVar8 * -2 + 0x1e];
  fVar1 = fStack_18;
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
  pfVar5 = (float *)(param_1 + 0x468);
  fStack_80 = fStack_50 * *pfVar5;
  fStack_7c = fStack_4c * *pfVar5;
  fStack_78 = fStack_48 * *pfVar5;
  fStack_104 = fStack_50 * *pfVar5;
  afStack_160[(uint)bVar8 * -2 + 0x18] = afStack_d0[(uint)bVar8 * -2 + 0x15];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
  fStack_dc = fVar1 + fStack_100;
  fStack_e0 = fStack_104;
  fStack_d8 = fStack_fc;
  FUN_00408d30(param_1,pfVar9);
  afStack_170[3] = fStack_38;
  afStack_160[(uint)bVar8 * -2] = afStack_d0[(uint)bVar8 * -2 + 0x27];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28];
  pfVar5 = (float *)(param_1 + 0x450);
  fStack_98 = afStack_170[3] * _DAT_005ecd36;
  fStack_94 = afStack_160[0] * _DAT_005ecd36;
  fStack_90 = afStack_160[1] * _DAT_005ecd36;
  fStack_44 = afStack_170[3] * _DAT_005ecd36;
  afStack_d0[(uint)bVar8 * -2 + 0x24] = afStack_d0[(uint)bVar8 * -2 + 0xf];
  pfVar9 = pfStack_20;
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
  fVar1 = *(float *)(param_1 + 0x454) * _DAT_005ecd3a;
  fVar2 = *(float *)(param_1 + 0x458) * _DAT_005ecd3a;
  fStack_110 = fStack_104 * param_2;
  fStack_10c = fStack_dc * param_2;
  fStack_108 = fStack_fc * param_2;
  *pfVar5 = *pfVar5 * _DAT_005ecd3a;
  *(float *)(param_1 + 0x454) = fVar1;
  *(float *)(param_1 + 0x458) = fVar2;
  *pfVar5 = *pfVar5 + fStack_44;
  *(float *)(param_1 + 0x454) = *(float *)(param_1 + 0x454) + fStack_40;
  *(float *)(param_1 + 0x458) = *(float *)(param_1 + 0x458) + fStack_3c;
  fStack_128 = fStack_104 * param_2;
  afStack_160[(uint)bVar8 * -2 + 0xf] = afStack_160[(uint)bVar8 * -2 + 0x15];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
  *pfVar9 = *pfVar9 + fStack_128;
  pfVar9[1] = pfVar9[1] + fStack_124;
  pfVar9[2] = pfVar9[2] + fStack_120;
  fVar1 = SQRT(*(float *)(param_1 + 0x458) * *(float *)(param_1 + 0x458) +
               *pfVar5 * *pfVar5 + *(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454)) *
          _DAT_005ecd3e;
  if (1.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *pfVar5 = *pfVar5 * fVar1;
    *(float *)(param_1 + 0x454) = *(float *)(param_1 + 0x454) * fVar1;
    *(float *)(param_1 + 0x458) = *(float *)(param_1 + 0x458) * fVar1;
  }
  fStack_1a0 = *(float *)(param_1 + 0x444) * param_2;
  afStack_19c[0] = *(float *)(param_1 + 0x448) * param_2;
  afStack_19c[1] = *(float *)(param_1 + 0x44c) * param_2;
  fStack_134 = fStack_1a0;
  afStack_160[(uint)bVar8 * -2 + 0xc] = afStack_19c[(uint)bVar8 * -2];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_a4 = *(float *)(param_1 + 0x450) * param_2;
  fStack_a0 = *(float *)(param_1 + 0x454) * param_2;
  fStack_9c = *(float *)(param_1 + 0x458) * param_2;
  afStack_188[0] = fStack_a4;
  afStack_19c[(uint)bVar8 * -2 + 6] = afStack_d0[(uint)bVar8 * -2 + 0xc];
  afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  fStack_14 = (float)FUN_00537030(0x01E661B8,*(uint *)(param_1 + 0x20),
                                  *(uint *)(param_1 + 0x28),fStack_134,fStack_12c,
                                  *(uint *)(param_1 + 0x46c),*(uint *)(param_1 + 0x43c),
                                  *(uint *)(param_1 + 0x440));
  bVar3 = false;
  if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
    fStack_134 = fStack_134 * fStack_14;
    fStack_130 = fStack_130 * fStack_14;
    fStack_12c = fStack_12c * fStack_14;
    bVar3 = true;
  }
  pfVar5 = (float *)(param_1 + 0x20);
  *pfVar5 = *pfVar5 + fStack_134;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_130;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_12c;
  fStack_14 = (float)FUN_00534ea0(0x01E661B8,pfVar5,
                                  *(float *)(param_1 + 0x46c) * (float)_DAT_005ecd46);
  fStack_2c = fStack_14;
  if (fStack_14 <= *(float *)(param_1 + 0x24)) {
    if (!bVar3) goto LAB_005772a7;
  }
  else {
    fVar1 = (float)_DAT_005ecd4e;
    *(float *)(param_1 + 0x24) = fStack_14;
    if (*(float *)(param_1 + 0x46c) * fVar1 + fStack_148 < *(float *)(param_1 + 0x24)) {
      *pfVar5 = fStack_14c;
      *(float *)(param_1 + 0x24) = fStack_148;
      *(float *)(param_1 + 0x28) = fStack_144;
    }
  }
  fVar1 = *(float *)(param_1 + 0x454) * (float)"?333?CTrigger"._1_4_;
  fVar2 = *(float *)(param_1 + 0x458) * (float)"?333?CTrigger"._1_4_;
  *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x450) * (float)"?333?CTrigger"._1_4_
  ;
  *(float *)(param_1 + 0x454) = fVar1;
  *(float *)(param_1 + 0x458) = fVar2;
LAB_005772a7:
  fStack_b0 = *(float *)(param_1 + 0x20) - fStack_14c;
  fStack_ac = *(float *)(param_1 + 0x24) - fStack_148;
  fStack_a8 = *(float *)(param_1 + 0x28) - fStack_144;
  afStack_19c[2] = fStack_b0;
  afStack_19c[(uint)bVar8 * -2 + 3] = afStack_d0[(uint)bVar8 * -2 + 9];
  afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  param_2 = 1.0 / param_2;
  fStack_17c = afStack_19c[2] * param_2;
  fStack_178 = afStack_19c[3] * param_2;
  fStack_174 = fStack_18c * param_2;
  afStack_d0[2] = afStack_19c[2] * param_2;
  afStack_d0[(uint)bVar8 * -2 + 3] = afStack_19c[(uint)bVar8 * -2 + 9];
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  if ((float *)(param_1 + 0x444) != afStack_d0 + 2) {
    *(float *)(param_1 + 0x444) = afStack_d0[2];
    *(float *)(param_1 + 0x448) = afStack_d0[3];
    *(uint *)(param_1 + 0x44c) = uStack_c0;
  }
  pfStack_28 = (float *)(param_1 + 0x30);
  FUN_00591c10(auStack_260,&DAT_0265370c,pfStack_28);
  FUN_00591c10(auStack_200,&DAT_0265370c,afStack_19c + 5);
  FUN_005916b0(auStack_200,auStack_260);
  puVar6 = auStack_1d0;
  puVar7 = auStack_230;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  FUN_00591de0(auStack_230);
  pfVar5 = pfStack_28;
  fStack_11c = fStack_68;
  afStack_160[(uint)bVar8 * -2 + 0x12] = afStack_d0[(uint)bVar8 * -2 + 0x1b];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
  if (afStack_160 + 0x11 != pfVar5) {
    *pfVar5 = fStack_11c;
    pfVar5[1] = fStack_118;
    pfVar5[2] = fStack_114;
  }
  FUN_00408ae0(param_1);
  return;
}
