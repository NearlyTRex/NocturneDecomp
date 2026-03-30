// Name: core_emitter.cpp_CEmitter_process_FUN_004a8070
// Address: 004a8070
// Address Range: [[004a8070, 004a8858]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_004a8070(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_process_FUN_004a8070(CEmitter *this_ptr,float delta_time)

{
  CLocation *pCVar4;
  CDemonActor *pCVar7;
  CDemonSet *this_ptr_01;
  int iVar4;
  int iVar9;
  float fVar14;
  float fVar15;
  float fVar16;
  CKeyFramedModel *model_ptr;
  CBoundingBox3D *pCVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar17;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  CBoundingBox3D CStack_e8;
  CVector3f local_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f local_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f local_4c [2];
  float local_2c;
  float local_28;
  float local_14;
  CLocation *pCVar1;
  CHero *this_ptr_00;
  CDemonActor *pCVar2;
  CDemonSet *pCVar3;
  float fVar13;
  
  iVar8 = this_ptr->was_active;
  iVar4 = _strcmp(this_ptr->event_on,"none");
  if ((iVar4 != 0) &&
     (iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->event_on), this_ptr_01 = g_CDemonSetPtr,
     iVar9 != 0)) {
    iVar8 = 1;
    this_ptr->emitter_state = 1;
    this_ptr->state_timer = this_ptr->max_emit_time;
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(this_ptr_01,&this_ptr->base);
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->event_off);
  if (iVar9 != 0) {
    this_ptr->emitter_state = 0;
  }
  if (this_ptr->emitter_type == 10) {
    iVar8 = 0;
    iVar9 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                      ((double)(this_ptr->base).location.position.x,
                       (double)(this_ptr->base).location.position.y,
                       (double)(this_ptr->base).location.position.z,50.0);
    if (((iVar9 == 0) || (iVar8 = 1, g_CGamePtr->foul_language_flag != 0)) ||
       (iVar9 = _strnicmp(this_ptr->wav_name,"mob",3), iVar9 != 0
       )) {
      if (iVar8 != 0) goto LAB_004a811d;
    }
    else {
      iVar8 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  }
LAB_004a811d:
  if (this_ptr->emitter_state == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
    goto LAB_004a8221;
  }
  fVar14 = this_ptr->emit_timer + delta_time;
  this_ptr->emit_timer = fVar14;
  if ((fVar14 < this_ptr->emit_period) ||
     (this_ptr->emit_timer = this_ptr->emit_timer - this_ptr->emit_period, iVar8 == 0))
  goto LAB_004a8221;
  switch(this_ptr->emitter_type) {
  case 0:
    pCVar4 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,&pCVar4->position,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(&this_ptr->globe,&pCVar4->position);
    iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar9;
    iVar9 = (iVar9 + (iVar9 >> 0x1f) * -0x100) - (uint)((iVar9 >> 0x1f) << 7 < 0);
    iVar17 = iVar9 >> 0x1f;
    fVar13 = 10.0;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar9 >> 8) + iVar17 * -4) - (uint)(iVar17 << 1 < 0)) >> 2);
    goto LAB_004a81e2;
  case 1:
    pCVar4 = &(this_ptr->base).location;
    iVar9 = 0;
    do {
      if ((CLocation *)&local_70 != pCVar4) {
        local_70.x = (pCVar4->position).x;
        local_70.y = (this_ptr->base).location.position.y;
        local_70.z = (this_ptr->base).location.position.z;
      }
      fVar14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
      local_70.x = fVar14 * (this_ptr->emitter_size).x + local_70.x;
      fVar14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
      local_70.z = fVar14 * (this_ptr->emitter_size).z + local_70.z;
      local_d0.x = 0.0;
      local_d0.y = (this_ptr->emitter_size).y;
      iVar9 = iVar9 + 1;
      local_d0.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (g_CFireEffectPtr,&local_70,1.0,&local_d0,0xffff);
    } while (iVar9 < 4);
    break;
  case 4:
    fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
    fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
    fVar14 = this_ptr->rock_speed;
    fVar9 = (float10)fcos((float10)fVar15);
    fVar10 = (float10)fcos((float10)fVar16);
    fVar11 = (float10)fsin((float10)fVar15);
    fVar12 = (float10)fsin((float10)fVar16);
    local_94.y = (float)((float10)fVar14 * fVar11);
    local_94.x = (float)((float10)fVar14 * fVar10 * fVar9);
    local_94.z = (float)(fVar12 * (float10)fVar14 * fVar9);
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    core_fire_cpp_CFireEffect_createRock_FUN_004c7e60
              (g_CFireEffectPtr,&(this_ptr->base).location.position,&local_94,model_ptr);
    break;
  case 5:
    core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20(this_ptr,&local_b8);
    core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0
              (g_CFireEffectPtr,&local_b8,&(this_ptr->base).orient.vec,2,1);
    this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
    pCVar4 = &(this_ptr->base).location;
    fVar14 = (this_ptr_00->base).base.location.position.x - (pCVar4->position).x;
    fVar15 = (this_ptr_00->base).base.location.position.y - (this_ptr->base).location.position.y;
    fVar16 = (this_ptr_00->base).base.location.position.z - (this_ptr->base).location.position.z;
    if (SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15) < (float)2.5) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr_00,&local_a0,&pCVar4->position);
      core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
                (&g_HeroActors[g_LocalHeroIndex]->base,&local_a0,0,0.0,0x3f800000,1);
    }
    break;
  case 6:
    pCVar4 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240
              (g_CFireEffectPtr,&pCVar4->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240
              (g_CFireEffectPtr,&pCVar4->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240
              (g_CFireEffectPtr,&pCVar4->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240
              (g_CFireEffectPtr,&pCVar4->position,(CVector3f *)0x0);
    break;
  case 7:
    pCVar4 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50
              (g_CFireEffectPtr,&pCVar4->position,(this_ptr->emitter_size).y,0,
               (this_ptr->emitter_size).x * (float)0.5);
    if ((CLocation *)local_4c != pCVar4) {
      local_4c[0].x = (pCVar4->position).x;
      local_4c[0].y = (this_ptr->base).location.position.y;
      local_4c[0].z = (this_ptr->base).location.position.z;
    }
    local_4c[0].y = (this_ptr->emitter_size).y * (float)0.5 + local_4c[0].y;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(&this_ptr->globe,local_4c);
    iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar9;
    iVar9 = (iVar9 + (iVar9 >> 0x1f) * -0x100) - (uint)((iVar9 >> 0x1f) << 7 < 0);
    iVar17 = iVar9 >> 0x1f;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar9 >> 8) + iVar17 * -4) - (uint)(iVar17 << 1 < 0)) >> 2);
    fVar13 = (this_ptr->emitter_size).y;
LAB_004a81e2:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(&this_ptr->globe,fVar13);
    pCVar3 = g_CDemonSetPtr;
    (this_ptr->globe).corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(pCVar3,&this_ptr->globe);
    break;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,
               1,0xffff);
    break;
  case 9:
    pCVar2 = this_ptr->dest_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar5 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_e8);
      CStack_88.x = ((pCVar5->min).x + (pCVar5->max).x) * 0.5f;
      CStack_88.y = ((pCVar5->min).y + (pCVar5->max).y) * 0.5f;
      CStack_88.z = ((pCVar5->min).z + (pCVar5->max).z) * 0.5f;
      pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (this_ptr->dest_actor,&CStack_64,&CStack_88);
      pCVar7 = this_ptr->dest_actor;
      CStack_7c.x = (pCVar7->location).position.x + pCVar6->x;
      CStack_7c.y = (pCVar7->location).position.y + pCVar6->y;
      CStack_7c.z = (pCVar7->location).position.z + pCVar6->z;
      if (&CStack_58 != &CStack_7c) {
        CStack_58.x = CStack_7c.x;
        CStack_58.y = CStack_7c.y;
        CStack_58.z = CStack_7c.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0
                (g_CFireEffectPtr,&(this_ptr->base).location.position,&CStack_58,0,0.0,4.0);
    }
  }
  if (((this_ptr->wav_name[0] != '\0') &&
      (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle), iVar9 == 0)) &&
     ((this_ptr->sfx_type != 1 || (this_ptr->prev_emitter_state == 0)))) {
    uVar7 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->wav_name);
    this_ptr->sfx_handle = uVar7;
  }
LAB_004a8221:
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  if (this_ptr->periodic_flag == 0) {
    if ((0.0 < this_ptr->max_emit_time) &&
       (fVar14 = this_ptr->state_timer - delta_time, this_ptr->state_timer = fVar14, fVar14 <= 0.0))
    {
      this_ptr->state_timer = 0.0;
      this_ptr->emitter_state = 0;
      return;
    }
  }
  else if (this_ptr->emitter_state == 0) {
    fVar14 = this_ptr->state_timer - delta_time;
    this_ptr->state_timer = fVar14;
    if (fVar14 <= 0.0) {
      this_ptr->emitter_state = 1;
      this_ptr->state_timer = this_ptr->max_emit_time;
      return;
    }
  }
  else {
    fVar14 = this_ptr->state_timer - delta_time;
    this_ptr->state_timer = fVar14;
    if (fVar14 <= 0.0) {
      this_ptr->emitter_state = 0;
      this_ptr->state_timer = this_ptr->max_wait_time;
      return;
    }
  }
  return;
}
