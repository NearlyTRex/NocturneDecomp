// Name: core_emitter.cpp_CEmitter_process_FUN_00478790
// Address: 00478790
// Address Range: [[00478790, 00478f78]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_00478790(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_process_FUN_00478790(CEmitter *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  CKeyFramedModel *model_ptr;
  CBoundingBox3D *pCVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
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
  
  iVar8 = this_ptr->was_active;
  iVar4 = _strcmp(this_ptr->event_on,"none");
  if ((iVar4 != 0) &&
     (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->event_on), pCVar3 = g_CDemonSet_PTR_005be368,
     iVar4 != 0)) {
    iVar8 = 1;
    this_ptr->emitter_state = 1;
    this_ptr->state_timer = this_ptr->max_emit_time;
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(pCVar3,&this_ptr->base);
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,this_ptr->event_off)
  ;
  if (iVar4 != 0) {
    this_ptr->emitter_state = 0;
  }
  if (this_ptr->emitter_type == 10) {
    iVar8 = 0;
    iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                      ((double)(this_ptr->base).location.position.x,
                       (double)(this_ptr->base).location.position.y,
                       (double)(this_ptr->base).location.position.z,50.0);
    if (((iVar4 == 0) || (iVar8 = 1, g_CGame_PTR_005b9354->foul_language_flag != 0)) ||
       (iVar4 = _strnicmp(this_ptr->wav_name,"mob",3), iVar4 != 0
       )) {
      if (iVar8 != 0) goto LAB_0047883d;
    }
    else {
      iVar8 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  }
LAB_0047883d:
  if (this_ptr->emitter_state == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
    goto LAB_00478941;
  }
  fVar13 = this_ptr->emit_timer + delta_time;
  this_ptr->emit_timer = fVar13;
  if ((fVar13 < this_ptr->emit_period) ||
     (this_ptr->emit_timer = this_ptr->emit_timer - this_ptr->emit_period, iVar8 == 0))
  goto LAB_00478941;
  switch(this_ptr->emitter_type) {
  case 0:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(CVector3f *)0x0,0x4000,0x10000,0,0xffff
              );
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(&this_ptr->globe,&pCVar1->position);
    iVar8 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar8;
    iVar8 = (iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0);
    iVar4 = iVar8 >> 0x1f;
    fVar13 = 10.0;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar8 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    goto LAB_00478902;
  case 1:
    pCVar1 = &(this_ptr->base).location;
    iVar8 = 0;
    do {
      if ((CLocation *)&local_70 != pCVar1) {
        local_70.x = (pCVar1->position).x;
        local_70.y = (this_ptr->base).location.position.y;
        local_70.z = (this_ptr->base).location.position.z;
      }
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.5,0.5);
      local_70.x = local_14 * (this_ptr->emitter_size).x + local_70.x;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.5,0.5);
      local_70.z = local_14 * (this_ptr->emitter_size).z + local_70.z;
      local_d0.x = 0.0;
      local_d0.y = (this_ptr->emitter_size).y;
      iVar8 = iVar8 + 1;
      local_d0.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                (g_CFireEffect_PTR_005b80f0,&local_70,1.0,&local_d0,0xffff);
    } while (iVar8 < 4);
    break;
  case 4:
    local_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855);
    local_2c = this_ptr->rock_speed;
    fVar9 = (float10)fcos((float10)local_28);
    fVar10 = (float10)fcos((float10)local_14);
    fVar11 = (float10)fsin((float10)local_28);
    fVar12 = (float10)fsin((float10)local_14);
    local_94.y = (float)((float10)local_2c * fVar11);
    local_94.x = (float)((float10)local_2c * fVar10 * fVar9);
    local_94.z = (float)(fVar12 * (float10)local_2c * fVar9);
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
    core_fire_cpp_CFireEffect_createRock_FUN_0048b320
              (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,&local_94,model_ptr);
    break;
  case 5:
    core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390(this_ptr,&local_b8);
    core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
              (g_CFireEffect_PTR_005b80f0,&local_b8,&(this_ptr->base).orient.vec,2,1);
    pCVar2 = *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    pCVar1 = &(this_ptr->base).location;
    local_ac = (pCVar2->location).position.x - (pCVar1->position).x;
    local_a8 = (pCVar2->location).position.y - (this_ptr->base).location.position.y;
    local_a4 = (pCVar2->location).position.z - (this_ptr->base).location.position.z;
    if (SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8) <
        (float)2.5) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(pCVar2,&local_a0,&pCVar1->position);
      core_charactr_cpp_FUN_00427730
                (*(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),&local_a0,0,0,1.0,1);
    }
    break;
  case 6:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(CVector3f *)0x0);
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(CVector3f *)0x0);
    break;
  case 7:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420
              (g_CFireEffect_PTR_005b80f0,&pCVar1->position,(this_ptr->emitter_size).y,0,
               (this_ptr->emitter_size).x * (float)0.5);
    if ((CLocation *)local_4c != pCVar1) {
      local_4c[0].x = (pCVar1->position).x;
      local_4c[0].y = (this_ptr->base).location.position.y;
      local_4c[0].z = (this_ptr->base).location.position.z;
    }
    local_4c[0].y = (this_ptr->emitter_size).y * (float)0.5 + local_4c[0].y;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(&this_ptr->globe,local_4c);
    iVar8 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0x7fff);
    (this_ptr->globe).intensity_multiplier = iVar8;
    iVar8 = (iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0);
    iVar4 = iVar8 >> 0x1f;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar8 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    fVar13 = (this_ptr->emitter_size).y;
LAB_00478902:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(&this_ptr->globe,fVar13);
    pCVar3 = g_CDemonSet_PTR_005be368;
    (this_ptr->globe).corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(pCVar3,&this_ptr->globe);
    break;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,(CVector3f *)0x0,
               0x4000,0x10000,1,0xffff);
    break;
  case 9:
    pCVar2 = this_ptr->dest_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar5 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_e8);
      fStack_c4 = (pCVar5->min).x + (pCVar5->max).x;
      fStack_c0 = (pCVar5->min).y + (pCVar5->max).y;
      CStack_88.x = fStack_c4 * 5.2220990168285998e-315._0_4_;
      fStack_bc = (pCVar5->min).z + (pCVar5->max).z;
      CStack_88.y = fStack_c0 * 5.2220990168285998e-315._0_4_;
      CStack_88.z = fStack_bc * 5.2220990168285998e-315._0_4_;
      pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                         (this_ptr->dest_actor,&CStack_64,&CStack_88);
      pCVar2 = this_ptr->dest_actor;
      CStack_7c.x = (pCVar2->location).position.x + pCVar6->x;
      CStack_7c.y = (pCVar2->location).position.y + pCVar6->y;
      CStack_7c.z = (pCVar2->location).position.z + pCVar6->z;
      if (&CStack_58 != &CStack_7c) {
        CStack_58.x = CStack_7c.x;
        CStack_58.y = CStack_7c.y;
        CStack_58.z = CStack_7c.z;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
                (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,&CStack_58,0,0.0,4.0
                );
    }
  }
  if (((this_ptr->wav_name[0] != '\0') &&
      (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle), iVar8 == 0)) &&
     ((this_ptr->sfx_type != 1 || (this_ptr->prev_emitter_state == 0)))) {
    uVar7 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->wav_name);
    this_ptr->sfx_handle = uVar7;
  }
LAB_00478941:
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  if (this_ptr->periodic_flag == 0) {
    if ((0.0 < this_ptr->max_emit_time) &&
       (fVar13 = this_ptr->state_timer - delta_time, this_ptr->state_timer = fVar13, fVar13 <= 0.0))
    {
      this_ptr->state_timer = 0.0;
      this_ptr->emitter_state = 0;
      return;
    }
  }
  else if (this_ptr->emitter_state == 0) {
    fVar13 = this_ptr->state_timer - delta_time;
    this_ptr->state_timer = fVar13;
    if (fVar13 <= 0.0) {
      this_ptr->emitter_state = 1;
      this_ptr->state_timer = this_ptr->max_emit_time;
      return;
    }
  }
  else {
    fVar13 = this_ptr->state_timer - delta_time;
    this_ptr->state_timer = fVar13;
    if (fVar13 <= 0.0) {
      this_ptr->emitter_state = 0;
      this_ptr->state_timer = this_ptr->max_wait_time;
      return;
    }
  }
  return;
}
