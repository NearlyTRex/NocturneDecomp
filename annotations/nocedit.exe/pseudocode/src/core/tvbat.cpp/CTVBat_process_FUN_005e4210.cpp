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
  uint uVar12;
  float fVar13;
  int iVar14;
  CLocation *pCVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
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
  
  if ((this_ptr->follow_orders != 0) && (*(int *)(this_ptr->unk6 + 8) == 0)) {
    iVar14 = 0;
    for (iVar16 = 0; iVar16 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar16 = iVar16 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                         (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar14 + 8000),
                          "CVampireBoss");
      if (iVar10 != 0) {
        *(uint *)(this_ptr->unk6 + 8) = *(uint *)(g_CDemonSetPtr->unk4 + iVar14 + 8000);
        break;
      }
      iVar14 = iVar14 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) && (iVar14 = *(int *)(this_ptr->unk6 + 8), iVar14 != 0)) {
    if (&this_ptr->home_pos != (CVector3f *)(iVar14 + 0x20)) {
      (this_ptr->home_pos).x = *(float *)(iVar14 + 0x20);
      (this_ptr->home_pos).y = *(float *)(iVar14 + 0x24);
      (this_ptr->home_pos).z = *(float *)(iVar14 + 0x28);
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + 4.0f;
  }
  iVar14 = this_ptr->state;
  if (iVar14 == 2) {
    return;
  }
  if (iVar14 == 3) {
    return;
  }
  pCVar15 = &(this_ptr->base).base.base.location;
  pfVar1 = &(this_ptr->base).base.base.location.position.z;
  pfVar2 = &(this_ptr->base).base.base.location.position.y;
  if (iVar14 == 1) {
    local_dc.x = (pCVar15->position).x;
    local_dc.y = *pfVar2;
    local_dc.z = *pfVar1;
    *(float *)(this_ptr->unk4 + 8) =
         delta_time * (float)-32 + *(float *)(this_ptr->unk4 + 8);
    local_94 = *(float *)(this_ptr->unk4 + 4) * delta_time;
    local_90 = *(float *)(this_ptr->unk4 + 8) * delta_time;
    local_8c = *(float *)(this_ptr->unk4 + 0xc) * delta_time;
    fVar13 = (this_ptr->base).base.base.location.position.y;
    (pCVar15->position).x = (pCVar15->position).x + local_94;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar13 + local_90;
    (this_ptr->base).base.base.location.position.z = fVar3 + local_8c;
    (this_ptr->base).base.base.orient.heading =
         delta_time * this_ptr->rot_speed * 2.0f +
         (this_ptr->base).base.base.orient.heading;
    fVar13 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,&local_dc,&pCVar15->position,&local_a0,(int *)0x0)
    ;
    if ((0.0 <= fVar13) && (fVar13 < 1.0)) {
      fVar3 = ((this_ptr->base).base.base.location.position.y - local_dc.y) * fVar13 *
              0.8f;
      fVar4 = ((this_ptr->base).base.base.location.position.z - local_dc.z) * fVar13 *
              0.8f;
      (pCVar15->position).x =
           local_dc.x + ((pCVar15->position).x - local_dc.x) * fVar13 * 0.8f;
      (this_ptr->base).base.base.location.position.y = local_dc.y + fVar3;
      (this_ptr->base).base.base.location.position.z = local_dc.z + fVar4;
      this_ptr->unk4[0xc] = '\0';
      this_ptr->unk4[0xd] = '\0';
      this_ptr->unk4[0xe] = '\0';
      this_ptr->unk4[0xf] = '\0';
      *(uint *)(this_ptr->unk4 + 8) = *(uint *)(this_ptr->unk4 + 0xc);
      *(float *)(this_ptr->unk4 + 4) = *(float *)(this_ptr->unk4 + 8);
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
  local_7c = (pCVar15->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar1;
  if (this_ptr->follow_orders == 0) {
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    *(CHero **)((this_ptr->base).unk2 + 4) = pCVar9;
    if (pCVar9 != (CHero *)0x0) {
      pCVar15 = &(pCVar9->base).base.location;
      if ((CLocation *)&local_58 != pCVar15) {
        local_58 = (pCVar15->position).x;
        local_54 = (pCVar9->base).base.location.position.y;
        local_50 = (pCVar9->base).base.location.position.z;
      }
      local_18 = (this_ptr->base).base.base.unk1 % 8 + -4;
      local_54 = (float)local_18 * (float)0.5 +
                 *(float *)this_ptr->unk3 + (float)4 + local_54;
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
  if (0.0 < *(float *)this_ptr->unk4) {
    fVar13 = *(float *)this_ptr->unk4 - delta_time;
    *(float *)this_ptr->unk4 = fVar13;
    if (fVar13 < 0.0) {
      this_ptr->unk4[0] = '\0';
      this_ptr->unk4[1] = '\0';
      this_ptr->unk4[2] = '\0';
      this_ptr->unk4[3] = '\0';
    }
    if (g_CNetGamePtr->connection_type != 0) {
      g_CurrentFilename = "..\\core\\tvbat.cpp";
      g_CurrentLineNumber = 0x10a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTVBat::process - can't follow orders in network game!");
    }
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    pCVar15 = &(pCVar9->base).base.location;
    if ((CLocation *)&local_58 != pCVar15) {
      local_58 = (pCVar15->position).x;
      local_54 = (pCVar9->base).base.location.position.y;
      local_50 = (pCVar9->base).base.location.position.z;
    }
    local_54 = *(float *)this_ptr->unk3 + (float)4 + local_54;
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
  fVar17 = atan2
                     ((float10)local_88,
                      SQRT((float10)local_8c * (float10)local_8c +
                           (float10)local_84 * (float10)local_84));
  local_24 = (float)extraout_ST1;
  local_28 = (float)-fVar17;
  if ((*(int *)((this_ptr->base).unk2 + 4) != 0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_130);
    (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x34))();
    iVar14 = *(int *)((this_ptr->base).unk2 + 4);
    local_f0 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar14 + 0x20);
    local_ec = (this_ptr->base).base.base.location.position.y - *(float *)(iVar14 + 0x24);
    fStack_e8 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar14 + 0x28);
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
  fVar17 = (float10)(this_ptr->base).base.base.orient.pitch;
  fVar18 = (float10)fsin(fVar17);
  fVar19 = (float10)(this_ptr->base).base.base.orient.bank;
  fVar20 = (float10)fsin(fVar19);
  fVar17 = (float10)fcos(fVar17);
  fVar19 = (float10)fcos(fVar19);
  fStack_38 = (float)-fVar18;
  local_3c = (float)(fVar20 * fVar17);
  fStack_44 = (float)(fVar19 * fVar17);
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_24 - (this_ptr->base).base.base.orient.bank);
  fVar13 = (this_ptr->base).base.base.orient.pitch;
  (this_ptr->base).base.base.orient.bank =
       local_24 * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.bank;
  local_20 = local_24;
  local_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_28 - fVar13);
  fVar13 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar5 = this_ptr->move_speed;
  fVar8 = (float)0.33333333333333298;
  fVar6 = this_ptr->rot_speed;
  *(float *)(this_ptr->unk4 + 4) = this_ptr->move_speed * local_3c;
  fVar7 = this_ptr->move_speed;
  *(float *)(this_ptr->unk4 + 8) = fVar13 * fStack_38;
  *(float *)(this_ptr->unk4 + 0xc) = fVar7 * fStack_44;
  (this_ptr->base).base.base.orient.heading = -local_24 * fVar8;
  fVar13 = (this_ptr->base).base.base.location.position.y;
  fVar7 = (this_ptr->base).base.base.location.position.z;
  fVar8 = (this_ptr->base).base.base.orient.pitch;
  (this_ptr->base).base.base.location.position.x =
       local_3c * fVar3 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = fStack_38 * fVar4 * delta_time + fVar13;
  (this_ptr->base).base.base.location.position.z = fStack_44 * fVar5 * delta_time + fVar7;
  (this_ptr->base).base.base.orient.pitch = local_28 * delta_time * fVar6 + fVar8;
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
  *(float *)this_ptr->unk2 =
       (local_170 - *(float *)this_ptr->unk2) * (float)0.69999999999999996 + *(float *)this_ptr->unk2;
  *(float *)(this_ptr->unk1 + 8) =
       delta_time * *(float *)this_ptr->unk2 * this_ptr->speed + *(float *)(this_ptr->unk1 + 8);
  local_20 = local_28;
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                      ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0xc));
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
  if ((this_ptr->unk5[0] != '\0') &&
     (fVar13 = *(float *)(this_ptr->unk6 + 4) - delta_time, *(float *)(this_ptr->unk6 + 4) = fVar13,
     fVar13 <= 0.0)) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk6);
    if ((iVar14 == 0) &&
       (iVar14 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,50.0),
       iVar14 != 0)) {
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->unk5);
      *(uint *)this_ptr->unk6 = uVar12;
    }
    fVar13 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    *(float *)(this_ptr->unk6 + 4) = fVar13;
    return;
  }
  return;
}
