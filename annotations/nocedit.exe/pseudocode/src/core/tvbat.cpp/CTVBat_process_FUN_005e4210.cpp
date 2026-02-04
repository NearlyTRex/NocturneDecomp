// Name: core_tvbat.cpp_CTVBat_process_FUN_005e4210
// Address: 005e4210
// Address Range: [[005e4210, 005e4d46]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr,float delta_time)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CHero *pCVar9;
  int iVar10;
  CKeyFramedModel *pCVar11;
  float fVar12;
  int iVar13;
  CLocation *pCVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 extraout_ST1;
  float local_178;
  float local_170;
  SDamageInfo local_16c;
  SCollisionInfo local_130;
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
  float local_3c;
  float fStack_38;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  
  if ((this_ptr->follow_orders != 0) && (this_ptr->unk11 == 0)) {
    iVar13 = 0;
    for (iVar15 = 0; iVar15 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar15 = iVar15 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                         (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar13 + 8000),
                          "CVampireBoss");
      if (iVar10 != 0) {
        this_ptr->unk11 = *(int *)(g_CDemonSetPtr->unk4 + iVar13 + 8000);
        break;
      }
      iVar13 = iVar13 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) && (iVar13 = this_ptr->unk11, iVar13 != 0)) {
    if (&this_ptr->home_pos != (CVector3f *)(iVar13 + 0x20)) {
      (this_ptr->home_pos).x = *(float *)(iVar13 + 0x20);
      (this_ptr->home_pos).y = *(float *)(iVar13 + 0x24);
      (this_ptr->home_pos).z = *(float *)(iVar13 + 0x28);
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + 4.0f;
  }
  iVar13 = this_ptr->state;
  if (iVar13 == 2) {
    return;
  }
  if (iVar13 == 3) {
    return;
  }
  pCVar14 = &(this_ptr->base).base.base.location;
  pfVar1 = &(this_ptr->base).base.base.location.position.z;
  pfVar2 = &(this_ptr->base).base.base.location.position.y;
  if (iVar13 == 1) {
    local_dc.x = (pCVar14->position).x;
    local_dc.y = *pfVar2;
    local_dc.z = *pfVar1;
    this_ptr->unk6 = (int)(delta_time * (float)-32 + (float)this_ptr->unk6);
    local_94 = (float)this_ptr->unk5 * delta_time;
    local_90 = (float)this_ptr->unk6 * delta_time;
    local_8c = (float)this_ptr->unk7 * delta_time;
    fVar12 = (this_ptr->base).base.base.location.position.y;
    (pCVar14->position).x = (pCVar14->position).x + local_94;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar12 + local_90;
    (this_ptr->base).base.base.location.position.z = fVar3 + local_8c;
    (this_ptr->base).base.base.orient.heading =
         delta_time * this_ptr->rot_speed * 2.0f +
         (this_ptr->base).base.base.orient.heading;
    fVar12 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,&local_dc,&pCVar14->position,&local_a0,(int *)0x0)
    ;
    if ((0.0 <= fVar12) && (fVar12 < 1.0)) {
      fVar3 = ((this_ptr->base).base.base.location.position.y - local_dc.y) * fVar12 *
              0.8f;
      fVar4 = ((this_ptr->base).base.base.location.position.z - local_dc.z) * fVar12 *
              0.8f;
      (pCVar14->position).x =
           local_dc.x + ((pCVar14->position).x - local_dc.x) * fVar12 * 0.8f;
      (this_ptr->base).base.base.location.position.y = local_dc.y + fVar3;
      (this_ptr->base).base.base.location.position.z = local_dc.z + fVar4;
      this_ptr->unk7 = 0;
      this_ptr->unk6 = this_ptr->unk7;
      this_ptr->unk5 = this_ptr->unk6;
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
  local_7c = (pCVar14->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar1;
  if (this_ptr->follow_orders == 0) {
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    *(CHero **)((this_ptr->base).unk2 + 4) = pCVar9;
    if (pCVar9 != (CHero *)0x0) {
      pCVar14 = &(pCVar9->base).base.location;
      if ((CLocation *)&local_58 != pCVar14) {
        local_58 = (pCVar14->position).x;
        local_54 = (pCVar9->base).base.location.position.y;
        local_50 = (pCVar9->base).base.location.position.z;
      }
      local_18 = (this_ptr->base).base.base.unk1 % 8 + -4;
      local_54 = (float)local_18 * (float)0.5 +
                 (float)this_ptr->unk3 + (float)4 + local_54;
      goto LAB_005e4342;
    }
  }
  else {
    (this_ptr->base).unk2[4] = '\0';
    (this_ptr->base).unk2[5] = '\0';
    (this_ptr->base).unk2[6] = '\0';
    (this_ptr->base).unk2[7] = '\0';
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
  if (0.0 < this_ptr->unk4) {
    fVar12 = this_ptr->unk4 - delta_time;
    this_ptr->unk4 = fVar12;
    if (fVar12 < 0.0) {
      this_ptr->unk4 = 0.0;
    }
    if (g_CNetGamePtr->connection_type != 0) {
      g_CurrentFilename = "..\\core\\tvbat.cpp";
      g_CurrentLineNumber = 0x10a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTVBat::process - can't follow orders in network game!");
    }
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    pCVar14 = &(pCVar9->base).base.location;
    if ((CLocation *)&local_58 != pCVar14) {
      local_58 = (pCVar14->position).x;
      local_54 = (pCVar9->base).base.location.position.y;
      local_50 = (pCVar9->base).base.location.position.z;
    }
    local_54 = (float)this_ptr->unk3 + (float)4 + local_54;
    *(CHero **)((this_ptr->base).unk2 + 4) = g_HeroActors[g_LocalHeroIndex];
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
  fVar16 = atan2
                     ((float10)local_88,
                      SQRT((float10)local_8c * (float10)local_8c +
                           (float10)local_84 * (float10)local_84));
  local_24 = (float)extraout_ST1;
  local_28 = (float)-fVar16;
  if ((*(int *)((this_ptr->base).unk2 + 4) != 0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_130);
    (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x34))();
    iVar13 = *(int *)((this_ptr->base).unk2 + 4);
    local_f0 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar13 + 0x20);
    local_ec = (this_ptr->base).base.base.location.position.y - *(float *)(iVar13 + 0x24);
    fStack_e8 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar13 + 0x28);
    if (&local_90 != &local_f0) {
      local_90 = local_f0;
      local_8c = local_ec;
      local_88 = fStack_e8;
    }
    if (((local_130.cylinder_bottom_y <= local_8c) && (local_8c <= local_130.cylinder_top_y)) &&
       (local_178 < (float)2)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_16c);
      local_16c.damage_amount = 1.0;
      local_16c.attacker = (CDemonActor *)this_ptr;
      local_16c.wielder = (CDemonActor *)this_ptr;
      (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x11c))();
      if (0.0 < local_16c.damage_amount) {
        core_gore_cpp_FUN_004edbb0();
      }
    }
  }
  fVar16 = (float10)(this_ptr->base).base.base.orient.pitch;
  fVar17 = (float10)fsin(fVar16);
  fVar18 = (float10)(this_ptr->base).base.base.orient.bank;
  fVar19 = (float10)fsin(fVar18);
  fVar16 = (float10)fcos(fVar16);
  fVar18 = (float10)fcos(fVar18);
  fStack_38 = (float)-fVar17;
  local_3c = (float)(fVar19 * fVar16);
  fStack_44 = (float)(fVar18 * fVar16);
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_24 - (this_ptr->base).base.base.orient.bank);
  fVar12 = (this_ptr->base).base.base.orient.pitch;
  (this_ptr->base).base.base.orient.bank =
       local_24 * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.bank;
  local_20 = local_24;
  local_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_28 - fVar12);
  fVar12 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar6 = (float)0.33333333333333298;
  fVar5 = this_ptr->rot_speed;
  this_ptr->unk5 = (int)(this_ptr->move_speed * local_3c);
  this_ptr->unk6 = (int)(this_ptr->move_speed * fStack_38);
  this_ptr->unk7 = (int)(this_ptr->move_speed * fStack_44);
  (this_ptr->base).base.base.orient.heading = -local_24 * fVar6;
  fVar6 = (this_ptr->base).base.base.location.position.y;
  fVar7 = (this_ptr->base).base.base.location.position.z;
  fVar8 = (this_ptr->base).base.base.orient.pitch;
  (this_ptr->base).base.base.location.position.x =
       local_3c * fVar12 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = fStack_38 * fVar3 * delta_time + fVar6;
  (this_ptr->base).base.base.location.position.z = fStack_44 * fVar4 * delta_time + fVar7;
  (this_ptr->base).base.base.orient.pitch = local_28 * delta_time * fVar5 + fVar8;
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
  this_ptr->unk2 =
       (int)((local_170 - (float)this_ptr->unk2) * (float)0.69999999999999996 + (float)this_ptr->unk2);
  *(float *)(this_ptr->unk1 + 8) =
       delta_time * (float)this_ptr->unk2 * this_ptr->speed + *(float *)(this_ptr->unk1 + 8);
  local_20 = local_28;
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  local_20 = (float)pCVar11->frame_count;
  if (*(float *)(this_ptr->unk1 + 8) < (float)(int)local_20) {
    if (*(float *)(this_ptr->unk1 + 8) < 0.0) {
      local_20 = (float)((int)local_20 + -1);
      *(float *)(this_ptr->unk1 + 8) = (float)(int)local_20;
    }
  }
  else {
    this_ptr->unk1[8] = '\0';
    this_ptr->unk1[9] = '\0';
    this_ptr->unk1[10] = '\0';
    this_ptr->unk1[0xb] = '\0';
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar12 = this_ptr->unk10 - delta_time, this_ptr->unk10 = fVar12, fVar12 <= 0.0)) {
    iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk9);
    if ((iVar13 == 0) &&
       (iVar13 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,50.0),
       iVar13 != 0)) {
      iVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->unk9 = iVar13;
    }
    fVar12 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->unk10 = fVar12;
    return;
  }
  return;
}
