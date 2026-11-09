// Name: core_trash.cpp_FUN_0059a370
// Address: 0059a370
// Address Range: [[0059a370, 0059ad32]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_0059a370(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trash_cpp_FUN_0059a370(CDemonActor *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1188 [958];
  byte *puVar12;
  CMatrix3x4f aCStack_260 [48];
  uint auStack_230 [12];
  CMatrix3x4f aCStack_200 [48];
  uint auStack_1d0 [12];
  float fStack_1a0;
  float afStack_19c [4];
  float fStack_18c;
  float fStack_188;
  float afStack_184 [4];
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
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [4];
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
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  CVector3f *pCStack_28;
  float *pfStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&param_1->field_0x20,0x42c80000);
  if (iVar7 == 0) {
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&param_1[2].field_0x24,0x42c80000);
    if (iVar7 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x20 = *(uint *)&param_1[2].field_0x24;
    *(uint *)&param_1->field_0x24 = *(uint *)&param_1[2].field_0x28;
    *(uint *)&param_1->field_0x28 = *(uint *)&param_1[2].field_0x2c;
    return;
  }
  fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x50 = fStack_14 + *(float *)&param_1[2].field_0x50;
  fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x54 = fStack_14 + *(float *)&param_1[2].field_0x54;
  fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xbd4ccccd,0x3d4ccccd);
  *(float *)&param_1[2].field_0x58 = fStack_14 + *(float *)&param_1[2].field_0x58;
  pCVar5 = g_CDemonSetPtr;
  afStack_170[0] = 4.0;
  afStack_170[1] = 0.0;
  afStack_170[2] = 0.0;
  if ((float *)&g_CDemonSetPtr->field_0x15ac70 != afStack_184 + 5) {
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
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xc1200000,0x41200000);
    *(float *)&param_1[2].field_0x68 = fStack_14 + *(float *)&param_1[2].field_0x68;
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x41c80000);
    *(float *)&param_1[2].field_0x6c = fStack_14 + *(float *)&param_1[2].field_0x6c;
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xc1200000,0x41200000);
    *(float *)&param_1[2].field_0x70 = fStack_14 + *(float *)&param_1[2].field_0x70;
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40c00000,0x41a00000);
    *(float *)&param_1[2].field_0x64 = fStack_14;
  }
  puVar1 = &param_1[2].field_0x68;
  fStack_d4 = *(float *)&g_CDemonSetPtr->field_0x15ac70 - *(float *)puVar1;
  afStack_d0[0] = *(float *)&g_CDemonSetPtr->field_0x15ac74 - *(float *)&param_1[2].field_0x6c;
  afStack_d0[1] = *(float *)&g_CDemonSetPtr->field_0x15ac78 - *(float *)&param_1[2].field_0x70;
  fStack_140 = fStack_d4;
  afStack_160[(uint)bVar11 * -2 + 9] = afStack_d0[(uint)bVar11 * -2];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_74 = fStack_140 * _DAT_005f8048;
  fStack_70 = fStack_13c * _DAT_005f8048;
  fStack_6c = fStack_138 * _DAT_005f8048;
  afStack_160[2] = fStack_140 * _DAT_005f8048;
  afStack_160[(uint)bVar11 * -2 + 3] = afStack_d0[(uint)bVar11 * -2 + 0x18];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
  puVar12 = &param_1[2].field_0x50;
  *(float *)puVar1 = *(float *)puVar1 + afStack_160[2];
  *(float *)&param_1[2].field_0x6c = *(float *)&param_1[2].field_0x6c + afStack_160[3];
  *(float *)&param_1[2].field_0x70 = *(float *)&param_1[2].field_0x70 + fStack_150;
  fStack_f8 = *(float *)puVar1 - *(float *)puVar12;
  fStack_f4 = *(float *)&param_1[2].field_0x6c - *(float *)&param_1[2].field_0x54;
  fStack_f0 = *(float *)&param_1[2].field_0x70 - *(float *)&param_1[2].field_0x58;
  fStack_5c = *(float *)puVar1 - *(float *)puVar12;
  afStack_58[(uint)bVar11 * -2] = afStack_10c[(uint)bVar11 * -2 + 6];
  afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  fStack_8c = fStack_5c * _DAT_005f804c;
  fStack_88 = afStack_58[0] * _DAT_005f804c;
  fStack_84 = afStack_58[1] * _DAT_005f804c;
  fStack_bc = fStack_5c * _DAT_005f804c;
  afStack_d0[(uint)bVar11 * -2 + 6] = afStack_d0[(uint)bVar11 * -2 + 0x12];
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
  *(float *)puVar12 = *(float *)puVar12 + fStack_bc;
  *(float *)&param_1[2].field_0x54 = *(float *)&param_1[2].field_0x54 + fStack_b8;
  *(float *)&param_1[2].field_0x58 = *(float *)&param_1[2].field_0x58 + fStack_b4;
  pfVar8 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x24);
  fStack_14c = *(float *)&param_1->field_0x20;
  afStack_160[(uint)bVar11 * -2 + 6] = *pfVar8;
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] = pfVar8[(uint)bVar11 * -2 + 1];
  fStack_18 = -*(float *)&param_1[2].field_0x74;
  fStack_dc = -*(float *)&param_1[2].field_0x74;
  pfStack_20 = (float *)&param_1[2].field_0x38;
  fStack_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_ec = *(float *)puVar12 - *(float *)&param_1[2].field_0x38;
  fStack_e8 = *(float *)&param_1[2].field_0x54 - *(float *)&param_1[2].field_0x3c;
  fStack_e4 = *(float *)&param_1[2].field_0x58 - *(float *)&param_1[2].field_0x40;
  afStack_58[2] = fStack_ec;
  afStack_58[(uint)bVar11 * -2 + 3] = afStack_10c[(uint)bVar11 * -2 + 9];
  fVar2 = fStack_18;
  afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  puVar1 = &param_1[2].field_0x5c;
  fStack_80 = afStack_58[2] * *(float *)puVar1;
  fStack_7c = afStack_58[3] * *(float *)puVar1;
  fStack_78 = fStack_48 * *(float *)puVar1;
  afStack_10c[2] = afStack_58[2] * *(float *)puVar1;
  afStack_10c[(uint)bVar11 * -2 + 3] = afStack_d0[(uint)bVar11 * -2 + 0x15];
  afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
  fStack_dc = fVar2 + afStack_10c[3];
  fStack_e0 = afStack_10c[2];
  fStack_d8 = fStack_fc;
  core_actor_cpp_FUN_00408b00(param_1,puVar12);
  afStack_170[3] = fStack_38;
  afStack_160[(uint)bVar11 * -2] = afStack_58[(uint)bVar11 * -2 + 9];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  puVar1 = &param_1[2].field_0x44;
  fStack_98 = afStack_170[3] * _DAT_005f8050;
  fStack_94 = afStack_160[0] * _DAT_005f8050;
  fStack_90 = afStack_160[1] * _DAT_005f8050;
  fStack_44 = afStack_170[3] * _DAT_005f8050;
  afStack_58[(uint)bVar11 * -2 + 6] = afStack_d0[(uint)bVar11 * -2 + 0xf];
  pfVar8 = pfStack_20;
  afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  fVar2 = *(float *)&param_1[2].field_0x48 * _DAT_005f8054;
  fVar3 = *(float *)&param_1[2].field_0x4c * _DAT_005f8054;
  fStack_110 = afStack_10c[2] * param_2;
  afStack_10c[0] = fStack_dc * param_2;
  afStack_10c[1] = fStack_fc * param_2;
  *(float *)puVar1 = *(float *)puVar1 * _DAT_005f8054;
  *(float *)&param_1[2].field_0x48 = fVar2;
  *(float *)&param_1[2].field_0x4c = fVar3;
  *(float *)puVar1 = *(float *)puVar1 + fStack_44;
  *(float *)&param_1[2].field_0x48 = *(float *)&param_1[2].field_0x48 + fStack_40;
  *(float *)&param_1[2].field_0x4c = *(float *)&param_1[2].field_0x4c + fStack_3c;
  fStack_128 = afStack_10c[2] * param_2;
  afStack_160[(uint)bVar11 * -2 + 0xf] = afStack_10c[(uint)bVar11 * -2];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
       afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  *pfVar8 = *pfVar8 + fStack_128;
  pfVar8[1] = pfVar8[1] + fStack_124;
  pfVar8[2] = pfVar8[2] + fStack_120;
  fVar2 = SQRT(*(float *)&param_1[2].field_0x4c * *(float *)&param_1[2].field_0x4c +
               *(float *)puVar1 * *(float *)puVar1 +
               *(float *)&param_1[2].field_0x48 * *(float *)&param_1[2].field_0x48) * _DAT_005f8058;
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
  afStack_160[(uint)bVar11 * -2 + 0xc] = afStack_19c[(uint)bVar11 * -2];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_a4 = *(float *)&param_1[2].field_0x44 * param_2;
  fStack_a0 = *(float *)&param_1[2].field_0x48 * param_2;
  fStack_9c = *(float *)&param_1[2].field_0x4c * param_2;
  fStack_188 = fStack_a4;
  afStack_184[(uint)bVar11 * -2] = afStack_d0[(uint)bVar11 * -2 + 0xc];
  afStack_184[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  fStack_14 = (float)core_setcolid_cpp_FUN_00558450
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
  fStack_14 = (float)core_setcolid_cpp_FUN_005562c0
                               (g_CDemonSetPtr,puVar1,
                                *(float *)&param_1[2].field_0x60 * (float)_DAT_005f8060);
  fStack_2c = fStack_14;
  if (fStack_14 <= *(float *)&param_1->field_0x24) {
    if (!bVar4) goto LAB_0059ab67;
  }
  else {
    fVar2 = *(float *)&param_1[2].field_0x60;
    fVar3 = (float)_DAT_005f8068;
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
LAB_0059ab67:
  fStack_b0 = *(float *)&param_1->field_0x20 - fStack_14c;
  fStack_ac = *(float *)&param_1->field_0x24 - fStack_148;
  fStack_a8 = *(float *)&param_1->field_0x28 - fStack_144;
  afStack_19c[2] = fStack_b0;
  afStack_19c[(uint)bVar11 * -2 + 3] = afStack_d0[(uint)bVar11 * -2 + 9];
  afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  param_2 = 1.0 / param_2;
  afStack_184[2] = afStack_19c[2] * param_2;
  afStack_184[3] = afStack_19c[3] * param_2;
  fStack_174 = fStack_18c * param_2;
  afStack_d0[2] = afStack_19c[2] * param_2;
  afStack_d0[(uint)bVar11 * -2 + 3] = afStack_184[(uint)bVar11 * -2 + 3];
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_184[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if ((float *)&param_1[2].field_0x38 != afStack_d0 + 2) {
    *(float *)&param_1[2].field_0x38 = afStack_d0[2];
    *(float *)&param_1[2].field_0x3c = afStack_d0[3];
    *(uint *)&param_1[2].field_0x40 = uStack_c0;
  }
  pCStack_28 = (CVector3f *)&param_1->field_0x30;
  core_xform_cpp_FUN_005b5760(aCStack_260,(CVector3f *)&DAT_02c8af28,pCStack_28);
  core_xform_cpp_FUN_005b5760(aCStack_200,(CVector3f *)&DAT_02c8af28,(CVector3f *)&fStack_188);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_200,aCStack_260);
  puVar9 = auStack_1d0;
  puVar10 = auStack_230;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5930(auStack_230);
  pCVar6 = pCStack_28;
  CStack_11c._0_4_ = CStack_68._0_4_;
  *(uint *)((int)&CStack_11c + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&CStack_68 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&CStack_11c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((int)&CStack_68 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  if (&CStack_11c != pCVar6) {
    *(uint *)pCVar6 = CStack_11c._0_4_;
    *(uint *)&pCVar6->field_0x4 = CStack_11c._4_4_;
    *(uint *)&pCVar6->field_0x8 = CStack_11c._8_4_;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(param_1);
  return;
}
