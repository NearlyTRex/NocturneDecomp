// Name: core_tvbat.cpp_CTVBat_process_FUN_00580610
// Address: 00580610
// Address Range: [[00580610, 0058125d]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00580610(CTVBat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00580610(CTVBat *this_ptr,float delta_time)

{
  byte *puVar1;
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
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_34;
  float fStack_28;
  CVector3f *pCStack_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar18 = 0;
  if ((this_ptr->follow_orders != 0) && (this_ptr->boss_actor == (CDemonActor *)0x0)) {
    iVar15 = 0;
    for (iVar17 = 0; iVar17 < g_CDemonSetPtr->enemy_count; iVar17 = iVar17 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c840
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
    if (&this_ptr->home_pos != (CVector3f *)&pCVar8->field_0x20) {
      (this_ptr->home_pos).x = *(float *)&pCVar8->field_0x20;
      (this_ptr->home_pos).y = *(float *)&pCVar8->field_0x24;
      (this_ptr->home_pos).z = *(float *)&pCVar8->field_0x28;
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + _DAT_005ed924;
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
    fStack_15c = *(float *)&(this_ptr->base).base.base.field_0x20;
    afStack_170[(uint)bVar18 * -2 + 6] = *pfVar16;
    afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] = pfVar16[(uint)bVar18 * -2 + 1];
    (this_ptr->velocity).y = delta_time * (float)_DAT_005ed96c + (this_ptr->velocity).y;
    fStack_90 = (this_ptr->velocity).x * delta_time;
    uVar23 = 0;
    pCStack_24 = &this_ptr->velocity;
    puVar1 = &(this_ptr->base).base.base.field_0x20;
    fStack_8c = (this_ptr->velocity).y * delta_time;
    fStack_88 = (this_ptr->velocity).z * delta_time;
    fStack_108 = fStack_90;
    afStack_11c[(uint)bVar18 * -2 + 6] = afStack_b0[(uint)bVar18 * -2 + 9];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
    fVar14 = *(float *)&(this_ptr->base).base.base.field_0x24;
    fVar2 = *(float *)&(this_ptr->base).base.base.field_0x28;
    *(float *)puVar1 = *(float *)puVar1 + fStack_108;
    *(float *)&(this_ptr->base).base.base.field_0x24 = fVar14 + fStack_104;
    *(float *)&(this_ptr->base).base.base.field_0x28 = fVar2 + fStack_100;
    (this_ptr->base).base.base.orient.vec.z =
         delta_time * this_ptr->rot_speed * _DAT_005ed974 + (this_ptr->base).base.base.orient.vec.z;
    pfStack_20 = (float *)puVar1;
    fStack_18 = (float)core_dtrace_cpp_FUN_00472c60
                                 (&g_CDemonRaytraceInstance,afStack_170 + 5,puVar1,auStack_12c,
                                  uVar23);
    fStack_1e8 = fStack_18;
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      fStack_cc = *pfStack_20 - fStack_15c;
      fStack_c8 = pfStack_20[1] - fStack_158;
      fStack_c4 = pfStack_20[2] - fStack_154;
      afStack_11c[2] = *pfStack_20 - fStack_15c;
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
      fStack_6c = afStack_e4[3] * _DAT_005ed978;
      fStack_68 = fStack_d4 * _DAT_005ed978;
      fStack_64 = fStack_d0 * _DAT_005ed978;
      fStack_fc = afStack_e4[3] * _DAT_005ed978;
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
      *pfStack_20 = fStack_60;
      pfStack_20[1] = fStack_5c;
      pfStack_20[2] = fStack_58;
      pCStack_24->z = 0.0;
      pCStack_24->y = pCStack_24->z;
      pCStack_24->x = pCStack_24->y;
    }
    fStack_84 = fStack_15c - *(float *)&(this_ptr->base).base.base.field_0x20;
    fStack_80 = fStack_158 - *(float *)&(this_ptr->base).base.base.field_0x24;
    fStack_7c = fStack_154 - *(float *)&(this_ptr->base).base.base.field_0x28;
    fStack_120 = fStack_84;
    afStack_11c[(uint)bVar18 * -2] = afStack_b0[(uint)bVar18 * -2 + 0xc];
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
    if (afStack_e4 != &fStack_120) {
      afStack_e4[0] = fStack_120;
      afStack_e4[1] = afStack_11c[0];
      afStack_e4[2] = afStack_11c[1];
    }
    if ((float)_DAT_005ed97c <=
        SQRT(afStack_e4[2] * afStack_e4[2] +
             afStack_e4[0] * afStack_e4[0] + afStack_e4[1] * afStack_e4[1])) {
      return;
    }
    this_ptr->state = 2;
    return;
  }
  pfVar16 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
  uStack_78 = *(uint *)&(this_ptr->base).base.base.field_0x20;
  afStack_b0[(uint)bVar18 * -2 + 0xf] = *pfVar16;
  afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] = pfVar16[(uint)bVar18 * -2 + 1];
  if (this_ptr->follow_orders == 0) {
    pCVar9 = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
    (this_ptr->base).victim = pCVar9;
    if (pCVar9 != (CCharacter *)0x0) {
      puVar1 = &(pCVar9->base).field_0x20;
      if (afStack_170 + 8 != (float *)puVar1) {
        fStack_150 = *(float *)puVar1;
        fStack_14c = *(float *)&(pCVar9->base).field_0x24;
        fStack_148 = *(float *)&(pCVar9->base).field_0x28;
      }
      fStack_18 = (float)((this_ptr->base).base.base.direction_hint % 8 + -4);
      fStack_14c = (float)(int)fStack_18 * (float)_DAT_005ed934 +
                   this_ptr->height_offset + (float)_DAT_005ed92c + fStack_14c;
      goto LAB_0058072b;
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
LAB_0058072b:
  fStack_b4 = (this_ptr->home_pos).x - *(float *)&(this_ptr->base).base.base.field_0x20;
  afStack_b0[0] = (this_ptr->home_pos).y - *(float *)&(this_ptr->base).base.base.field_0x24;
  afStack_b0[1] = (this_ptr->home_pos).z - *(float *)&(this_ptr->base).base.base.field_0x28;
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
      _DAT_01d046a0 = "..\\core\\tvbat.cpp";
      _DAT_01d046a4 = 0x10a;
      core_main_c_FUN_004e4500("CTVBat::process - can't follow orders in network game!");
    }
    iVar15 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if (afStack_170 + 8 != (float *)(iVar15 + 0x20)) {
      fStack_150 = *(float *)(iVar15 + 0x20);
      fStack_14c = *(float *)(iVar15 + 0x24);
      fStack_148 = *(float *)(iVar15 + 0x28);
    }
    fStack_14c = this_ptr->height_offset + (float)_DAT_005ed92c + fStack_14c;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  afStack_140[2] = fStack_150 - *(float *)&(this_ptr->base).base.base.field_0x20;
  afStack_140[3] = fStack_14c - *(float *)&(this_ptr->base).base.base.field_0x24;
  fStack_130 = fStack_148 - *(float *)&(this_ptr->base).base.base.field_0x28;
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
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)&pCStack_1a8);
    pCVar9 = (this_ptr->base).victim;
    (*((pCVar9->base).vtable._ub)->getCollisionType)(&pCVar9->base,(SCollisionInfo *)&pCStack_1a8);
    pCVar9 = (this_ptr->base).victim;
    fStack_e8 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                *(float *)&(pCVar9->base).field_0x20;
    afStack_e4[0] =
         *(float *)&(this_ptr->base).base.base.field_0x24 - *(float *)&(pCVar9->base).field_0x24;
    afStack_e4[1] =
         *(float *)&(this_ptr->base).base.base.field_0x28 - *(float *)&(pCVar9->base).field_0x28;
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
       (fStack_1e4 < (float)_DAT_005ed93c)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1dc);
      uStack_1d8 = 0x3f800000;
      pCStack_1a8 = this_ptr;
      pCStack_1a4 = this_ptr;
      pCVar9 = (this_ptr->base).victim;
      (*(((pCVar9->base).vtable._uc)->_uc).processDamage)(pCVar9,aSStack_1dc);
      if (0.0 < fStack_1d0) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                  (g_CGorePtr,(CVector3f *)&(this_ptr->base).base.base.field_0x20,(CVector3f *)0x0,3
                   ,BLOOD_TYPE_RED);
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
  pfStack_20 = (float *)(float)(fVar22 * fVar19);
  fStack_1c = (float)(fVar21 * fVar19);
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                               (fStack_18 - (this_ptr->base).base.base.orient.vec.y);
  fVar14 = (this_ptr->base).base.base.orient.vec.x;
  (this_ptr->base).base.base.orient.vec.y =
       fStack_18 * delta_time * this_ptr->rot_speed + (this_ptr->base).base.base.orient.vec.y;
  fVar11 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(unaff_EDI - fVar14);
  fVar14 = this_ptr->move_speed;
  fVar2 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar7 = (float)_DAT_005ed944;
  fVar5 = this_ptr->rot_speed;
  (this_ptr->velocity).x = this_ptr->move_speed * (float)pfStack_20;
  fVar6 = this_ptr->move_speed;
  (this_ptr->velocity).y = fVar14 * fStack_34;
  (this_ptr->velocity).z = fVar6 * fStack_1c;
  (this_ptr->base).base.base.orient.vec.z = -fStack_18 * fVar7;
  fVar14 = *(float *)&(this_ptr->base).base.base.field_0x24;
  fVar6 = *(float *)&(this_ptr->base).base.base.field_0x28;
  fVar7 = (this_ptr->base).base.base.orient.vec.x;
  *(float *)&(this_ptr->base).base.base.field_0x20 =
       (float)pfStack_20 * fVar2 * delta_time + *(float *)&(this_ptr->base).base.base.field_0x20;
  *(float *)&(this_ptr->base).base.base.field_0x24 = fStack_34 * fVar3 * delta_time + fVar14;
  *(float *)&(this_ptr->base).base.base.field_0x28 = fStack_1c * fVar4 * delta_time + fVar6;
  (this_ptr->base).base.base.orient.vec.x = fVar11 * delta_time * fVar5 + fVar7;
  afStack_170[0] = *(float *)&(this_ptr->base).base.base.field_0x20 - fStack_68;
  afStack_170[1] = *(float *)&(this_ptr->base).base.base.field_0x24 - fStack_64;
  afStack_170[2] = *(float *)&(this_ptr->base).base.base.field_0x28 - fStack_60;
  afStack_b0[0] = afStack_170[0];
  afStack_b0[(uint)bVar18 * -2 + 1] = afStack_170[(uint)bVar18 * -2 + 1];
  afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
       afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
  fStack_1e0 = (afStack_b0[1] * (float)_DAT_005ed92c) / delta_time + (float)_DAT_005ed94c;
  if (fStack_1e0 < (float)_DAT_005ed954) {
    fStack_1e0 = 10.0;
  }
  if ((float)_DAT_005ed95c < fStack_1e0) {
    fStack_1e0 = 60.0;
  }
  this_ptr->anim_rate =
       (fStack_1e0 - this_ptr->anim_rate) * (float)_DAT_005ed964 + this_ptr->anim_rate;
  this_ptr->anim_frame = delta_time * this_ptr->anim_rate * this_ptr->speed + this_ptr->anim_frame;
  pCVar12 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
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
    iVar15 = sound_sndmain_cpp_FUN_00550b70(this_ptr->periodic_sound_handle);
    if ((iVar15 == 0) &&
       (iVar15 = sound_sndmain_cpp_FUN_005515e0
                           ((double)*(float *)&(this_ptr->base).base.base.field_0x20,
                            (double)*(float *)&(this_ptr->base).base.base.field_0x24,
                            (double)*(float *)&(this_ptr->base).base.base.field_0x28,0x42480000),
       iVar15 != 0)) {
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->periodic_sound);
      this_ptr->periodic_sound_handle = uVar13;
    }
    fVar14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->periodic_sound_timer = fVar14;
    return;
  }
  return;
}
