// Name: core_emitter.cpp_FUN_0049f310
// Address: 0049f310
// Address Range: [[0049f310, 0049fdef]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_0049f310(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_0049f310(CDemonActor *param_1,float param_2)

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
  CCharacter *this_ptr;
  CFireEffect *this_ptr_00;
  CVector3f *position;
  ulonglong uVar15;
  CVector3f *euler_angles;
  ulonglong uVar16;
  float fVar17;
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
  float afStack_f4 [5];
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [10];
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar10 = 0;
  iVar6 = *(int *)&param_1[3].field_0xa8;
  iVar3 = _strcmp(&param_1[1].field_0x14,"@none" + 1);
  if ((iVar3 != 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1[1].field_0x14), iVar3 != 0)) {
    uVar5 = *(uint *)&param_1[1].field_0xdc;
    iVar6 = 1;
    *(uint *)&param_1[2].field_0x13c = 1;
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&param_1[1].field_0x10 = 1;
    *(uint *)&param_1[3].field_0x64 = uVar5;
    core_set_cpp_FUN_0054f060(pCVar2,param_1);
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&param_1[1].field_0x78);
  if (iVar3 != 0) {
    *(uint *)&param_1[1].field_0x10 = 0;
    *(uint *)&param_1[2].field_0x13c = 0;
  }
  if (*(int *)(param_1 + 1) == 10) {
    iVar6 = 0;
    iVar3 = sound_sndmain_cpp_FUN_00574010
                      ((double)*(float *)&param_1->field_0x20,(double)*(float *)&param_1->field_0x24
                       ,(double)*(float *)&param_1->field_0x28,
                       *(uint *)&param_1[2].field_0x144);
    if (((iVar3 == 0) || (iVar6 = 1, *(int *)&g_CGamePtr->field_0x1c != 0)) ||
       (iVar3 = _strnicmp(&param_1[2].field_0x148,&DAT_005dc970,3),
       iVar3 != 0)) {
      if (iVar6 != 0) goto LAB_0049f3c7;
    }
    else {
      iVar6 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[3].field_0x54);
  }
LAB_0049f3c7:
  if (*(int *)&param_1[1].field_0x10 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[3].field_0x54);
    goto LAB_0049f4cb;
  }
  fVar17 = *(float *)&param_1[3].field_0x5c + param_2;
  *(float *)&param_1[3].field_0x5c = fVar17;
  if ((fVar17 < *(float *)&param_1[3].field_0x60) ||
     (*(float *)&param_1[3].field_0x5c =
           *(float *)&param_1[3].field_0x5c - *(float *)&param_1[3].field_0x60, iVar6 == 0))
  goto LAB_0049f4cb;
  switch(*(uint *)(param_1 + 1)) {
  case 0:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,(CVector3f *)&param_1->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    goto LAB_0049f448;
  case 1:
    iVar6 = 0;
    do {
      if (auStack_128 != &param_1->field_0x20) {
        auStack_128._0_4_ = *(uint *)&param_1->field_0x20;
        auStack_128._4_4_ = *(uint *)&param_1->field_0x24;
        auStack_128._8_4_ = *(uint *)&param_1->field_0x28;
      }
      fStack_18 = (float)core_actor_cpp_FUN_0040cc00();
      auStack_128._0_4_ = fStack_18 * *(float *)&param_1[1].field_0x4 + (float)auStack_128._0_4_;
      fStack_18 = (float)core_actor_cpp_FUN_0040cc00();
      auStack_128._8_4_ = fStack_18 * *(float *)&param_1[1].field_0xc + (float)auStack_128._8_4_;
      CStack_134._0_4_ = 0;
      CStack_134._4_4_ = *(uint *)&param_1[1].field_0x8;
      iVar6 = iVar6 + 1;
      CStack_134._8_4_ = 0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,(CVector3f *)auStack_128,1.0,&CStack_134,0xffff);
    } while (iVar6 < 4);
    break;
  case 4:
    fStack_3c = (float)core_actor_cpp_FUN_0040cc00();
    fStack_18 = fStack_3c;
    fStack_18 = (float)core_actor_cpp_FUN_0040cc00();
    fStack_38 = *(float *)&param_1[2].field_0x114;
    fVar11 = (float10)fcos((float10)fStack_3c);
    fVar12 = (float10)fcos((float10)fStack_18);
    fVar13 = (float10)fsin((float10)fStack_3c);
    fVar14 = (float10)fsin((float10)fStack_18);
    fStack_148 = (float)((float10)fStack_38 * fVar13);
    fStack_14c = (float)((float10)fStack_38 * fVar12 * fVar11);
    fStack_144 = (float)(fVar14 * (float10)fStack_38 * fVar11);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
    core_fire_cpp_FUN_004b5eb0
              (0x01C57074,(CVector3f *)&param_1->field_0x20,(CVector3f *)&fStack_14c,pCVar4);
    break;
  case 5:
    core_emitter_cpp_FUN_004a02e0(param_1);
    iVar3 = 1;
    euler_angles = (CVector3f *)&param_1->field_0x30;
    iVar6 = 2;
    position = &CStack_b0;
    CStack_b0._0_4_ = CStack_74._0_4_;
    *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar10 * -8 + 4);
    this_ptr_00 = 0x01C57074;
    *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
              (this_ptr_00,position,euler_angles,iVar6,iVar3);
    iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_bc = *(float *)(iVar6 + 0x20) - *(float *)&param_1->field_0x20;
    fStack_b8 = *(float *)(iVar6 + 0x24) - *(float *)&param_1->field_0x24;
    fStack_b4 = *(float *)(iVar6 + 0x28) - *(float *)&param_1->field_0x28;
    fStack_8c = fStack_bc;
    afStack_a0[(uint)bVar10 * -2 + 6] = afStack_d0[(uint)bVar10 * -2 + 6];
    afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88) <
        (float)_DAT_005dc98f) {
      core_actor_cpp_FUN_00408bb0();
      iVar6 = 1;
      uVar16 = 0x3f80000000000000;
      uVar15 = ZEXT48(&uStack_f8);
      this_ptr = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      uStack_f8 = afStack_f4[2];
      afStack_f4[(uint)bVar10 * -2] = afStack_f4[(uint)bVar10 * -2 + 3];
      afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_charactr_cpp_FUN_004308a0
                (this_ptr,(CVector3f *)uVar15,(int)(uVar15 >> 0x20),(int)uVar16,
                 (float)((ulonglong)uVar16 >> 0x20),iVar6);
    }
    break;
  case 6:
    puVar1 = &param_1->field_0x20;
    core_fire_cpp_FUN_004b72d0(0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_FUN_004b72d0(0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_FUN_004b72d0(0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_FUN_004b72d0(0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    break;
  case 7:
    puVar1 = &param_1->field_0x20;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
              (0x01C57074,(CVector3f *)puVar1,*(float *)&param_1[1].field_0x8,0,
               *(float *)&param_1[1].field_0x4 * (float)_DAT_005dc987);
    if (auStack_104 != puVar1) {
      auStack_104._0_4_ = *(uint *)puVar1;
      auStack_104._4_4_ = *(uint *)&param_1->field_0x24;
      auStack_104._8_4_ = *(uint *)&param_1->field_0x28;
    }
    auStack_104._4_4_ =
         *(float *)&param_1[1].field_0x8 * (float)_DAT_005dc987 + (float)auStack_104._4_4_;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)&param_1[3].field_0x68,(CVector3f *)auStack_104);
    iVar6 = core_actor_cpp_FUN_0040cc60(0,0x7fff);
    *(int *)&param_1[3].field_0xa4 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    param_1[3].field_0x84 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
    fVar17 = *(float *)&param_1[1].field_0x8;
    goto LAB_0049f48d;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,(CVector3f *)&param_1->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1,
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
      fStack_68 = fStack_80 * _DAT_005dc97f;
      afStack_64[0] = fStack_7c * _DAT_005dc97f;
      afStack_64[1] = fStack_78 * _DAT_005dc97f;
      afStack_64[2] = fStack_80 * _DAT_005dc97f;
      afStack_64[(uint)bVar10 * -2 + 3] = afStack_64[(uint)bVar10 * -2];
      afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408ac0();
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
      if (&CStack_e0 != (CVector3f *)(afStack_a0 + 2)) {
        CStack_e0._0_4_ = afStack_a0[2];
        CStack_e0._4_4_ = afStack_a0[3];
        CStack_e0._8_4_ = afStack_a0[4];
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
                (0x01C57074,(CVector3f *)&param_1->field_0x20,&CStack_e0,0,0.0,4.0);
    }
    break;
  case 0xb:
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    fStack_18 = (float)core_actor_cpp_FUN_0040cc00();
    fStack_20 = fStack_18 - *(float *)&param_1[3].field_0xb0;
    fStack_18 = (float)core_actor_cpp_FUN_0040cc00();
    fStack_11c = *(float *)&param_1->field_0x20 + fStack_20;
    uStack_118 = *(uint *)&param_1->field_0x24;
    fStack_114 = (fStack_18 - *(float *)&param_1[3].field_0xb0) + *(float *)&param_1->field_0x28;
    uVar5 = *(uint *)&param_1[2].field_0x118;
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&param_1[1].field_0xf0);
    core_fire_cpp_FUN_004b5f00(0x01C57074,&fStack_11c,&uStack_164,pCVar4,uVar5);
    fStack_11c = *(float *)&param_1->field_0x20;
    uStack_118 = *(uint *)&param_1->field_0x28;
    fStack_114 = (float)uStack_118;
    break;
  case 0xc:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    core_fire_cpp_FUN_004b5fa0
              (0x01C57074,&param_1->field_0x20,&uStack_110,*(uint *)&param_1[2].field_0x124,
               *(uint *)&param_1[2].field_0x128,*(uint *)&param_1[2].field_0x120,
               *(uint *)&param_1[2].field_0x12c,*(uint *)&param_1[2].field_0x11c,
               *(uint *)&param_1[2].field_0x130);
LAB_0049f448:
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)&param_1[3].field_0x68,(CVector3f *)&param_1->field_0x20);
    iVar6 = core_actor_cpp_FUN_0040cc60(0,0x7fff);
    *(int *)&param_1[3].field_0xa4 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    fVar17 = 10.0;
    param_1[3].field_0x84 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
LAB_0049f48d:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
              ((CDemonGlobe *)&param_1[3].field_0x68,fVar17);
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&param_1[3].field_0x88 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(pCVar2,(CDemonGlobe *)&param_1[3].field_0x68)
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
    fStack_24 = *(float *)&param_1[3].field_0xb4 * _DAT_005dc977;
    fStack_a4 = fStack_a4 * fStack_24;
    afStack_a0[0] = afStack_a0[0] * fStack_24;
    afStack_a0[1] = afStack_a0[1] * fStack_24;
    core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_158,(CVector3f *)&fStack_a4,3,BLOOD_TYPE_RED);
  }
  if (((param_1[2].field_0x148 != '\0') &&
      (iVar6 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[3].field_0x54), iVar6 == 0)) &&
     ((*(int *)&param_1[3].field_0x58 != 1 || (*(int *)&param_1[3].field_0xac == 0)))) {
    uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))();
    *(uint *)&param_1[3].field_0x54 = uVar5;
  }
LAB_0049f4cb:
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
