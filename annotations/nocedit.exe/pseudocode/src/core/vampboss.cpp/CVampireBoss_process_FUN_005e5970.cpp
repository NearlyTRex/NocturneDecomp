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
  CHero *pCVar3;
  CEnemy *pCVar4;
  CEventList *pCVar5;
  CGame *pCVar6;
  CVampireBoss *this_ptr_00;
  int iVar7;
  SMotion *pSVar8;
  float fVar9;
  float fVar10;
  CBoundingBox3D *pCVar11;
  uint uVar12;
  CDemonActor *this_ptr_01;
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
  float in_stack_00000008;
  float *volume;
  CDeformableModelInstance *pCVar23;
  byte auStack_21c [44];
  char acStack_1f0 [4];
  int iStack_1ec;
  byte auStack_1a8 [20];
  CBoundingBox3D CStack_194;
  byte auStack_170 [20];
  byte auStack_15c [40];
  byte local_134 [24];
  float fStack_11c;
  float fStack_118;
  CVector3f local_114;
  float local_100;
  float local_f4;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_cc;
  float local_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  CVector3f local_b4;
  CVector3f CStack_a4;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_68;
  float local_60;
  float local_5c;
  uint local_48;
  float local_44;
  float local_40;
  CDeformableModelInstance *local_34;
  float local_30;
  CDeformableModelInstance *local_2c;
  CDeformableModelInstance *local_28;
  CDeformableModelInstance *local_24;
  CDeformableModelInstance *local_20;
  float local_1c;
  float local_18;
  CDeformableModelInstance *pCStack_14;
  
  this_ptr_00 = this_ptr;
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
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = this_ptr->form;
  if (iVar7 == 2) {
    fVar9 = in_stack_00000008;
    core_vampboss_cpp_FUN_005e6ca0();
    pCVar23 = (CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar23);
    core_cloth_cpp_FUN_0043ab80();
    if ((this_ptr->base_enemy).base_character.hit_points < (float)25) {
      iVar7 = *(int *)(this_ptr->field5_0xce8f4 + 0x10);
      (this_ptr->base_enemy).base_character.hit_points = 24.999;
      if ((iVar7 != 2) && (iVar7 != 3)) {
        pCVar23 = (CDeformableModelInstance *)0x5e5a2b;
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
      pCVar3 = g_HeroActors[g_LocalHeroIndex];
      local_cc = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                 (pCVar3->base_character).base_actor.location.position.x;
      local_c8 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                 (pCVar3->base_character).base_actor.location.position.y;
      fStack_c4 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                  (pCVar3->base_character).base_actor.location.position.z;
      fVar10 = SQRT(local_cc * local_cc + fStack_c4 * fStack_c4);
      if ((fVar10 < (float)5) &&
         (this_ptr->field5_0xce8f4[0x10] = '\x01', this_ptr->field5_0xce8f4[0x11] = '\0',
         this_ptr->field5_0xce8f4[0x12] = '\0', this_ptr->field5_0xce8f4[0x13] = '\0',
         (float10)0 != ABS((float10)(local_c8 < (float)10)))) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_21c);
        auStack_21c._12_4_ = this_ptr;
        auStack_21c._16_4_ = this_ptr;
        (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
          playAmbientSoundWithVolume)
                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&stack0xfffffdbc,fVar9);
      }
      if ((float)40 < (float)pCVar23) {
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
         (fVar9 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008,
         *(float *)this_ptr->field5_0xce8f4 = fVar9, fVar9 < 0.0)) {
        this_ptr->field5_0xce8f4[0x10] = '\x01';
        this_ptr->field5_0xce8f4[0x11] = '\0';
        this_ptr->field5_0xce8f4[0x12] = '\0';
        this_ptr->field5_0xce8f4[0x13] = '\0';
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = '\0';
        this_ptr->field5_0xce8f4[3] = '\0';
      }
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
      if ((((pSVar8->state_index == 0) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) &&
          (fVar10 < (float)24)) && (*(int *)(this_ptr->field5_0xce8f4 + 8) == 0)) {
        this_ptr->field5_0xce8f4[8] = '\x01';
        this_ptr->field5_0xce8f4[9] = '\0';
        this_ptr->field5_0xce8f4[10] = '\0';
        this_ptr->field5_0xce8f4[0xb] = '\0';
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 == 0) {
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(this_ptr->field1_0xbeb4 + 8),iVar7,1);
      }
    }
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar15 = &(pCVar3->base_character).base_actor.location;
    if ((CLocation *)&fStack_90 != pCVar15) {
      fStack_90 = (pCVar15->position).x;
      fStack_8c = (pCVar3->base_character).base_actor.location.position.y;
      fStack_88 = (pCVar3->base_character).base_actor.location.position.z;
    }
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 2) {
      *(float *)(this_ptr->field5_0xce8f4 + 4) =
           *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      iVar7 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->field5_0xce8f4 + 0x14)) * 4 + 0xce908
                      );
      if (&fStack_90 != (float *)(iVar7 + 0x20)) {
        fStack_90 = *(float *)(iVar7 + 0x20);
        fStack_8c = *(float *)(iVar7 + 0x24);
        fStack_88 = *(float *)(iVar7 + 0x28);
      }
      if ((*(float *)(this_ptr->field5_0xce8f4 + 4) <= 0.0) ||
         (fVar9 = fStack_90 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar10 = fStack_88 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < (float)6)) {
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
      iVar7 = *(int *)(this_ptr->field5_0xce8f4 +
                      *(int *)(this_ptr->field5_0xce8f4 + 0x14) * 4 + 0x18);
      if (&fStack_90 != (float *)(iVar7 + 0x20)) {
        fStack_90 = *(float *)(iVar7 + 0x20);
        fStack_8c = *(float *)(iVar7 + 0x24);
        fStack_88 = *(float *)(iVar7 + 0x28);
      }
      fVar9 = *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      *(float *)(this_ptr->field5_0xce8f4 + 4) = fVar9;
      if ((fVar9 <= 0.0) ||
         (fVar9 = fStack_90 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar10 = fStack_88 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < (float)4)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    fStack_8c = fStack_8c + 4f;
    CStack_c0.x = fStack_90 - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
    CStack_c0.y = fStack_8c - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    fVar17 = (float10)fStack_88 -
             (float10)(this_ptr->base_enemy).base_character.base_actor.location.position.z;
    CStack_c0.z = (float)fVar17;
    crt_math_c_atan2_FUN_006013b1((float10)CStack_c0.x,fVar17);
    fVar17 = crt_math_c_atan2_FUN_006013b1
                       ((float10)CStack_c0.x,
                        SQRT((float10)fStack_c4 * (float10)fStack_c4 +
                             (float10)CStack_c0.y * (float10)CStack_c0.y));
    local_48 = 0x3f99999a;
    local_24 = (CDeformableModelInstance *)0x41a00000;
    local_20 = (CDeformableModelInstance *)(float)extraout_ST1;
    local_18 = (float)-fVar17;
    if (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 1) {
      local_20 = (CDeformableModelInstance *)-(float)local_20;
      local_18 = -local_18;
    }
    fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      ((float)local_20 -
                       (this_ptr->base_enemy).base_character.base_actor.orient.bank);
    local_44 = fVar9 * in_stack_00000008 * local_44;
    if (ABS(local_44) <= ABS(fVar9)) {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
           (this_ptr->base_enemy).base_character.base_actor.orient.bank + local_44;
    }
    else {
      (this_ptr->base_enemy).base_character.base_actor.orient.bank = local_1c;
    }
    fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)pCStack_14 -
                        (this_ptr->base_enemy).base_character.base_actor.orient.pitch);
    fVar9 = (this_ptr->base_enemy).base_character.hit_points;
    local_30 = -0.3926991;
    pCVar4 = &this_ptr->base_enemy;
    this_ptr = (CVampireBoss *)0x3ec90fdb;
    (this_ptr_00->base_enemy).base_character.base_actor.orient.pitch =
         fVar10 * in_stack_00000008 * local_40 + (pCVar4->base_character).base_actor.orient.pitch;
    if ((fVar9 < (float)25) && (*(int *)(this_ptr_00->field5_0xce8f4 + 0x10) == 0)) {
      this_ptr = (CVampireBoss *)0x3fc90fdb;
      local_30 = -1.5707964;
    }
    if ((this_ptr_00->base_enemy).base_character.base_actor.orient.pitch < local_30) {
      (this_ptr_00->base_enemy).base_character.base_actor.orient.pitch = local_30;
    }
    if ((float)this_ptr < (this_ptr_00->base_enemy).base_character.base_actor.orient.pitch) {
      (this_ptr_00->base_enemy).base_character.base_actor.orient.pitch = (float)this_ptr;
    }
    fVar17 = (float10)(this_ptr_00->base_enemy).base_character.base_actor.orient.pitch;
    fVar18 = (float10)fsin(fVar17);
    fVar19 = (float10)(this_ptr_00->base_enemy).base_character.base_actor.orient.bank;
    fVar20 = (float10)fsin(fVar19);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)fcos(fVar19);
    fVar21 = (float10)local_1c;
    fVar22 = (float10)in_stack_00000008;
    fVar18 = -fVar18 * fVar21 * fVar22 +
             (float10)(this_ptr_00->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr_00->base_enemy).base_character.base_actor.location.position.y = (float)fVar18;
    fVar9 = (this_ptr_00->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr_00->base_enemy).base_character.base_actor.location.position.x =
         (float)(fVar20 * fVar17 * fVar21 * fVar22 +
                (float10)(this_ptr_00->base_enemy).base_character.base_actor.location.position.x);
    (this_ptr_00->base_enemy).base_character.base_actor.location.position.z =
         (float)(fVar19 * fVar17 * fVar21 * fVar22 + (float10)fVar9);
    if (fVar18 < (float10)fStack_8c) {
      (this_ptr_00->base_enemy).base_character.base_actor.location.position.y = fStack_8c;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr_00);
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr_00->field1_0xbeb4 + 8),
                         (CBoundingBox3D *)auStack_170);
    pCVar2 = (CBoundingBox3D *)((this_ptr_00->base_enemy).base_character.field11_0x25a0 + 0x58);
    if (pCVar2 != pCVar11) {
      (pCVar2->min).x = (pCVar11->min).x;
      *(float *)((this_ptr_00->base_enemy).base_character.field11_0x25a0 + 0x5c) = (pCVar11->min).y;
      *(float *)((this_ptr_00->base_enemy).base_character.field11_0x25a0 + 0x60) = (pCVar11->min).z;
    }
    pcVar1 = (this_ptr_00->base_enemy).base_character.field11_0x25a0 + 100;
    if ((CVector3f *)pcVar1 != &pCVar11->max) {
      *(float *)pcVar1 = (pCVar11->max).x;
      *(float *)((this_ptr_00->base_enemy).base_character.field11_0x25a0 + 0x68) = (pCVar11->max).y;
      *(float *)((this_ptr_00->base_enemy).base_character.field11_0x25a0 + 0x6c) = (pCVar11->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar7 == 1) {
    fVar9 = in_stack_00000008 / _DAT_00664e7c + this_ptr->morph_t;
    this_ptr->morph_t = fVar9;
    pCVar5 = g_CEventListPtr;
    if (1.0 <= fVar9) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar5);
    }
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar23 = &(this_ptr->base_enemy).base_character.model;
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar23->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar23);
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar23,(CBoundingBox3D *)local_134);
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
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)(auStack_170 + 0x10));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)auStack_15c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)(auStack_15c + 0x10));
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         (this_ptr->base_enemy).base_character.base_actor.location.position.y + in_stack_00000008;
    goto LAB_005e5f5f;
  }
  if (iVar7 == 3) {
    local_60 = in_stack_00000008 / _DAT_00664e7c;
    local_5c = this_ptr->morph_t;
    this_ptr->morph_t = local_5c - local_60;
    pCVar5 = g_CEventListPtr;
    if (0.0 < local_5c - local_60) {
      fVar9 = (local_60 / local_5c) *
              (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) -
              (this_ptr->base_enemy).base_character.base_actor.location.position.y) +
              (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar5);
      fVar9 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8);
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = fVar9;
    core_vampboss_cpp_FUN_005e6ca0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    core_cloth_cpp_FUN_0043ab80();
    pCVar23 = &(this_ptr->base_enemy).base_character.model;
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar23->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar23);
    core_cloth_cpp_FUN_0043ab80();
    core_cloth_cpp_FUN_0043ab80();
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar23,(CBoundingBox3D *)(auStack_1a8 + 0x14));
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
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),
               (CBoundingBox3D *)auStack_1a8);
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)(auStack_1a8 + 4));
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,(CVector3f *)(auStack_1a8 + 0x14));
    goto LAB_005e5f5f;
  }
  local_2c = &(this_ptr->base_enemy).base_character.model;
  fVar9 = in_stack_00000008;
  while (0.0 < fVar9) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
    fVar9 = local_68;
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
LAB_005e648e:
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x80;
        this_ptr->field5_0xce8f4[3] = '?';
        fVar9 = local_68;
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
        CStack_a4.x = 0.0;
        CStack_a4.y = 20.0;
        CStack_a4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&local_ec,&CStack_a4);
        volume = &local_ec.y;
        core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
        iVar7 = 0;
        for (; fVar9 = local_68, (int)local_1c < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)
            ; local_1c = (float)((int)local_1c + 1)) {
          this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)
                                    (g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + 8000),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_01 != (CDemonActor *)0x0) && (this_ptr_01[0x8f].orient_matrix.m[0].x != 0.0)
             ) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_21c + 0x28));
            iStack_1ec = 0x4479c000;
            (*this_ptr_01->vtable[1].playAmbientSoundWithVolume)
                      (this_ptr_01,acStack_1f0,(float)volume);
          }
          iVar7 = iVar7 + 4;
        }
      }
    }
  }
  pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                      (local_20,(CBoundingBox3D *)auStack_15c);
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
  pCVar23 = &(this_ptr->base_enemy).base_character.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar23->motion_controller);
  pCVar6 = g_CGamePtr;
  iVar7 = pSVar8->state_index;
  switch(iVar7) {
  case 0:
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         _DAT_00664e84 * in_stack_00000008;
    pCVar5 = g_CEventListPtr;
    if (pCVar6->letterbox_mode == 0) {
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           _DAT_00664e80 * in_stack_00000008;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(uint *)(this_ptr->field5_0xce8f4 + 0x28)) {
      default:
        fVar9 = ((this_ptr->base_enemy).base_character.max_hit_points * in_stack_00000008) /
                _DAT_00664e88 + (this_ptr->base_enemy).base_character.hit_points;
        (this_ptr->base_enemy).base_character.hit_points = fVar9;
        if ((float)50 < fVar9) goto LAB_005e6560;
        iVar14 = core_hero_cpp_FUN_004f2220();
        if (iVar14 == 0) {
          pCVar3 = g_HeroActors[g_LocalHeroIndex];
          local_b4.x = (pCVar3->base_character).base_actor.location.position.x -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_b4.y = (pCVar3->base_character).base_actor.location.position.y -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_b4.z = (pCVar3->base_character).base_actor.location.position.z -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&CStack_c0,&local_b4);
          local_f4 = pCVar13->y;
          fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (local_f4 - (this_ptr->base_enemy).base_character.base_actor.orient.bank
                            );
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar9;
          local_18 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc);
          local_24 = *(CDeformableModelInstance **)
                      ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
          pCStack_14 = (CDeformableModelInstance *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_18);
          local_24 = (CDeformableModelInstance *)-(float)local_20;
          if (((float)local_24 <= (float)pCStack_14) &&
             (local_24 = pCStack_14, (float)local_20 < (float)pCStack_14)) {
            local_24 = local_20;
          }
          fVar9 = *(float *)this_ptr->field5_0xce8f4 - in_stack_00000008;
          *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)
               = local_24;
          *(float *)this_ptr->field5_0xce8f4 = fVar9;
          if (fVar9 <= 0.0) {
            this_ptr->field5_0xce8f4[0] = '\0';
            this_ptr->field5_0xce8f4[1] = '\0';
            this_ptr->field5_0xce8f4[2] = '\0';
            this_ptr->field5_0xce8f4[3] = '\0';
            iVar14 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar23 = &(this_ptr->base_enemy).base_character.model;
            if (iVar14 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar23->motion_controller,4,1);
            }
            else if (iVar14 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar23->motion_controller,5,1);
            }
            else if (iVar14 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar23->motion_controller,6,1);
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
                         (pCVar5,"morphToBat");
      if (iVar14 == 0) {
        pCVar3 = g_HeroActors[g_LocalHeroIndex];
        local_134._20_4_ =
             (pCVar3->base_character).base_actor.location.position.x -
             (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        fStack_11c = (pCVar3->base_character).base_actor.location.position.y -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        fStack_118 = (pCVar3->base_character).base_actor.location.position.z -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_114,(CVector3f *)(local_134 + 0x14));
        local_100 = pCVar13->y;
        fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_100 - (this_ptr->base_enemy).base_character.base_actor.orient.bank)
        ;
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fVar9;
        local_2c = *(CDeformableModelInstance **)
                    ((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c);
        pCVar23 = (CDeformableModelInstance *)
                  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc));
        local_34 = (CDeformableModelInstance *)-(float)local_28;
        local_2c = local_34;
        if (((float)local_34 <= (float)pCVar23) &&
           (local_2c = pCVar23, (float)local_28 < (float)pCVar23)) {
          local_2c = local_28;
        }
        *(CDeformableModelInstance **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) =
             local_2c;
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
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar23->motion_controller,0,1);
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar7 != 2)) {
    local_ec.z = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) +
                 (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x;
    local_dc = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_e0 = (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) +
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y) -
               in_stack_00000008 * (float)3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar4 = &this_ptr->base_enemy;
  (pCVar4->base_character).field2_0x240c[0x18] = '\0';
  (pCVar4->base_character).field2_0x240c[0x19] = '\0';
  (pCVar4->base_character).field2_0x240c[0x1a] = '\0';
  (pCVar4->base_character).field2_0x240c[0x1b] = '\0';
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
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr_00->base_enemy).base_character.model.motion_controller);
  if ((pSVar8->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
    return;
  }
  return;
}
