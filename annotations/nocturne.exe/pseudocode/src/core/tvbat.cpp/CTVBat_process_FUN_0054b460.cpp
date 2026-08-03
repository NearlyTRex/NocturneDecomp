// Name: core_tvbat.cpp_CTVBat_process_FUN_0054b460
// Address: 0054b460
// Address Range: [[0054b460, 0054bfb4]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_process_FUN_0054b460(CTVBat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_0054b460(CTVBat *this_ptr,float delta_time)

{
  float *pfVar1;
  float *pfVar2;
  CLocation *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CDemonActor *pCVar10;
  CCharacter *pCVar11;
  int iVar12;
  CKeyFramedModel *pCVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float local_178;
  float local_170;
  SDamageInfo local_16c;
  SCollisionInfo SStack_130;
  float local_f0;
  float local_ec;
  float fStack_e8;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
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
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_18;
  
  if ((this_ptr->follow_orders != 0) && (this_ptr->boss_actor == (CDemonActor *)0x0)) {
    iVar16 = 0;
    for (iVar17 = 0; iVar17 < g_CDemonSet_PTR_005be368->enemy_count; iVar17 = iVar17 + 1) {
      iVar12 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->enemies + iVar16),
                          "CVampireBoss");
      if (iVar12 != 0) {
        this_ptr->boss_actor = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->enemies + iVar16);
        break;
      }
      iVar16 = iVar16 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) &&
     (pCVar10 = this_ptr->boss_actor, pCVar10 != (CDemonActor *)0x0)) {
    if ((CLocation *)&this_ptr->home_pos != &pCVar10->location) {
      (this_ptr->home_pos).x = (pCVar10->location).position.x;
      (this_ptr->home_pos).y = (pCVar10->location).position.y;
      (this_ptr->home_pos).z = (pCVar10->location).position.z;
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + 4.0f;
  }
  iVar16 = this_ptr->state;
  if (iVar16 == 2) {
    return;
  }
  if (iVar16 == 3) {
    return;
  }
  pCVar3 = &(this_ptr->base).base.base.location;
  pfVar1 = &(this_ptr->base).base.base.location.position.z;
  pfVar2 = &(this_ptr->base).base.base.location.position.y;
  if (iVar16 == 1) {
    local_dc.x = (pCVar3->position).x;
    local_dc.y = *pfVar2;
    local_dc.z = *pfVar1;
    (this_ptr->velocity).y = delta_time * (float)-32 + (this_ptr->velocity).y;
    local_94 = (this_ptr->velocity).x * delta_time;
    local_90 = (this_ptr->velocity).y * delta_time;
    local_8c = (this_ptr->velocity).z * delta_time;
    fVar15 = (this_ptr->base).base.base.location.position.y;
    (pCVar3->position).x = (pCVar3->position).x + local_94;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar15 + local_90;
    (this_ptr->base).base.base.location.position.z = fVar4 + local_8c;
    (this_ptr->base).base.base.orient.vec.z =
         delta_time * this_ptr->rot_speed * 2.0f + (this_ptr->base).base.base.orient.vec.z
    ;
    fVar15 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                       (&g_CDemonRaytrace_01fba938,&local_dc,&pCVar3->position,&local_a0,(int *)0x0)
    ;
    if ((0.0 <= fVar15) && (fVar15 < 1.0)) {
      fVar4 = ((this_ptr->base).base.base.location.position.y - local_dc.y) * fVar15 *
              0.8f;
      fVar5 = ((this_ptr->base).base.base.location.position.z - local_dc.z) * fVar15 *
              0.8f;
      (pCVar3->position).x =
           local_dc.x + ((pCVar3->position).x - local_dc.x) * fVar15 * 0.8f;
      (this_ptr->base).base.base.location.position.y = local_dc.y + fVar4;
      (this_ptr->base).base.base.location.position.z = local_dc.z + fVar5;
      (this_ptr->velocity).z = 0.0;
      (this_ptr->velocity).y = (this_ptr->velocity).z;
      (this_ptr->velocity).x = (this_ptr->velocity).y;
    }
    if (&local_88 != &local_d0) {
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
  local_7c = (pCVar3->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar1;
  if (this_ptr->follow_orders == 0) {
    pCVar11 = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    (this_ptr->base).victim = pCVar11;
    if (pCVar11 != (CCharacter *)0x0) {
      pCVar3 = &(pCVar11->base).location;
      if ((CLocation *)&local_58 != pCVar3) {
        local_58 = (pCVar3->position).x;
        local_54 = (pCVar11->base).location.position.y;
        local_50 = (pCVar11->base).location.position.z;
      }
      local_18 = (this_ptr->base).base.base.direction_hint % 8 + -4;
      local_54 = (float)local_18 * (float)0.5 +
                 this_ptr->height_offset + (float)4 + local_54;
      goto LAB_0054b592;
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
LAB_0054b592:
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
    fVar15 = this_ptr->attack_timer - delta_time;
    this_ptr->attack_timer = fVar15;
    if (fVar15 < 0.0) {
      this_ptr->attack_timer = 0.0;
    }
    if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
      g_CHAR_PTR_01cc4800 = "..\\core\\tvbat.cpp";
      g_INT_01cc4804 = 0x10a;
      core_main_c_FUN_004c8440("CTVBat::process - can't follow orders in network game!");
    }
    iVar16 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_58 != (float *)(iVar16 + 0x20)) {
      local_58 = *(float *)(iVar16 + 0x20);
      local_54 = *(float *)(iVar16 + 0x24);
      local_50 = *(float *)(iVar16 + 0x28);
    }
    local_54 = this_ptr->height_offset + (float)4 + local_54;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  local_70 = local_58 - (this_ptr->base).base.base.location.position.x;
  local_6c = local_54 - (this_ptr->base).base.base.location.position.y;
  local_68 = local_50 - (this_ptr->base).base.base.location.position.z;
  if (&local_88 != &local_70) {
    local_88 = local_70;
    local_84 = local_6c;
    local_80 = local_68;
  }
  atan2((float10)local_88,(float10)local_80);
  fVar18 = SQRT((float10)local_8c * (float10)local_8c + (float10)local_84 * (float10)local_84);
  fVar19 = atan2((float10)local_88,fVar18);
  fStack_24 = (float)fVar18;
  fStack_28 = (float)-fVar19;
  if (((this_ptr->base).victim != (CCharacter *)0x0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_130);
    pCVar11 = (this_ptr->base).victim;
    (*((pCVar11->base).vtable._ub)->getCollisionType)(&pCVar11->base,&SStack_130);
    pCVar11 = (this_ptr->base).victim;
    local_f0 = (this_ptr->base).base.base.location.position.x - (pCVar11->base).location.position.x;
    local_ec = (this_ptr->base).base.base.location.position.y - (pCVar11->base).location.position.y;
    fStack_e8 = (this_ptr->base).base.base.location.position.z - (pCVar11->base).location.position.z
    ;
    if (&local_90 != &local_f0) {
      local_90 = local_f0;
      local_8c = local_ec;
      local_88 = fStack_e8;
    }
    if (((SStack_130.cylinder_bottom_y <= local_8c) && (local_8c <= SStack_130.cylinder_top_y)) &&
       (local_178 < (float)2)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_16c);
      local_16c.damage_amount = 1.0;
      local_16c.attacker = (CDemonActor *)this_ptr;
      local_16c.wielder = (CDemonActor *)this_ptr;
      pCVar11 = (this_ptr->base).victim;
      (*(((pCVar11->base).vtable._uc)->_uc).processDamage)(pCVar11,&local_16c);
      if (0.0 < local_16c.damage_amount) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  (g_CGore_PTR_005b96c4,&(this_ptr->base).base.base.location.position,
                   (CVector3f *)0x0,3,0);
      }
    }
  }
  fVar18 = (float10)(this_ptr->base).base.base.orient.vec.x;
  fVar19 = (float10)fsin(fVar18);
  fVar20 = (float10)(this_ptr->base).base.base.orient.vec.y;
  fVar21 = (float10)fsin(fVar20);
  fVar18 = (float10)fcos(fVar18);
  fVar20 = (float10)fcos(fVar20);
  fStack_38 = (float)-fVar19;
  fStack_3c = (float)(fVar21 * fVar18);
  fStack_44 = (float)(fVar20 * fVar18);
  fStack_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                        (fStack_24 - (this_ptr->base).base.base.orient.vec.y);
  fVar15 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.orient.vec.y =
       fStack_24 * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.vec.y;
  local_20 = fStack_24;
  fStack_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fStack_28 - fVar15);
  fVar15 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar5 = this_ptr->move_speed;
  fVar6 = this_ptr->move_speed;
  fVar9 = (float)0.33333333333333298;
  fVar7 = this_ptr->rot_speed;
  (this_ptr->velocity).x = this_ptr->move_speed * fStack_3c;
  fVar8 = this_ptr->move_speed;
  (this_ptr->velocity).y = fVar15 * fStack_38;
  (this_ptr->velocity).z = fVar8 * fStack_44;
  (this_ptr->base).base.base.orient.vec.z = -fStack_24 * fVar9;
  fVar15 = (this_ptr->base).base.base.location.position.y;
  fVar8 = (this_ptr->base).base.base.location.position.z;
  fVar9 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.location.position.x =
       fStack_3c * fVar4 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = fStack_38 * fVar5 * delta_time + fVar15;
  (this_ptr->base).base.base.location.position.z = fStack_44 * fVar6 * delta_time + fVar8;
  (this_ptr->base).base.base.orient.vec.x = fStack_28 * delta_time * fVar7 + fVar9;
  local_cc = (this_ptr->base).base.base.location.position.x - local_84;
  local_c8 = (this_ptr->base).base.base.location.position.y - local_80;
  fStack_c4 = (this_ptr->base).base.base.location.position.z - local_7c;
  local_170 = (local_c8 * (float)4) / delta_time + (float)35;
  if (local_170 < (float)10) {
    local_170 = 10.0;
  }
  if ((float)60 < local_170) {
    local_170 = 60.0;
  }
  this_ptr->anim_rate =
       (local_170 - this_ptr->anim_rate) * (float)0.69999999999999996 + this_ptr->anim_rate;
  this_ptr->anim_frame = delta_time * this_ptr->anim_rate * this_ptr->speed + this_ptr->anim_frame;
  local_20 = fStack_28;
  pCVar13 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  local_20 = (float)pCVar13->frame_count;
  if (this_ptr->anim_frame < (float)(int)local_20) {
    if (this_ptr->anim_frame < 0.0) {
      local_20 = (float)((int)local_20 + -1);
      this_ptr->anim_frame = (float)(int)local_20;
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar15 = this_ptr->periodic_sound_timer - delta_time, this_ptr->periodic_sound_timer = fVar15,
     fVar15 <= 0.0)) {
    iVar16 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->periodic_sound_handle);
    if ((iVar16 == 0) &&
       (iVar16 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,50.0),
       iVar16 != 0)) {
      uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->periodic_sound_handle = uVar14;
    }
    fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->periodic_sound_timer = fVar15;
    return;
  }
  return;
}
