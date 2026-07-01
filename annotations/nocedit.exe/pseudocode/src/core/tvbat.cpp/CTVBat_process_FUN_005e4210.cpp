// Name: core_tvbat.cpp_CTVBat_process_FUN_005e4210
// Address: 005e4210
// Address Range: [[005e4210, 005e4d64]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar9;
  float fVar10;
  CCharacter *pCVar12;
  CHero *pCVar14;
  int iVar12;
  CKeyFramedModel *pCVar13;
  float fVar16;
  int iVar17;
  uint uVar14;
  float fVar15;
  int iVar16;
  CLocation *pCVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar18;
  float10 fVar23;
  float10 fVar20;
  float10 fVar21;
  float10 fVar24;
  float10 fVar22;
  float fStack_168;
  SDamageInfo SStack_164;
  SCollisionInfo local_128;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f local_dc;
  float local_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_a0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float local_3c;
  float local_34;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  float fVar3;
  float *pfVar1;
  float *pfVar2;
  CHero *pCVar10;
  CCharacter *pCVar11;
  float fVar8;
  CDemonActor *pCVar9;
  float fVar6;
  float fVar7;
  float fVar4;
  float fVar5;
  
  if ((this_ptr->follow_orders != 0) && (this_ptr->boss_actor == (CDemonActor *)0x0)) {
    iVar16 = 0;
    for (iVar18 = 0; iVar18 < g_CDemonSetPtr->enemy_count; iVar18 = iVar18 + 1) {
      iVar12 = core_actor_cpp_isOfClass_FUN_0040c6d0
                         (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar16),
                          "CVampireBoss");
      if (iVar12 != 0) {
        this_ptr->boss_actor = *(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar16);
        break;
      }
      iVar16 = iVar16 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) &&
     (pCVar9 = this_ptr->boss_actor, pCVar9 != (CDemonActor *)0x0)) {
    if ((CLocation *)&this_ptr->home_pos != &pCVar9->location) {
      (this_ptr->home_pos).x = (pCVar9->location).position.x;
      (this_ptr->home_pos).y = (pCVar9->location).position.y;
      (this_ptr->home_pos).z = (pCVar9->location).position.z;
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + 4.0f;
  }
  iVar17 = this_ptr->state;
  if (iVar17 == 2) {
    return;
  }
  if (iVar17 == 3) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.base.location;
  pfVar1 = &(this_ptr->base).base.base.location.position.z;
  pfVar2 = &(this_ptr->base).base.base.location.position.y;
  if (iVar17 == 1) {
    local_dc.x = (pCVar1->position).x;
    local_dc.y = *pfVar2;
    local_dc.z = *pfVar1;
    (this_ptr->velocity).y = delta_time * (float)-32 + (this_ptr->velocity).y;
    fVar16 = (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).z;
    fVar9 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + (this_ptr->velocity).x * delta_time;
    fVar10 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar9 + fVar16 * delta_time;
    (this_ptr->base).base.base.location.position.z = fVar10 + fVar2 * delta_time;
    (this_ptr->base).base.base.orient.vec.z =
         delta_time * this_ptr->rot_speed * 2.0f + (this_ptr->base).base.base.orient.vec.z
    ;
    fVar16 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,&local_dc,&pCVar1->position,&local_a0,(int *)0x0);
    if ((0.0 <= fVar16) && (fVar16 < 1.0)) {
      fVar2 = ((this_ptr->base).base.base.location.position.y - local_dc.y) * fVar16 *
              0.8f;
      fVar9 = ((this_ptr->base).base.base.location.position.z - local_dc.z) * fVar16 *
              0.8f;
      (pCVar1->position).x =
           local_dc.x + ((pCVar1->position).x - local_dc.x) * fVar16 * 0.8f;
      (this_ptr->base).base.base.location.position.y = local_dc.y + fVar2;
      (this_ptr->base).base.base.location.position.z = local_dc.z + fVar9;
      (this_ptr->velocity).z = 0.0;
      (this_ptr->velocity).y = (this_ptr->velocity).z;
      (this_ptr->velocity).x = (this_ptr->velocity).y;
    }
    if (&local_88 != local_d0) {
      local_88 = local_dc.x - (this_ptr->base).base.base.location.position.x;
      local_84 = local_dc.y - (this_ptr->base).base.base.location.position.y;
      local_80 = local_dc.z - (this_ptr->base).base.base.location.position.z;
    }
    if ((float)0.10000000000000001 <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) {
      return;
    }
    this_ptr->state = 2;
    return;
  }
  local_7c = (pCVar1->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar1;
  if (this_ptr->follow_orders == 0) {
    pCVar14 = g_HeroActors[g_LocalHeroIndex];
    (this_ptr->base).victim = &pCVar14->base;
    if (pCVar14 != (CHero *)0x0) {
      pCVar1 = &(pCVar14->base).base.location;
      if ((CLocation *)&local_58 != pCVar1) {
        local_58 = (pCVar1->position).x;
        local_54 = (pCVar14->base).base.location.position.y;
        local_50 = (pCVar14->base).base.location.position.z;
      }
      local_18 = (float)((this_ptr->base).base.base.direction_hint % 8 + -4);
      local_54 = (float)(int)local_18 * (float)0.5 +
                 this_ptr->height_offset + (float)4 + local_54;
      goto LAB_005e4342;
    }
  }
  else {
    (this_ptr->base).victim = (CCharacter *)0x0;
  }
  if ((CVector3f *)&local_58 != &this_ptr->home_pos) {
    local_58 = (this_ptr->home_pos).x;
    local_54 = (this_ptr->home_pos).y;
    local_50 = (this_ptr->home_pos).z;
  }
LAB_005e4342:
  local_b8 = (this_ptr->home_pos).x - (this_ptr->base).base.base.location.position.x;
  local_b4 = (this_ptr->home_pos).y - (this_ptr->base).base.base.location.position.y;
  local_b0 = (this_ptr->home_pos).z - (this_ptr->base).base.base.location.position.z;
  if (&local_88 != &local_b8) {
    local_88 = local_b8;
    local_84 = local_b4;
    local_80 = local_b0;
  }
  if (((this_ptr->max_distance <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) ||
      (this_ptr->max_height <= ABS(local_84))) && ((CVector3f *)&local_58 != &this_ptr->home_pos)) {
    local_58 = (this_ptr->home_pos).x;
    local_54 = (this_ptr->home_pos).y;
    local_50 = (this_ptr->home_pos).z;
  }
  if (0.0 < this_ptr->attack_timer) {
    fVar16 = this_ptr->attack_timer - delta_time;
    this_ptr->attack_timer = fVar16;
    if (fVar16 < 0.0) {
      this_ptr->attack_timer = 0.0;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      g_CurrentFilename = "..\\core\\tvbat.cpp";
      g_CurrentLineNumber = 266;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTVBat::process - can't follow orders in network game!");
    }
    pCVar10 = g_HeroActors[g_LocalHeroIndex];
    pCVar17 = &(pCVar10->base).base.location;
    if ((CLocation *)&local_58 != pCVar17) {
      local_58 = (pCVar17->position).x;
      local_54 = (pCVar10->base).base.location.position.y;
      local_50 = (pCVar10->base).base.location.position.z;
    }
    local_54 = this_ptr->height_offset + (float)4 + local_54;
    (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
  }
  local_70 = local_58 - (this_ptr->base).base.base.location.position.x;
  local_6c = local_54 - (this_ptr->base).base.base.location.position.y;
  local_68 = local_50 - (this_ptr->base).base.base.location.position.z;
  if (&local_88 != &local_70) {
    local_88 = local_70;
    local_84 = local_6c;
    local_80 = local_68;
  }
  fVar18 = (float10)fpatan((float10)local_88,(float10)local_80);
  fVar19 = SQRT((float10)local_88 * (float10)local_88 + (float10)local_80 * (float10)local_80);
  fVar22 = (float10)fpatan((float10)local_84,fVar19);
  local_1c = (float)fVar18;
  local_20 = (float)-fVar22;
  if (((this_ptr->base).victim != (CCharacter *)0x0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_128);
    pCVar12 = (this_ptr->base).victim;
    (*((pCVar12->base).vtable._ub)->getCollisionType)(&pCVar12->base,&local_128);
    pCVar12 = (this_ptr->base).victim;
    fStack_e8 = (this_ptr->base).base.base.location.position.x - (pCVar12->base).location.position.x
    ;
    fStack_e4 = (this_ptr->base).base.base.location.position.y - (pCVar12->base).location.position.y
    ;
    fStack_e0 = (this_ptr->base).base.base.location.position.z - (pCVar12->base).location.position.z
    ;
    if (&local_88 != &fStack_e8) {
      local_88 = fStack_e8;
      local_84 = fStack_e4;
      local_80 = fStack_e0;
    }
    if (((local_128.cylinder_bottom_y <= local_84) && (local_84 <= local_128.cylinder_top_y)) &&
       ((float)fVar19 < (float)2)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_164);
      SStack_164.damage_amount = 1.0;
      SStack_164.attacker = (CDemonActor *)this_ptr;
      SStack_164.wielder = (CDemonActor *)this_ptr;
      pCVar12 = (this_ptr->base).victim;
      (*(((pCVar12->base).vtable._uc)->_uc).processDamage)(pCVar12,&SStack_164);
      if (0.0 < SStack_164.damage_amount) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&(this_ptr->base).base.base.location.position,(CVector3f *)0x0,3,0);
      }
    }
  }
  fVar18 = (float10)(this_ptr->base).base.base.orient.vec.x;
  fVar23 = (float10)fsin(fVar18);
  fVar20 = (float10)(this_ptr->base).base.base.orient.vec.y;
  fVar21 = (float10)fsin(fVar20);
  fVar18 = (float10)fcos(fVar18);
  fVar24 = (float10)fcos(fVar20);
  local_30 = (float)-fVar23;
  local_34 = (float)(fVar21 * fVar18);
  local_3c = (float)(fVar24 * fVar18);
  local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_1c - (this_ptr->base).base.base.orient.vec.y);
  fVar16 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.orient.vec.y =
       local_1c * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.vec.y;
  local_18 = local_1c;
  local_20 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_20 - fVar16);
  fVar16 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar5 = this_ptr->move_speed;
  fVar2 = (float)0.33333333333333298;
  fVar6 = this_ptr->rot_speed;
  (this_ptr->velocity).x = this_ptr->move_speed * local_34;
  fVar7 = this_ptr->move_speed;
  (this_ptr->velocity).y = fVar16 * local_30;
  (this_ptr->velocity).z = fVar7 * local_3c;
  (this_ptr->base).base.base.orient.vec.z = -local_1c * fVar2;
  fVar16 = (this_ptr->base).base.base.location.position.y;
  fVar2 = (this_ptr->base).base.base.location.position.z;
  fVar8 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.location.position.x =
       local_34 * fVar3 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = local_30 * fVar4 * delta_time + fVar16;
  (this_ptr->base).base.base.location.position.z = local_3c * fVar5 * delta_time + fVar2;
  (this_ptr->base).base.base.orient.vec.x = local_20 * delta_time * fVar6 + fVar8;
  fStack_168 = (((this_ptr->base).base.base.location.position.y - local_78) * (float)4
               ) / delta_time + (float)35;
  if (fStack_168 < (float)10) {
    fStack_168 = 10.0;
  }
  if ((float)60 < fStack_168) {
    fStack_168 = 60.0;
  }
  this_ptr->anim_rate =
       (fStack_168 - this_ptr->anim_rate) * (float)0.69999999999999996 + this_ptr->anim_rate;
  this_ptr->anim_frame = delta_time * this_ptr->anim_rate * this_ptr->speed + this_ptr->anim_frame;
  local_18 = local_20;
  pCVar13 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  local_18 = (float)pCVar13->frame_count;
  if (this_ptr->anim_frame < (float)(int)local_18) {
    if (this_ptr->anim_frame < 0.0) {
      local_18 = (float)((int)local_18 + -1);
      this_ptr->anim_frame = (float)(int)local_18;
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar16 = this_ptr->periodic_sound_timer - delta_time, this_ptr->periodic_sound_timer = fVar16,
     fVar16 <= 0.0)) {
    iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->periodic_sound_handle);
    if ((iVar17 == 0) &&
       (iVar17 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,50.0),
       iVar17 != 0)) {
      uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->periodic_sound_handle = uVar14;
    }
    fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->periodic_sound_timer = fVar15;
    return;
  }
  return;
}
