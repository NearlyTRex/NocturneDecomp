// Name: core_emitter.cpp_CEmitter_process_FUN_00486cb0
// Address: 00486cb0
// Address Range: [[00486cb0, 0048778f]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_00486cb0(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_process_FUN_00486cb0(CEmitter *this_ptr,float delta_time)

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
  iVar6 = *(int *)&this_ptr->field_0x60c;
  iVar3 = _strcmp(&this_ptr->field_0x2c8,"@none" + 1);
  if ((iVar3 != 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&this_ptr->field_0x2c8), iVar3 != 0)) {
    iVar6 = 1;
    *(uint *)&this_ptr->field_0x548 = 1;
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&this_ptr->field_0x2c4 = 1;
    *(uint *)&this_ptr->field_0x5c8 = *(uint *)&this_ptr->field_0x390;
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(pCVar2,(CDemonActor *)this_ptr);
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&this_ptr->field_0x32c);
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x2c4 = 0;
    *(uint *)&this_ptr->field_0x548 = 0;
  }
  if (*(int *)&this_ptr->field_0x2b4 == 10) {
    iVar6 = 0;
    iVar3 = sound_sndmain_cpp_FUN_005515e0
                      ((double)*(float *)&this_ptr->field_0x20,
                       (double)*(float *)&this_ptr->field_0x24,
                       (double)*(float *)&this_ptr->field_0x28,*(uint *)&this_ptr->field_0x550
                      );
    if (((iVar3 == 0) || (iVar6 = 1, *(int *)&g_CGamePtr->field_0x1c != 0)) ||
       (iVar3 = _strnicmp(&this_ptr->field_0x554,&DAT_005d2bd7,3),
       iVar3 != 0)) {
      if (iVar6 != 0) goto LAB_00486d67;
    }
    else {
      iVar6 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x5b8);
  }
LAB_00486d67:
  if (*(int *)&this_ptr->field_0x2c4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x5b8);
    goto LAB_00486e6b;
  }
  fVar16 = *(float *)&this_ptr->field_0x5c0 + delta_time;
  *(float *)&this_ptr->field_0x5c0 = fVar16;
  if ((fVar16 < *(float *)&this_ptr->field_0x5c4) ||
     (*(float *)&this_ptr->field_0x5c0 =
           *(float *)&this_ptr->field_0x5c0 - *(float *)&this_ptr->field_0x5c4, iVar6 == 0))
  goto LAB_00486e6b;
  switch(*(uint *)&this_ptr->field_0x2b4) {
  case 0:
    core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
              (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    goto LAB_00486de8;
  case 1:
    iVar6 = 0;
    do {
      if (&CStack_128 != (CVector3f *)&this_ptr->field_0x20) {
        CStack_128.x = *(float *)&this_ptr->field_0x20;
        CStack_128.y = *(float *)&this_ptr->field_0x24;
        CStack_128.z = *(float *)&this_ptr->field_0x28;
      }
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
      CStack_128.x = fStack_18 * *(float *)&this_ptr->field_0x2b8 + CStack_128.x;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
      CStack_128.z = fStack_18 * *(float *)&this_ptr->field_0x2c0 + CStack_128.z;
      CStack_134.x = 0.0;
      CStack_134.y = *(float *)&this_ptr->field_0x2bc;
      iVar6 = iVar6 + 1;
      CStack_134.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                (0x01C3DEB4,&CStack_128,1.0,&CStack_134,0xffff);
    } while (iVar6 < 4);
    break;
  case 4:
    fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7853982,1.5707964);
    fStack_18 = fStack_3c;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
    fStack_38 = *(float *)&this_ptr->field_0x520;
    fVar10 = (float10)fcos((float10)fStack_3c);
    fVar11 = (float10)fcos((float10)fStack_18);
    fVar12 = (float10)fsin((float10)fStack_3c);
    fVar13 = (float10)fsin((float10)fStack_18);
    CStack_14c.y = (float)((float10)fStack_38 * fVar12);
    CStack_14c.x = (float)((float10)fStack_38 * fVar11 * fVar10);
    CStack_14c.z = (float)(fVar13 * (float10)fStack_38 * fVar10);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
    core_fire_cpp_CFireEffect_createRock_FUN_0049d5b0
              (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x20,&CStack_14c,pCVar4);
    break;
  case 5:
    core_emitter_cpp_FUN_00487c80(this_ptr);
    iVar3 = 1;
    euler_angles = (CVector3f *)&this_ptr->field_0x30;
    iVar6 = 2;
    position = &CStack_b0;
    CStack_b0.x = fStack_74;
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) = afStack_88[(uint)bVar9 * -2 + 6];
    this_ptr_01 = 0x01C3DEB4;
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
              (this_ptr_01,position,euler_angles,iVar6,iVar3);
    iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_bc = *(float *)(iVar6 + 0x20) - *(float *)&this_ptr->field_0x20;
    fStack_b8 = *(float *)(iVar6 + 0x24) - *(float *)&this_ptr->field_0x24;
    fStack_b4 = *(float *)(iVar6 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_8c = fStack_bc;
    afStack_88[(uint)bVar9 * -2] = afStack_d0[(uint)bVar9 * -2 + 6];
    afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (SQRT(afStack_88[1] * afStack_88[1] + fStack_8c * fStack_8c + afStack_88[0] * afStack_88[0])
        < (float)_DAT_005d2bf6) {
      core_actor_cpp_FUN_00408de0();
      iVar6 = 1;
      uVar15 = 0x3f80000000000000;
      uVar14 = ZEXT48(&uStack_f8);
      this_ptr_00 = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
      uStack_f8 = afStack_f4[2];
      afStack_f4[(uint)bVar9 * -2] = afStack_f4[(uint)bVar9 * -2 + 3];
      afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
                (this_ptr_00,(CVector3f *)uVar14,(int)(uVar14 >> 0x20),(int)uVar15,
                 (float)((ulonglong)uVar15 >> 0x20),iVar6);
    }
    break;
  case 6:
    puVar1 = &this_ptr->field_0x20;
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0
              (0x01C3DEB4,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0
              (0x01C3DEB4,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0
              (0x01C3DEB4,(CVector3f *)puVar1,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0
              (0x01C3DEB4,(CVector3f *)puVar1,(CVector3f *)0x0);
    break;
  case 7:
    puVar1 = &this_ptr->field_0x20;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
              (0x01C3DEB4,(CVector3f *)puVar1,*(float *)&this_ptr->field_0x2bc,0,
               *(float *)&this_ptr->field_0x2b8 * (float)_DAT_005d2bee);
    if (&CStack_104 != (CVector3f *)puVar1) {
      CStack_104.x = *(float *)puVar1;
      CStack_104.y = *(float *)&this_ptr->field_0x24;
      CStack_104.z = *(float *)&this_ptr->field_0x28;
    }
    CStack_104.y = *(float *)&this_ptr->field_0x2bc * (float)_DAT_005d2bee + CStack_104.y;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810
              ((CDemonGlobe *)&this_ptr->field_0x5cc,&CStack_104);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x7fff);
    *(int *)&this_ptr->field_0x608 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    this_ptr->field_0x5e8 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
    fVar16 = *(float *)&this_ptr->field_0x2bc;
    goto LAB_00486e2d;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
              (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1,
               0xffff);
    break;
  case 9:
    iVar6 = *(int *)&this_ptr->field_0x54c;
    if (iVar6 != 0) {
      (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x24))(iVar6);
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
      fStack_68 = afStack_88[2] * _DAT_005d2be6;
      fStack_64 = afStack_88[3] * _DAT_005d2be6;
      fStack_60 = fStack_78 * _DAT_005d2be6;
      fStack_5c = afStack_88[2] * _DAT_005d2be6;
      afStack_88[(uint)bVar9 * -2 + 0xc] = afStack_88[(uint)bVar9 * -2 + 9];
      afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      core_actor_cpp_FUN_00408cf0();
      fStack_140 = fStack_170;
      afStack_13c[(uint)bVar9 * -2] = *(float *)(&stack0xfffffe94 + (uint)bVar9 * -8);
      afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)(&stack0xfffffe98 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      iVar6 = *(int *)&this_ptr->field_0x54c;
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
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
                (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x20,&CStack_e0,0,0.0,4.0);
    }
    break;
  case 0xb:
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                          (0.0,*(float *)&this_ptr->field_0x614 * _DAT_005d2be2);
    fStack_20 = fStack_18 - *(float *)&this_ptr->field_0x614;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                          (0.0,*(float *)&this_ptr->field_0x614 * _DAT_005d2be2);
    fStack_11c = *(float *)&this_ptr->field_0x20 + fStack_20;
    uStack_118 = *(uint *)&this_ptr->field_0x24;
    fStack_114 = (fStack_18 - *(float *)&this_ptr->field_0x614) + *(float *)&this_ptr->field_0x28;
    uVar5 = *(uint *)&this_ptr->field_0x524;
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
    core_fire_cpp_FUN_0049d600(0x01C3DEB4,&fStack_11c,&stack0xfffffe9c,pCVar4,uVar5);
    fStack_11c = *(float *)&this_ptr->field_0x20;
    uStack_118 = *(uint *)&this_ptr->field_0x28;
    fStack_114 = (float)uStack_118;
    break;
  case 0xc:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    core_fire_cpp_FUN_0049d6a0
              (0x01C3DEB4,&this_ptr->field_0x20,&uStack_110,*(uint *)&this_ptr->field_0x530,
               *(uint *)&this_ptr->field_0x534,*(uint *)&this_ptr->field_0x52c,
               *(uint *)&this_ptr->field_0x538,*(uint *)&this_ptr->field_0x528,
               *(uint *)&this_ptr->field_0x53c);
LAB_00486de8:
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810
              ((CDemonGlobe *)&this_ptr->field_0x5cc,(CVector3f *)&this_ptr->field_0x20);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x7fff);
    *(int *)&this_ptr->field_0x608 = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar3 = iVar6 >> 0x1f;
    fVar16 = 10.0;
    this_ptr->field_0x5e8 = (char)((int)(((iVar6 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
LAB_00486e2d:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
              ((CDemonGlobe *)&this_ptr->field_0x5cc,fVar16);
    pCVar2 = g_CDemonSetPtr;
    *(uint *)&this_ptr->field_0x5ec = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(pCVar2,(CDemonGlobe *)&this_ptr->field_0x5cc)
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
    fStack_24 = *(float *)&this_ptr->field_0x618 * _DAT_005d2bde;
    CStack_a4.x = CStack_a4.x * fStack_24;
    CStack_a4.y = CStack_a4.y * fStack_24;
    CStack_a4.z = CStack_a4.z * fStack_24;
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
              (g_CGorePtr,&CStack_158,&CStack_a4,3,BLOOD_TYPE_RED);
  }
  if (((this_ptr->field_0x554 != '\0') &&
      (iVar6 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x5b8), iVar6 == 0)) &&
     ((*(int *)&this_ptr->field_0x5bc != 1 || (*(int *)&this_ptr->field_0x610 == 0)))) {
    uVar5 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))();
    *(uint *)&this_ptr->field_0x5b8 = uVar5;
  }
LAB_00486e6b:
  *(uint *)&this_ptr->field_0x610 = *(uint *)&this_ptr->field_0x2c4;
  if (*(int *)&this_ptr->field_0x548 != 0) {
    if (*(int *)&this_ptr->field_0x540 == 0) {
      if ((0.0 < *(float *)&this_ptr->field_0x390) &&
         (fVar16 = *(float *)&this_ptr->field_0x5c8 - delta_time,
         *(float *)&this_ptr->field_0x5c8 = fVar16, fVar16 <= 0.0)) {
        *(uint *)&this_ptr->field_0x5c8 = 0;
        *(uint *)&this_ptr->field_0x2c4 = 0;
        return;
      }
    }
    else if (*(int *)&this_ptr->field_0x2c4 == 0) {
      fVar16 = *(float *)&this_ptr->field_0x5c8 - delta_time;
      *(float *)&this_ptr->field_0x5c8 = fVar16;
      if (fVar16 <= 0.0) {
        *(uint *)&this_ptr->field_0x2c4 = 1;
        *(uint *)&this_ptr->field_0x5c8 = *(uint *)&this_ptr->field_0x390;
        return;
      }
    }
    else {
      fVar16 = *(float *)&this_ptr->field_0x5c8 - delta_time;
      *(float *)&this_ptr->field_0x5c8 = fVar16;
      if (fVar16 <= 0.0) {
        *(uint *)&this_ptr->field_0x2c4 = 0;
        *(uint *)&this_ptr->field_0x5c8 = *(uint *)&this_ptr->field_0x544;
        return;
      }
    }
  }
  return;
}
