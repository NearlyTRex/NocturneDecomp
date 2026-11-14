// Name: core_emitter.cpp_CEmitter_process_FUN_0049f310
// Address: 0049f310
// Address Range: [[0049f310, 0049fdef]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_0049f310(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_process_FUN_0049f310(CEmitter *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_1150 [995];
  CCharacter *this_ptr_00;
  CFireEffect *this_ptr_01;
  CVector3f *position;
  ulonglong uVar15;
  CVector3f *euler_angles;
  ulonglong uVar16;
  float fVar17;
  CBoundingBox3D *in_stack_fffffe60;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float fStack_138;
  CVector3f CStack_134;
  CVector3f CStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [7];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_90;
  float afStack_84 [4];
  float afStack_74 [5];
  float fStack_60;
  float afStack_5c [8];
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar10 = 0;
  iVar7 = this_ptr->was_on_screen;
  iVar4 = _strcmp(this_ptr->event_on,"@none" + 1);
  if ((iVar4 != 0) &&
     (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->event_on), iVar4 != 0)) {
    iVar7 = 1;
    this_ptr->is_active = 1;
    pCVar3 = g_CDemonSetPtr;
    this_ptr->emitter_state = 1;
    this_ptr->state_timer = this_ptr->max_emit_time;
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(pCVar3,&this_ptr->base);
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,this_ptr->event_off)
  ;
  if (iVar4 != 0) {
    this_ptr->emitter_state = 0;
    this_ptr->is_active = 0;
  }
  if (this_ptr->emitter_type == EMITTER_TYPE_SOUND) {
    iVar7 = 0;
    iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010
                      ((double)(this_ptr->base).location.position.x,
                       (double)(this_ptr->base).location.position.y,
                       (double)(this_ptr->base).location.position.z,this_ptr->sound_radius);
    if (((iVar4 == 0) || (iVar7 = 1, g_CGamePtr->foul_language_flag != 0)) ||
       (iVar4 = _strnicmp(this_ptr->wav_name,&DAT_005dc970,3), iVar4 != 0)
       ) {
      if (iVar7 != 0) goto LAB_0049f3c7;
    }
    else {
      iVar7 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  }
LAB_0049f3c7:
  if (this_ptr->emitter_state == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
    goto LAB_0049f4cb;
  }
  fVar17 = this_ptr->emit_timer + delta_time;
  this_ptr->emit_timer = fVar17;
  if ((fVar17 < this_ptr->emit_period) ||
     (this_ptr->emit_timer = this_ptr->emit_timer - this_ptr->emit_period, iVar7 == 0))
  goto LAB_0049f4cb;
  switch(this_ptr->emitter_type) {
  case EMITTER_TYPE_SPARK:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    goto LAB_0049f448;
  case EMITTER_TYPE_SMOKE:
    pCVar1 = &(this_ptr->base).location;
    iVar7 = 0;
    do {
      if ((CLocation *)&CStack_128 != pCVar1) {
        CStack_128.x = (pCVar1->position).x;
        CStack_128.y = (this_ptr->base).location.position.y;
        CStack_128.z = (this_ptr->base).location.position.z;
      }
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.5,0.5);
      CStack_128.x = fStack_18 * (this_ptr->emitter_size).x + CStack_128.x;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.5,0.5);
      CStack_128.z = fStack_18 * (this_ptr->emitter_size).z + CStack_128.z;
      CStack_134.x = 0.0;
      CStack_134.y = (this_ptr->emitter_size).y;
      iVar7 = iVar7 + 1;
      CStack_134.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,&CStack_128,1.0,&CStack_134,0xffff);
    } while (iVar7 < 4);
    break;
  case EMITTER_TYPE_ROCK:
    fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
    fStack_18 = fStack_3c;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
    fStack_38 = this_ptr->rock_speed;
    fVar11 = (float10)fcos((float10)fStack_3c);
    fVar12 = (float10)fcos((float10)fStack_18);
    fVar13 = (float10)fsin((float10)fStack_3c);
    fVar14 = (float10)fsin((float10)fStack_18);
    CStack_14c.y = (float)((float10)fStack_38 * fVar13);
    CStack_14c.x = (float)((float10)fStack_38 * fVar12 * fVar11);
    CStack_14c.z = (float)(fVar14 * (float10)fStack_38 * fVar11);
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
    core_fire_cpp_CFireEffect_createRock_FUN_004b5eb0
              (0x01C57074,&(this_ptr->base).location.position,&CStack_14c,pCVar5);
    break;
  case EMITTER_TYPE_FLAME:
    core_emitter_cpp_FUN_004a02e0(this_ptr);
    iVar4 = 1;
    euler_angles = (CVector3f *)&(this_ptr->base).orient;
    iVar7 = 2;
    position = &CStack_b0;
    CStack_b0.x = afStack_74[0];
    *(float *)((int)&CStack_b0 + (uint)bVar10 * -8 + 4) = afStack_74[(uint)bVar10 * -2 + 1];
    this_ptr_01 = 0x01C57074;
    *(float *)((int)&CStack_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
    core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
              (this_ptr_01,position,euler_angles,iVar7,iVar4);
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    afStack_c8[3] = *(float *)(iVar7 + 0x20) - (this_ptr->base).location.position.x;
    fStack_b8 = *(float *)(iVar7 + 0x24) - (this_ptr->base).location.position.y;
    fStack_b4 = *(float *)(iVar7 + 0x28) - (this_ptr->base).location.position.z;
    CStack_90.y = afStack_c8[3];
    afStack_84[(uint)bVar10 * -2 + -1] = afStack_c8[(uint)bVar10 * -2 + 4];
    afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    if (SQRT(afStack_84[0] * afStack_84[0] + CStack_90.y * CStack_90.y + CStack_90.z * CStack_90.z)
        < (float)_DAT_005dc98f) {
      core_actor_cpp_FUN_00408bb0();
      iVar7 = 1;
      uVar16 = 0x3f80000000000000;
      uVar15 = ZEXT48(&uStack_f8);
      this_ptr_00 = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      uStack_f8 = afStack_f4[2];
      afStack_f4[(uint)bVar10 * -2] = afStack_f4[(uint)bVar10 * -2 + 3];
      afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
                (this_ptr_00,(CVector3f *)uVar15,(int)(uVar15 >> 0x20),(int)uVar16,
                 (float)((ulonglong)uVar16 >> 0x20),iVar7);
    }
    break;
  case EMITTER_TYPE_POPCORN:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0
              (0x01C57074,&pCVar1->position,(CVector3f *)0x0);
    break;
  case EMITTER_TYPE_LIGHTNING:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
              (0x01C57074,&pCVar1->position,(this_ptr->emitter_size).y,0,
               (this_ptr->emitter_size).x * (float)_DAT_005dc987);
    if ((CLocation *)&CStack_104 != pCVar1) {
      CStack_104.x = (pCVar1->position).x;
      CStack_104.y = (this_ptr->base).location.position.y;
      CStack_104.z = (this_ptr->base).location.position.z;
    }
    CStack_104.y = (this_ptr->emitter_size).y * (float)_DAT_005dc987 + CStack_104.y;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(&this_ptr->globe,&CStack_104);
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar4 = iVar7 >> 0x1f;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar7 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    fVar17 = (this_ptr->emitter_size).y;
    goto LAB_0049f48d;
  case EMITTER_TYPE_BLUE_SPARK:
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,1,
               0xffff);
    break;
  case EMITTER_TYPE_POINT_TO_POINT_LIGHTNING:
    pCVar2 = this_ptr->dest_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,in_stack_fffffe60);
      puVar8 = (uint *)&stack0xfffffe68;
      puVar9 = (uint *)&stack0xfffffe78;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      fStack_cc = fStack_180 + fStack_174;
      afStack_c8[0] = fStack_17c + fStack_170;
      afStack_c8[1] = fStack_178 + fStack_16c;
      afStack_84[3] = fStack_180 + fStack_174;
      afStack_74[(uint)bVar10 * -2] = afStack_c8[(uint)bVar10 * -2];
      afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_60 = afStack_84[3] * _DAT_005dc97f;
      afStack_5c[0] = afStack_74[0] * _DAT_005dc97f;
      afStack_5c[1] = afStack_74[1] * _DAT_005dc97f;
      afStack_5c[2] = afStack_84[3] * _DAT_005dc97f;
      afStack_5c[(uint)bVar10 * -2 + 3] = afStack_5c[(uint)bVar10 * -2];
      afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408ac0(this_ptr->dest_actor,afStack_5c + 2);
      fStack_138 = fStack_168;
      *(float *)((int)&CStack_134 + (uint)bVar10 * -8) =
           (&stack0xfffffe9c)[(uint)bVar10 * 0xfffffffe];
      *(uint *)((int)&CStack_134 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&stack0xfffffea0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      pCVar2 = this_ptr->dest_actor;
      afStack_c8[2] = (pCVar2->location).position.x + fStack_138;
      afStack_c8[3] = (pCVar2->location).position.y + CStack_134.x;
      fStack_b8 = (pCVar2->location).position.z + CStack_134.y;
      CStack_90.x = afStack_c8[2];
      afStack_84[(uint)bVar10 * -2 + -2] = afStack_c8[(uint)bVar10 * -2 + 3];
      afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      if (&CStack_d8 != &CStack_90) {
        CStack_d8.x = CStack_90.x;
        CStack_d8.y = CStack_90.y;
        CStack_d8.z = CStack_90.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
                (0x01C57074,&(this_ptr->base).location.position,&CStack_d8,0,0.0,4.0);
    }
    break;
  case EMITTER_TYPE_LEAF:
    uStack_15c = 0;
    uStack_160 = 0;
    fStack_164 = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                          (0.0,this_ptr->emit_radius * _DAT_005dc97b);
    fStack_20 = fStack_18 - this_ptr->emit_radius;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                          (0.0,this_ptr->emit_radius * _DAT_005dc97b);
    fStack_11c = (this_ptr->base).location.position.x + fStack_20;
    fStack_118 = (this_ptr->base).location.position.y;
    fStack_114 = (fStack_18 - this_ptr->emit_radius) + (this_ptr->base).location.position.z;
    fVar17 = this_ptr->wind_resist;
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
    core_fire_cpp_CFireEffect_createLeaf_FUN_004b5f00
              (0x01C57074,&fStack_11c,&stack0xfffffe9c,pCVar5,fVar17);
    fStack_11c = (this_ptr->base).location.position.x;
    fStack_118 = (this_ptr->base).location.position.z;
    fStack_114 = fStack_118;
    break;
  case EMITTER_TYPE_FIREFLY:
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0x42000000;
    core_fire_cpp_CFireEffect_createFirefly_FUN_004b5fa0
              (0x01C57074,&(this_ptr->base).location,&uStack_110,this_ptr->fizzle,this_ptr->bright
               ,this_ptr->firefly_type,this_ptr->delta_mult,this_ptr->max_speed,this_ptr->ff_size);
LAB_0049f448:
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              (&this_ptr->globe,&(this_ptr->base).location.position);
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar4 = iVar7 >> 0x1f;
    fVar17 = 10.0;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar7 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
LAB_0049f48d:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(&this_ptr->globe,fVar17);
    pCVar3 = g_CDemonSetPtr;
    (this_ptr->globe).corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(pCVar3,&this_ptr->globe);
    break;
  case EMITTER_TYPE_BLOOD:
    puVar8 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x24);
    CStack_158.x = (this_ptr->base).location.position.x;
    *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + 4) = *puVar8;
    *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         puVar8[(uint)bVar10 * -2 + 1];
    puVar8 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x34);
    CStack_a4.x = (this_ptr->base).orient.vec.x;
    *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4) = *puVar8;
    *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         puVar8[(uint)bVar10 * -2 + 1];
    fStack_24 = this_ptr->blood_velocity * _DAT_005dc977;
    CStack_a4.x = CStack_a4.x * fStack_24;
    CStack_a4.y = CStack_a4.y * fStack_24;
    CStack_a4.z = CStack_a4.z * fStack_24;
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&CStack_158,&CStack_a4,3,BLOOD_TYPE_RED);
  }
  if (((this_ptr->wav_name[0] != '\0') &&
      (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle), iVar7 == 0)) &&
     ((this_ptr->sfx_type != EMITTER_SOUND_ONE_SHOT || (this_ptr->prev_emitter_state == 0)))) {
    uVar6 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->wav_name);
    this_ptr->sfx_handle = uVar6;
  }
LAB_0049f4cb:
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  if (this_ptr->is_active != 0) {
    if (this_ptr->periodic_flag == 0) {
      if ((0.0 < this_ptr->max_emit_time) &&
         (fVar17 = this_ptr->state_timer - delta_time, this_ptr->state_timer = fVar17, fVar17 <= 0.0
         )) {
        this_ptr->state_timer = 0.0;
        this_ptr->emitter_state = 0;
        return;
      }
    }
    else if (this_ptr->emitter_state == 0) {
      fVar17 = this_ptr->state_timer - delta_time;
      this_ptr->state_timer = fVar17;
      if (fVar17 <= 0.0) {
        this_ptr->emitter_state = 1;
        this_ptr->state_timer = this_ptr->max_emit_time;
        return;
      }
    }
    else {
      fVar17 = this_ptr->state_timer - delta_time;
      this_ptr->state_timer = fVar17;
      if (fVar17 <= 0.0) {
        this_ptr->emitter_state = 0;
        this_ptr->state_timer = this_ptr->max_wait_time;
        return;
      }
    }
  }
  return;
}
