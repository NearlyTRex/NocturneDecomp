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
  float fVar11;
  CKeyFramedModel *pCVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  float *pfVar16;
  float unaff_EDI;
  int iVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_115c [980];
  uint uVar23;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  SDamageInfo aSStack_1dc [4];
  uint uStack_1d8;
  float fStack_1d0;
  CTVBat *pCStack_1a8;
  CTVBat *pCStack_1a4;
  float fStack_18c;
  float fStack_188;
  float fStack_174;
  float afStack_170 [4];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  byte auStack_12c [12];
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  float afStack_e4 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_34;
  float fStack_28;
  CVector3f *pCStack_24;
  CLocation *pCStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar18 = 0;
  if ((this_ptr->follow_orders != 0) && (this_ptr->boss_actor == (CDemonActor *)0x0)) {
    iVar15 = 0;
    for (iVar17 = 0; iVar17 < g_CDemonSetPtr->enemy_count; iVar17 = iVar17 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar15),
                          "CVampireBoss");
      if (iVar10 != 0) {
        this_ptr->boss_actor = *(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar15);
        break;
      }
      iVar15 = iVar15 + 4;
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
  iVar15 = this_ptr->state;
  if (iVar15 == 2) {
    return;
  }
  if (iVar15 == 3) {
    return;
  }
  if (iVar15 == 1) {
    pfVar16 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
    fStack_15c = (this_ptr->base).base.base.location.position.x;
    afStack_170[(uint)bVar18 * -2 + 6] = *pfVar16;
    afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] = pfVar16[(uint)bVar18 * -2 + 1];
    (this_ptr->velocity).y = delta_time * (float)_DAT_005d704f + (this_ptr->velocity).y;
    fStack_90 = (this_ptr->velocity).x * delta_time;
    uVar23 = 0;
    pCStack_24 = &this_ptr->velocity;
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_8c = (this_ptr->velocity).y * delta_time;
    fStack_88 = (this_ptr->velocity).z * delta_time;
    fStack_108 = fStack_90;
    afStack_11c[(uint)bVar18 * -2 + 6] = afStack_b0[(uint)bVar18 * -2 + 9];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
    fVar14 = (this_ptr->base).base.base.location.position.y;
    fVar2 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_108;
    (this_ptr->base).base.base.location.position.y = fVar14 + fStack_104;
    (this_ptr->base).base.base.location.position.z = fVar2 + fStack_100;
    (this_ptr->base).base.base.orient.vec.z =
         delta_time * this_ptr->rot_speed * _DAT_005d7057 + (this_ptr->base).base.base.orient.vec.z;
    pCStack_20 = pCVar1;
    fStack_18 = (float)core_dtrace_cpp_FUN_00473cd0
                                 (&g_CDemonRaytraceInstance,afStack_170 + 5,pCVar1,auStack_12c,
                                  uVar23);
    fStack_1e8 = fStack_18;
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      fStack_cc = (pCStack_20->position).x - fStack_15c;
      fStack_c8 = (pCStack_20->position).y - fStack_158;
      fStack_c4 = (pCStack_20->position).z - fStack_154;
      afStack_11c[2] = fStack_cc;
      afStack_11c[(uint)bVar18 * -2 + 3] = afStack_e4[(uint)bVar18 * -2 + 7];
      afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8];
      fStack_144 = afStack_11c[2] * fStack_1e8;
      afStack_140[0] = afStack_11c[3] * fStack_1e8;
      afStack_140[1] = fStack_10c * fStack_1e8;
      afStack_e4[3] = afStack_11c[2] * fStack_1e8;
      afStack_e4[(uint)bVar18 * -2 + 4] = afStack_140[(uint)bVar18 * -2];
      afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
           afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      fVar2 = fStack_158;
      fVar14 = fStack_15c;
      fStack_6c = afStack_e4[3] * _DAT_005d705b;
      fStack_68 = fStack_d4 * _DAT_005d705b;
      fStack_64 = fStack_d0 * _DAT_005d705b;
      fStack_fc = afStack_e4[3] * _DAT_005d705b;
      afStack_11c[(uint)bVar18 * -2 + 9] = afStack_b0[(uint)bVar18 * -2 + 0x12];
      afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
      afStack_170[2] = fVar14 + fStack_fc;
      afStack_170[3] = fVar2 + fStack_f8;
      fStack_160 = fStack_154 + fStack_f4;
      fStack_60 = fVar14 + fStack_fc;
      afStack_b0[(uint)bVar18 * -2 + 0x15] = afStack_170[(uint)bVar18 * -2 + 3];
      afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
           afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      (pCStack_20->position).x = fStack_60;
      (pCStack_20->position).y = fStack_5c;
      (pCStack_20->position).z = fStack_58;
      pCStack_24->z = 0.0;
      pCStack_24->y = pCStack_24->z;
      pCStack_24->x = pCStack_24->y;
    }
    fStack_84 = fStack_15c - (this_ptr->base).base.base.location.position.x;
    fStack_80 = fStack_158 - (this_ptr->base).base.base.location.position.y;
    fStack_7c = fStack_154 - (this_ptr->base).base.base.location.position.z;
    fStack_120 = fStack_84;
    afStack_11c[(uint)bVar18 * -2] = afStack_b0[(uint)bVar18 * -2 + 0xc];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
    if (afStack_e4 != &fStack_120) {
      afStack_e4[0] = fStack_120;
      afStack_e4[1] = afStack_11c[0];
      afStack_e4[2] = afStack_11c[1];
    }
    if ((float)_DAT_005d705f <=
        SQRT(afStack_e4[2] * afStack_e4[2] +
             afStack_e4[0] * afStack_e4[0] + afStack_e4[1] * afStack_e4[1])) {
      return;
    }
    this_ptr->state = 2;
    return;
  }
  pfVar16 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
  fStack_78 = (this_ptr->base).base.base.location.position.x;
  afStack_b0[(uint)bVar18 * -2 + 0xf] = *pfVar16;
  afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] = pfVar16[(uint)bVar18 * -2 + 1];
  if (this_ptr->follow_orders == 0) {
    pCVar9 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    (this_ptr->base).victim = pCVar9;
    if (pCVar9 != (CCharacter *)0x0) {
      pCVar1 = &(pCVar9->base).location;
      if ((CLocation *)(afStack_170 + 8) != pCVar1) {
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
  if ((CVector3f *)(afStack_170 + 8) != &this_ptr->home_pos) {
    fStack_150 = (this_ptr->home_pos).x;
    fStack_14c = (this_ptr->home_pos).y;
    fStack_148 = (this_ptr->home_pos).z;
  }
LAB_0057549b:
  fStack_b4 = (this_ptr->home_pos).x - (this_ptr->base).base.base.location.position.x;
  afStack_b0[0] = (this_ptr->home_pos).y - (this_ptr->base).base.base.location.position.y;
  afStack_b0[1] = (this_ptr->home_pos).z - (this_ptr->base).base.base.location.position.z;
  fStack_174 = fStack_b4;
  afStack_170[(uint)bVar18 * -2] = afStack_b0[(uint)bVar18 * -2];
  afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
  if (afStack_e4 != &fStack_174) {
    afStack_e4[0] = fStack_174;
    afStack_e4[1] = afStack_170[0];
    afStack_e4[2] = afStack_170[1];
  }
  if (((this_ptr->max_distance <=
        SQRT(afStack_e4[2] * afStack_e4[2] +
             afStack_e4[0] * afStack_e4[0] + afStack_e4[1] * afStack_e4[1])) ||
      (this_ptr->max_height <= ABS(afStack_e4[1]))) &&
     ((CVector3f *)(afStack_170 + 8) != &this_ptr->home_pos)) {
    fStack_150 = (this_ptr->home_pos).x;
    fStack_14c = (this_ptr->home_pos).y;
    fStack_148 = (this_ptr->home_pos).z;
  }
  if (0.0 < this_ptr->attack_timer) {
    fVar14 = this_ptr->attack_timer - delta_time;
    this_ptr->attack_timer = fVar14;
    if (fVar14 < 0.0) {
      this_ptr->attack_timer = 0.0;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _DAT_01d71de0 = "..\\core\\tvbat.cpp";
      _DAT_01d71de4 = 0x10a;
      core_main_c_FUN_004e4330("CTVBat::process - can't follow orders in network game!");
    }
    iVar15 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    if (afStack_170 + 8 != (float *)(iVar15 + 0x20)) {
      fStack_150 = *(float *)(iVar15 + 0x20);
      fStack_14c = *(float *)(iVar15 + 0x24);
      fStack_148 = *(float *)(iVar15 + 0x28);
    }
    fStack_14c = this_ptr->height_offset + (float)_DAT_005d700f + fStack_14c;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  afStack_140[2] = fStack_150 - (this_ptr->base).base.base.location.position.x;
  afStack_140[3] = fStack_14c - (this_ptr->base).base.base.location.position.y;
  fStack_130 = fStack_148 - (this_ptr->base).base.base.location.position.z;
  fStack_9c = afStack_140[2];
  afStack_b0[(uint)bVar18 * -2 + 6] = afStack_140[(uint)bVar18 * -2 + 3];
  afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
       *(float *)(auStack_12c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + -4);
  if (afStack_e4 != afStack_b0 + 5) {
    afStack_e4[0] = fStack_9c;
    afStack_e4[1] = fStack_98;
    afStack_e4[2] = fStack_94;
  }
  atan2();
  fVar19 = SQRT((float10)afStack_e4[0] * (float10)afStack_e4[0] +
                (float10)afStack_e4[2] * (float10)afStack_e4[2]);
  fVar20 = (float10)afStack_e4[1];
  atan2();
  fStack_28 = (float)fVar19;
  fStack_1c = (float)-fVar20;
  if (((this_ptr->base).victim != (CCharacter *)0x0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)&pCStack_1a8);
    pCVar9 = (this_ptr->base).victim;
    (*((pCVar9->base).vtable._ub)->getCollisionType)(&pCVar9->base,(SCollisionInfo *)&pCStack_1a8);
    pCVar9 = (this_ptr->base).victim;
    fStack_e8 = (this_ptr->base).base.base.location.position.x - (pCVar9->base).location.position.x;
    afStack_e4[0] =
         (this_ptr->base).base.base.location.position.y - (pCVar9->base).location.position.y;
    afStack_e4[1] =
         (this_ptr->base).base.base.location.position.z - (pCVar9->base).location.position.z;
    afStack_b0[2] = fStack_e8;
    afStack_b0[(uint)bVar18 * -2 + 3] = afStack_e4[(uint)bVar18 * -2];
    afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    if (afStack_e4 + 2 != afStack_b0 + 4) {
      afStack_e4[2] = fStack_a0;
      afStack_e4[3] = fStack_9c;
      fStack_d4 = fStack_98;
    }
    if (((fStack_18c <= afStack_e4[3]) && (afStack_e4[3] <= fStack_188)) &&
       (fStack_1e4 < (float)_DAT_005d701f)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_1dc);
      uStack_1d8 = 0x3f800000;
      pCStack_1a8 = this_ptr;
      pCStack_1a4 = this_ptr;
      pCVar9 = (this_ptr->base).victim;
      (*(((pCVar9->base).vtable._uc)->_uc).processDamage)(pCVar9,aSStack_1dc);
      if (0.0 < fStack_1d0) {
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
  fStack_34 = (float)-fVar20;
  pCStack_20 = (CLocation *)(float)(fVar22 * fVar19);
  fStack_1c = (float)(fVar21 * fVar19);
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                               (fStack_18 - (this_ptr->base).base.base.orient.vec.y);
  fVar14 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.orient.vec.y =
       fStack_18 * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.vec.y;
  fVar11 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(unaff_EDI - fVar14);
  fVar14 = this_ptr->move_speed;
  fVar2 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar7 = (float)_DAT_005d7027;
  fVar5 = this_ptr->rot_speed;
  (this_ptr->velocity).x = this_ptr->move_speed * (float)pCStack_20;
  fVar6 = this_ptr->move_speed;
  (this_ptr->velocity).y = fVar14 * fStack_34;
  (this_ptr->velocity).z = fVar6 * fStack_1c;
  (this_ptr->base).base.base.orient.vec.z = -fStack_18 * fVar7;
  fVar14 = (this_ptr->base).base.base.location.position.y;
  fVar6 = (this_ptr->base).base.base.location.position.z;
  fVar7 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.location.position.x =
       (float)pCStack_20 * fVar2 * delta_time + (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.y = fStack_34 * fVar3 * delta_time + fVar14;
  (this_ptr->base).base.base.location.position.z = fStack_1c * fVar4 * delta_time + fVar6;
  (this_ptr->base).base.base.orient.vec.x = fVar11 * delta_time * fVar5 + fVar7;
  afStack_170[0] = (this_ptr->base).base.base.location.position.x - fStack_68;
  afStack_170[1] = (this_ptr->base).base.base.location.position.y - fStack_64;
  afStack_170[2] = (this_ptr->base).base.base.location.position.z - fStack_60;
  afStack_b0[0] = afStack_170[0];
  afStack_b0[(uint)bVar18 * -2 + 1] = afStack_170[(uint)bVar18 * -2 + 1];
  afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
       afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
  fStack_1e0 = (afStack_b0[1] * (float)_DAT_005d700f) / delta_time + (float)_DAT_005d702f;
  if (fStack_1e0 < (float)_DAT_005d7037) {
    fStack_1e0 = 10.0;
  }
  if ((float)_DAT_005d703f < fStack_1e0) {
    fStack_1e0 = 60.0;
  }
  this_ptr->anim_rate =
       (fStack_1e0 - this_ptr->anim_rate) * (float)_DAT_005d7047 + this_ptr->anim_rate;
  this_ptr->anim_frame = delta_time * this_ptr->anim_rate * this_ptr->speed + this_ptr->anim_frame;
  pCVar12 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (this_ptr->anim_frame < (float)pCVar12->frame_count) {
    if (this_ptr->anim_frame < 0.0) {
      this_ptr->anim_frame = (float)(pCVar12->frame_count + -1);
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar14 = this_ptr->periodic_sound_timer - delta_time, this_ptr->periodic_sound_timer = fVar14,
     fVar14 <= 0.0)) {
    iVar15 = sound_sndmain_cpp_FUN_00556700(this_ptr->periodic_sound_handle);
    if ((iVar15 == 0) &&
       (iVar15 = sound_sndmain_cpp_FUN_00557170
                           ((double)(this_ptr->base).base.base.location.position.x,
                            (double)(this_ptr->base).base.base.location.position.y,
                            (double)(this_ptr->base).base.base.location.position.z,0x42480000),
       iVar15 != 0)) {
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->periodic_sound_handle = uVar13;
    }
    fVar14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->periodic_sound_timer = fVar14;
    return;
  }
  return;
}
