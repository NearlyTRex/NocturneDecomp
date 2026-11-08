// Name: FUN_0056d360
// Address: 0056d360
// Address Range: [[0056d360, 0056dd22]]
// Convention: unknown
// Signature: void FUN_0056d360(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056d360(int param_1,float param_2)

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
  iVar4 = FUN_004d2370((uint *)(param_1 + 0x20),0x42c80000);
  if (iVar4 == 0) {
    iVar4 = FUN_004d2370((uint *)(param_1 + 0x2d4),0x42c80000);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x2d4);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2d8);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x2dc);
    return;
  }
  fStack_14 = (float)FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x300) = fStack_14 + *(float *)(param_1 + 0x300);
  fStack_14 = (float)FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x304) = fStack_14 + *(float *)(param_1 + 0x304);
  fStack_14 = (float)FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x308) = fStack_14 + *(float *)(param_1 + 0x308);
  iVar4 = 0x01ED78C8;
  afStack_170[0] = 4.0;
  afStack_170[1] = 0.0;
  afStack_170[2] = 0.0;
  if ((float *)(0x01ED78C8 + 0x15ac70) != afStack_19c + 0xb) {
    *(float *)(0x01ED78C8 + 0x15ac70) = 4.0;
    *(uint *)(iVar4 + 0x15ac74) = 0;
    *(uint *)(iVar4 + 0x15ac78) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x314) - param_2;
  *(float *)(param_1 + 0x314) = fVar1;
  iVar4 = 0x01ED78C8;
  if (fVar1 <= 0.0) {
    if ((uint *)(param_1 + 0x318) != (uint *)(0x01ED78C8 + 0x15ac70)) {
      *(uint *)(param_1 + 0x318) = *(uint *)(0x01ED78C8 + 0x15ac70);
      *(uint *)(param_1 + 0x31c) = *(uint *)(iVar4 + 0x15ac74);
      *(uint *)(param_1 + 800) = *(uint *)(iVar4 + 0x15ac78);
    }
    fStack_14 = (float)FUN_0040ce40(0xc1200000,0x41200000);
    *(float *)(param_1 + 0x318) = fStack_14 + *(float *)(param_1 + 0x318);
    fStack_14 = (float)FUN_0040ce40(0x41700000,0x41c80000);
    *(float *)(param_1 + 0x31c) = fStack_14 + *(float *)(param_1 + 0x31c);
    fStack_14 = (float)FUN_0040ce40(0xc1200000,0x41200000);
    *(float *)(param_1 + 800) = fStack_14 + *(float *)(param_1 + 800);
    fStack_14 = (float)FUN_0040ce40(0x40c00000,0x41a00000);
    *(float *)(param_1 + 0x314) = fStack_14;
  }
  pfVar5 = (float *)(param_1 + 0x318);
  fStack_d4 = *(float *)(0x01ED78C8 + 0x15ac70) - *pfVar5;
  afStack_d0[0] = *(float *)(0x01ED78C8 + 0x15ac74) - *(float *)(param_1 + 0x31c);
  afStack_d0[1] = *(float *)(0x01ED78C8 + 0x15ac78) - *(float *)(param_1 + 800);
  fStack_140 = fStack_d4;
  afStack_160[(uint)bVar8 * -2 + 9] = afStack_d0[(uint)bVar8 * -2];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_74 = fStack_140 * _DAT_005d65b7;
  fStack_70 = fStack_13c * _DAT_005d65b7;
  fStack_6c = fStack_138 * _DAT_005d65b7;
  afStack_160[2] = fStack_140 * _DAT_005d65b7;
  afStack_160[(uint)bVar8 * -2 + 3] = afStack_d0[(uint)bVar8 * -2 + 0x18];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
  pfVar9 = (float *)(param_1 + 0x300);
  *pfVar5 = *pfVar5 + afStack_160[2];
  *(float *)(param_1 + 0x31c) = *(float *)(param_1 + 0x31c) + afStack_160[3];
  *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + fStack_150;
  fStack_f8 = *pfVar5 - *pfVar9;
  fStack_f4 = *(float *)(param_1 + 0x31c) - *(float *)(param_1 + 0x304);
  fStack_f0 = *(float *)(param_1 + 800) - *(float *)(param_1 + 0x308);
  fStack_5c = *pfVar5 - *pfVar9;
  afStack_d0[(uint)bVar8 * -2 + 0x1e] = afStack_160[(uint)bVar8 * -2 + 0x1b];
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
  fStack_8c = fStack_5c * _DAT_005d65bb;
  fStack_88 = fStack_58 * _DAT_005d65bb;
  fStack_84 = fStack_54 * _DAT_005d65bb;
  fStack_bc = fStack_5c * _DAT_005d65bb;
  afStack_d0[(uint)bVar8 * -2 + 6] = afStack_d0[(uint)bVar8 * -2 + 0x12];
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
  *pfVar9 = *pfVar9 + fStack_bc;
  *(float *)(param_1 + 0x304) = *(float *)(param_1 + 0x304) + fStack_b8;
  *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x308) + fStack_b4;
  pfVar5 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
  fStack_14c = *(float *)(param_1 + 0x20);
  afStack_160[(uint)bVar8 * -2 + 6] = *pfVar5;
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] = pfVar5[(uint)bVar8 * -2 + 1];
  fStack_18 = -*(float *)(param_1 + 0x324);
  fStack_dc = -*(float *)(param_1 + 0x324);
  pfStack_20 = (float *)(param_1 + 0x2e8);
  fStack_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_ec = *pfVar9 - *(float *)(param_1 + 0x2e8);
  fStack_e8 = *(float *)(param_1 + 0x304) - *(float *)(param_1 + 0x2ec);
  fStack_e4 = *(float *)(param_1 + 0x308) - *(float *)(param_1 + 0x2f0);
  fStack_50 = fStack_ec;
  afStack_d0[(uint)bVar8 * -2 + 0x21] = afStack_160[(uint)bVar8 * -2 + 0x1e];
  fVar1 = fStack_18;
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
  pfVar5 = (float *)(param_1 + 0x30c);
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
  FUN_00408b40(param_1,pfVar9);
  afStack_170[3] = fStack_38;
  afStack_160[(uint)bVar8 * -2] = afStack_d0[(uint)bVar8 * -2 + 0x27];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28];
  pfVar5 = (float *)(param_1 + 0x2f4);
  fStack_98 = afStack_170[3] * _DAT_005d65bf;
  fStack_94 = afStack_160[0] * _DAT_005d65bf;
  fStack_90 = afStack_160[1] * _DAT_005d65bf;
  fStack_44 = afStack_170[3] * _DAT_005d65bf;
  afStack_d0[(uint)bVar8 * -2 + 0x24] = afStack_d0[(uint)bVar8 * -2 + 0xf];
  pfVar9 = pfStack_20;
  afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
  fVar1 = *(float *)(param_1 + 0x2f8) * _DAT_005d65c3;
  fVar2 = *(float *)(param_1 + 0x2fc) * _DAT_005d65c3;
  fStack_110 = fStack_104 * param_2;
  fStack_10c = fStack_dc * param_2;
  fStack_108 = fStack_fc * param_2;
  *pfVar5 = *pfVar5 * _DAT_005d65c3;
  *(float *)(param_1 + 0x2f8) = fVar1;
  *(float *)(param_1 + 0x2fc) = fVar2;
  *pfVar5 = *pfVar5 + fStack_44;
  *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x2f8) + fStack_40;
  *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x2fc) + fStack_3c;
  fStack_128 = fStack_104 * param_2;
  afStack_160[(uint)bVar8 * -2 + 0xf] = afStack_160[(uint)bVar8 * -2 + 0x15];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
  *pfVar9 = *pfVar9 + fStack_128;
  pfVar9[1] = pfVar9[1] + fStack_124;
  pfVar9[2] = pfVar9[2] + fStack_120;
  fVar1 = SQRT(*(float *)(param_1 + 0x2fc) * *(float *)(param_1 + 0x2fc) +
               *pfVar5 * *pfVar5 + *(float *)(param_1 + 0x2f8) * *(float *)(param_1 + 0x2f8)) *
          _DAT_005d65c7;
  if (1.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *pfVar5 = *pfVar5 * fVar1;
    *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x2f8) * fVar1;
    *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x2fc) * fVar1;
  }
  fStack_1a0 = *(float *)(param_1 + 0x2e8) * param_2;
  afStack_19c[0] = *(float *)(param_1 + 0x2ec) * param_2;
  afStack_19c[1] = *(float *)(param_1 + 0x2f0) * param_2;
  fStack_134 = fStack_1a0;
  afStack_160[(uint)bVar8 * -2 + 0xc] = afStack_19c[(uint)bVar8 * -2];
  afStack_160[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_a4 = *(float *)(param_1 + 0x2f4) * param_2;
  fStack_a0 = *(float *)(param_1 + 0x2f8) * param_2;
  fStack_9c = *(float *)(param_1 + 0x2fc) * param_2;
  afStack_188[0] = fStack_a4;
  afStack_19c[(uint)bVar8 * -2 + 6] = afStack_d0[(uint)bVar8 * -2 + 0xc];
  afStack_19c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  fStack_14 = (float)FUN_0053de10(0x01ED78C8,*(uint *)(param_1 + 0x20),
                                  *(uint *)(param_1 + 0x28),fStack_134,fStack_12c,
                                  *(uint *)(param_1 + 0x310),*(uint *)(param_1 + 0x2e0),
                                  *(uint *)(param_1 + 0x2e4));
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
  fStack_14 = (float)FUN_0053bc80(0x01ED78C8,pfVar5,
                                  *(float *)(param_1 + 0x310) * (float)_DAT_005d65cf);
  fStack_2c = fStack_14;
  if (fStack_14 <= *(float *)(param_1 + 0x24)) {
    if (!bVar3) goto LAB_0056db57;
  }
  else {
    fVar1 = (float)_DAT_005d65d7;
    *(float *)(param_1 + 0x24) = fStack_14;
    if (*(float *)(param_1 + 0x310) * fVar1 + fStack_148 < *(float *)(param_1 + 0x24)) {
      *pfVar5 = fStack_14c;
      *(float *)(param_1 + 0x24) = fStack_148;
      *(float *)(param_1 + 0x28) = fStack_144;
    }
  }
  fVar1 = *(float *)(param_1 + 0x2f8) * (float)"?333?CTrigger"._1_4_;
  fVar2 = *(float *)(param_1 + 0x2fc) * (float)"?333?CTrigger"._1_4_;
  *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) * (float)"?333?CTrigger"._1_4_
  ;
  *(float *)(param_1 + 0x2f8) = fVar1;
  *(float *)(param_1 + 0x2fc) = fVar2;
LAB_0056db57:
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
  if ((float *)(param_1 + 0x2e8) != afStack_d0 + 2) {
    *(float *)(param_1 + 0x2e8) = afStack_d0[2];
    *(float *)(param_1 + 0x2ec) = afStack_d0[3];
    *(uint *)(param_1 + 0x2f0) = uStack_c0;
  }
  pfStack_28 = (float *)(param_1 + 0x30);
  FUN_00583940(auStack_260,&DAT_02cfd900,pfStack_28);
  FUN_00583940(auStack_200,&DAT_02cfd900,afStack_19c + 5);
  FUN_005833e0(auStack_200,auStack_260);
  puVar6 = auStack_1d0;
  puVar7 = auStack_230;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  FUN_00583b10(auStack_230);
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
  FUN_004088f0(param_1);
  return;
}
