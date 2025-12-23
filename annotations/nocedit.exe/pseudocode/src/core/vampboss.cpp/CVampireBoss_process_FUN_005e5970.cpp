// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr)

{
  CBoundingBox3D *pCVar1;
  CHero *pCVar2;
  float fVar3;
  CDeformableModelInstance *pCVar4;
  CEnemy *pCVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  float fVar10;
  CBoundingBox3D *pCVar11;
  uint uVar12;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar13;
  int iVar14;
  CLocation *pCVar15;
  BADSPACEBASE *in_ESP;
  CVampireBoss *pCVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 extraout_ST1;
  CDeformableModelInstance *in_stack_00000008;
  float in_stack_fffffdbc;
  char *pcVar23;
  float in_stack_fffffdc0;
  SDamageInfo SStack_200;
  byte auStack_1b0 [20];
  byte local_19c [52];
  byte auStack_168 [44];
  byte local_13c [24];
  float fStack_124;
  float local_120;
  CVector3f CStack_11c;
  CVector3f CStack_108;
  float local_fc;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  byte local_c8 [12];
  CVector3f local_bc;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CDeformableModelInstance *pCStack_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_4c;
  uint local_40;
  CDeformableModelInstance *local_3c;
  float local_38;
  CDeformableModelInstance *local_34;
  CDeformableModelInstance *local_30;
  CDeformableModelInstance *local_2c;
  CDeformableModelInstance *local_28;
  float local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  CDeformableModelInstance *pCStack_14;
  
  pCVar16 = this_ptr;
  do {
    if (*(int *)(pCVar16->field5_0xce8f4 + 0x18) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar16 = (CVampireBoss *)((pCVar16->base_enemy).base_character.base_actor.actor_name + 4);
  } while (pCVar16 !=
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
      pCVar2 = g_HeroActors[g_LocalHeroIndex];
      local_e8 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                 (pCVar2->base_character).base_actor.location.position.x;
      local_e4 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                 (pCVar2->base_character).base_actor.location.position.y;
      local_e0 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                 (pCVar2->base_character).base_actor.location.position.z;
      pcVar23 = (char *)SQRT(local_e8 * local_e8 + local_e0 * local_e0);
      if (((float)pcVar23 < (float)5) &&
         (this_ptr->field5_0xce8f4[0x10] = '\x01', this_ptr->field5_0xce8f4[0x11] = '\0',
         this_ptr->field5_0xce8f4[0x12] = '\0', this_ptr->field5_0xce8f4[0x13] = '\0',
         (float10)0 != ABS((float10)(local_e4 < (float)10)))) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffdc8);
        pcVar23 = &stack0xfffffdcc;
        SStack_200.field0_0x0 = (int)this_ptr;
        SStack_200.damage_amount = (float)this_ptr;
        (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
          playAmbientSoundWithVolume)
                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],pcVar23,in_stack_fffffdc0);
      }
      if ((float)40 < (float)pcVar23) {
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
         (fVar10 = *(float *)this_ptr->field5_0xce8f4 - (float)in_stack_00000008,
         *(float *)this_ptr->field5_0xce8f4 = fVar10, fVar10 < 0.0)) {
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
          ((float)pcVar23 < (float)24)) &&
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
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    pCVar15 = &(pCVar2->base_character).base_actor.location;
    if ((CLocation *)&fStack_ac != pCVar15) {
      fStack_ac = (pCVar15->position).x;
      fStack_a8 = (pCVar2->base_character).base_actor.location.position.y;
      fStack_a4 = (pCVar2->base_character).base_actor.location.position.z;
    }
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 2) {
      *(float *)(this_ptr->field5_0xce8f4 + 4) =
           *(float *)(this_ptr->field5_0xce8f4 + 4) - (float)in_stack_00000008;
      iVar8 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->field5_0xce8f4 + 0x14)) * 4 + 0xce908
                      );
      if (&fStack_ac != (float *)(iVar8 + 0x20)) {
        fStack_ac = *(float *)(iVar8 + 0x20);
        fStack_a8 = *(float *)(iVar8 + 0x24);
        fStack_a4 = *(float *)(iVar8 + 0x28);
      }
      if ((*(float *)(this_ptr->field5_0xce8f4 + 4) <= 0.0) ||
         (fVar10 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar3 = fStack_a4 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar3 * fVar3 + fVar10 * fVar10) < (float)6)) {
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
      fVar10 = *(float *)(this_ptr->field5_0xce8f4 + 4) - (float)in_stack_00000008;
      *(float *)(this_ptr->field5_0xce8f4 + 4) = fVar10;
      if ((fVar10 <= 0.0) ||
         (fVar10 = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar3 = fStack_a4 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar3 * fVar3 + fVar10 * fVar10) < (float)4)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    fStack_a8 = fStack_a8 + 4f;
    local_dc = fStack_ac - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
    fStack_d8 = fStack_a8 - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    fVar17 = (float10)fStack_a4 -
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.z;
    fStack_d4 = (float)fVar17;
    crt_math_c_atan2_FUN_006013b1((float10)local_dc,fVar17);
    fVar17 = crt_math_c_atan2_FUN_006013b1
                       ((float10)local_dc,
                        SQRT((float10)local_e0 * (float10)local_e0 +
                             (float10)fStack_d8 * (float10)fStack_d8));
    local_64 = 1.2;
    local_40 = 0x41a00000;
    local_3c = (CDeformableModelInstance *)(float)extraout_ST1;
    local_34 = (CDeformableModelInstance *)(float)-fVar17;
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 1) {
      local_3c = (CDeformableModelInstance *)-(float)local_3c;
      local_34 = (CDeformableModelInstance *)-(float)local_34;
    }
    fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_3c -
                        (this_ptr->base_enemy).base_character.base_actor.orient.bank);
    local_60 = fVar10 * (float)in_stack_00000008 * local_60;
    if (ABS(local_60) <= ABS(fVar10)) {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
           (this_ptr->base_enemy).base_character.base_actor.orient.bank + local_60;
    }
    else {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank = local_38;
    }
    local_2c = (CDeformableModelInstance *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_30 -
                          (this_ptr->base_enemy).base_character.base_actor.orient.pitch);
    fVar10 = (this_ptr->base_enemy).base_character.hit_points;
    local_4c = -0.3926991;
    local_18 = 0.3926991;
    (this_ptr->base_enemy).base_character.base_actor.orient.pitch =
         (float)local_2c * (float)in_stack_00000008 * local_5c +
         (this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    if ((fVar10 < (float)25) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) {
      local_18 = 1.5707964;
      local_4c = -1.5707964;
    }
    if ((this_ptr->base_enemy).base_character.base_actor.orient.pitch < local_4c) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_4c;
    }
    if (local_18 < (this_ptr->base_enemy).base_character.base_actor.orient.pitch) {
      (this_ptr->base_enemy).base_character.base_actor.orient.pitch = local_18;
    }
    fVar17 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.pitch;
    fVar18 = (float10)fsin(fVar17);
    fVar19 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.bank;
    fVar20 = (float10)fsin(fVar19);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)fcos(fVar19);
    fVar21 = (float10)local_38;
    fVar22 = (float10)(float)in_stack_00000008;
    fVar18 = -fVar18 * fVar21 * fVar22 +
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = (float)fVar18;
    fVar10 = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr->base_enemy).base_character.base_actor.location.position.x =
         (float)(fVar20 * fVar17 * fVar21 * fVar22 +
                (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.x);
    (this_ptr->base_enemy).base_character.base_actor.location.position.z =
         (float)(fVar19 * fVar17 * fVar21 * fVar22 + (float10)fVar10);
    if (fVar18 < (float10)fStack_a8) {
      (this_ptr->base_enemy).base_character.base_actor.location.position.y = fStack_a8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
                         (CBoundingBox3D *)(local_19c + 0x10));
    pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar1 != pCVar11) {
      (pCVar1->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar23 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar23 != &pCVar11->max) {
      *(float *)pcVar23 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar8 == 1) {
    fVar10 = (float)in_stack_00000008 / _DAT_00664e7c + this_ptr->morph_t;
    this_ptr->morph_t = fVar10;
    pCVar6 = g_CEventListPtr;
    if (1.0 <= fVar10) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
    }
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar4 = &(this_ptr->base_enemy).base_character.model;
    pCStack_14 = in_stack_00000008;
    while (0.0 < (float)pCStack_14) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar4->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar4);
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar4,(CBoundingBox3D *)local_13c);
    pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar1 != pCVar11) {
      (pCVar1->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar23 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar23 != &pCVar11->max) {
      *(float *)pcVar23 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)auStack_168);
    pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,(CVector3f *)(auStack_168 + 4));
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,(CVector3f *)(auStack_168 + 0x14));
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         (this_ptr->base_enemy).base_character.base_actor.location.position.y +
         (float)in_stack_00000008;
    goto LAB_005e5f5f;
  }
  if (iVar8 == 3) {
    local_68 = (float)in_stack_00000008 / _DAT_00664e7c;
    local_64 = this_ptr->morph_t;
    this_ptr->morph_t = local_64 - local_68;
    pCVar6 = g_CEventListPtr;
    if (0.0 < local_64 - local_68) {
      fVar10 = (local_68 / local_64) *
               (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) -
               (this_ptr->base_enemy).base_character.base_actor.location.position.y) +
               (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
      fVar10 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8);
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = fVar10;
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar4 = &(this_ptr->base_enemy).base_character.model;
    while (0.0 < (float)in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar4->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar4);
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar4,(CBoundingBox3D *)local_19c);
    pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar1 != pCVar11) {
      (pCVar1->min).x = (pCVar11->min).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar23 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar23 != &pCVar11->max) {
      *(float *)pcVar23 = (pCVar11->max).x;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)auStack_1b0);
    pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,(CVector3f *)(auStack_1b0 + 4));
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,(CVector3f *)local_19c);
    goto LAB_005e5f5f;
  }
  local_34 = &(this_ptr->base_enemy).base_character.model;
  pCVar4 = in_stack_00000008;
  while (0.0 < (float)pCVar4) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_2c->motion_controller);
    pCVar4 = pCStack_74;
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
LAB_005e648e:
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x80;
        this_ptr->field5_0xce8f4[3] = '?';
        pCVar4 = pCStack_74;
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
        local_c8._8_4_ = 0.0;
        local_bc.x = 20.0;
        local_bc.y = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_108,(CVector3f *)(local_c8 + 8));
        core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
        iVar8 = 0;
        for (local_28 = (CDeformableModelInstance *)0x0; pCVar4 = pCStack_74,
            (int)local_28 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            local_28 = (CDeformableModelInstance *)
                       ((int)&(local_28->motion_controller).motion_list_ptr + 1)) {
          this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)
                                    (g_CDemonSetPtr->field19_0x14f0a0 + iVar8 + 8000),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CDemonActor *)0x0) && (this_ptr_00[0x8f].orient_matrix.m[0].x != 0.0)
             ) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_200);
            SStack_200.damage_flags = 0x4479c000;
            (*this_ptr_00->vtable[1].playAmbientSoundWithVolume)
                      (this_ptr_00,(char *)&SStack_200.damage_amount,in_stack_fffffdbc);
          }
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                      (local_2c,(CBoundingBox3D *)auStack_168);
  pCVar1 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
  if (pCVar1 != pCVar11) {
    (pCVar1->min).x = (pCVar11->min).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
  }
  pcVar23 = (this_ptr->base_enemy).base_character.field11_0x25a0 + 100;
  if ((CVector3f *)pcVar23 != &pCVar11->max) {
    *(float *)pcVar23 = (pCVar11->max).x;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
    *(float *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
  }
  pCVar4 = &(this_ptr->base_enemy).base_character.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar4->motion_controller);
  pCVar7 = g_CGamePtr;
  iVar8 = pSVar9->state_index;
  switch(iVar8) {
  case 0:
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         _DAT_00664e84 * (float)in_stack_00000008;
    pCVar6 = g_CEventListPtr;
    if (pCVar7->letterbox_mode == 0) {
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           _DAT_00664e80 * (float)in_stack_00000008;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(uint *)(this_ptr->field5_0xce8f4 + 0x28)) {
      default:
        fVar10 = ((this_ptr->base_enemy).base_character.max_hit_points * (float)in_stack_00000008) /
                 _DAT_00664e88 + (this_ptr->base_enemy).base_character.hit_points;
        (this_ptr->base_enemy).base_character.hit_points = fVar10;
        if ((float)50 < fVar10) goto LAB_005e6560;
        iVar14 = core_hero_cpp_FUN_004f2220();
        if (iVar14 == 0) {
          pCVar2 = g_HeroActors[g_LocalHeroIndex];
          local_bc.x = (pCVar2->base_character).base_actor.location.position.x -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_bc.y = (pCVar2->base_character).base_actor.location.position.y -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_bc.z = (pCVar2->base_character).base_actor.location.position.z -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              ((CVector3f *)local_c8,&local_bc);
          local_fc = pCVar13->y;
          fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_fc -
                              (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar10;
          local_20 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
          local_2c = *(CDeformableModelInstance **)
                      ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
          in_stack_00000008 =
               (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_20);
          local_2c = (CDeformableModelInstance *)-(float)local_28;
          if (((float)local_2c <= (float)in_stack_00000008) &&
             (local_2c = in_stack_00000008, (float)local_28 < (float)in_stack_00000008)) {
            local_2c = local_28;
          }
          fVar10 = *(float *)this_ptr->field5_0xce8f4 - (float)in_stack_00000008;
          *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)
               = local_2c;
          *(float *)this_ptr->field5_0xce8f4 = fVar10;
          local_1c = in_stack_00000008;
          if (fVar10 <= 0.0) {
            this_ptr->field5_0xce8f4[0] = '\0';
            this_ptr->field5_0xce8f4[1] = '\0';
            this_ptr->field5_0xce8f4[2] = '\0';
            this_ptr->field5_0xce8f4[3] = '\0';
            iVar14 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar4 = &(this_ptr->base_enemy).base_character.model;
            if (iVar14 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,4,1);
            }
            else if (iVar14 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,5,1);
            }
            else if (iVar14 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,6,1);
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
      iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar6,"morphToBat");
      if (iVar14 == 0) {
        pCVar2 = g_HeroActors[g_LocalHeroIndex];
        local_13c._20_4_ =
             (pCVar2->base_character).base_actor.location.position.x -
             (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        fStack_124 = (pCVar2->base_character).base_actor.location.position.y -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_120 = (pCVar2->base_character).base_actor.location.position.z -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&CStack_11c,(CVector3f *)(local_13c + 0x14));
        CStack_108.x = pCVar13->y;
        fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (CStack_108.x -
                            (this_ptr->base_enemy).base_character.base_actor.orient.bank);
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar10;
        local_18 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
        local_34 = *(CDeformableModelInstance **)
                    ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
        in_stack_00000008 =
             (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_18);
        local_3c = (CDeformableModelInstance *)-(float)local_30;
        local_34 = local_3c;
        if (((float)local_3c <= (float)in_stack_00000008) &&
           (local_34 = in_stack_00000008, (float)local_30 < (float)in_stack_00000008)) {
          local_34 = local_30;
        }
        *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) =
             local_34;
        pCStack_14 = in_stack_00000008;
      }
      else {
LAB_005e6560:
        core_vampboss_cpp_CallToCountVoicuBatWav_FUN_005e7480();
      }
    }
    break;
  case 2:
    iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar14 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar8 != 2)) {
    local_ec = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x;
    local_e4 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_e8 = (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y) -
               (float)in_stack_00000008 * (float)3;
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
