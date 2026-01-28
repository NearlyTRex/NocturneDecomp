// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

{
  char *pcVar1;
  CBoundingBox3D *pCVar2;
  CDeformableModelInstance *pCVar3;
  float fVar4;
  CHero *pCVar5;
  float fVar6;
  CEnemy *pCVar7;
  CEventList *pCVar8;
  CGame *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  CBoundingBox3D *pCVar12;
  uint uVar13;
  CCharacter *this_ptr_00;
  CVector3f *pCVar14;
  int iVar15;
  CLocation *pCVar16;
  CVampireBoss *pCVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 extraout_ST1;
  float local_248;
  SDamageInfo local_244;
  SDamageInfo SStack_208;
  CBoundingBox3D local_1cc;
  CBoundingBox3D local_1b4;
  CBoundingBox3D local_19c;
  CBoundingBox3D local_184;
  CBoundingBox3D local_16c;
  CBoundingBox3D local_154;
  CVector3f local_13c;
  CVector3f local_130;
  float local_120;
  float local_114;
  CVector3f CStack_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f CStack_c4;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CLocation *local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CLocation *local_18;
  
  pCVar17 = this_ptr;
  do {
    if (*(int *)(pCVar17->unk3 + 0x18) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar17 = (CVampireBoss *)((pCVar17->base).base.base.actor_name + 4);
  } while (pCVar17 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar10 == 0) {
    return;
  }
  iVar10 = this_ptr->form;
  if (iVar10 == 2) {
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->unk1 + 8));
    core_cloth_cpp_FUN_0043ab80();
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar10 = *(int *)(this_ptr->unk3 + 0x10);
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar10 != 2) && (iVar10 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510();
        this_ptr->unk3[0x10] = '\x02';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
        this_ptr->unk3[4] = '\0';
        this_ptr->unk3[5] = '\0';
        this_ptr->unk3[6] = -0x60;
        this_ptr->unk3[7] = '@';
      }
    }
    if ((*(int *)(this_ptr->unk3 + 0x10) != 2) && (*(int *)(this_ptr->unk3 + 0x10) != 3)) {
      pCVar5 = g_HeroActors[g_LocalHeroIndex];
      local_f4 = (this_ptr->base).base.base.location.position.x -
                 (pCVar5->base).base.location.position.x;
      local_f0 = (this_ptr->base).base.base.location.position.y -
                 (pCVar5->base).base.location.position.y;
      local_ec = (this_ptr->base).base.base.location.position.z -
                 (pCVar5->base).base.location.position.z;
      if (SQRT(local_f4 * local_f4 + local_ec * local_ec) < (float)5) {
        this_ptr->unk3[0x10] = '\x01';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
        local_18 = (CLocation *)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)this_ptr;
          local_244.wielder = (CDemonActor *)this_ptr;
          (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                    (&g_HeroActors[g_LocalHeroIndex]->base,&local_244);
        }
      }
      if ((float)40 < local_248) {
        this_ptr->unk3[0] = '\0';
        this_ptr->unk3[1] = '\0';
        this_ptr->unk3[2] = -0x60;
        this_ptr->unk3[3] = '@';
        this_ptr->unk3[8] = '\0';
        this_ptr->unk3[9] = '\0';
        this_ptr->unk3[10] = '\0';
        this_ptr->unk3[0xb] = '\0';
        this_ptr->unk3[0x10] = '\0';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
      }
      if ((*(int *)(this_ptr->unk3 + 0x10) == 0) &&
         (fVar4 = *(float *)this_ptr->unk3 - delta_time, *(float *)this_ptr->unk3 = fVar4,
         fVar4 < 0.0)) {
        this_ptr->unk3[0x10] = '\x01';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
        this_ptr->unk3[0] = '\0';
        this_ptr->unk3[1] = '\0';
        this_ptr->unk3[2] = '\0';
        this_ptr->unk3[3] = '\0';
      }
      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          ((CMotionController *)(this_ptr->unk1 + 8));
      if ((((pSVar11->state_index == 0) && (*(int *)(this_ptr->unk3 + 0x10) == 0)) &&
          (local_248 < (float)24)) && (*(int *)(this_ptr->unk3 + 8) == 0)) {
        this_ptr->unk3[8] = '\x01';
        this_ptr->unk3[9] = '\0';
        this_ptr->unk3[10] = '\0';
        this_ptr->unk3[0xb] = '\0';
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar10 == 0) {
          iVar10 = 2;
        }
        else {
          iVar10 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(this_ptr->unk1 + 8),iVar10,1);
      }
    }
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    pCVar16 = &(pCVar5->base).base.location;
    if ((CLocation *)&local_b0 != pCVar16) {
      local_b0 = (pCVar16->position).x;
      fStack_ac = (pCVar5->base).base.location.position.y;
      fStack_a8 = (pCVar5->base).base.location.position.z;
    }
    if (*(int *)(this_ptr->unk3 + 0x10) == 2) {
      *(float *)(this_ptr->unk3 + 4) = *(float *)(this_ptr->unk3 + 4) - delta_time;
      iVar10 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->unk3 + 0x14)) * 4 + 0xce908);
      if (&local_b0 != (float *)(iVar10 + 0x20)) {
        local_b0 = *(float *)(iVar10 + 0x20);
        fStack_ac = *(float *)(iVar10 + 0x24);
        fStack_a8 = *(float *)(iVar10 + 0x28);
      }
      if ((*(float *)(this_ptr->unk3 + 4) <= 0.0) ||
         (fVar4 = local_b0 - (this_ptr->base).base.base.location.position.x,
         fVar6 = fStack_a8 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar6 * fVar6 + fVar4 * fVar4) < (float)6)) {
        this_ptr->unk3[4] = '\0';
        this_ptr->unk3[5] = '\0';
        this_ptr->unk3[6] = -0x60;
        this_ptr->unk3[7] = '@';
        this_ptr->unk3[0x10] = '\x03';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
      }
    }
    else if (*(int *)(this_ptr->unk3 + 0x10) == 3) {
      iVar10 = *(int *)(this_ptr->unk3 + *(int *)(this_ptr->unk3 + 0x14) * 4 + 0x18);
      if (&local_b0 != (float *)(iVar10 + 0x20)) {
        local_b0 = *(float *)(iVar10 + 0x20);
        fStack_ac = *(float *)(iVar10 + 0x24);
        fStack_a8 = *(float *)(iVar10 + 0x28);
      }
      fVar4 = *(float *)(this_ptr->unk3 + 4) - delta_time;
      *(float *)(this_ptr->unk3 + 4) = fVar4;
      if ((fVar4 <= 0.0) ||
         (fVar4 = local_b0 - (this_ptr->base).base.base.location.position.x,
         fVar6 = fStack_a8 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar6 * fVar6 + fVar4 * fVar4) < (float)4)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    fStack_ac = fStack_ac + 4.0f;
    local_e0 = local_b0 - (this_ptr->base).base.base.location.position.x;
    local_dc.x = fStack_ac - (this_ptr->base).base.base.location.position.y;
    fVar18 = (float10)fStack_a8 - (float10)(this_ptr->base).base.base.location.position.z;
    local_dc.y = (float)fVar18;
    crt_math_c_atan2_FUN_006013b1((float10)local_e0,fVar18);
    fVar18 = crt_math_c_atan2_FUN_006013b1
                       ((float10)local_e0,
                        SQRT((float10)local_e4 * (float10)local_e4 +
                             (float10)local_dc.x * (float10)local_dc.x));
    local_68 = 1.2;
    local_44 = 20.0;
    local_40 = (float)extraout_ST1;
    local_38 = (CLocation *)(float)-fVar18;
    if (*(int *)(this_ptr->unk3 + 0x10) == 1) {
      local_40 = -local_40;
      local_38 = (CLocation *)-(float)local_38;
    }
    local_18 = (CLocation *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_40 - (this_ptr->base).base.base.orient.bank);
    fVar4 = (float)local_18 * delta_time * local_68;
    if (ABS(fVar4) <= ABS((float)local_18)) {
      (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + fVar4;
    }
    else {
      (this_ptr->base).base.base.orient.bank = local_40;
    }
    local_38 = (CLocation *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_38 - (this_ptr->base).base.base.orient.pitch);
    fVar4 = (this_ptr->base).base.hit_points;
    local_58 = -0.3926991;
    local_24 = 0.3926991;
    (this_ptr->base).base.base.orient.pitch =
         (float)local_38 * delta_time * local_68 + (this_ptr->base).base.base.orient.pitch;
    if ((fVar4 < (float)25) && (*(int *)(this_ptr->unk3 + 0x10) == 0)) {
      local_24 = 1.5707964;
      local_58 = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.pitch < local_58) {
      (this_ptr->base).base.base.orient.pitch = local_58;
    }
    if (local_24 < (this_ptr->base).base.base.orient.pitch) {
      (this_ptr->base).base.base.orient.pitch = local_24;
    }
    fVar18 = (float10)(this_ptr->base).base.base.orient.pitch;
    fVar19 = (float10)fsin(fVar18);
    fVar20 = (float10)(this_ptr->base).base.base.orient.bank;
    fVar21 = (float10)fsin(fVar20);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)fcos(fVar20);
    fVar22 = (float10)local_44;
    fVar23 = (float10)delta_time;
    fVar19 = -fVar19 * fVar22 * fVar23 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar19;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar21 * fVar18 * fVar22 * fVar23 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar20 * fVar18 * fVar22 * fVar23 + (float10)fVar4);
    if (fVar19 < (float10)local_b4) {
      (this_ptr->base).base.base.location.position.y = local_b4;
    }
    local_18 = local_38;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr->unk1 + 8),&local_19c);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
    if (pCVar2 != pCVar12) {
      (pCVar2->min).x = (pCVar12->min).x;
      *(float *)((this_ptr->base).base.unk2 + 0x5c) = (pCVar12->min).y;
      *(float *)((this_ptr->base).base.unk2 + 0x60) = (pCVar12->min).z;
    }
    pcVar1 = (this_ptr->base).base.unk2 + 100;
    if ((CVector3f *)pcVar1 != &pCVar12->max) {
      *(float *)pcVar1 = (pCVar12->max).x;
      *(float *)((this_ptr->base).base.unk2 + 0x68) = (pCVar12->max).y;
      *(float *)((this_ptr->base).base.unk2 + 0x6c) = (pCVar12->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar10 == 1) {
    fVar4 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar4;
    pCVar8 = g_CEventListPtr;
    if (1.0 <= fVar4) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar8);
    }
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->unk1 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar3 = &(this_ptr->base).base.model;
    local_20 = delta_time;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar3);
    local_18 = (CLocation *)&(this_ptr->base).base.base.orient;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,&local_154);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
    if (pCVar2 != pCVar12) {
      (pCVar2->min).x = (pCVar12->min).x;
      *(float *)((this_ptr->base).base.unk2 + 0x5c) = (pCVar12->min).y;
      *(float *)((this_ptr->base).base.unk2 + 0x60) = (pCVar12->min).z;
    }
    pcVar1 = (this_ptr->base).base.unk2 + 100;
    if ((CVector3f *)pcVar1 != &pCVar12->max) {
      *(float *)pcVar1 = (pCVar12->max).x;
      *(float *)((this_ptr->base).base.unk2 + 0x68) = (pCVar12->max).y;
      *(float *)((this_ptr->base).base.unk2 + 0x6c) = (pCVar12->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->unk1 + 8),&local_184);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_184.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_184.max);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005e5f5f;
  }
  if (iVar10 == 3) {
    local_64 = delta_time / 5.0f;
    local_60 = this_ptr->morph_t;
    this_ptr->morph_t = local_60 - local_64;
    pCVar8 = g_CEventListPtr;
    if (0.0 < local_60 - local_64) {
      fVar4 = (local_64 / local_60) *
              (*(float *)((this_ptr->base).base.unk1 + 8) -
              (this_ptr->base).base.base.location.position.y) +
              (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar8);
      fVar4 = *(float *)((this_ptr->base).base.unk1 + 8);
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar4;
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->unk1 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar3 = &(this_ptr->base).base.model;
    local_1c = delta_time;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar3);
    local_18 = &(this_ptr->base).base.base.location;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,&local_1b4);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
    if (pCVar2 != pCVar12) {
      (pCVar2->min).x = (pCVar12->min).x;
      *(float *)((this_ptr->base).base.unk2 + 0x5c) = (pCVar12->min).y;
      *(float *)((this_ptr->base).base.unk2 + 0x60) = (pCVar12->min).z;
    }
    pcVar1 = (this_ptr->base).base.unk2 + 100;
    if ((CVector3f *)pcVar1 != &pCVar12->max) {
      *(float *)pcVar1 = (pCVar12->max).x;
      *(float *)((this_ptr->base).base.unk2 + 0x68) = (pCVar12->max).y;
      *(float *)((this_ptr->base).base.unk2 + 0x6c) = (pCVar12->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->unk1 + 8),&local_1cc);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_1cc.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_1cc.max);
    goto LAB_005e5f5f;
  }
  local_30 = &(this_ptr->base).base.model;
  local_78 = delta_time;
  while (0.0 < local_78) {
    uVar13 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_30->motion_controller);
    if (uVar13 < 2) {
      if (uVar13 == 1) {
        core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
LAB_005e648e:
        this_ptr->unk3[0] = '\0';
        this_ptr->unk3[1] = '\0';
        this_ptr->unk3[2] = -0x80;
        this_ptr->unk3[3] = '?';
      }
    }
    else {
      if (uVar13 < 3) {
        core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410();
        goto LAB_005e648e;
      }
      if (uVar13 < 4) {
        core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320();
        goto LAB_005e648e;
      }
      if (uVar13 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
        CStack_c4.x = 0.0;
        CStack_c4.y = 20.0;
        CStack_c4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_10c,&CStack_c4);
        core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
        iVar10 = 0;
        for (local_2c = 0; local_2c < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c);
            local_2c = local_2c + 1) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar10 + 8000),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CCharacter *)0x0) &&
             (this_ptr_00[1].model.transformed_vertices[0xc].x != 0.0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_208);
            SStack_208.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_208);
          }
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  pCVar12 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                      (local_30,&local_16c);
  pCVar2 = (CBoundingBox3D *)((this_ptr->base).base.unk2 + 0x58);
  if (pCVar2 != pCVar12) {
    (pCVar2->min).x = (pCVar12->min).x;
    *(float *)((this_ptr->base).base.unk2 + 0x5c) = (pCVar12->min).y;
    *(float *)((this_ptr->base).base.unk2 + 0x60) = (pCVar12->min).z;
  }
  pcVar1 = (this_ptr->base).base.unk2 + 100;
  if ((CVector3f *)pcVar1 != &pCVar12->max) {
    *(float *)pcVar1 = (pCVar12->max).x;
    *(float *)((this_ptr->base).base.unk2 + 0x68) = (pCVar12->max).y;
    *(float *)((this_ptr->base).base.unk2 + 0x6c) = (pCVar12->max).z;
  }
  pCVar3 = &(this_ptr->base).base.model;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  pCVar9 = g_CGamePtr;
  iVar10 = pSVar11->state_index;
  switch(iVar10) {
  case 0:
    *(float *)((this_ptr->base).base.unk1 + 0x2c) = 3.141593f * delta_time;
    pCVar8 = g_CEventListPtr;
    if (pCVar9->letterbox_mode == 0) {
      *(float *)((this_ptr->base).base.unk1 + 0x28) = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(uint *)(this_ptr->unk3 + 0x28)) {
      default:
        fVar4 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar4;
        if ((float)50 < fVar4) goto LAB_005e6560;
        iVar15 = core_hero_cpp_FUN_004f2220();
        if (iVar15 == 0) {
          pCVar5 = g_HeroActors[g_LocalHeroIndex];
          local_d0.x = (pCVar5->base).base.location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_d0.y = (pCVar5->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_d0.z = (pCVar5->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_d0);
          local_114 = pCVar14->y;
          local_18 = (CLocation *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_114 - (this_ptr->base).base.base.orient.bank);
          *(CLocation **)((this_ptr->base).base.unk1 + 0xc) = local_18;
          local_3c = *(float *)((this_ptr->base).base.unk1 + 0xc);
          local_48 = *(float *)((this_ptr->base).base.unk1 + 0x2c);
          local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c);
          local_28 = -local_48;
          local_4c = local_28;
          if ((local_28 <= local_3c) && (local_4c = local_3c, local_48 < local_3c)) {
            local_4c = local_48;
          }
          fVar4 = *(float *)this_ptr->unk3 - delta_time;
          *(float *)((this_ptr->base).base.unk1 + 0xc) = local_4c;
          *(float *)this_ptr->unk3 = fVar4;
          local_18 = (CLocation *)local_3c;
          if (fVar4 <= 0.0) {
            this_ptr->unk3[0] = '\0';
            this_ptr->unk3[1] = '\0';
            this_ptr->unk3[2] = '\0';
            this_ptr->unk3[3] = '\0';
            iVar15 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar3 = &(this_ptr->base).base.model;
            if (iVar15 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,4,1);
            }
            else if (iVar15 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,5,1);
            }
            else if (iVar15 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510();
        }
        break;
      case 1:
      case 2:
        this_ptr->unk3[0] = '\0';
        this_ptr->unk3[1] = '\0';
        this_ptr->unk3[2] = '@';
        this_ptr->unk3[3] = '@';
      }
    }
    else {
      this_ptr->unk3[0] = '\0';
      this_ptr->unk3[1] = '\0';
      this_ptr->unk3[2] = '@';
      this_ptr->unk3[3] = '@';
      iVar15 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar8,"morphToBat");
      if (iVar15 == 0) {
        pCVar5 = g_HeroActors[g_LocalHeroIndex];
        local_13c.x = (pCVar5->base).base.location.position.x -
                      (this_ptr->base).base.base.location.position.x;
        local_13c.y = (pCVar5->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_13c.z = (pCVar5->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_130,&local_13c);
        local_120 = pCVar14->y;
        local_18 = (CLocation *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_120 - (this_ptr->base).base.base.orient.bank);
        *(CLocation **)((this_ptr->base).base.unk1 + 0xc) = local_18;
        local_34 = *(float *)((this_ptr->base).base.unk1 + 0xc);
        local_50 = *(float *)((this_ptr->base).base.unk1 + 0x2c);
        local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_34);
        local_5c = -local_50;
        local_54 = local_5c;
        if ((local_5c <= local_34) && (local_54 = local_34, local_50 < local_34)) {
          local_54 = local_50;
        }
        *(float *)((this_ptr->base).base.unk1 + 0xc) = local_54;
        local_18 = (CLocation *)local_34;
      }
      else {
LAB_005e6560:
        core_vampboss_cpp_CallToCountVoicuBatWav_FUN_005e7480();
      }
    }
    break;
  case 2:
    iVar15 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar15 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar3->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar10 != 2)) {
    local_100 = *(float *)((this_ptr->base).base.unk1 + 0x10) +
                (this_ptr->base).base.model.accumulated_root_motion.x;
    local_f8 = *(float *)((this_ptr->base).base.unk1 + 0x18) +
               (this_ptr->base).base.model.accumulated_root_motion.z;
    local_fc = (*(float *)((this_ptr->base).base.unk1 + 0x14) +
               (this_ptr->base).base.model.accumulated_root_motion.y) -
               delta_time * (float)3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar7 = &this_ptr->base;
  (pCVar7->base).unk1[0x18] = '\0';
  (pCVar7->base).unk1[0x19] = '\0';
  (pCVar7->base).unk1[0x1a] = '\0';
  (pCVar7->base).unk1[0x1b] = '\0';
  *(uint *)((this_ptr->base).base.unk1 + 0x14) =
       *(uint *)((this_ptr->base).base.unk1 + 0x18);
  *(uint *)((this_ptr->base).base.unk1 + 0x10) =
       *(uint *)((this_ptr->base).base.unk1 + 0x14);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  local_18 = (CLocation *)&(this_ptr->base).base.base.orient;
  core_cloth_cpp_FUN_0043ab80();
  core_cloth_cpp_FUN_0043ab80();
LAB_005e5f5f:
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar11->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
    return;
  }
  return;
}
