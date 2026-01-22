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
  CEnemy *pCVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CBoundingBox3D *pCVar10;
  uint uVar11;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar12;
  int iVar13;
  CLocation *pCVar14;
  CVampireBoss *pCVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 extraout_ST1;
  float in_stack_00000008;
  float fVar22;
  float fVar23;
  SDamageInfo local_244;
  byte auStack_204 [56];
  CBoundingBox3D local_1cc;
  CBoundingBox3D local_1b4;
  byte auStack_198 [20];
  CBoundingBox3D local_184;
  byte auStack_168 [48];
  CVector3f local_138;
  CVector3f CStack_12c;
  float fStack_11c;
  float fStack_110;
  CVector3f CStack_104;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  CVector3f CStack_d8;
  CVector3f local_cc;
  CVector3f local_bc;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_74;
  float local_64;
  float local_60;
  CDeformableModelInstance *local_58;
  float local_54;
  CDeformableModelInstance *local_50;
  CDeformableModelInstance *local_4c;
  CDeformableModelInstance *local_48;
  CDeformableModelInstance *local_44;
  float local_40;
  float local_3c;
  CDeformableModelInstance *local_38;
  CDeformableModelInstance *local_34;
  CDeformableModelInstance *local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  float local_20;
  float local_1c;
  CLocation *local_18;
  CDeformableModelInstance *pCStack_14;
  
  pCVar15 = this_ptr;
  do {
    if (*(int *)(pCVar15->field5_0xce8f4 + 0x18) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar15 = (CVampireBoss *)((pCVar15->base_enemy).base_character.base_actor.actor_name + 4);
  } while (pCVar15 !=
           (CVampireBoss *)((this_ptr->base_enemy).base_character.base_actor.actor_name + 0x10));
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    if ((this_ptr->base_enemy).base_character.hit_points < (float)25) {
      iVar8 = *(int *)(this_ptr->field5_0xce8f4 + 0x10);
      (this_ptr->base_enemy).base_character.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
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
      local_f4 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                 (pCVar4->base_character).base_actor.location.position.x;
      local_f0 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                 (pCVar4->base_character).base_actor.location.position.y;
      local_ec = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                 (pCVar4->base_character).base_actor.location.position.z;
      fVar22 = SQRT(local_f4 * local_f4 + local_ec * local_ec);
      if (fVar22 < (float)5) {
        this_ptr->field5_0xce8f4[0x10] = '\x01';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        local_18 = (CLocation *)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)this_ptr;
          local_244.wielder = (CDemonActor *)this_ptr;
          (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
            playAmbientSoundWithVolume)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(char *)&local_244,fVar22);
        }
      }
      if ((float)40 < (float)local_244.field0_0x0) {
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
         (fVar22 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008,
         *(float *)this_ptr->field5_0xce8f4 = fVar22, fVar22 < 0.0)) {
        this_ptr->field5_0xce8f4[0x10] = '\x01';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = '\0';
        this_ptr->field5_0xce8f4[3] = '\0';
      }
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
      if ((((pSVar9->state_index == 0) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) &&
          ((float)local_244.field0_0x0 < (float)24)) &&
         (*(int *)(this_ptr->field5_0xce8f4 + 8) == 0)) {
        this_ptr->field5_0xce8f4[8] = '\x01';
        this_ptr->field5_0xce8f4[9] = '\0';
        this_ptr->field5_0xce8f4[10] = '\0';
        this_ptr->field5_0xce8f4[0xb] = '\0';
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(this_ptr->field1_0xbeb4 + 8),iVar8,1);
      }
    }
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    pCVar14 = &(pCVar4->base_character).base_actor.location;
    if ((CLocation *)&fStack_ac != pCVar14) {
      fStack_ac = (pCVar14->position).x;
      fStack_a8 = (pCVar4->base_character).base_actor.location.position.y;
      fStack_a4 = (pCVar4->base_character).base_actor.location.position.z;
    }
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 2) {
      *(float *)(this_ptr->field5_0xce8f4 + 4) =
           *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      iVar8 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->field5_0xce8f4 + 0x14)) * 4 + 0xce908
                      );
      if (&fStack_ac != (float *)(iVar8 + 0x20)) {
        fStack_ac = *(float *)(iVar8 + 0x20);
        fStack_a8 = *(float *)(iVar8 + 0x24);
        fStack_a4 = *(float *)(iVar8 + 0x28);
      }
      if ((*(float *)(this_ptr->field5_0xce8f4 + 4) <= 0.0) ||
         (fVar22 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar23 = fStack_a4 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar23 * fVar23 + fVar22 * fVar22) < (float)6)) {
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
      iVar8 = *(int *)(this_ptr->field5_0xce8f4 +
                      *(int *)(this_ptr->field5_0xce8f4 + 0x14) * 4 + 0x18);
      if (&fStack_ac != (float *)(iVar8 + 0x20)) {
        fStack_ac = *(float *)(iVar8 + 0x20);
        fStack_a8 = *(float *)(iVar8 + 0x24);
        fStack_a4 = *(float *)(iVar8 + 0x28);
      }
      fVar22 = *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      *(float *)(this_ptr->field5_0xce8f4 + 4) = fVar22;
      if ((fVar22 <= 0.0) ||
         (fVar22 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar23 = fStack_a4 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar23 * fVar23 + fVar22 * fVar22) < (float)4)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    fStack_a8 = fStack_a8 + 4.0f;
    local_dc = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
    CStack_d8.x = fStack_a8 - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    fVar16 = (float10)fStack_a4 -
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.z;
    CStack_d8.y = (float)fVar16;
    crt_math_c_atan2_FUN_006013b1((float10)local_dc,fVar16);
    fVar16 = crt_math_c_atan2_FUN_006013b1
                       ((float10)local_dc,
                        SQRT((float10)local_e0 * (float10)local_e0 +
                             (float10)CStack_d8.x * (float10)CStack_d8.x));
    local_64 = 1.2;
    local_40 = 20.0;
    local_3c = (float)extraout_ST1;
    local_34 = (CDeformableModelInstance *)(float)-fVar16;
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 1) {
      local_3c = -local_3c;
      local_34 = (CDeformableModelInstance *)-(float)local_34;
    }
    pCStack_14 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (local_3c - (this_ptr->base_enemy).base_character.base_actor.orient.bank)
    ;
    local_244.field0_0x0 = (int)((float)pCStack_14 * in_stack_00000008 * local_64);
    if (ABS((float)local_244.field0_0x0) <= ABS((float)pCStack_14)) {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
           (this_ptr->base_enemy).base_character.base_actor.orient.bank +
           (float)local_244.field0_0x0;
    }
    else {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank = local_3c;
    }
    local_34 = (CDeformableModelInstance *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_34 -
                          (this_ptr->base_enemy).base_character.base_actor.orient.pitch);
    fVar22 = (this_ptr->base_enemy).base_character.hit_points;
    local_54 = -0.3926991;
    local_20 = 0.3926991;
    (this_ptr->base_enemy).base_character.base_actor.orient.pitch =
         (float)local_34 * in_stack_00000008 * local_64 +
         (this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    if ((fVar22 < (float)25) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) {
      local_20 = 1.5707964;
      local_54 = -1.5707964;
    }
    if ((this_ptr->base_enemy).base_character.base_actor.orient.pitch < local_54) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_54;
    }
    if (local_20 < (this_ptr->base_enemy).base_character.base_actor.orient.pitch) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_20;
    }
    fVar16 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    fVar17 = (float10)fsin(fVar16);
    fVar18 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.bank;
    fVar19 = (float10)fsin(fVar18);
    fVar16 = (float10)fcos(fVar16);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)local_40;
    fVar21 = (float10)in_stack_00000008;
    fVar17 = -fVar17 * fVar20 * fVar21 +
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = (float)fVar17;
    fVar22 = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr->base_enemy).base_character.base_actor.location.position.x =
         (float)(fVar19 * fVar16 * fVar20 * fVar21 +
                (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.x);
    (this_ptr->base_enemy).base_character.base_actor.location.position.z =
         (float)(fVar18 * fVar16 * fVar20 * fVar21 + (float10)fVar22);
    if (fVar17 < (float10)local_b0) {
      (this_ptr->base_enemy).base_character.base_actor.location.position.y = local_b0;
    }
    pCStack_14 = local_34;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
                         (CBoundingBox3D *)auStack_198);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar10) {
      (pCVar2->min).x = (pCVar10->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar10->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar10->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar10->max) {
      *(float *)pcVar1 = (pCVar10->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar10->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar10->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar8 == 1) {
    fVar22 = in_stack_00000008 / _DAT_00664e7c + this_ptr->morph_t;
    this_ptr->morph_t = fVar22;
    pCVar6 = g_CEventListPtr;
    if (1.0 <= fVar22) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
    }
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar3 = &(this_ptr->base_enemy).base_character.model;
    local_20 = in_stack_00000008;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar3);
    local_18 = (CLocation *)&(this_ptr->base_enemy).base_character.base_actor.orient;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,(CBoundingBox3D *)(auStack_168 + 0x14));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar10) {
      (pCVar2->min).x = (pCVar10->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar10->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar10->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar10->max) {
      *(float *)pcVar1 = (pCVar10->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar10->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)(auStack_198 + 0x14));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)(auStack_198 + 0x14));
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_184.max);
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         (this_ptr->base_enemy).base_character.base_actor.location.position.y + in_stack_00000008;
    goto LAB_005e5f5f;
  }
  if (iVar8 == 3) {
    local_64 = in_stack_00000008 / _DAT_00664e7c;
    local_60 = this_ptr->morph_t;
    this_ptr->morph_t = local_60 - local_64;
    pCVar6 = g_CEventListPtr;
    if (0.0 < local_60 - local_64) {
      fVar22 = (local_64 / local_60) *
               (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) -
               (this_ptr->base_enemy).base_character.base_actor.location.position.y) +
               (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
      fVar22 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8);
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = fVar22;
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
    local_18 = &(this_ptr->base_enemy).base_character.base_actor.location;
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar3,&local_1b4);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar10) {
      (pCVar2->min).x = (pCVar10->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar10->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar10->min).z;
    }
    pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar10->max) {
      *(float *)pcVar1 = (pCVar10->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar10->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)(auStack_204 + 0x38));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)(auStack_204 + 0x38));
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_1cc.max);
    goto LAB_005e5f5f;
  }
  local_30 = &(this_ptr->base_enemy).base_character.model;
  fVar22 = in_stack_00000008;
  while (0.0 < fVar22) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_2c->motion_controller);
    fVar22 = fStack_74;
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
LAB_005e648e:
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x80;
        this_ptr->field5_0xce8f4[3] = '?';
        fVar22 = fStack_74;
      }
    }
    else {
      if (uVar11 < 3) {
        core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410();
        goto LAB_005e648e;
      }
      if (uVar11 < 4) {
        core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320();
        goto LAB_005e648e;
      }
      if (uVar11 == 0x29a) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
        local_bc.x = 0.0;
        local_bc.y = 20.0;
        local_bc.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_104,&local_bc);
        fVar23 = 0.0;
        core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
        iVar8 = 0;
        local_24 = (CDeformableModelInstance *)0x0;
        for (; fVar22 = fStack_74, local_28 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            local_28 = local_28 + 1) {
          this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)
                                    (g_CDemonSetPtr->field19_0x14f0a0 + iVar8 + 8000),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CDemonActor *)0x0) && (this_ptr_00[0x8f].orient_matrix.m[0].x != 0.0)
             ) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_204);
            auStack_204._4_4_ = 999.0;
            (*this_ptr_00->vtable[1].playAmbientSoundWithVolume)(this_ptr_00,auStack_204,fVar23);
          }
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                      (local_2c,(CBoundingBox3D *)auStack_168);
  pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
  if (pCVar2 != pCVar10) {
    (pCVar2->min).x = (pCVar10->min).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar10->min).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar10->min).z;
  }
  pcVar1 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
  if ((CVector3f *)pcVar1 != &pCVar10->max) {
    *(float *)pcVar1 = (pCVar10->max).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar10->max).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar10->max).z;
  }
  pCVar3 = &(this_ptr->base_enemy).base_character.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar3->motion_controller);
  pCVar7 = g_CGamePtr;
  iVar8 = pSVar9->state_index;
  switch(iVar8) {
  case 0:
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         _DAT_00664e84 * in_stack_00000008;
    pCVar6 = g_CEventListPtr;
    if (pCVar7->letterbox_mode == 0) {
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           _DAT_00664e80 * in_stack_00000008;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(uint *)(this_ptr->field5_0xce8f4 + 0x28)) {
      default:
        fVar22 = ((this_ptr->base_enemy).base_character.max_hit_points * in_stack_00000008) /
                 _DAT_00664e88 + (this_ptr->base_enemy).base_character.hit_points;
        (this_ptr->base_enemy).base_character.hit_points = fVar22;
        if ((float)50 < fVar22) goto LAB_005e6560;
        iVar13 = core_hero_cpp_FUN_004f2220();
        if (iVar13 == 0) {
          pCVar4 = g_HeroActors[g_LocalHeroIndex];
          local_cc.x = (pCVar4->base_character).base_actor.location.position.x -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_cc.y = (pCVar4->base_character).base_actor.location.position.y -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_cc.z = (pCVar4->base_character).base_actor.location.position.z -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&CStack_d8,&local_cc);
          fStack_110 = pCVar12->y;
          pCStack_14 = (CDeformableModelInstance *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (fStack_110 -
                                  (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)
               = pCStack_14;
          local_38 = *(CDeformableModelInstance **)
                      ((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
          local_44 = *(CDeformableModelInstance **)
                      ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
          local_38 = (CDeformableModelInstance *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_38);
          local_24 = (CDeformableModelInstance *)-(float)local_44;
          local_48 = local_24;
          if (((float)local_24 <= (float)local_38) &&
             (local_48 = local_38, (float)local_44 < (float)local_38)) {
            local_48 = local_44;
          }
          fVar22 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008;
          *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)
               = local_48;
          *(float *)this_ptr->field5_0xce8f4 = fVar22;
          pCStack_14 = local_38;
          if (fVar22 <= 0.0) {
            this_ptr->field5_0xce8f4[0] = '\0';
            this_ptr->field5_0xce8f4[1] = '\0';
            this_ptr->field5_0xce8f4[2] = '\0';
            this_ptr->field5_0xce8f4[3] = '\0';
            iVar13 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar3 = &(this_ptr->base_enemy).base_character.model;
            if (iVar13 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,4,1);
            }
            else if (iVar13 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,5,1);
            }
            else if (iVar13 == 2) {
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
      iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar6,"morphToBat");
      if (iVar13 == 0) {
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        local_138.x = (pCVar4->base_character).base_actor.location.position.x -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_138.y = (pCVar4->base_character).base_actor.location.position.y -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_138.z = (pCVar4->base_character).base_actor.location.position.z -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&CStack_12c,&local_138);
        fStack_11c = pCVar12->y;
        pCStack_14 = (CDeformableModelInstance *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (fStack_11c -
                                (this_ptr->base_enemy).base_character.base_actor.orient.bank);
        *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) =
             pCStack_14;
        local_30 = *(CDeformableModelInstance **)
                    ((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
        local_4c = *(CDeformableModelInstance **)
                    ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
        local_30 = (CDeformableModelInstance *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_30);
        local_58 = (CDeformableModelInstance *)-(float)local_4c;
        local_50 = local_58;
        if (((float)local_58 <= (float)local_30) &&
           (local_50 = local_30, (float)local_4c < (float)local_30)) {
          local_50 = local_4c;
        }
        *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) =
             local_50;
        pCStack_14 = local_30;
      }
      else {
LAB_005e6560:
        core_vampboss_cpp_CallToCountVoicuBatWav_FUN_005e7480();
      }
    }
    break;
  case 2:
    iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar13 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar3->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar8 != 2)) {
    CStack_104.z = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) +
                   (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x;
    local_f4 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_f8 = (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y) -
               in_stack_00000008 * (float)3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar5 = &this_ptr->base_enemy;
  (pCVar5->base_character).field2_0x240c[0x18] = '\0';
  (pCVar5->base_character).field2_0x240c[0x19] = '\0';
  (pCVar5->base_character).field2_0x240c[0x1a] = '\0';
  (pCVar5->base_character).field2_0x240c[0x1b] = '\0';
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
  pCStack_14 = (CDeformableModelInstance *)&(this_ptr->base_enemy).base_character.base_actor.orient;
  core_cloth_cpp_FUN_0043ab80();
  core_cloth_cpp_FUN_0043ab80();
LAB_005e5f5f:
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if ((pSVar9->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
    return;
  }
  return;
}
