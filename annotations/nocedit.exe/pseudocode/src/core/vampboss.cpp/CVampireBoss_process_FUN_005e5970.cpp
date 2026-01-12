// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr)

{
  char *pcVar1;
  CBoundingBox3D *pCVar2;
  CDeformableModelInstance *pCVar3;
  CHero *pCVar4;
  float fVar5;
  CEnemy *pCVar6;
  CEventList *pCVar7;
  CGame *pCVar8;
  int iVar9;
  SMotion *pSVar10;
  CBoundingBox3D *pCVar11;
  uint uVar12;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar13;
  float fVar14;
  int iVar15;
  CLocation *pCVar16;
  BADSPACEBASE *in_ESP;
  CVampireBoss *pCVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 extraout_ST1;
  float in_stack_00000008;
  float in_stack_fffffdb4;
  SDamageInfo local_240;
  SDamageInfo SStack_204;
  CBoundingBox3D CStack_1c8;
  CBoundingBox3D CStack_1b0;
  CBoundingBox3D CStack_198;
  CBoundingBox3D CStack_180;
  CBoundingBox3D CStack_168;
  CBoundingBox3D CStack_150;
  CVector3f local_138;
  CVector3f CStack_12c;
  float fStack_11c;
  float fStack_110;
  CVector3f CStack_108;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f CStack_d8;
  CVector3f local_cc;
  CVector3f CStack_c0;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_74;
  uint uStack_6c;
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
  float local_38;
  float local_34;
  float local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  CLocation *pCStack_14;
  
  pCVar17 = this_ptr;
  do {
    if (*(int *)(pCVar17->field5_0xce8f4 + 0x18) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar17 = (CVampireBoss *)((pCVar17->base_enemy).base_character.base_actor.actor_name + 4);
  } while (pCVar17 !=
           (CVampireBoss *)((this_ptr->base_enemy).base_character.base_actor.actor_name + 0x10));
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  iVar9 = this_ptr->form;
  if (iVar9 == 2) {
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    if ((this_ptr->base_enemy).base_character.hit_points < (float)25) {
      iVar9 = *(int *)(this_ptr->field5_0xce8f4 + 0x10);
      (this_ptr->base_enemy).base_character.hit_points = 24.999;
      if ((iVar9 != 2) && (iVar9 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510();
        this_ptr->field5_0xce8f4[0x10] = '\x02';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        this_ptr->field5_0xce8f4[4] = '\0';
        this_ptr->field5_0xce8f4[5] = '\0';
        this_ptr->field5_0xce8f4[6] = -0x60;
        this_ptr->field5_0xce8f4[7] = '@';
      }
    }
    if ((*(int *)(this_ptr->field5_0xce8f4 + 0x10) != 2) &&
       (*(int *)(this_ptr->field5_0xce8f4 + 0x10) != 3)) {
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      local_f0 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                 (pCVar4->base_character).base_actor.location.position.x;
      local_ec = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                 (pCVar4->base_character).base_actor.location.position.y;
      local_e8 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                 (pCVar4->base_character).base_actor.location.position.z;
      fVar14 = SQRT(local_f0 * local_f0 + local_e8 * local_e8);
      if (fVar14 < (float)5) {
        this_ptr->field5_0xce8f4[0x10] = '\x01';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        pCStack_14 = (CLocation *)(uint)(local_ec < (float)10);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_240);
          local_240.damage_amount = 10.0;
          local_240.attacker = (CDemonActor *)this_ptr;
          local_240.wielder = (CDemonActor *)this_ptr;
          (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
            playAmbientSoundWithVolume)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(char *)&local_240,fVar14);
        }
      }
      if ((float)40 < fVar14) {
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x60;
        this_ptr->field5_0xce8f4[3] = '@';
        this_ptr->field5_0xce8f4[8] = '\0';
        this_ptr->field5_0xce8f4[9] = '\0';
        this_ptr->field5_0xce8f4[10] = '\0';
        this_ptr->field5_0xce8f4[0xb] = '\0';
        this_ptr->field5_0xce8f4[0x10] = '\0';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
      }
      if ((*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0) &&
         (fVar5 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008,
         *(float *)this_ptr->field5_0xce8f4 = fVar5, fVar5 < 0.0)) {
        this_ptr->field5_0xce8f4[0x10] = '\x01';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = '\0';
        this_ptr->field5_0xce8f4[3] = '\0';
      }
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
      if ((((pSVar10->state_index == 0) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) &&
          (fVar14 < (float)24)) && (*(int *)(this_ptr->field5_0xce8f4 + 8) == 0)) {
        this_ptr->field5_0xce8f4[8] = '\x01';
        this_ptr->field5_0xce8f4[9] = '\0';
        this_ptr->field5_0xce8f4[10] = '\0';
        this_ptr->field5_0xce8f4[0xb] = '\0';
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar9 == 0) {
          iVar9 = 2;
        }
        else {
          iVar9 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(this_ptr->field1_0xbeb4 + 8),iVar9,1);
      }
    }
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    pCVar16 = &(pCVar4->base_character).base_actor.location;
    if ((CLocation *)&local_b4 != pCVar16) {
      local_b4 = (pCVar16->position).x;
      local_b0 = (pCVar4->base_character).base_actor.location.position.y;
      fStack_ac = (pCVar4->base_character).base_actor.location.position.z;
    }
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 2) {
      *(float *)(this_ptr->field5_0xce8f4 + 4) =
           *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      iVar9 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->field5_0xce8f4 + 0x14)) * 4 + 0xce908
                      );
      if (&local_b4 != (float *)(iVar9 + 0x20)) {
        local_b4 = *(float *)(iVar9 + 0x20);
        local_b0 = *(float *)(iVar9 + 0x24);
        fStack_ac = *(float *)(iVar9 + 0x28);
      }
      if ((*(float *)(this_ptr->field5_0xce8f4 + 4) <= 0.0) ||
         (fVar14 = local_b4 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar5 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar5 * fVar5 + fVar14 * fVar14) < (float)6)) {
        this_ptr->field5_0xce8f4[4] = '\0';
        this_ptr->field5_0xce8f4[5] = '\0';
        this_ptr->field5_0xce8f4[6] = -0x60;
        this_ptr->field5_0xce8f4[7] = '@';
        this_ptr->field5_0xce8f4[0x10] = '\x03';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
      }
    }
    else if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 3) {
      iVar9 = *(int *)(this_ptr->field5_0xce8f4 +
                      *(int *)(this_ptr->field5_0xce8f4 + 0x14) * 4 + 0x18);
      if (&local_b4 != (float *)(iVar9 + 0x20)) {
        local_b4 = *(float *)(iVar9 + 0x20);
        local_b0 = *(float *)(iVar9 + 0x24);
        fStack_ac = *(float *)(iVar9 + 0x28);
      }
      fVar14 = *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      *(float *)(this_ptr->field5_0xce8f4 + 4) = fVar14;
      if ((fVar14 <= 0.0) ||
         (fVar14 = local_b4 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar5 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar5 * fVar5 + fVar14 * fVar14) < (float)4)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    local_b0 = local_b0 + 4f;
    local_e4 = local_b4 - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
    local_e0 = local_b0 - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    fVar18 = (float10)fStack_ac -
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.z;
    local_dc = (float)fVar18;
    crt_math_c_atan2_FUN_006013b1((float10)local_e4,fVar18);
    fVar18 = crt_math_c_atan2_FUN_006013b1
                       ((float10)local_e4,
                        SQRT((float10)local_e8 * (float10)local_e8 +
                             (float10)local_e0 * (float10)local_e0));
    uStack_6c = 0x3f99999a;
    local_48 = 20.0;
    local_44 = (float)extraout_ST1;
    local_3c = (float)-fVar18;
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 1) {
      local_44 = -local_44;
      local_3c = -local_3c;
    }
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_44 - (this_ptr->base_enemy).base_character.base_actor.orient.bank);
    fVar14 = local_18 * in_stack_00000008 * local_64;
    if (ABS(fVar14) <= ABS(local_18)) {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
           (this_ptr->base_enemy).base_character.base_actor.orient.bank + fVar14;
    }
    else {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank = local_3c;
    }
    local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_34 - (this_ptr->base_enemy).base_character.base_actor.orient.pitch);
    fVar14 = (this_ptr->base_enemy).base_character.hit_points;
    local_54 = -0.3926991;
    local_20 = 0.3926991;
    (this_ptr->base_enemy).base_character.base_actor.orient.pitch =
         local_34 * in_stack_00000008 * local_64 +
         (this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    if ((fVar14 < (float)25) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) {
      local_20 = 1.5707964;
      local_54 = -1.5707964;
    }
    if ((this_ptr->base_enemy).base_character.base_actor.orient.pitch < local_54) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_54;
    }
    if (local_20 < (this_ptr->base_enemy).base_character.base_actor.orient.pitch) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_20;
    }
    fVar18 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    fVar19 = (float10)fsin(fVar18);
    fVar20 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.bank;
    fVar21 = (float10)fsin(fVar20);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)fcos(fVar20);
    fVar22 = (float10)local_40;
    fVar23 = (float10)in_stack_00000008;
    fVar19 = -fVar19 * fVar22 * fVar23 +
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = (float)fVar19;
    fVar14 = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr->base_enemy).base_character.base_actor.location.position.x =
         (float)(fVar21 * fVar18 * fVar22 * fVar23 +
                (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.x);
    (this_ptr->base_enemy).base_character.base_actor.location.position.z =
         (float)(fVar20 * fVar18 * fVar22 * fVar23 + (float10)fVar14);
    if (fVar19 < (float10)local_b0) {
      (this_ptr->base_enemy).base_character.base_actor.location.position.y = local_b0;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),&CStack_198);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar11) {
      (pCVar2->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar11->max) {
      *(float *)pcVar1 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar9 == 1) {
    fVar14 = in_stack_00000008 / _DAT_00664e7c + this_ptr->morph_t;
    this_ptr->morph_t = fVar14;
    pCVar7 = g_CEventListPtr;
    if (1.0 <= fVar14) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar7);
    }
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar3 = &(this_ptr->base_enemy).base_character.model;
    local_1c = in_stack_00000008;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar3);
    pCStack_14 = (CLocation *)&(this_ptr->base_enemy).base_character.base_actor.orient;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,&CStack_150);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar11) {
      (pCVar2->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar11->max) {
      *(float *)pcVar1 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),&CStack_180);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&CStack_180.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&CStack_180.max);
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         (this_ptr->base_enemy).base_character.base_actor.location.position.y + in_stack_00000008;
    goto LAB_005e5f5f;
  }
  if (iVar9 == 3) {
    local_60 = in_stack_00000008 / _DAT_00664e7c;
    local_5c = this_ptr->morph_t;
    this_ptr->morph_t = local_5c - local_60;
    pCVar7 = g_CEventListPtr;
    if (0.0 < local_5c - local_60) {
      fVar14 = (local_60 / local_5c) *
               (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) -
               (this_ptr->base_enemy).base_character.base_actor.location.position.y) +
               (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar7);
      fVar14 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8);
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = fVar14;
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar3 = &(this_ptr->base_enemy).base_character.model;
    local_18 = in_stack_00000008;
    while (0.0 < local_18) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar3);
    pCStack_14 = &(this_ptr->base_enemy).base_character.base_actor.location;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,&CStack_1b0);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar11) {
      (pCVar2->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar11->max) {
      *(float *)pcVar1 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),&CStack_1c8);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&CStack_1c8.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&CStack_1c8.max);
    goto LAB_005e5f5f;
  }
  local_2c = &(this_ptr->base_enemy).base_character.model;
  fStack_74 = in_stack_00000008;
  while (0.0 < fStack_74) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_2c->motion_controller);
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
LAB_005e648e:
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x80;
        this_ptr->field5_0xce8f4[3] = '?';
      }
    }
    else {
      if (uVar12 < 3) {
        core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410();
        goto LAB_005e648e;
      }
      if (uVar12 < 4) {
        core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320();
        goto LAB_005e648e;
      }
      if (uVar12 == 0x29a) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
        CStack_c0.x = 0.0;
        CStack_c0.y = 20.0;
        CStack_c0.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_108,&CStack_c0);
        core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
        iVar9 = 0;
        for (local_28 = 0; local_28 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            local_28 = local_28 + 1) {
          this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)
                                    (g_CDemonSetPtr->field19_0x14f0a0 + iVar9 + 8000),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CDemonActor *)0x0) && (this_ptr_00[0x8f].orient_matrix.m[0].x != 0.0)
             ) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_204);
            SStack_204.damage_amount = 999.0;
            (*this_ptr_00->vtable[1].playAmbientSoundWithVolume)
                      (this_ptr_00,(char *)&SStack_204,in_stack_fffffdb4);
          }
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                      (local_2c,&CStack_168);
  pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
  if (pCVar2 != pCVar11) {
    (pCVar2->min).x = (pCVar11->min).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
  }
  pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
  if ((CVector3f *)pcVar1 != &pCVar11->max) {
    *(float *)pcVar1 = (pCVar11->max).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
  }
  pCVar3 = &(this_ptr->base_enemy).base_character.model;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  pCVar8 = g_CGamePtr;
  iVar9 = pSVar10->state_index;
  switch(iVar9) {
  case 0:
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         _DAT_00664e84 * in_stack_00000008;
    pCVar7 = g_CEventListPtr;
    if (pCVar8->letterbox_mode == 0) {
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           _DAT_00664e80 * in_stack_00000008;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(uint *)(this_ptr->field5_0xce8f4 + 0x28)) {
      default:
        fVar14 = ((this_ptr->base_enemy).base_character.max_hit_points * in_stack_00000008) /
                 _DAT_00664e88 + (this_ptr->base_enemy).base_character.hit_points;
        (this_ptr->base_enemy).base_character.hit_points = fVar14;
        if ((float)50 < fVar14) goto LAB_005e6560;
        iVar15 = core_hero_cpp_FUN_004f2220();
        if (iVar15 == 0) {
          pCVar4 = g_HeroActors[g_LocalHeroIndex];
          local_cc.x = (pCVar4->base_character).base_actor.location.position.x -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_cc.y = (pCVar4->base_character).base_actor.location.position.y -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_cc.z = (pCVar4->base_character).base_actor.location.position.z -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&CStack_d8,&local_cc);
          fStack_110 = pCVar13->y;
          fVar14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (fStack_110 -
                              (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar14;
          local_38 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
          local_44 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
          local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_38);
          local_24 = -local_44;
          local_48 = local_24;
          if ((local_24 <= local_38) && (local_48 = local_38, local_44 < local_38)) {
            local_48 = local_44;
          }
          fVar14 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008;
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = local_48;
          *(float *)this_ptr->field5_0xce8f4 = fVar14;
          if (fVar14 <= 0.0) {
            this_ptr->field5_0xce8f4[0] = '\0';
            this_ptr->field5_0xce8f4[1] = '\0';
            this_ptr->field5_0xce8f4[2] = '\0';
            this_ptr->field5_0xce8f4[3] = '\0';
            iVar15 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar3 = &(this_ptr->base_enemy).base_character.model;
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
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = '@';
        this_ptr->field5_0xce8f4[3] = '@';
      }
    }
    else {
      this_ptr->field5_0xce8f4[0] = '\0';
      this_ptr->field5_0xce8f4[1] = '\0';
      this_ptr->field5_0xce8f4[2] = '@';
      this_ptr->field5_0xce8f4[3] = '@';
      iVar15 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar7,"morphToBat");
      if (iVar15 == 0) {
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        local_138.x = (pCVar4->base_character).base_actor.location.position.x -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_138.y = (pCVar4->base_character).base_actor.location.position.y -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_138.z = (pCVar4->base_character).base_actor.location.position.z -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&CStack_12c,&local_138);
        fStack_11c = pCVar13->y;
        fVar14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (fStack_11c -
                            (this_ptr->base_enemy).base_character.base_actor.orient.bank);
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar14;
        local_30 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
        local_4c = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
        local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_30);
        local_58 = -local_4c;
        local_50 = local_58;
        if ((local_58 <= local_30) && (local_50 = local_30, local_4c < local_30)) {
          local_50 = local_4c;
        }
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = local_50;
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
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar9 != 2)) {
    local_fc = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x;
    local_f4 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_f8 = (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y) -
               in_stack_00000008 * (float)3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar6 = &this_ptr->base_enemy;
  (pCVar6->base_character).field2_0x240c[0x18] = '\0';
  (pCVar6->base_character).field2_0x240c[0x19] = '\0';
  (pCVar6->base_character).field2_0x240c[0x1a] = '\0';
  (pCVar6->base_character).field2_0x240c[0x1b] = '\0';
  *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
       *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
  *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) =
       *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pCStack_14 = (CLocation *)&(this_ptr->base_enemy).base_character.base_actor.orient;
  core_cloth_cpp_FUN_0043ab80();
  core_cloth_cpp_FUN_0043ab80();
LAB_005e5f5f:
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if ((pSVar10->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
    return;
  }
  return;
}
