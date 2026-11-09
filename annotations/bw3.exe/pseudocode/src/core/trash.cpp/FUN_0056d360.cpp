// Name: core_trash.cpp_FUN_0056d360
// Address: 0056d360
// Address Range: [[0056d360, 0056dd22]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_0056d360(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trash_cpp_FUN_0056d360(CDemonActor *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1188 [958];
  byte *puVar11;
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
  
  bVar10 = 0;
  iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(&param_1->field_0x20,0x42c80000);
  if (iVar6 == 0) {
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(&param_1[2].field_0x24,0x42c80000);
    if (iVar6 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x20 = *(uint *)&param_1[2].field_0x24;
    *(uint *)&param_1->field_0x24 = *(uint *)&param_1[2].field_0x28;
    *(uint *)&param_1->field_0x28 = *(uint *)&param_1[2].field_0x2c;
    return;
  }
  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x50 = fStack_14 + *(float *)&param_1[2].field_0x50;
  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x54 = fStack_14 + *(float *)&param_1[2].field_0x54;
  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x58 = fStack_14 + *(float *)&param_1[2].field_0x58;
  pCVar5 = g_CDemonSetPtr;
  afStack_170[0] = 4.0;
  afStack_170[1] = 0.0;
  afStack_170[2] = 0.0;
  if ((float *)&g_CDemonSetPtr->field_0x15ac70 != afStack_19c + 0xb) {
    *(uint *)&g_CDemonSetPtr->field_0x15ac70 = 0x40800000;
    *(uint *)&pCVar5->field_0x15ac74 = 0;
    *(uint *)&pCVar5->field_0x15ac78 = 0;
  }
  fVar2 = *(float *)&param_1[2].field_0x64 - param_2;
  *(float *)&param_1[2].field_0x64 = fVar2;
  pCVar5 = g_CDemonSetPtr;
  if (fVar2 <= 0.0) {
    if (&param_1[2].field_0x68 != &g_CDemonSetPtr->field_0x15ac70) {
      *(uint *)&param_1[2].field_0x68 = *(uint *)&g_CDemonSetPtr->field_0x15ac70;
      *(uint *)&param_1[2].field_0x6c = *(uint *)&pCVar5->field_0x15ac74;
      *(uint *)&param_1[2].field_0x70 = *(uint *)&pCVar5->field_0x15ac78;
    }
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xc1200000,0x41200000);
    *(float *)&param_1[2].field_0x68 = fStack_14 + *(float *)&param_1[2].field_0x68;
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41700000,0x41c80000);
    *(float *)&param_1[2].field_0x6c = fStack_14 + *(float *)&param_1[2].field_0x6c;
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xc1200000,0x41200000);
    *(float *)&param_1[2].field_0x70 = fStack_14 + *(float *)&param_1[2].field_0x70;
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40c00000,0x41a00000);
    *(float *)&param_1[2].field_0x64 = fStack_14;
  }
  puVar1 = &param_1[2].field_0x68;
  fStack_d4 = *(float *)&g_CDemonSetPtr->field_0x15ac70 - *(float *)puVar1;
  afStack_d0[0] = *(float *)&g_CDemonSetPtr->field_0x15ac74 - *(float *)&param_1[2].field_0x6c;
  afStack_d0[1] = *(float *)&g_CDemonSetPtr->field_0x15ac78 - *(float *)&param_1[2].field_0x70;
  fStack_140 = fStack_d4;
  afStack_160[(uint)bVar10 * -2 + 9] = afStack_d0[(uint)bVar10 * -2];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  fStack_74 = fStack_140 * _DAT_005d65b7;
  fStack_70 = fStack_13c * _DAT_005d65b7;
  fStack_6c = fStack_138 * _DAT_005d65b7;
  afStack_160[2] = fStack_140 * _DAT_005d65b7;
  afStack_160[(uint)bVar10 * -2 + 3] = afStack_d0[(uint)bVar10 * -2 + 0x18];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
  puVar11 = &param_1[2].field_0x50;
  *(float *)puVar1 = *(float *)puVar1 + afStack_160[2];
  *(float *)&param_1[2].field_0x6c = *(float *)&param_1[2].field_0x6c + afStack_160[3];
  *(float *)&param_1[2].field_0x70 = *(float *)&param_1[2].field_0x70 + fStack_150;
  fStack_f8 = *(float *)puVar1 - *(float *)puVar11;
  fStack_f4 = *(float *)&param_1[2].field_0x6c - *(float *)&param_1[2].field_0x54;
  fStack_f0 = *(float *)&param_1[2].field_0x70 - *(float *)&param_1[2].field_0x58;
  fStack_5c = *(float *)puVar1 - *(float *)puVar11;
  afStack_d0[(uint)bVar10 * -2 + 0x1e] = afStack_160[(uint)bVar10 * -2 + 0x1b];
  afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
       afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
  fStack_8c = fStack_5c * _DAT_005d65bb;
  fStack_88 = fStack_58 * _DAT_005d65bb;
  fStack_84 = fStack_54 * _DAT_005d65bb;
  fStack_bc = fStack_5c * _DAT_005d65bb;
  afStack_d0[(uint)bVar10 * -2 + 6] = afStack_d0[(uint)bVar10 * -2 + 0x12];
  afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
  *(float *)puVar11 = *(float *)puVar11 + fStack_bc;
  *(float *)&param_1[2].field_0x54 = *(float *)&param_1[2].field_0x54 + fStack_b8;
  *(float *)&param_1[2].field_0x58 = *(float *)&param_1[2].field_0x58 + fStack_b4;
  pfVar7 = (float *)((int)param_1 + (uint)bVar10 * -8 + 0x24);
  fStack_14c = *(float *)&param_1->field_0x20;
  afStack_160[(uint)bVar10 * -2 + 6] = *pfVar7;
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] = pfVar7[(uint)bVar10 * -2 + 1];
  fStack_18 = -*(float *)&param_1[2].field_0x74;
  fStack_dc = -*(float *)&param_1[2].field_0x74;
  pfStack_20 = (float *)&param_1[2].field_0x38;
  fStack_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_ec = *(float *)puVar11 - *(float *)&param_1[2].field_0x38;
  fStack_e8 = *(float *)&param_1[2].field_0x54 - *(float *)&param_1[2].field_0x3c;
  fStack_e4 = *(float *)&param_1[2].field_0x58 - *(float *)&param_1[2].field_0x40;
  fStack_50 = fStack_ec;
  afStack_d0[(uint)bVar10 * -2 + 0x21] = afStack_160[(uint)bVar10 * -2 + 0x1e];
  fVar2 = fStack_18;
  afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
       afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
  puVar1 = &param_1[2].field_0x5c;
  fStack_80 = fStack_50 * *(float *)puVar1;
  fStack_7c = fStack_4c * *(float *)puVar1;
  fStack_78 = fStack_48 * *(float *)puVar1;
  fStack_104 = fStack_50 * *(float *)puVar1;
  afStack_160[(uint)bVar10 * -2 + 0x18] = afStack_d0[(uint)bVar10 * -2 + 0x15];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
  fStack_dc = fVar2 + fStack_100;
  fStack_e0 = fStack_104;
  fStack_d8 = fStack_fc;
  core_actor_cpp_FUN_00408b40(param_1,puVar11);
  afStack_170[3] = fStack_38;
  afStack_160[(uint)bVar10 * -2] = afStack_d0[(uint)bVar10 * -2 + 0x27];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
  puVar1 = &param_1[2].field_0x44;
  fStack_98 = afStack_170[3] * _DAT_005d65bf;
  fStack_94 = afStack_160[0] * _DAT_005d65bf;
  fStack_90 = afStack_160[1] * _DAT_005d65bf;
  fStack_44 = afStack_170[3] * _DAT_005d65bf;
  afStack_d0[(uint)bVar10 * -2 + 0x24] = afStack_d0[(uint)bVar10 * -2 + 0xf];
  pfVar7 = pfStack_20;
  afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
  fVar2 = *(float *)&param_1[2].field_0x48 * _DAT_005d65c3;
  fVar3 = *(float *)&param_1[2].field_0x4c * _DAT_005d65c3;
  fStack_110 = fStack_104 * param_2;
  fStack_10c = fStack_dc * param_2;
  fStack_108 = fStack_fc * param_2;
  *(float *)puVar1 = *(float *)puVar1 * _DAT_005d65c3;
  *(float *)&param_1[2].field_0x48 = fVar2;
  *(float *)&param_1[2].field_0x4c = fVar3;
  *(float *)puVar1 = *(float *)puVar1 + fStack_44;
  *(float *)&param_1[2].field_0x48 = *(float *)&param_1[2].field_0x48 + fStack_40;
  *(float *)&param_1[2].field_0x4c = *(float *)&param_1[2].field_0x4c + fStack_3c;
  fStack_128 = fStack_104 * param_2;
  afStack_160[(uint)bVar10 * -2 + 0xf] = afStack_160[(uint)bVar10 * -2 + 0x15];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
       afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
  *pfVar7 = *pfVar7 + fStack_128;
  pfVar7[1] = pfVar7[1] + fStack_124;
  pfVar7[2] = pfVar7[2] + fStack_120;
  fVar2 = SQRT(*(float *)&param_1[2].field_0x4c * *(float *)&param_1[2].field_0x4c +
               *(float *)puVar1 * *(float *)puVar1 +
               *(float *)&param_1[2].field_0x48 * *(float *)&param_1[2].field_0x48) * _DAT_005d65c7;
  if (1.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    *(float *)puVar1 = *(float *)puVar1 * fVar2;
    *(float *)&param_1[2].field_0x48 = *(float *)&param_1[2].field_0x48 * fVar2;
    *(float *)&param_1[2].field_0x4c = *(float *)&param_1[2].field_0x4c * fVar2;
  }
  fStack_1a0 = *(float *)&param_1[2].field_0x38 * param_2;
  afStack_19c[0] = *(float *)&param_1[2].field_0x3c * param_2;
  afStack_19c[1] = *(float *)&param_1[2].field_0x40 * param_2;
  fStack_134 = fStack_1a0;
  afStack_160[(uint)bVar10 * -2 + 0xc] = afStack_19c[(uint)bVar10 * -2];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_19c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  fStack_a4 = *(float *)&param_1[2].field_0x44 * param_2;
  fStack_a0 = *(float *)&param_1[2].field_0x48 * param_2;
  fStack_9c = *(float *)&param_1[2].field_0x4c * param_2;
  afStack_188[0] = fStack_a4;
  afStack_19c[(uint)bVar10 * -2 + 6] = afStack_d0[(uint)bVar10 * -2 + 0xc];
  afStack_19c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
  fStack_14 = (float)core_setcolid_cpp_FUN_0053de10
                               (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                *(uint *)&param_1->field_0x28,fStack_134,fStack_12c,
                                *(uint *)&param_1[2].field_0x60,
                                *(uint *)&param_1[2].field_0x30,
                                *(uint *)&param_1[2].field_0x34);
  bVar4 = false;
  if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
    fStack_134 = fStack_134 * fStack_14;
    fStack_130 = fStack_130 * fStack_14;
    fStack_12c = fStack_12c * fStack_14;
    bVar4 = true;
  }
  puVar1 = &param_1->field_0x20;
  *(float *)puVar1 = *(float *)puVar1 + fStack_134;
  *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_130;
  *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_12c;
  fStack_14 = (float)core_setcolid_cpp_FUN_0053bc80
                               (g_CDemonSetPtr,puVar1,
                                *(float *)&param_1[2].field_0x60 * (float)_DAT_005d65cf);
  fStack_2c = fStack_14;
  if (fStack_14 <= *(float *)&param_1->field_0x24) {
    if (!bVar4) goto LAB_0056db57;
  }
  else {
    fVar2 = *(float *)&param_1[2].field_0x60;
    fVar3 = (float)_DAT_005d65d7;
    *(float *)&param_1->field_0x24 = fStack_14;
    if (fVar2 * fVar3 + fStack_148 < *(float *)&param_1->field_0x24) {
      *(float *)puVar1 = fStack_14c;
      *(float *)&param_1->field_0x24 = fStack_148;
      *(float *)&param_1->field_0x28 = fStack_144;
    }
  }
  fVar2 = *(float *)&param_1[2].field_0x48 * (float)"?333?CTrigger"._1_4_;
  fVar3 = *(float *)&param_1[2].field_0x4c * (float)"?333?CTrigger"._1_4_;
  *(float *)&param_1[2].field_0x44 =
       *(float *)&param_1[2].field_0x44 * (float)"?333?CTrigger"._1_4_;
  *(float *)&param_1[2].field_0x48 = fVar2;
  *(float *)&param_1[2].field_0x4c = fVar3;
LAB_0056db57:
  fStack_b0 = *(float *)&param_1->field_0x20 - fStack_14c;
  fStack_ac = *(float *)&param_1->field_0x24 - fStack_148;
  fStack_a8 = *(float *)&param_1->field_0x28 - fStack_144;
  afStack_19c[2] = fStack_b0;
  afStack_19c[(uint)bVar10 * -2 + 3] = afStack_d0[(uint)bVar10 * -2 + 9];
  afStack_19c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  param_2 = 1.0 / param_2;
  fStack_17c = afStack_19c[2] * param_2;
  fStack_178 = afStack_19c[3] * param_2;
  fStack_174 = fStack_18c * param_2;
  afStack_d0[2] = afStack_19c[2] * param_2;
  afStack_d0[(uint)bVar10 * -2 + 3] = afStack_19c[(uint)bVar10 * -2 + 9];
  afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_19c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  if ((float *)&param_1[2].field_0x38 != afStack_d0 + 2) {
    *(float *)&param_1[2].field_0x38 = afStack_d0[2];
    *(float *)&param_1[2].field_0x3c = afStack_d0[3];
    *(uint *)&param_1[2].field_0x40 = uStack_c0;
  }
  pfStack_28 = (float *)&param_1->field_0x30;
  core_xform_cpp_FUN_00583940(auStack_260,&DAT_02cfd900,pfStack_28);
  core_xform_cpp_FUN_00583940(auStack_200,&DAT_02cfd900,afStack_19c + 5);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_200,auStack_260);
  puVar8 = auStack_1d0;
  puVar9 = auStack_230;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_FUN_00583b10(auStack_230);
  pfVar7 = pfStack_28;
  fStack_11c = fStack_68;
  afStack_160[(uint)bVar10 * -2 + 0x12] = afStack_d0[(uint)bVar10 * -2 + 0x1b];
  afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
       afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
  if (afStack_160 + 0x11 != pfVar7) {
    *pfVar7 = fStack_11c;
    pfVar7[1] = fStack_118;
    pfVar7[2] = fStack_114;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(param_1);
  return;
}
