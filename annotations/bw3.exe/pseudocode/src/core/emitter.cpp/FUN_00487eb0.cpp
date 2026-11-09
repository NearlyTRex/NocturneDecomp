// Name: core_emitter.cpp_FUN_00487eb0
// Address: 00487eb0
// Address Range: [[00487eb0, 004889a2]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487eb0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_00487eb0(CDemonActor *param_1,float param_2)

{
  byte *puVar1;
  CDemonSet *pCVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_1158 [997];
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  CVector3f CStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  byte auStack_128 [12];
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  byte auStack_104 [12];
  uint uStack_f8;
  uint auStack_f4 [5];
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float afStack_a0 [4];
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar10 = 0;
  iVar6 = *(int *)&param_1[3].field_0xa8;
  iVar3 = _strcmp(&param_1[1].field_0x14,"@none" + 1);
  if ((iVar3 != 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&param_1[1].field_0x14), iVar3 != 0)) {
    uVar5 = *(uint *)&param_1[1].field_0xdc;
    iVar6 = 1;
    *(uint *)&param_1[2].field_0x13c = 1;
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&param_1[1].field_0x10 = 1;
    *(uint *)&param_1[3].field_0x64 = uVar5;
    core_set_cpp_FUN_00534820(pCVar2,param_1);
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,&param_1[1].field_0x78);
  if (iVar3 != 0) {
    *(uint *)&param_1[1].field_0x10 = 0;
    *(uint *)&param_1[2].field_0x13c = 0;
  }
  if (*(int *)(param_1 + 1) == 10) {
    iVar6 = 0;
    iVar3 = sound_sndmain_cpp_FUN_00557170
                      ((double)*(float *)&param_1->field_0x20,(double)*(float *)&param_1->field_0x24
                       ,(double)*(float *)&param_1->field_0x28,
                       *(uint *)&param_1[2].field_0x144);
    if (((iVar3 == 0) || (iVar6 = 1, *(int *)&g_CGamePtr->field_0x1c != 0)) ||
       (iVar3 = _strnicmp(&param_1[2].field_0x148,&DAT_005bda2d,3),
       iVar3 != 0)) {
      if (iVar6 != 0) goto LAB_00487f67;
    }
    else {
      iVar6 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[3].field_0x54);
  }
LAB_00487f67:
  if (*(int *)&param_1[1].field_0x10 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[3].field_0x54);
    goto LAB_0048806b;
  }
  fVar18 = *(float *)&param_1[3].field_0x5c + param_2;
  *(float *)&param_1[3].field_0x5c = fVar18;
  if ((fVar18 < *(float *)&param_1[3].field_0x60) ||
     (*(float *)&param_1[3].field_0x5c =
           *(float *)&param_1[3].field_0x5c - *(float *)&param_1[3].field_0x60, iVar6 == 0))
  goto LAB_0048806b;
  switch(*(uint *)(param_1 + 1)) {
  case 0:
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,(CVector3f *)&param_1->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    goto LAB_00487fe8;
  case 1:
    iVar6 = 0;
    do {
      if (auStack_128 != &param_1->field_0x20) {
        auStack_128._0_4_ = *(uint *)&param_1->field_0x20;
        auStack_128._4_4_ = *(uint *)&param_1->field_0x24;
        auStack_128._8_4_ = *(uint *)&param_1->field_0x28;
      }
      fStack_18 = (float)core_actor_cpp_FUN_0040ce40();
      auStack_128._0_4_ = fStack_18 * *(float *)&param_1[1].field_0x4 + (float)auStack_128._0_4_;
      fStack_18 = (float)core_actor_cpp_FUN_0040ce40();
      auStack_128._8_4_ = fStack_18 * *(float *)&param_1[1].field_0xc + (float)auStack_128._8_4_;
      CStack_134._0_4_ = 0;
      CStack_134._4_4_ = *(uint *)&param_1[1].field_0x8;
      iVar6 = iVar6 + 1;
      CStack_134._8_4_ = 0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                (0x01C73654,(CVector3f *)auStack_128,1.0,&CStack_134,0x4000);
    } while (iVar6 < 4);
    break;
  case 4:
    fStack_3c = (float)core_actor_cpp_FUN_0040ce40();
    fStack_18 = fStack_3c;
    fStack_18 = (float)core_actor_cpp_FUN_0040ce40();
    fStack_38 = *(float *)&param_1[2].field_0x114;
    fVar11 = (float10)fcos((float10)fStack_3c);
    fVar12 = (float10)fcos((float10)fStack_18);
    fVar13 = (float10)fsin((float10)fStack_3c);
    fVar14 = (float10)fsin((float10)fStack_18);
    fStack_148 = (float)((float10)fStack_38 * fVar13);
    fStack_14c = (float)((float10)fStack_38 * fVar12 * fVar11);
    fStack_144 = (float)(fVar14 * (float10)fStack_38 * fVar11);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                       ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
    core_fire_cpp_FUN_004a28e0
              (0x01C73654,(CVector3f *)&param_1->field_0x20,(CVector3f *)&fStack_14c,pCVar4);
    break;
  case 5:
    core_emitter_cpp_FUN_00488ea0(param_1);
    uStack_b0 = uStack_74;
    afStack_d0[(uint)bVar10 * -2 + 9] = afStack_a0[(uint)bVar10 * -2 + 0xc];
    afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    core_fire_cpp_FUN_004a3af0();
    iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    fStack_bc = *(float *)(iVar6 + 0x20) - *(float *)&param_1->field_0x20;
    fStack_b8 = *(float *)(iVar6 + 0x24) - *(float *)&param_1->field_0x24;
    fStack_b4 = *(float *)(iVar6 + 0x28) - *(float *)&param_1->field_0x28;
    fStack_8c = fStack_bc;
    afStack_a0[(uint)bVar10 * -2 + 6] = afStack_d0[(uint)bVar10 * -2 + 6];
    afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88) <
        (float)_DAT_005bda4c) {
      core_actor_cpp_FUN_00408bf0();
      uVar5 = 0x40000000;
      uVar17 = 0x13f800000;
      uVar16 = 0;
      uVar15 = CONCAT44(&uStack_f8,*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      uStack_f8 = auStack_f4[2];
      auStack_f4[(uint)bVar10 * -2] = auStack_f4[(uint)bVar10 * -2 + 3];
      auStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           auStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_charactr_cpp_FUN_0042fbd0(uVar15,uVar16,uVar17,uVar5);
    }
    break;
  case 6:
    puVar1 = &param_1->field_0x20;
    core_fire_cpp_FUN_004a3ed0(0x01C73654,puVar1,0);
    core_fire_cpp_FUN_004a3ed0(0x01C73654,puVar1,0);
    core_fire_cpp_FUN_004a3ed0(0x01C73654,puVar1,0);
    core_fire_cpp_FUN_004a3ed0(0x01C73654,puVar1,0);
    break;
  case 7:
    puVar1 = &param_1->field_0x20;
    core_fire_cpp_FUN_004a3bd0
              (0x01C73654,puVar1,*(uint *)&param_1[1].field_0x8,0,
               *(float *)&param_1[1].field_0x4 * (float)_DAT_005bda44);
    if (auStack_104 != puVar1) {
      auStack_104._0_4_ = *(uint *)puVar1;
      auStack_104._4_4_ = *(uint *)&param_1->field_0x24;
      auStack_104._8_4_ = *(uint *)&param_1->field_0x28;
    }
    auStack_104._4_4_ =
         *(float *)&param_1[1].field_0x8 * (float)_DAT_005bda44 + (float)auStack_104._4_4_;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              ((CDemonGlobe *)&param_1[3].field_0x68,(CVector3f *)auStack_104);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0x7fff);
    *(int *)&param_1[3].field_0xa4 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    param_1[3].field_0x84 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
    fVar18 = *(float *)&param_1[1].field_0x8;
    goto LAB_0048802d;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,(CVector3f *)&param_1->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1,
               0xffff);
    break;
  case 9:
    iVar6 = *(int *)&param_1[2].field_0x140;
    if (iVar6 != 0) {
      (**(code **)(*(int *)(iVar6 + 0x154) + 0x1c))(iVar6);
      puVar7 = (uint *)&stack0xfffffe60;
      puVar9 = &stack0xfffffe78;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      fStack_d4 = fStack_188 + fStack_17c;
      afStack_d0[0] = fStack_184 + fStack_178;
      afStack_d0[1] = fStack_180 + fStack_174;
      fStack_80 = fStack_188 + fStack_17c;
      afStack_a0[(uint)bVar10 * -2 + 9] = afStack_d0[(uint)bVar10 * -2];
      afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_68 = fStack_80 * _DAT_005bda3c;
      fStack_64 = fStack_7c * _DAT_005bda3c;
      fStack_60 = fStack_78 * _DAT_005bda3c;
      fStack_5c = fStack_80 * _DAT_005bda3c;
      afStack_a0[(uint)bVar10 * -2 + 0x12] = afStack_a0[(uint)bVar10 * -2 + 0xf];
      afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      core_actor_cpp_FUN_00408b00();
      fStack_140 = fStack_170;
      afStack_13c[(uint)bVar10 * -2] = *(float *)(&stack0xfffffe94 + (uint)bVar10 * -8);
      afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           *(float *)(&stack0xfffffe98 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      iVar6 = *(int *)&param_1[2].field_0x140;
      afStack_d0[2] = *(float *)(iVar6 + 0x20) + fStack_140;
      afStack_d0[3] = *(float *)(iVar6 + 0x24) + afStack_13c[0];
      fStack_c0 = *(float *)(iVar6 + 0x28) + afStack_13c[1];
      afStack_a0[2] = afStack_d0[2];
      afStack_a0[(uint)bVar10 * -2 + 3] = afStack_d0[(uint)bVar10 * -2 + 3];
      afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      if ((float *)(auStack_f4 + 5) != afStack_a0 + 2) {
        fStack_e0 = afStack_a0[2];
        uStack_dc = afStack_a0[3];
        uStack_d8 = uStack_90;
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,&param_1->field_0x20,auStack_f4 + 5,0,0,0x40800000,1,0x3e800000,0xffff
                );
    }
    break;
  case 0xb:
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    fStack_18 = (float)core_actor_cpp_FUN_0040ce40();
    fStack_20 = fStack_18 - *(float *)&param_1[3].field_0xb0;
    fStack_18 = (float)core_actor_cpp_FUN_0040ce40();
    fStack_11c = *(float *)&param_1->field_0x20 + fStack_20;
    uStack_118 = *(uint *)&param_1->field_0x24;
    fStack_114 = (fStack_18 - *(float *)&param_1[3].field_0xb0) + *(float *)&param_1->field_0x28;
    uVar5 = *(uint *)&param_1[2].field_0x118;
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                       ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
    core_fire_cpp_FUN_004a2930(0x01C73654,&fStack_11c,&uStack_164,pCVar4,uVar5);
    fStack_11c = *(float *)&param_1->field_0x20;
    uStack_118 = *(uint *)&param_1->field_0x28;
    fStack_114 = (float)uStack_118;
    break;
  case 0xc:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    core_fire_cpp_FUN_004a29d0
              (0x01C73654,&param_1->field_0x20,&uStack_110,*(uint *)&param_1[2].field_0x124,
               *(uint *)&param_1[2].field_0x128,*(uint *)&param_1[2].field_0x120,
               *(uint *)&param_1[2].field_0x12c,*(uint *)&param_1[2].field_0x11c,
               *(uint *)&param_1[2].field_0x130);
LAB_00487fe8:
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              ((CDemonGlobe *)&param_1[3].field_0x68,(CVector3f *)&param_1->field_0x20);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0x7fff);
    *(int *)&param_1[3].field_0xa4 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    fVar18 = 10.0;
    param_1[3].field_0x84 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
LAB_0048802d:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
              ((CDemonGlobe *)&param_1[3].field_0x68,fVar18);
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&param_1[3].field_0x88 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(pCVar2,(CDemonGlobe *)&param_1[3].field_0x68)
    ;
    break;
  case 0xd:
    puVar7 = (uint *)((int)param_1 + (uint)bVar10 * -8 + 0x24);
    CStack_158._0_4_ = *(uint *)&param_1->field_0x20;
    *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + 4) = *puVar7;
    *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         puVar7[(uint)bVar10 * -2 + 1];
    pfVar8 = (float *)((int)param_1 + (uint)bVar10 * -8 + 0x34);
    fStack_a4 = *(float *)&param_1->field_0x30;
    afStack_a0[(uint)bVar10 * -2] = *pfVar8;
    afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar8[(uint)bVar10 * -2 + 1];
    fStack_24 = *(float *)&param_1[3].field_0xb4 * _DAT_005bda34;
    fStack_a4 = fStack_a4 * fStack_24;
    afStack_a0[0] = afStack_a0[0] * fStack_24;
    afStack_a0[1] = afStack_a0[1] * fStack_24;
    core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_158,(CVector3f *)&fStack_a4,3,BLOOD_TYPE_RED);
  }
  if (((param_1[2].field_0x148 != '\0') &&
      (iVar6 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[3].field_0x54), iVar6 == 0)) &&
     ((*(int *)&param_1[3].field_0x58 != 1 || (*(int *)&param_1[3].field_0xac == 0)))) {
    uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))();
    *(uint *)&param_1[3].field_0x54 = uVar5;
  }
LAB_0048806b:
  iVar6 = *(int *)&param_1[2].field_0x13c;
  *(uint *)&param_1[3].field_0xac = *(uint *)&param_1[1].field_0x10;
  if (iVar6 != 0) {
    if (*(int *)&param_1[2].field_0x134 == 0) {
      if ((0.0 < *(float *)&param_1[1].field_0xdc) &&
         (param_2 = *(float *)&param_1[3].field_0x64 - param_2,
         *(float *)&param_1[3].field_0x64 = param_2, param_2 <= 0.0)) {
        *(uint *)&param_1[3].field_0x64 = 0;
        *(uint *)&param_1[1].field_0x10 = 0;
        return;
      }
    }
    else if (*(int *)&param_1[1].field_0x10 == 0) {
      param_2 = *(float *)&param_1[3].field_0x64 - param_2;
      *(float *)&param_1[3].field_0x64 = param_2;
      if (param_2 <= 0.0) {
        *(uint *)&param_1[1].field_0x10 = 1;
        *(uint *)&param_1[3].field_0x64 = *(uint *)&param_1[1].field_0xdc;
        return;
      }
    }
    else {
      param_2 = *(float *)&param_1[3].field_0x64 - param_2;
      *(float *)&param_1[3].field_0x64 = param_2;
      if (param_2 <= 0.0) {
        *(uint *)&param_1[1].field_0x10 = 0;
        *(uint *)&param_1[3].field_0x64 = *(uint *)&param_1[2].field_0x138;
        return;
      }
    }
  }
  return;
}
