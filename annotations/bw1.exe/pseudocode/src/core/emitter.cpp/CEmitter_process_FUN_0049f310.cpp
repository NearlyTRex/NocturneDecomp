// Name: core_emitter.cpp_CEmitter_process_FUN_0049f310
// Address: 0049f310
// Address Range: [[0049f310, 0049fdef]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_0049f310(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_process_FUN_0049f310(CEmitter *this_ptr,float delta_time)

{
  byte *puVar1;
  CDemonSet *pCVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1158 [997];
  CCharacter *this_ptr_00;
  CFireEffect *this_ptr_01;
  CVector3f *position;
  ulonglong uVar14;
  CVector3f *euler_angles;
  ulonglong uVar15;
  float fVar16;
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
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  CVector3f CStack_128;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  CVector3f CStack_104;
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
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar9 = 0;
  iVar6 = *(int *)&this_ptr->field_0x4b0;
  iVar3 = _strcmp(&this_ptr->field_0x16c,"@none" + 1);
  if ((iVar3 != 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&this_ptr->field_0x16c), iVar3 != 0)) {
    iVar6 = 1;
    *(uint *)&this_ptr->field_0x3ec = 1;
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&this_ptr->field_0x168 = 1;
    *(uint *)&this_ptr->field_0x46c = *(uint *)&this_ptr->field_0x234;
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(pCVar2,(CDemonActor *)this_ptr);
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&this_ptr->field_0x1d0);
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x168 = 0;
    *(uint *)&this_ptr->field_0x3ec = 0;
  }
  if (*(int *)&this_ptr->field_0x158 == 10) {
    iVar6 = 0;
    iVar3 = sound_sndmain_cpp_FUN_00574010
                      ((double)*(float *)&this_ptr->field_0x20,
                       (double)*(float *)&this_ptr->field_0x24,
                       (double)*(float *)&this_ptr->field_0x28,*(uint *)&this_ptr->field_0x3f4
                      );
    if (((iVar3 == 0) || (iVar6 = 1, *(int *)&g_CGamePtr->field_0x1c != 0)) ||
       (iVar3 = _strnicmp(&this_ptr->field_0x3f8,&DAT_005dc970,3),
       iVar3 != 0)) {
      if (iVar6 != 0) goto LAB_0049f3c7;
    }
    else {
      iVar6 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x45c);
  }
LAB_0049f3c7:
  if (*(int *)&this_ptr->field_0x168 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x45c);
    goto LAB_0049f4cb;
  }
  fVar16 = *(float *)&this_ptr->field_0x464 + delta_time;
  *(float *)&this_ptr->field_0x464 = fVar16;
  if ((fVar16 < *(float *)&this_ptr->field_0x468) ||
     (*(float *)&this_ptr->field_0x464 =
           *(float *)&this_ptr->field_0x464 - *(float *)&this_ptr->field_0x468, iVar6 == 0))
  goto LAB_0049f4cb;
  switch(*(uint *)&this_ptr->field_0x158) {
  case 0:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    goto LAB_0049f448;
  case 1:
    iVar6 = 0;
    do {
      if (&CStack_128 != (CVector3f *)&this_ptr->field_0x20) {
        CStack_128.x = *(float *)&this_ptr->field_0x20;
        CStack_128.y = *(float *)&this_ptr->field_0x24;
        CStack_128.z = *(float *)&this_ptr->field_0x28;
      }
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.5,0.5);
      CStack_128.x = fStack_18 * *(float *)&this_ptr->field_0x15c + CStack_128.x;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.5,0.5);
      CStack_128.z = fStack_18 * *(float *)&this_ptr->field_0x164 + CStack_128.z;
      CStack_134.x = 0.0;
      CStack_134.y = *(float *)&this_ptr->field_0x160;
      iVar6 = iVar6 + 1;
      CStack_134.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,&CStack_128,1.0,&CStack_134,0xffff);
    } while (iVar6 < 4);
    break;
  case 4:
    fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
    fStack_18 = fStack_3c;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
    fStack_38 = *(float *)&this_ptr->field_0x3c4;
    fVar10 = (float10)fcos((float10)fStack_3c);
    fVar11 = (float10)fcos((float10)fStack_18);
    fVar12 = (float10)fsin((float10)fStack_3c);
    fVar13 = (float10)fsin((float10)fStack_18);
    CStack_14c.y = (float)((float10)fStack_38 * fVar12);
    CStack_14c.x = (float)((float10)fStack_38 * fVar11 * fVar10);
    CStack_14c.z = (float)(fVar13 * (float10)fStack_38 * fVar10);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
    core_fire_cpp_CFireEffect_createRock_FUN_004b5eb0
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,&CStack_14c,pCVar4);
    break;
  case 5:
    core_emitter_cpp_FUN_004a02e0(this_ptr);
    iVar3 = 1;
    euler_angles = (CVector3f *)&this_ptr->field_0x30;
    iVar6 = 2;
    position = &CStack_b0;
    CStack_b0.x = fStack_74;
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) = afStack_88[(uint)bVar9 * -2 + 6];
    this_ptr_01 = 0x01C57074;
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
              (this_ptr_01,position,euler_angles,iVar6,iVar3);
    iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_bc = *(float *)(iVar6 + 0x20) - *(float *)&this_ptr->field_0x20;
    fStack_b8 = *(float *)(iVar6 + 0x24) - *(float *)&this_ptr->field_0x24;
    fStack_b4 = *(float *)(iVar6 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_8c = fStack_bc;
    afStack_88[(uint)bVar9 * -2] = afStack_d0[(uint)bVar9 * -2 + 6];
    afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (SQRT(afStack_88[1] * afStack_88[1] + fStack_8c * fStack_8c + afStack_88[0] * afStack_88[0])
        < (float)_DAT_005dc98f) {
      core_actor_cpp_FUN_00408bb0();
      iVar6 = 1;
      uVar15 = 0x3f80000000000000;
      uVar14 = ZEXT48(&uStack_f8);
      this_ptr_00 = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      uStack_f8 = afStack_f4[2];
      afStack_f4[(uint)bVar9 * -2] = afStack_f4[(uint)bVar9 * -2 + 3];
      afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
                (this_ptr_00,(CVector3f *)uVar14,(int)(uVar14 >> 0x20),(int)uVar15,
                 (float)((ulonglong)uVar15 >> 0x20),iVar6);
    }
    break;
  case 6:
    puVar1 = &this_ptr->field_0x20;
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,(CVector3f *)puVar1,(CVector3f *)0x0);
    break;
  case 7:
    puVar1 = &this_ptr->field_0x20;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
              (0x01C57074,(CVector3f *)puVar1,*(float *)&this_ptr->field_0x160,0,
               *(float *)&this_ptr->field_0x15c * (float)_DAT_005dc987);
    if (&CStack_104 != (CVector3f *)puVar1) {
      CStack_104.x = *(float *)puVar1;
      CStack_104.y = *(float *)&this_ptr->field_0x24;
      CStack_104.z = *(float *)&this_ptr->field_0x28;
    }
    CStack_104.y = *(float *)&this_ptr->field_0x160 * (float)_DAT_005dc987 + CStack_104.y;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)&this_ptr->field_0x470,&CStack_104);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0x7fff);
    *(int *)&this_ptr->field_0x4ac = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    this_ptr->field_0x48c = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
    fVar16 = *(float *)&this_ptr->field_0x160;
    goto LAB_0049f48d;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1,
               0xffff);
    break;
  case 9:
    iVar6 = *(int *)&this_ptr->field_0x3f0;
    if (iVar6 != 0) {
      (**(code **)(*(int *)(iVar6 + 0x154) + 0x1c))(iVar6);
      puVar7 = (uint *)&stack0xfffffe60;
      puVar8 = &stack0xfffffe78;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      fStack_d4 = fStack_188 + fStack_17c;
      afStack_d0[0] = fStack_184 + fStack_178;
      afStack_d0[1] = fStack_180 + fStack_174;
      afStack_88[2] = fStack_188 + fStack_17c;
      afStack_88[(uint)bVar9 * -2 + 3] = afStack_d0[(uint)bVar9 * -2];
      afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      fStack_68 = afStack_88[2] * _DAT_005dc97f;
      fStack_64 = afStack_88[3] * _DAT_005dc97f;
      fStack_60 = fStack_78 * _DAT_005dc97f;
      fStack_5c = afStack_88[2] * _DAT_005dc97f;
      afStack_88[(uint)bVar9 * -2 + 0xc] = afStack_88[(uint)bVar9 * -2 + 9];
      afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      core_actor_cpp_FUN_00408ac0();
      fStack_140 = fStack_170;
      afStack_13c[(uint)bVar9 * -2] = *(float *)(&stack0xfffffe94 + (uint)bVar9 * -8);
      afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)(&stack0xfffffe98 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      iVar6 = *(int *)&this_ptr->field_0x3f0;
      afStack_d0[2] = *(float *)(iVar6 + 0x20) + fStack_140;
      afStack_d0[3] = *(float *)(iVar6 + 0x24) + afStack_13c[0];
      fStack_c0 = *(float *)(iVar6 + 0x28) + afStack_13c[1];
      CStack_98.x = afStack_d0[2];
      *(float *)((int)&CStack_98 + (uint)bVar9 * -8 + 4) = afStack_d0[(uint)bVar9 * -2 + 3];
      *(float *)((int)&CStack_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (&CStack_e0 != &CStack_98) {
        CStack_e0.x = CStack_98.x;
        CStack_e0.y = CStack_98.y;
        CStack_e0.z = CStack_98.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
                (0x01C57074,(CVector3f *)&this_ptr->field_0x20,&CStack_e0,0,0.0,4.0);
    }
    break;
  case 0xb:
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                          (0.0,*(float *)&this_ptr->field_0x4b8 * _DAT_005dc97b);
    fStack_20 = fStack_18 - *(float *)&this_ptr->field_0x4b8;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                          (0.0,*(float *)&this_ptr->field_0x4b8 * _DAT_005dc97b);
    fStack_11c = *(float *)&this_ptr->field_0x20 + fStack_20;
    uStack_118 = *(uint *)&this_ptr->field_0x24;
    fStack_114 = (fStack_18 - *(float *)&this_ptr->field_0x4b8) + *(float *)&this_ptr->field_0x28;
    uVar5 = *(uint *)&this_ptr->field_0x3c8;
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
    core_fire_cpp_FUN_004b5f00(0x01C57074,&fStack_11c,&stack0xfffffe9c,pCVar4,uVar5);
    fStack_11c = *(float *)&this_ptr->field_0x20;
    uStack_118 = *(uint *)&this_ptr->field_0x28;
    fStack_114 = (float)uStack_118;
    break;
  case 0xc:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    core_fire_cpp_FUN_004b5fa0
              (0x01C57074,&this_ptr->field_0x20,&uStack_110,*(uint *)&this_ptr->field_0x3d4,
               *(uint *)&this_ptr->field_0x3d8,*(uint *)&this_ptr->field_0x3d0,
               *(uint *)&this_ptr->field_0x3dc,*(uint *)&this_ptr->field_0x3cc,
               *(uint *)&this_ptr->field_0x3e0);
LAB_0049f448:
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)&this_ptr->field_0x470,(CVector3f *)&this_ptr->field_0x20);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0x7fff);
    *(int *)&this_ptr->field_0x4ac = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    fVar16 = 10.0;
    this_ptr->field_0x48c = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
LAB_0049f48d:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
              ((CDemonGlobe *)&this_ptr->field_0x470,fVar16);
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&this_ptr->field_0x490 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(pCVar2,(CDemonGlobe *)&this_ptr->field_0x470)
    ;
    break;
  case 0xd:
    puVar7 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
    CStack_158.x = *(float *)&this_ptr->field_0x20;
    *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + 4) = *puVar7;
    *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         puVar7[(uint)bVar9 * -2 + 1];
    puVar7 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + 0x34);
    CStack_a4.x = *(float *)&this_ptr->field_0x30;
    *(uint *)((int)&CStack_a4 + (uint)bVar9 * -8 + 4) = *puVar7;
    *(uint *)((int)&CStack_a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         puVar7[(uint)bVar9 * -2 + 1];
    fStack_24 = *(float *)&this_ptr->field_0x4bc * _DAT_005dc977;
    CStack_a4.x = CStack_a4.x * fStack_24;
    CStack_a4.y = CStack_a4.y * fStack_24;
    CStack_a4.z = CStack_a4.z * fStack_24;
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&CStack_158,&CStack_a4,3,BLOOD_TYPE_RED);
  }
  if (((this_ptr->field_0x3f8 != '\0') &&
      (iVar6 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0x45c), iVar6 == 0)) &&
     ((*(int *)&this_ptr->field_0x460 != 1 || (*(int *)&this_ptr->field_0x4b4 == 0)))) {
    uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
    *(uint *)&this_ptr->field_0x45c = uVar5;
  }
LAB_0049f4cb:
  *(uint *)&this_ptr->field_0x4b4 = *(uint *)&this_ptr->field_0x168;
  if (*(int *)&this_ptr->field_0x3ec != 0) {
    if (*(int *)&this_ptr->field_0x3e4 == 0) {
      if ((0.0 < *(float *)&this_ptr->field_0x234) &&
         (fVar16 = *(float *)&this_ptr->field_0x46c - delta_time,
         *(float *)&this_ptr->field_0x46c = fVar16, fVar16 <= 0.0)) {
        *(uint *)&this_ptr->field_0x46c = 0;
        *(uint *)&this_ptr->field_0x168 = 0;
        return;
      }
    }
    else if (*(int *)&this_ptr->field_0x168 == 0) {
      fVar16 = *(float *)&this_ptr->field_0x46c - delta_time;
      *(float *)&this_ptr->field_0x46c = fVar16;
      if (fVar16 <= 0.0) {
        *(uint *)&this_ptr->field_0x168 = 1;
        *(uint *)&this_ptr->field_0x46c = *(uint *)&this_ptr->field_0x234;
        return;
      }
    }
    else {
      fVar16 = *(float *)&this_ptr->field_0x46c - delta_time;
      *(float *)&this_ptr->field_0x46c = fVar16;
      if (fVar16 <= 0.0) {
        *(uint *)&this_ptr->field_0x168 = 0;
        *(uint *)&this_ptr->field_0x46c = *(uint *)&this_ptr->field_0x3e8;
        return;
      }
    }
  }
  return;
}
