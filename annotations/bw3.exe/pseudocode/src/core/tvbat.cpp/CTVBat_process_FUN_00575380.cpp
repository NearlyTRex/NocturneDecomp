// Name: core_tvbat.cpp_CTVBat_process_FUN_00575380
// Address: 00575380
// Address Range: [[00575380, 00575fcd]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00575380(CTVBat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00575380(CTVBat *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonActor *pCVar8;
  CCharacter *pCVar9;
  int iVar10;
  CKeyFramedModel *pCVar11;
  uint uVar12;
  float fVar13;
  int iVar14;
  float *pfVar15;
  uint *puVar16;
  int iVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_1160 [981];
  int *out_intersection_type;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  byte auStack_1e4 [56];
  CTVBat *pCStack_1ac;
  float fStack_194;
  float fStack_190;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  CVector3f CStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_3c;
  float fStack_30;
  float fStack_28;
  CVector3f *pCStack_24;
  CLocation *pCStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar18 = 0;
  if ((this_ptr->follow_orders != 0) && (this_ptr->boss_actor == (CDemonActor *)0x0)) {
    iVar14 = 0;
    for (iVar17 = 0; iVar17 < g_CDemonSetPtr->enemy_count; iVar17 = iVar17 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar14),
                          "CVampireBoss");
      if (iVar10 != 0) {
        this_ptr->boss_actor = *(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar14);
        break;
      }
      iVar14 = iVar14 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) &&
     (pCVar8 = this_ptr->boss_actor, pCVar8 != (CDemonActor *)0x0)) {
    if ((CLocation *)&this_ptr->home_pos != &pCVar8->location) {
      (this_ptr->home_pos).x = (pCVar8->location).position.x;
      (this_ptr->home_pos).y = (pCVar8->location).position.y;
      (this_ptr->home_pos).z = (pCVar8->location).position.z;
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + _DAT_005d7007;
  }
  iVar14 = this_ptr->state;
  if (iVar14 == 2) {
    return;
  }
  if (iVar14 == 3) {
    return;
  }
  if (iVar14 == 1) {
    puVar16 = (uint *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
    CStack_15c.x = (this_ptr->base).base.base.location.position.x;
    *(uint *)((int)&CStack_15c + (uint)bVar18 * -8 + 4) = *puVar16;
    *(uint *)((int)&CStack_15c + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
         puVar16[(uint)bVar18 * -2 + 1];
    (this_ptr->velocity).y = delta_time * (float)_DAT_005d704f + (this_ptr->velocity).y;
    afStack_98[2] = (this_ptr->velocity).x * delta_time;
    out_intersection_type = (int *)0x0;
    pCStack_24 = &this_ptr->velocity;
    pCVar1 = &(this_ptr->base).base.base.location;
    afStack_98[3] = (this_ptr->velocity).y * delta_time;
    fStack_88 = (this_ptr->velocity).z * delta_time;
    fStack_108 = afStack_98[2];
    afStack_11c[(uint)bVar18 * -2 + 6] = afStack_98[(uint)bVar18 * -2 + 3];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    fVar13 = (this_ptr->base).base.base.location.position.y;
    fVar2 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_108;
    (this_ptr->base).base.base.location.position.y = fVar13 + fStack_104;
    (this_ptr->base).base.base.location.position.z = fVar2 + fStack_100;
    (this_ptr->base).base.base.orient.vec.z =
         delta_time * this_ptr->rot_speed * _DAT_005d7057 + (this_ptr->base).base.base.orient.vec.z;
    pCStack_20 = pCVar1;
    fStack_18 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00473cd0
                          (&g_CDemonRaytraceInstance,&CStack_15c,&pCVar1->position,&CStack_12c,
                           out_intersection_type);
    fStack_1e8 = fStack_18;
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      afStack_d4[2] = (pCStack_20->position).x - CStack_15c.x;
      afStack_d4[3] = (pCStack_20->position).y - CStack_15c.y;
      fStack_c4 = (pCStack_20->position).z - CStack_15c.z;
      afStack_11c[2] = afStack_d4[2];
      afStack_11c[(uint)bVar18 * -2 + 3] = afStack_d4[(uint)bVar18 * -2 + 3];
      afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_d4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      fStack_144 = afStack_11c[2] * fStack_1e8;
      afStack_140[0] = afStack_11c[3] * fStack_1e8;
      afStack_140[1] = fStack_10c * fStack_1e8;
      fStack_d8 = afStack_11c[2] * fStack_1e8;
      afStack_d4[(uint)bVar18 * -2] = afStack_140[(uint)bVar18 * -2];
      afStack_d4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      fVar2 = CStack_15c.y;
      fVar13 = CStack_15c.x;
      fStack_6c = fStack_d8 * _DAT_005d705b;
      fStack_68 = afStack_d4[0] * _DAT_005d705b;
      fStack_64 = afStack_d4[1] * _DAT_005d705b;
      fStack_fc = fStack_d8 * _DAT_005d705b;
      afStack_11c[(uint)bVar18 * -2 + 9] = afStack_98[(uint)bVar18 * -2 + 0xc];
      afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
      afStack_174[3] = fVar13 + fStack_fc;
      fStack_164 = fVar2 + fStack_f8;
      fStack_160 = CStack_15c.z + fStack_f4;
      fStack_60 = fVar13 + fStack_fc;
      afStack_98[(uint)bVar18 * -2 + 0xf] = afStack_174[(uint)bVar18 * -2 + 4];
      afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
           afStack_174[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
      (pCStack_20->position).x = fStack_60;
      (pCStack_20->position).y = fStack_5c;
      (pCStack_20->position).z = fStack_58;
      pCStack_24->z = 0.0;
      pCStack_24->y = pCStack_24->z;
      pCStack_24->x = pCStack_24->y;
    }
    fStack_84 = CStack_15c.x - (this_ptr->base).base.base.location.position.x;
    fStack_80 = CStack_15c.y - (this_ptr->base).base.base.location.position.y;
    fStack_7c = CStack_15c.z - (this_ptr->base).base.base.location.position.z;
    fStack_120 = fStack_84;
    afStack_11c[(uint)bVar18 * -2] = afStack_98[(uint)bVar18 * -2 + 6];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
    if (afStack_11c + 0xe != &fStack_120) {
      fStack_e4 = fStack_120;
      fStack_e0 = afStack_11c[0];
      fStack_dc = afStack_11c[1];
    }
    if ((float)_DAT_005d705f <=
        SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0)) {
      return;
    }
    this_ptr->state = 2;
    return;
  }
  pfVar15 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
  fStack_78 = (this_ptr->base).base.base.location.position.x;
  afStack_98[(uint)bVar18 * -2 + 9] = *pfVar15;
  afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] = pfVar15[(uint)bVar18 * -2 + 1];
  if (this_ptr->follow_orders == 0) {
    pCVar9 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    (this_ptr->base).victim = pCVar9;
    if (pCVar9 != (CCharacter *)0x0) {
      pCVar1 = &(pCVar9->base).location;
      if ((CLocation *)&fStack_150 != pCVar1) {
        fStack_150 = (pCVar1->position).x;
        fStack_14c = (pCVar9->base).location.position.y;
        fStack_148 = (pCVar9->base).location.position.z;
      }
      fStack_18 = (float)((this_ptr->base).base.base.direction_hint % 8 + -4);
      fStack_14c = (float)(int)fStack_18 * (float)_DAT_005d7017 +
                   this_ptr->height_offset + (float)_DAT_005d700f + fStack_14c;
      goto LAB_0057549b;
    }
  }
  else {
    (this_ptr->base).victim = (CCharacter *)0x0;
  }
  if ((CVector3f *)&fStack_150 != &this_ptr->home_pos) {
    fStack_150 = (this_ptr->home_pos).x;
    fStack_14c = (this_ptr->home_pos).y;
    fStack_148 = (this_ptr->home_pos).z;
  }
LAB_0057549b:
  afStack_b4[0] = (this_ptr->home_pos).x - (this_ptr->base).base.base.location.position.x;
  afStack_b4[1] = (this_ptr->home_pos).y - (this_ptr->base).base.base.location.position.y;
  afStack_b4[2] = (this_ptr->home_pos).z - (this_ptr->base).base.base.location.position.z;
  afStack_174[0] = afStack_b4[0];
  afStack_174[(uint)bVar18 * -2 + 1] = afStack_b4[(uint)bVar18 * -2 + 1];
  afStack_174[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
       afStack_b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
  if (afStack_11c + 0xe != afStack_174) {
    fStack_e4 = afStack_174[0];
    fStack_e0 = afStack_174[1];
    fStack_dc = afStack_174[2];
  }
  if (((this_ptr->max_distance <=
        SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0)) ||
      (this_ptr->max_height <= ABS(fStack_e0))) && ((CVector3f *)&fStack_150 != &this_ptr->home_pos)
     ) {
    fStack_150 = (this_ptr->home_pos).x;
    fStack_14c = (this_ptr->home_pos).y;
    fStack_148 = (this_ptr->home_pos).z;
  }
  if (0.0 < this_ptr->attack_timer) {
    fVar13 = this_ptr->attack_timer - delta_time;
    this_ptr->attack_timer = fVar13;
    if (fVar13 < 0.0) {
      this_ptr->attack_timer = 0.0;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _DAT_01d71de0 = "..\\core\\tvbat.cpp";
      _DAT_01d71de4 = 0x10a;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CTVBat::process - can't follow orders in network game!");
    }
    iVar14 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    if (&fStack_150 != (float *)(iVar14 + 0x20)) {
      fStack_150 = *(float *)(iVar14 + 0x20);
      fStack_14c = *(float *)(iVar14 + 0x24);
      fStack_148 = *(float *)(iVar14 + 0x28);
    }
    fStack_14c = this_ptr->height_offset + (float)_DAT_005d700f + fStack_14c;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  afStack_140[2] = fStack_150 - (this_ptr->base).base.base.location.position.x;
  afStack_140[3] = fStack_14c - (this_ptr->base).base.base.location.position.y;
  fStack_130 = fStack_148 - (this_ptr->base).base.base.location.position.z;
  fStack_9c = afStack_140[2];
  afStack_98[(uint)bVar18 * -2] = afStack_140[(uint)bVar18 * -2 + 3];
  afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
  if (afStack_11c + 0xe != afStack_b4 + 6) {
    fStack_e4 = fStack_9c;
    fStack_e0 = afStack_98[0];
    fStack_dc = afStack_98[1];
  }
  atan2((float10)fStack_e4,(float10)fStack_dc);
  fVar19 = SQRT((float10)fStack_e8 * (float10)fStack_e8 + (float10)fStack_e0 * (float10)fStack_e0);
  fStack_1f0 = (float)fVar19;
  fVar20 = atan2((float10)fStack_e4,fVar19);
  fStack_30 = (float)fVar19;
  pCStack_24 = (CVector3f *)(float)-fVar20;
  if (((this_ptr->base).victim != (CCharacter *)0x0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)(auStack_1e4 + 0x34));
    pCVar9 = (this_ptr->base).victim;
    (*((pCVar9->base).vtable._ub)->getCollisionType)
              (&pCVar9->base,(SCollisionInfo *)(auStack_1e4 + 0x34));
    pCVar9 = (this_ptr->base).victim;
    fStack_f0 = (this_ptr->base).base.base.location.position.x - (pCVar9->base).location.position.x;
    fStack_ec = (this_ptr->base).base.base.location.position.y - (pCVar9->base).location.position.y;
    fStack_e8 = (this_ptr->base).base.base.location.position.z - (pCVar9->base).location.position.z;
    afStack_b4[1] = fStack_f0;
    afStack_b4[(uint)bVar18 * -2 + 2] = afStack_11c[(uint)bVar18 * -2 + 0xc];
    afStack_b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 3] =
         afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
    if (afStack_11c + 0xe != afStack_b4 + 3) {
      fStack_e4 = afStack_b4[3];
      fStack_e0 = fStack_a4;
      fStack_dc = fStack_a0;
    }
    if (((fStack_194 <= fStack_e0) && (fStack_e0 <= fStack_190)) &&
       (fStack_1ec < (float)_DAT_005d701f)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_1e4);
      auStack_1e4._4_4_ = 1.0;
      auStack_1e4._52_4_ = this_ptr;
      pCStack_1ac = this_ptr;
      pCVar9 = (this_ptr->base).victim;
      (*(((pCVar9->base).vtable._uc)->_uc).processDamage)(pCVar9,(SDamageInfo *)auStack_1e4);
      if (0.0 < (float)auStack_1e4._12_4_) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (g_CGorePtr,&(this_ptr->base).base.base.location.position,(CVector3f *)0x0,3,
                   BLOOD_TYPE_RED);
      }
    }
  }
  fVar19 = (float10)(this_ptr->base).base.base.orient.vec.x;
  fVar20 = (float10)fsin(fVar19);
  fVar21 = (float10)(this_ptr->base).base.base.orient.vec.y;
  fVar22 = (float10)fsin(fVar21);
  fVar19 = (float10)fcos(fVar19);
  fVar21 = (float10)fcos(fVar21);
  fStack_3c = (float)-fVar20;
  fStack_28 = (float)(fVar22 * fVar19);
  pCStack_24 = (CVector3f *)(float)(fVar21 * fVar19);
  pCStack_20 = (CLocation *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                         ((float)pCStack_20 - (this_ptr->base).base.base.orient.vec.y);
  fVar13 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.orient.vec.y =
       (float)pCStack_20 * delta_time * this_ptr->rot_speed +
       (this_ptr->base).base.base.orient.vec.y;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_14 - fVar13);
  fVar13 = this_ptr->move_speed;
  fVar2 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar7 = (float)_DAT_005d7027;
  fVar5 = this_ptr->rot_speed;
  (this_ptr->velocity).x = this_ptr->move_speed * fStack_28;
  fVar6 = this_ptr->move_speed;
  (this_ptr->velocity).y = fVar13 * fStack_3c;
  (this_ptr->velocity).z = fVar6 * (float)pCStack_24;
  (this_ptr->base).base.base.orient.vec.z = -(float)pCStack_20 * fVar7;
  fVar13 = (this_ptr->base).base.base.location.position.y;
  fVar6 = (this_ptr->base).base.base.location.position.z;
  fVar7 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.location.position.x =
       fStack_28 * fVar2 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = fStack_3c * fVar3 * delta_time + fVar13;
  (this_ptr->base).base.base.location.position.z = (float)pCStack_24 * fVar4 * delta_time + fVar6;
  (this_ptr->base).base.base.orient.vec.x = fStack_14 * delta_time * fVar5 + fVar7;
  fStack_178 = (this_ptr->base).base.base.location.position.x - fStack_70;
  afStack_174[0] = (this_ptr->base).base.base.location.position.y - fStack_6c;
  afStack_174[1] = (this_ptr->base).base.base.location.position.z - fStack_68;
  fStack_b8 = fStack_178;
  afStack_b4[(uint)bVar18 * -2] = afStack_174[(uint)bVar18 * -2];
  afStack_b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_174[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
  fStack_1e8 = (afStack_b4[0] * (float)_DAT_005d700f) / delta_time + (float)_DAT_005d702f;
  if (fStack_1e8 < (float)_DAT_005d7037) {
    fStack_1e8 = 10.0;
  }
  if ((float)_DAT_005d703f < fStack_1e8) {
    fStack_1e8 = 60.0;
  }
  this_ptr->anim_rate =
       (fStack_1e8 - this_ptr->anim_rate) * (float)_DAT_005d7047 + this_ptr->anim_rate;
  this_ptr->anim_frame = delta_time * this_ptr->anim_rate * this_ptr->speed + this_ptr->anim_frame;
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (this_ptr->anim_frame < (float)pCVar11->frame_count) {
    if (this_ptr->anim_frame < 0.0) {
      this_ptr->anim_frame = (float)(pCVar11->frame_count + -1);
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar13 = this_ptr->periodic_sound_timer - delta_time, this_ptr->periodic_sound_timer = fVar13,
     fVar13 <= 0.0)) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->periodic_sound_handle);
    if ((iVar14 == 0) &&
       (iVar14 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,50.0),
       iVar14 != 0)) {
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->periodic_sound_handle = uVar12;
    }
    fVar13 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->periodic_sound_timer = fVar13;
    return;
  }
  return;
}
