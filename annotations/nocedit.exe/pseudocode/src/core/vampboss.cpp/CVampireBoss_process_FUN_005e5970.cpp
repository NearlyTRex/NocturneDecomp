// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss * this_ptr)
// Globals:
//   void* switchdataD_005e5934 = 005e68cf
//   void* switchdataD_005e5944 = 005e6519
//   TerminatedCString s_core_vampboss_cpp_00656b0e
//   TerminatedCString s_CVampireBoss_process_Nee_00656b23
//   TerminatedCString s_morphCompleted_00656b4c
//   TerminatedCString s_backToHuman_00656b5b
//   TerminatedCString s_morphToBat_00656b67
//   TerminatedCString s_flyout_00656b72
//   double DOUBLE_00656b7b = 25
//   double DOUBLE_00656b83 = 5
//   double DOUBLE_00656b8b = 10
//   double DOUBLE_00656b93 = 40
//   double DOUBLE_00656b9b = 24
//   double DOUBLE_00656ba3 = 4
//   double DOUBLE_00656bab = 6
//   float FLOAT_00656bb3 = 4
//   double DOUBLE_00656bbb = 50
//   double DOUBLE_00656bc3 = 3
//   undefined4 DAT_00664e7c
//   undefined4 DAT_00664e80
//   undefined4 DAT_00664e84
//   undefined4 DAT_00664e88
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEventList g_CEventListInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   undefined4 g_CTVBatClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_charactr.cpp_CCharacter_FUN_0042c5f0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_cloth.cpp_FUN_0043ab80
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_game.cpp_CGame_FUN_004e0bf0
//   core_hero.cpp_FUN_004f2220
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
//   core_vampboss.cpp_CallToCountVoicuBatWav_FUN_005e7480
//   core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
//   core_vampboss.cpp_FUN_005e6ca0
//   core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
//   core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
//   core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr)

{
  char *pcVar1;
  CBoundingBox3D *pCVar2;
  CHero *pCVar3;
  CEnemy *pCVar4;
  CCharacter *pCVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  CVampireBoss *this_ptr_00;
  int iVar8;
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
  undefined1 auStack_21c [44];
  char acStack_1f0 [4];
  int iStack_1ec;
  CVector3f local_1a4;
  CVector3f aCStack_194 [4];
  CVector3f CStack_15c;
  CVector3f aCStack_14c [3];
  CVector3f local_120;
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
  undefined4 local_48;
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
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    fVar9 = in_stack_00000008;
    core_vampboss_cpp_FUN_005e6ca0();
    pCVar23 = (CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar23);
    core_cloth_cpp_FUN_0043ab80();
    if ((this_ptr->base_enemy).base_character.hit_points < (float)DOUBLE_00656b7b) {
      iVar8 = *(int *)(this_ptr->field5_0xce8f4 + 0x10);
      (this_ptr->base_enemy).base_character.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
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
      if ((fVar10 < (float)DOUBLE_00656b83) &&
         (this_ptr->field5_0xce8f4[0x10] = '\x01', this_ptr->field5_0xce8f4[0x11] = '\0',
         this_ptr->field5_0xce8f4[0x12] = '\0', this_ptr->field5_0xce8f4[0x13] = '\0',
         (float10)0 != ABS((float10)(local_c8 < (float)DOUBLE_00656b8b)))) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_21c);
        auStack_21c._12_4_ = this_ptr;
        auStack_21c._16_4_ = this_ptr;
        (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
          playAmbientSoundWithVolume)
                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&stack0xfffffdbc,fVar9);
      }
      if ((float)DOUBLE_00656b93 < (float)pCVar23) {
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
      iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0
                        ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
      if ((((*(int *)(iVar8 + 0x24) == 0) && (*(int *)(this_ptr->field5_0xce8f4 + 0x10) == 0)) &&
          (fVar10 < (float)DOUBLE_00656b9b)) && (*(int *)(this_ptr->field5_0xce8f4 + 8) == 0)) {
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
      iVar8 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->field5_0xce8f4 + 0x14)) * 4 + 0xce908
                      );
      if (&fStack_90 != (float *)(iVar8 + 0x20)) {
        fStack_90 = *(float *)(iVar8 + 0x20);
        fStack_8c = *(float *)(iVar8 + 0x24);
        fStack_88 = *(float *)(iVar8 + 0x28);
      }
      if ((*(float *)(this_ptr->field5_0xce8f4 + 4) <= 0.0) ||
         (fVar9 = fStack_90 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar10 = fStack_88 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < (float)DOUBLE_00656bab)) {
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
      if (&fStack_90 != (float *)(iVar8 + 0x20)) {
        fStack_90 = *(float *)(iVar8 + 0x20);
        fStack_8c = *(float *)(iVar8 + 0x24);
        fStack_88 = *(float *)(iVar8 + 0x28);
      }
      fVar9 = *(float *)(this_ptr->field5_0xce8f4 + 4) - in_stack_00000008;
      *(float *)(this_ptr->field5_0xce8f4 + 4) = fVar9;
      if ((fVar9 <= 0.0) ||
         (fVar9 = fStack_90 - (this_ptr->base_enemy).base_character.base_actor.location.position.x,
         fVar10 = fStack_88 - (this_ptr->base_enemy).base_character.base_actor.location.position.z,
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < (float)DOUBLE_00656ba3)) {
        core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
      }
    }
    fStack_8c = fStack_8c + FLOAT_00656bb3;
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
    if ((fVar9 < (float)DOUBLE_00656b7b) && (*(int *)(this_ptr_00->field5_0xce8f4 + 0x10) == 0)) {
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
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0
                        ((CDeformableModelInstance *)(this_ptr_00->field1_0xbeb4 + 8));
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
  if (iVar8 == 1) {
    fVar9 = in_stack_00000008 / _DAT_00664e7c + this_ptr->morph_t;
    this_ptr->morph_t = fVar9;
    pCVar6 = g_CEventListPtr;
    if (1.0 <= fVar9) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
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
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0(pCVar23);
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
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&CStack_15c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,aCStack_14c);
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         (this_ptr->base_enemy).base_character.base_actor.location.position.y + in_stack_00000008;
    goto LAB_005e5f5f;
  }
  if (iVar8 == 3) {
    local_60 = in_stack_00000008 / _DAT_00664e7c;
    local_5c = this_ptr->morph_t;
    this_ptr->morph_t = local_5c - local_60;
    pCVar6 = g_CEventListPtr;
    if (0.0 < local_5c - local_60) {
      fVar9 = (local_60 / local_5c) *
              (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) -
              (this_ptr->base_enemy).base_character.base_actor.location.position.y) +
              (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_FUN_004aabe0(pCVar6);
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
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0(pCVar23);
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
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0
              ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
    pCVar2 = (CBoundingBox3D *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x58);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,&local_1a4);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar2,aCStack_194);
    goto LAB_005e5f5f;
  }
  local_2c = &(this_ptr->base_enemy).base_character.model;
  if (0.0 < in_stack_00000008) {
    do {
      uVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
      if (uVar12 < 2) {
        if (uVar12 == 1) {
          core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
          goto LAB_005e648e;
        }
      }
      else {
        if (uVar12 < 3) {
          core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410();
        }
        else {
          if (3 < uVar12) {
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
              iVar8 = 0;
              for (; (int)local_1c < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
                  local_1c = (float)((int)local_1c + 1)) {
                this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                                        (*(CDemonActor **)
                                          (g_CDemonSetPtr->field19_0x14f0a0 + iVar8 + 8000),
                                         g_CTVBatClassInfo.name_hash);
                if ((this_ptr_01 != (CDemonActor *)0x0) &&
                   (this_ptr_01[0x8f].orient_matrix.m[0].x != 0.0)) {
                  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0
                            ((SDamageInfo *)(auStack_21c + 0x28));
                  iStack_1ec = 0x4479c000;
                  (*this_ptr_01->vtable[1].playAmbientSoundWithVolume)
                            (this_ptr_01,acStack_1f0,(float)volume);
                }
                iVar8 = iVar8 + 4;
              }
            }
            goto LAB_005e649b;
          }
          core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320();
        }
LAB_005e648e:
        this_ptr->field5_0xce8f4[0] = '\0';
        this_ptr->field5_0xce8f4[1] = '\0';
        this_ptr->field5_0xce8f4[2] = -0x80;
        this_ptr->field5_0xce8f4[3] = '?';
      }
LAB_005e649b:
    } while (0.0 < local_68);
  }
  pCVar11 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a16c0(local_20);
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
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar23->motion_controller);
  pCVar7 = g_CGamePtr;
  iVar8 = *(int *)(iVar8 + 0x24);
  switch(iVar8) {
  case 0:
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         _DAT_00664e84 * in_stack_00000008;
    pCVar6 = g_CEventListPtr;
    if (pCVar7->letterbox_mode == 0) {
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           _DAT_00664e80 * in_stack_00000008;
      core_charactr_cpp_CCharacter_FUN_0042c5f0((CCharacter *)this_ptr);
      switch(*(undefined4 *)(this_ptr->field5_0xce8f4 + 0x28)) {
      default:
        fVar9 = ((this_ptr->base_enemy).base_character.max_hit_points * in_stack_00000008) /
                _DAT_00664e88 + (this_ptr->base_enemy).base_character.hit_points;
        (this_ptr->base_enemy).base_character.hit_points = fVar9;
        if ((float)DOUBLE_00656bbb < fVar9) goto LAB_005e6560;
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
                         (pCVar6,"morphToBat");
      if (iVar14 == 0) {
        pCVar3 = g_HeroActors[g_LocalHeroIndex];
        local_120.x = (pCVar3->base_character).base_actor.location.position.x -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_120.y = (pCVar3->base_character).base_actor.location.position.y -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_120.z = (pCVar3->base_character).base_actor.location.position.z -
                      (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_114,&local_120);
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
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar8 != 2)) {
    local_ec.z = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) +
                 *(float *)(this_ptr->base_enemy).base_character.model.field17_0x2254;
    local_dc = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18) +
               *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
    local_e0 = (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) +
               *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4)) -
               in_stack_00000008 * (float)DOUBLE_00656bc3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar4 = &this_ptr->base_enemy;
  (pCVar4->base_character).field2_0x240c[0x18] = '\0';
  (pCVar4->base_character).field2_0x240c[0x19] = '\0';
  (pCVar4->base_character).field2_0x240c[0x1a] = '\0';
  (pCVar4->base_character).field2_0x240c[0x1b] = '\0';
  *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
  *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
  pCVar5 = &(this_ptr->base_enemy).base_character;
  (pCVar5->model).field17_0x2254[8] = '\0';
  (pCVar5->model).field17_0x2254[9] = '\0';
  (pCVar5->model).field17_0x2254[10] = '\0';
  (pCVar5->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_cloth_cpp_FUN_0043ab80();
  core_cloth_cpp_FUN_0043ab80();
LAB_005e5f5f:
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(this_ptr_00->base_enemy).base_character.model.motion_controller);
  if ((*(int *)(iVar8 + 0x24) != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
    return;
  }
  return;
}


// Assembly code:
// 005e5970: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// 005e5971: PUSH ESI
// 005e5972: PUSH EDI
// 005e5973: PUSH EBP
// 005e5974: MOV EBP,ESP
// 005e5976: SUB ESP,0x23c
// 005e597c: AND ESP,0xfffffff8
// 005e597f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e5982: MOV ESI,EBX
// 005e5984: LEA EDI,[EBX + 0x10]
// 005e5987: CMP dword ptr [ESI + 0xce90c],0x0
//   Label: LAB_005e5987
// 005e598e: JZ 0x005e5f8f
//   XREF to: 005e5f8f (CONDITIONAL_JUMP)
// 005e5994: ADD ESI,0x4
//   Label: LAB_005e5994
// 005e5997: CMP ESI,EDI
// 005e5999: JNZ 0x005e5987
//   XREF to: 005e5987 (CONDITIONAL_JUMP)
// 005e599b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e599e: PUSH EBX
// 005e599f: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005e59a4: ADD ESP,0x8
// 005e59a7: TEST EAX,EAX
// 005e59a9: JZ 0x005e5f88
//   XREF to: 005e5f88 (CONDITIONAL_JUMP)
// 005e59af: MOV EDX,dword ptr [EBX + 0xcdcc0]
// 005e59b5: CMP EDX,0x2
// 005e59b8: JNZ 0x005e609b
//   XREF to: 005e609b (CONDITIONAL_JUMP)
// 005e59be: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e59c1: PUSH EBX
// 005e59c2: CALL core_vampboss.cpp_FUN_005e6ca0
//   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)
// 005e59c7: ADD ESP,0x8
// 005e59ca: LEA ESI,[EBX + 0xbebc]
// 005e59d0: PUSH ESI
// 005e59d1: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e59d6: ADD ESP,0x4
// 005e59d9: PUSH ESI
// 005e59da: PUSH dword ptr [EBX + 0x2414]
// 005e59e0: LEA EAX,[EBX + 0x30]
// 005e59e3: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e59e6: PUSH EAX
// 005e59e7: LEA EAX,[EBX + 0x20]
// 005e59ea: PUSH EAX
// 005e59eb: LEA EAX,[EBX + 0xe170]
// 005e59f1: PUSH EAX
// 005e59f2: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e59f7: FLD float ptr [EBX + 0x243c]
// 005e59fd: ADD ESP,0x18
// 005e5a00: FCOMP double ptr [0x00656b7b]
//   XREF to: 00656b7b (READ)
// 005e5a06: FNSTSW AX
// 005e5a08: SAHF
// 005e5a09: JNC 0x005e5a42
//   XREF to: 005e5a42 (CONDITIONAL_JUMP)
// 005e5a0b: MOV EDX,dword ptr [EBX + 0xce904]
// 005e5a11: MOV dword ptr [EBX + 0x243c],0x41c7fdf4
// 005e5a1b: CMP EDX,0x2
// 005e5a1e: JZ 0x005e5a42
//   XREF to: 005e5a42 (CONDITIONAL_JUMP)
// 005e5a20: CMP EDX,0x3
// 005e5a23: JZ 0x005e5a42
//   XREF to: 005e5a42 (CONDITIONAL_JUMP)
// 005e5a25: PUSH EBX
// 005e5a26: CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
//   XREF to: 005e7510 (UNCONDITIONAL_CALL)
// 005e5a2b: MOV dword ptr [EBX + 0xce904],0x2
// 005e5a35: ADD ESP,0x4
// 005e5a38: MOV dword ptr [EBX + 0xce8f8],0x40a00000
// 005e5a42: MOV ESI,dword ptr [EBX + 0xce904]
//   Label: LAB_005e5a42
// 005e5a48: CMP ESI,0x2
// 005e5a4b: JZ 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5a51: CMP ESI,0x3
// 005e5a54: JZ 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5a5a: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005e5a5f: LEA EDX,[EBX + 0x20]
// 005e5a62: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e5a69: FLD float ptr [EDX]
// 005e5a6b: FSUB float ptr [EAX + 0x20]
// 005e5a6e: FSTP float ptr [ESP + 0x15c]
//   XREF to: Stack[-0xf4] (WRITE)
// 005e5a75: FLD float ptr [EDX + 0x4]
// 005e5a78: FSUB float ptr [EAX + 0x24]
// 005e5a7b: FSTP float ptr [ESP + 0x160]
//   XREF to: Stack[-0xf0] (WRITE)
// 005e5a82: FLD float ptr [EDX + 0x8]
// 005e5a85: FSUB float ptr [EAX + 0x28]
// 005e5a88: FST float ptr [ESP + 0x164]
//   XREF to: Stack[-0xec] (WRITE)
// 005e5a8f: FMUL float ptr [ESP + 0x164]
//   XREF to: Stack[-0xec] (READ)
// 005e5a96: FLD float ptr [ESP + 0x15c]
//   XREF to: Stack[-0xf4] (READ)
// 005e5a9d: FMUL ST0
// 005e5a9f: FADDP
// 005e5aa1: FSQRT
// 005e5aa3: FST float ptr [ESP]
//   XREF to: Stack[-0x250] (DATA)
// 005e5aa6: FCOMP double ptr [0x00656b83]
//   XREF to: 00656b83 (READ)
// 005e5aac: FNSTSW AX
// 005e5aae: SAHF
// 005e5aaf: JNC 0x005e5b32
//   XREF to: 005e5b32 (CONDITIONAL_JUMP)
// 005e5ab5: MOV dword ptr [EBX + 0xce904],0x1
// 005e5abf: FLD float ptr [ESP + 0x160]
//   XREF to: Stack[-0xf0] (READ)
// 005e5ac6: FCOMP double ptr [0x00656b8b]
//   XREF to: 00656b8b (READ)
// 005e5acc: FNSTSW AX
// 005e5ace: SAHF
// 005e5acf: JNC 0x005e5fb6
//   XREF to: 005e5fb6 (CONDITIONAL_JUMP)
// 005e5ad5: MOV EAX,0x1
// 005e5ada: MOV dword ptr [ESP + 0x238],EAX
//   Label: LAB_005e5ada
//   XREF to: Stack[-0x18] (WRITE)
// 005e5ae1: FILD dword ptr [ESP + 0x238]
//   XREF to: Stack[-0x18] (READ)
// 005e5ae8: FABS
// 005e5aea: FLDZ
// 005e5aec: FCOMPP
// 005e5aee: FNSTSW AX
// 005e5af0: SAHF
// 005e5af1: JZ 0x005e5b32
//   XREF to: 005e5b32 (CONDITIONAL_JUMP)
// 005e5af3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x244] (DATA)
// 005e5af7: PUSH EAX
// 005e5af8: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005e5afd: MOV EAX,0x41200000
// 005e5b02: ADD ESP,0x4
// 005e5b05: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x244] (DATA)
// 005e5b09: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 005e5b0d: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005e5b12: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x210] (WRITE)
// 005e5b16: PUSH EDX
// 005e5b17: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e5b1e: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x20c] (WRITE)
// 005e5b22: PUSH EAX
// 005e5b23: MOV ESI,dword ptr [EAX + 0x154]
// 005e5b29: CALL dword ptr [ESI + 0x11c]
// 005e5b2f: ADD ESP,0x8
// 005e5b32: FLD float ptr [ESP]
//   Label: LAB_005e5b32
//   XREF to: Stack[-0x250] (DATA)
// 005e5b35: FCOMP double ptr [0x00656b93]
//   XREF to: 00656b93 (READ)
// 005e5b3b: FNSTSW AX
// 005e5b3d: SAHF
// 005e5b3e: JBE 0x005e5b5e
//   XREF to: 005e5b5e (CONDITIONAL_JUMP)
// 005e5b40: MOV dword ptr [EBX + 0xce8f4],0x40a00000
// 005e5b4a: MOV dword ptr [EBX + 0xce8fc],0x0
// 005e5b54: MOV dword ptr [EBX + 0xce904],0x0
// 005e5b5e: MOV EDX,dword ptr [EBX + 0xce904]
//   Label: LAB_005e5b5e
// 005e5b64: TEST EDX,EDX
// 005e5b66: JNZ 0x005e5b90
//   XREF to: 005e5b90 (CONDITIONAL_JUMP)
// 005e5b68: FLD float ptr [EBX + 0xce8f4]
// 005e5b6e: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e5b71: FST float ptr [EBX + 0xce8f4]
// 005e5b77: FLDZ
// 005e5b79: FCOMPP
// 005e5b7b: FNSTSW AX
// 005e5b7d: SAHF
// 005e5b7e: JBE 0x005e5b90
//   XREF to: 005e5b90 (CONDITIONAL_JUMP)
// 005e5b80: MOV dword ptr [EBX + 0xce904],0x1
// 005e5b8a: MOV dword ptr [EBX + 0xce8f4],EDX
// 005e5b90: LEA ESI,[EBX + 0xbebc]
//   Label: LAB_005e5b90
// 005e5b96: PUSH ESI
// 005e5b97: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005e5b9c: MOV EAX,dword ptr [EAX + 0x24]
// 005e5b9f: ADD ESP,0x4
// 005e5ba2: TEST EAX,EAX
// 005e5ba4: JNZ 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5ba6: CMP dword ptr [EBX + 0xce904],0x0
// 005e5bad: JNZ 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5baf: FLD float ptr [ESP]
// 005e5bb2: FCOMP double ptr [0x00656b9b]
//   XREF to: 00656b9b (READ)
// 005e5bb8: FNSTSW AX
// 005e5bba: SAHF
// 005e5bbb: JNC 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5bbd: CMP dword ptr [EBX + 0xce8fc],0x0
// 005e5bc4: JNZ 0x005e5bf2
//   XREF to: 005e5bf2 (CONDITIONAL_JUMP)
// 005e5bc6: PUSH 0x3f000000
// 005e5bcb: MOV dword ptr [EBX + 0xce8fc],0x1
// 005e5bd5: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005e5bda: ADD ESP,0x4
// 005e5bdd: TEST EAX,EAX
// 005e5bdf: JZ 0x005e5fbd
//   XREF to: 005e5fbd (CONDITIONAL_JUMP)
// 005e5be5: PUSH 0x1
// 005e5be7: PUSH 0x1
// 005e5be9: PUSH ESI
//   Label: LAB_005e5be9
// 005e5bea: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e5bef: ADD ESP,0xc
// 005e5bf2: MOV EAX,[0x02db87d0]
//   Label: LAB_005e5bf2
//   XREF to: 02db87d0 (READ)
// 005e5bf7: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e5bfe: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0xb8] (DATA)
// 005e5c05: ADD EDX,0x20
// 005e5c08: CMP EAX,EDX
// 005e5c0a: JZ 0x005e5c29
//   XREF to: 005e5c29 (CONDITIONAL_JUMP)
// 005e5c0c: MOV EAX,dword ptr [EDX]
// 005e5c0e: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005e5c15: MOV EAX,dword ptr [EDX + 0x4]
// 005e5c18: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005e5c1f: MOV EAX,dword ptr [EDX + 0x8]
// 005e5c22: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005e5c29: MOV EAX,dword ptr [EBX + 0xce904]
//   Label: LAB_005e5c29
// 005e5c2f: CMP EAX,0x2
// 005e5c32: JNZ 0x005e5ff8
//   XREF to: 005e5ff8 (CONDITIONAL_JUMP)
// 005e5c38: FLD float ptr [EBX + 0xce8f8]
// 005e5c3e: MOV EAX,0x4
// 005e5c43: MOV ECX,dword ptr [EBX + 0xce908]
// 005e5c49: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e5c4c: SUB EAX,ECX
// 005e5c4e: FSTP float ptr [EBX + 0xce8f8]
// 005e5c54: MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce908]
// 005e5c5b: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0xb8] (DATA)
// 005e5c62: ADD EDX,0x20
// 005e5c65: CMP EAX,EDX
// 005e5c67: JZ 0x005e5c86
//   XREF to: 005e5c86 (CONDITIONAL_JUMP)
// 005e5c69: MOV EAX,dword ptr [EDX]
// 005e5c6b: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005e5c72: MOV EAX,dword ptr [EDX + 0x4]
// 005e5c75: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005e5c7c: MOV EAX,dword ptr [EDX + 0x8]
// 005e5c7f: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005e5c86: FLD float ptr [EBX + 0xce8f8]
//   Label: LAB_005e5c86
// 005e5c8c: FLDZ
// 005e5c8e: FCOMPP
// 005e5c90: FNSTSW AX
// 005e5c92: SAHF
// 005e5c93: JC 0x005e5fc6
//   XREF to: 005e5fc6 (CONDITIONAL_JUMP)
// 005e5c99: MOV dword ptr [EBX + 0xce8f8],0x40a00000
//   Label: LAB_005e5c99
// 005e5ca3: MOV dword ptr [EBX + 0xce904],0x3
// 005e5cad: FLD float ptr [ESP + 0x198]
//   Label: LAB_005e5cad
//   XREF to: Stack[-0xb8] (READ)
// 005e5cb4: FLD float ptr [ESP + 0x19c]
//   XREF to: Stack[-0xb4] (READ)
// 005e5cbb: FADD float ptr [0x00656bb3]
//   XREF to: 00656bb3 (READ)
// 005e5cc1: LEA EAX,[EBX + 0x20]
// 005e5cc4: FSTP float ptr [ESP + 0x19c]
//   XREF to: Stack[-0xb4] (WRITE)
// 005e5ccb: FSUB float ptr [EAX]
// 005e5ccd: FLD float ptr [ESP + 0x19c]
//   XREF to: Stack[-0xb4] (READ)
// 005e5cd4: FXCH
// 005e5cd6: FSTP float ptr [ESP + 0x168]
//   XREF to: Stack[-0xe8] (WRITE)
// 005e5cdd: FSUB float ptr [EAX + 0x4]
// 005e5ce0: FLD float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0xb0] (READ)
// 005e5ce7: FXCH
// 005e5ce9: FSTP float ptr [ESP + 0x16c]
//   XREF to: Stack[-0xe4] (WRITE)
// 005e5cf0: FSUB float ptr [EAX + 0x8]
// 005e5cf3: FST float ptr [ESP + 0x170]
//   XREF to: Stack[-0xe0] (WRITE)
// 005e5cfa: FLD float ptr [ESP + 0x168]
//   XREF to: Stack[-0xe8] (READ)
// 005e5d01: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e5d06: FLD float ptr [ESP + 0x170]
//   XREF to: Stack[-0xe0] (READ)
// 005e5d0d: FMUL ST0
// 005e5d0f: FLD float ptr [ESP + 0x168]
//   XREF to: Stack[-0xe8] (READ)
// 005e5d16: FMUL ST0
// 005e5d18: FADDP
// 005e5d1a: FSQRT
// 005e5d1c: FLD float ptr [ESP + 0x16c]
//   XREF to: Stack[-0xe4] (READ)
// 005e5d23: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e5d28: MOV ESI,0x3f99999a
// 005e5d2d: MOV EDI,0x41a00000
// 005e5d32: MOV dword ptr [ESP + 0x1e8],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 005e5d39: MOV dword ptr [ESP + 0x20c],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 005e5d40: FXCH
// 005e5d42: FSTP float ptr [ESP + 0x210]
//   XREF to: Stack[-0x40] (WRITE)
// 005e5d49: FCHS
// 005e5d4b: MOV EAX,dword ptr [EBX + 0xce904]
// 005e5d51: FSTP float ptr [ESP + 0x218]
//   XREF to: Stack[-0x38] (WRITE)
// 005e5d58: CMP EAX,0x1
// 005e5d5b: JNZ 0x005e5d7f
//   XREF to: 005e5d7f (CONDITIONAL_JUMP)
// 005e5d5d: MOV DL,byte ptr [ESP + 0x213]
//   XREF to: Stack[-0x3d] (READ)
// 005e5d64: MOV AH,byte ptr [ESP + 0x21b]
//   XREF to: Stack[-0x35] (READ)
// 005e5d6b: XOR DL,0x80
// 005e5d6e: XOR AH,0x80
// 005e5d71: MOV byte ptr [ESP + 0x213],DL
//   XREF to: Stack[-0x3d] (WRITE)
// 005e5d78: MOV byte ptr [ESP + 0x21b],AH
//   XREF to: Stack[-0x35] (WRITE)
// 005e5d7f: FLD float ptr [ESP + 0x210]
//   Label: LAB_005e5d7f
//   XREF to: Stack[-0x40] (READ)
// 005e5d86: FSUB float ptr [EBX + 0x34]
// 005e5d89: SUB ESP,0x4
// 005e5d8c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x254] (DATA)
// 005e5d8f: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e5d94: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e5d9b: FLD float ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e5da2: ADD ESP,0x4
// 005e5da5: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24c] (WRITE)
// 005e5da9: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e5dac: FMUL float ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x68] (READ)
// 005e5db3: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x248] (WRITE)
// 005e5db7: FABS
// 005e5db9: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24c] (READ)
// 005e5dbd: FABS
// 005e5dbf: FCOMPP
// 005e5dc1: FNSTSW AX
// 005e5dc3: SAHF
// 005e5dc4: JNC 0x005e608c
//   XREF to: 005e608c (CONDITIONAL_JUMP)
// 005e5dca: MOV EAX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x40] (READ)
// 005e5dd1: MOV dword ptr [EBX + 0x34],EAX
// 005e5dd4: FLD float ptr [ESP + 0x218]
//   Label: LAB_005e5dd4
//   XREF to: Stack[-0x38] (READ)
// 005e5ddb: FSUB float ptr [EBX + 0x30]
// 005e5dde: SUB ESP,0x4
// 005e5de1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x254] (DATA)
// 005e5de4: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e5de9: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e5df0: FLD float ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e5df7: ADD ESP,0x4
// 005e5dfa: FST float ptr [ESP + 0x218]
//   XREF to: Stack[-0x38] (WRITE)
// 005e5e01: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e5e04: FMUL float ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x68] (READ)
// 005e5e0b: FLD float ptr [EBX + 0x243c]
// 005e5e11: MOV EDX,0xbec90fdb
// 005e5e16: MOV ECX,0x3ec90fdb
// 005e5e1b: MOV dword ptr [ESP + 0x1f8],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005e5e22: FXCH
// 005e5e24: FADD float ptr [EBX + 0x30]
// 005e5e27: MOV dword ptr [ESP + 0x22c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005e5e2e: FSTP float ptr [EBX + 0x30]
// 005e5e31: FCOMP double ptr [0x00656b7b]
//   XREF to: 00656b7b (READ)
// 005e5e37: FNSTSW AX
// 005e5e39: SAHF
// 005e5e3a: JNC 0x005e5e5d
//   XREF to: 005e5e5d (CONDITIONAL_JUMP)
// 005e5e3c: CMP dword ptr [EBX + 0xce904],0x0
// 005e5e43: JNZ 0x005e5e5d
//   XREF to: 005e5e5d (CONDITIONAL_JUMP)
// 005e5e45: MOV EAX,0x3fc90fdb
// 005e5e4a: MOV EDI,0xbfc90fdb
// 005e5e4f: MOV dword ptr [ESP + 0x22c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005e5e56: MOV dword ptr [ESP + 0x1f8],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 005e5e5d: FLD float ptr [EBX + 0x30]
//   Label: LAB_005e5e5d
// 005e5e60: FCOMP float ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x58] (READ)
// 005e5e67: FNSTSW AX
// 005e5e69: SAHF
// 005e5e6a: JNC 0x005e5e76
//   XREF to: 005e5e76 (CONDITIONAL_JUMP)
// 005e5e6c: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x58] (READ)
// 005e5e73: MOV dword ptr [EBX + 0x30],EAX
// 005e5e76: FLD float ptr [EBX + 0x30]
//   Label: LAB_005e5e76
// 005e5e79: FCOMP float ptr [ESP + 0x22c]
//   XREF to: Stack[-0x24] (READ)
// 005e5e80: FNSTSW AX
// 005e5e82: SAHF
// 005e5e83: JBE 0x005e5e8f
//   XREF to: 005e5e8f (CONDITIONAL_JUMP)
// 005e5e85: MOV EAX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x24] (READ)
// 005e5e8c: MOV dword ptr [EBX + 0x30],EAX
// 005e5e8f: FLD float ptr [EBX + 0x30]
//   Label: LAB_005e5e8f
// 005e5e92: FLD ST0
// 005e5e94: FSIN
// 005e5e96: FLD float ptr [EBX + 0x34]
// 005e5e99: FLD ST0
// 005e5e9b: FSIN
// 005e5e9d: FXCH ST3
// 005e5e9f: FCOS
// 005e5ea1: FXCH
// 005e5ea3: FCOS
// 005e5ea5: FXCH ST3
// 005e5ea7: FMUL ST1
// 005e5ea9: FXCH ST3
// 005e5eab: FMULP
// 005e5ead: FXCH
// 005e5eaf: FCHS
// 005e5eb1: FLD float ptr [ESP + 0x20c]
//   XREF to: Stack[-0x44] (READ)
// 005e5eb8: FXCH
// 005e5eba: FMUL ST1
// 005e5ebc: FXCH ST3
// 005e5ebe: FMUL ST1
// 005e5ec0: FXCH ST3
// 005e5ec2: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e5ec5: FXCH
// 005e5ec7: FMUL ST1
// 005e5ec9: FXCH ST3
// 005e5ecb: FMULP ST2
// 005e5ecd: FXCH ST3
// 005e5ecf: FMUL ST3
// 005e5ed1: FXCH ST2
// 005e5ed3: FADD float ptr [EBX + 0x24]
// 005e5ed6: FXCH
// 005e5ed8: FMULP ST3
// 005e5eda: FST float ptr [EBX + 0x24]
// 005e5edd: FXCH
// 005e5edf: FADD float ptr [EBX + 0x20]
// 005e5ee2: FXCH ST2
// 005e5ee4: FADD float ptr [EBX + 0x28]
// 005e5ee7: FXCH ST2
// 005e5ee9: FSTP float ptr [EBX + 0x20]
// 005e5eec: FXCH
// 005e5eee: FSTP float ptr [EBX + 0x28]
// 005e5ef1: FCOMP float ptr [ESP + 0x19c]
//   XREF to: Stack[-0xb4] (READ)
// 005e5ef8: FNSTSW AX
// 005e5efa: SAHF
// 005e5efb: JNC 0x005e5f07
//   XREF to: 005e5f07 (CONDITIONAL_JUMP)
// 005e5efd: MOV EAX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0xb4] (READ)
// 005e5f04: MOV dword ptr [EBX + 0x24],EAX
// 005e5f07: PUSH EBX
//   Label: LAB_005e5f07
// 005e5f08: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005e5f0d: ADD ESP,0x4
// 005e5f10: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x19c] (DATA)
// 005e5f17: PUSH EAX
// 005e5f18: LEA EAX,[EBX + 0xbebc]
// 005e5f1e: PUSH EAX
// 005e5f1f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e5f24: ADD ESP,0x8
// 005e5f27: LEA EDX,[EBX + 0x25f8]
// 005e5f2d: MOV ESI,EAX
// 005e5f2f: MOV EDI,EDX
// 005e5f31: CMP EDX,EAX
// 005e5f33: JZ 0x005e5f45
//   XREF to: 005e5f45 (CONDITIONAL_JUMP)
// 005e5f35: MOV ECX,dword ptr [EAX]
// 005e5f37: MOV dword ptr [EDX],ECX
// 005e5f39: MOV ECX,dword ptr [EAX + 0x4]
// 005e5f3c: MOV dword ptr [EDX + 0x4],ECX
// 005e5f3f: MOV ECX,dword ptr [EAX + 0x8]
// 005e5f42: MOV dword ptr [EDX + 0x8],ECX
// 005e5f45: LEA EAX,[ESI + 0xc]
//   Label: LAB_005e5f45
// 005e5f48: LEA EDX,[EDI + 0xc]
// 005e5f4b: CMP EDX,EAX
// 005e5f4d: JZ 0x005e5f5f
//   XREF to: 005e5f5f (CONDITIONAL_JUMP)
// 005e5f4f: MOV ECX,dword ptr [EAX]
// 005e5f51: MOV dword ptr [EDX],ECX
// 005e5f53: MOV ECX,dword ptr [EAX + 0x4]
// 005e5f56: MOV dword ptr [EDX + 0x4],ECX
// 005e5f59: MOV ECX,dword ptr [EAX + 0x8]
// 005e5f5c: MOV dword ptr [EDX + 0x8],ECX
// 005e5f5f: LEA EAX,[EBX + 0x158]
//   Label: LAB_005e5f5f
// 005e5f65: PUSH EAX
// 005e5f66: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005e5f6b: MOV EAX,dword ptr [EAX + 0x24]
// 005e5f6e: ADD ESP,0x4
// 005e5f71: CMP EAX,0x2
// 005e5f74: JZ 0x005e5f88
//   XREF to: 005e5f88 (CONDITIONAL_JUMP)
// 005e5f76: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005e5f7b: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 005e5f82: JZ 0x005e6b4e
//   XREF to: 005e6b4e (CONDITIONAL_JUMP)
// 005e5f88: MOV ESP,EBP
//   Label: LAB_005e5f88
// 005e5f8a: POP EBP
// 005e5f8b: POP EDI
// 005e5f8c: POP ESI
// 005e5f8d: POP EBX
// 005e5f8e: RET
// 005e5f8f: MOV ECX,0x656b0e
//   Label: LAB_005e5f8f
//   XREF to: 00656b0e (PARAM)
// 005e5f94: MOV EAX,0xcf
// 005e5f99: PUSH 0x656b23
//   XREF to: 00656b23 (DATA)
// 005e5f9e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005e5fa4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005e5fa9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e5fae: ADD ESP,0x4
// 005e5fb1: JMP 0x005e5994
//   XREF to: 005e5994 (UNCONDITIONAL_JUMP)
// 005e5fb6: XOR EAX,EAX
//   Label: LAB_005e5fb6
// 005e5fb8: JMP 0x005e5ada
//   XREF to: 005e5ada (UNCONDITIONAL_JUMP)
// 005e5fbd: PUSH 0x1
//   Label: LAB_005e5fbd
// 005e5fbf: PUSH 0x2
// 005e5fc1: JMP 0x005e5be9
//   XREF to: 005e5be9 (UNCONDITIONAL_JUMP)
// 005e5fc6: LEA EAX,[EBX + 0x20]
//   Label: LAB_005e5fc6
// 005e5fc9: FLD float ptr [ESP + 0x198]
//   XREF to: Stack[-0xb8] (READ)
// 005e5fd0: FSUB float ptr [EAX]
// 005e5fd2: FMUL ST0
// 005e5fd4: FLD float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0xb0] (READ)
// 005e5fdb: FSUB float ptr [EAX + 0x8]
// 005e5fde: FMUL ST0
// 005e5fe0: FADDP
// 005e5fe2: FSQRT
// 005e5fe4: FCOMP double ptr [0x00656bab]
//   XREF to: 00656bab (READ)
// 005e5fea: FNSTSW AX
// 005e5fec: SAHF
// 005e5fed: JC 0x005e5c99
//   XREF to: 005e5c99 (CONDITIONAL_JUMP)
// 005e5ff3: JMP 0x005e5cad
//   XREF to: 005e5cad (UNCONDITIONAL_JUMP)
// 005e5ff8: CMP EAX,0x3
//   Label: LAB_005e5ff8
// 005e5ffb: JNZ 0x005e5cad
//   XREF to: 005e5cad (CONDITIONAL_JUMP)
// 005e6001: MOV EAX,dword ptr [EBX + 0xce908]
// 005e6007: MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce90c]
// 005e600e: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0xb8] (DATA)
// 005e6015: ADD EDX,0x20
// 005e6018: CMP EAX,EDX
// 005e601a: JZ 0x005e6039
//   XREF to: 005e6039 (CONDITIONAL_JUMP)
// 005e601c: MOV EAX,dword ptr [EDX]
// 005e601e: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005e6025: MOV EAX,dword ptr [EDX + 0x4]
// 005e6028: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005e602f: MOV EAX,dword ptr [EDX + 0x8]
// 005e6032: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005e6039: FLD float ptr [EBX + 0xce8f8]
//   Label: LAB_005e6039
// 005e603f: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6042: FST float ptr [EBX + 0xce8f8]
// 005e6048: FLDZ
// 005e604a: FCOMPP
// 005e604c: FNSTSW AX
// 005e604e: SAHF
// 005e604f: JNC 0x005e607e
//   XREF to: 005e607e (CONDITIONAL_JUMP)
// 005e6051: LEA EAX,[EBX + 0x20]
// 005e6054: FLD float ptr [ESP + 0x198]
//   XREF to: Stack[-0xb8] (READ)
// 005e605b: FSUB float ptr [EAX]
// 005e605d: FMUL ST0
// 005e605f: FLD float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0xb0] (READ)
// 005e6066: FSUB float ptr [EAX + 0x8]
// 005e6069: FMUL ST0
// 005e606b: FADDP
// 005e606d: FSQRT
// 005e606f: FCOMP double ptr [0x00656ba3]
//   XREF to: 00656ba3 (READ)
// 005e6075: FNSTSW AX
// 005e6077: SAHF
// 005e6078: JNC 0x005e5cad
//   XREF to: 005e5cad (CONDITIONAL_JUMP)
// 005e607e: PUSH EBX
//   Label: LAB_005e607e
// 005e607f: CALL core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
//   XREF to: 005e74c0 (UNCONDITIONAL_CALL)
// 005e6084: ADD ESP,0x4
// 005e6087: JMP 0x005e5cad
//   XREF to: 005e5cad (UNCONDITIONAL_JUMP)
// 005e608c: FLD float ptr [EBX + 0x34]
//   Label: LAB_005e608c
// 005e608f: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x248] (READ)
// 005e6093: FSTP float ptr [EBX + 0x34]
// 005e6096: JMP 0x005e5dd4
//   XREF to: 005e5dd4 (UNCONDITIONAL_JUMP)
// 005e609b: CMP EDX,0x1
//   Label: LAB_005e609b
// 005e609e: JNZ 0x005e6249
//   XREF to: 005e6249 (CONDITIONAL_JUMP)
// 005e60a4: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e60a7: FDIV float ptr [0x00664e7c]
//   XREF to: 00664e7c (READ)
// 005e60ad: FADD float ptr [EBX + 0xce8f0]
// 005e60b3: FST float ptr [EBX + 0xce8f0]
// 005e60b9: FLD1
// 005e60bb: FCOMPP
// 005e60bd: FNSTSW AX
// 005e60bf: SAHF
// 005e60c0: JA 0x005e60df
//   XREF to: 005e60df (CONDITIONAL_JUMP)
// 005e60c2: PUSH 0x656b4c
//   XREF to: 00656b4c (DATA)
// 005e60c7: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005e60cc: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 005e60cd: MOV dword ptr [EBX + 0xcdcc0],0x2
// 005e60d7: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e60dc: ADD ESP,0x8
// 005e60df: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005e60df
//   XREF to: Stack[0x8] (READ)
// 005e60e2: PUSH EBX
// 005e60e3: CALL core_vampboss.cpp_FUN_005e6ca0
//   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)
// 005e60e8: ADD ESP,0x8
// 005e60eb: LEA ESI,[EBX + 0xbebc]
// 005e60f1: PUSH ESI
// 005e60f2: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e60f7: ADD ESP,0x4
// 005e60fa: PUSH ESI
// 005e60fb: PUSH dword ptr [EBX + 0x2414]
// 005e6101: LEA EAX,[EBX + 0x30]
// 005e6104: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6107: PUSH EAX
// 005e6108: LEA EAX,[EBX + 0x20]
// 005e610b: PUSH EAX
// 005e610c: LEA EAX,[EBX + 0xe170]
// 005e6112: PUSH EAX
// 005e6113: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e6118: ADD ESP,0x18
// 005e611b: LEA ESI,[EBX + 0x158]
// 005e6121: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6124: FLDZ
// 005e6126: MOV dword ptr [ESP + 0x230],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e612d: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6130: FNSTSW AX
// 005e6132: SAHF
// 005e6133: JNC 0x005e6160
//   XREF to: 005e6160 (CONDITIONAL_JUMP)
// 005e6135: LEA EAX,[ESP + 0x230]
//   Label: LAB_005e6135
//   XREF to: Stack[-0x20] (DATA)
// 005e613c: PUSH EAX
// 005e613d: PUSH ESI
// 005e613e: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005e6143: ADD ESP,0x8
// 005e6146: FLDZ
// 005e6148: FCOMP float ptr [ESP + 0x230]
//   XREF to: Stack[-0x20] (READ)
// 005e614f: FNSTSW AX
// 005e6151: SAHF
// 005e6152: JC 0x005e6135
//   XREF to: 005e6135 (CONDITIONAL_JUMP)
// 005e6154: LEA EAX,[EAX]
// 005e615a: LEA EDX,[EDX]
// 005e6160: PUSH ESI
//   Label: LAB_005e6160
// 005e6161: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e6166: ADD ESP,0x4
// 005e6169: PUSH ESI
// 005e616a: PUSH dword ptr [EBX + 0x2414]
// 005e6170: LEA EAX,[EBX + 0x30]
// 005e6173: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6176: PUSH EAX
// 005e6177: LEA EDI,[EBX + 0x20]
// 005e617a: PUSH EDI
// 005e617b: MOV dword ptr [ESP + 0x24c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e6182: LEA EAX,[EBX + 0x4dfe0]
// 005e6188: PUSH EAX
// 005e6189: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e618e: ADD ESP,0x18
// 005e6191: PUSH ESI
// 005e6192: PUSH dword ptr [EBX + 0x2414]
// 005e6198: MOV EAX,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0x18] (READ)
// 005e619f: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e61a2: PUSH EAX
// 005e61a3: PUSH EDI
// 005e61a4: LEA EAX,[EBX + 0x8de50]
// 005e61aa: PUSH EAX
// 005e61ab: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e61b0: ADD ESP,0x18
// 005e61b3: LEA EAX,[ESP + 0xfc]
//   XREF to: Stack[-0x154] (DATA)
// 005e61ba: PUSH EAX
// 005e61bb: PUSH ESI
// 005e61bc: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e61c1: ADD ESP,0x8
// 005e61c4: LEA EDX,[EBX + 0x25f8]
// 005e61ca: MOV ESI,EAX
// 005e61cc: MOV EDI,EDX
// 005e61ce: CMP EDX,EAX
// 005e61d0: JZ 0x005e61e2
//   XREF to: 005e61e2 (CONDITIONAL_JUMP)
// 005e61d2: MOV ECX,dword ptr [EAX]
// 005e61d4: MOV dword ptr [EDX],ECX
// 005e61d6: MOV ECX,dword ptr [EAX + 0x4]
// 005e61d9: MOV dword ptr [EDX + 0x4],ECX
// 005e61dc: MOV ECX,dword ptr [EAX + 0x8]
// 005e61df: MOV dword ptr [EDX + 0x8],ECX
// 005e61e2: LEA EDX,[ESI + 0xc]
//   Label: LAB_005e61e2
// 005e61e5: LEA EAX,[EDI + 0xc]
// 005e61e8: CMP EAX,EDX
// 005e61ea: JZ 0x005e61fc
//   XREF to: 005e61fc (CONDITIONAL_JUMP)
// 005e61ec: MOV ECX,dword ptr [EDX]
// 005e61ee: MOV dword ptr [EAX],ECX
// 005e61f0: MOV ECX,dword ptr [EDX + 0x4]
// 005e61f3: MOV dword ptr [EAX + 0x4],ECX
// 005e61f6: MOV ECX,dword ptr [EDX + 0x8]
// 005e61f9: MOV dword ptr [EAX + 0x8],ECX
// 005e61fc: LEA EAX,[ESP + 0xcc]
//   Label: LAB_005e61fc
//   XREF to: Stack[-0x184] (DATA)
// 005e6203: PUSH EAX
// 005e6204: LEA EAX,[EBX + 0xbebc]
// 005e620a: PUSH EAX
// 005e620b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e6210: ADD ESP,0x8
// 005e6213: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x184] (DATA)
// 005e621a: PUSH EAX
// 005e621b: LEA ESI,[EBX + 0x25f8]
// 005e6221: PUSH ESI
// 005e6222: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e6227: ADD ESP,0x8
// 005e622a: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x178] (DATA)
// 005e6231: PUSH EAX
// 005e6232: PUSH ESI
// 005e6233: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e6238: ADD ESP,0x8
// 005e623b: FLD float ptr [EBX + 0x24]
// 005e623e: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6241: FSTP float ptr [EBX + 0x24]
// 005e6244: JMP 0x005e5f5f
//   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)
// 005e6249: CMP EDX,0x3
//   Label: LAB_005e6249
// 005e624c: JNZ 0x005e6441
//   XREF to: 005e6441 (CONDITIONAL_JUMP)
// 005e6252: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6255: FDIV float ptr [0x00664e7c]
//   XREF to: 00664e7c (READ)
// 005e625b: MOV EAX,dword ptr [EBX + 0xce8f0]
// 005e6261: MOV dword ptr [ESP + 0x1f0],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005e6268: FLD float ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x60] (READ)
// 005e626f: FXCH
// 005e6271: FSTP float ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x64] (WRITE)
// 005e6278: FSUB float ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x64] (READ)
// 005e627f: FST float ptr [EBX + 0xce8f0]
// 005e6285: FLDZ
// 005e6287: FCOMPP
// 005e6289: FNSTSW AX
// 005e628b: SAHF
// 005e628c: JC 0x005e6420
//   XREF to: 005e6420 (CONDITIONAL_JUMP)
// 005e6292: PUSH 0x656b5b
//   XREF to: 00656b5b (DATA)
// 005e6297: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e629d: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005e629e: MOV dword ptr [EBX + 0xcdcc0],0x0
// 005e62a8: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e62ad: FLD float ptr [EBX + 0x2414]
// 005e62b3: MOV dword ptr [EBX + 0xce8f0],0x0
// 005e62bd: ADD ESP,0x8
// 005e62c0: FSTP float ptr [EBX + 0x24]
//   Label: LAB_005e62c0
// 005e62c3: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e62c6: PUSH EBX
// 005e62c7: CALL core_vampboss.cpp_FUN_005e6ca0
//   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)
// 005e62cc: ADD ESP,0x8
// 005e62cf: LEA ESI,[EBX + 0xbebc]
// 005e62d5: PUSH ESI
// 005e62d6: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e62db: ADD ESP,0x4
// 005e62de: PUSH ESI
// 005e62df: PUSH dword ptr [EBX + 0x2414]
// 005e62e5: LEA EAX,[EBX + 0x30]
// 005e62e8: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e62eb: PUSH EAX
// 005e62ec: LEA EAX,[EBX + 0x20]
// 005e62ef: PUSH EAX
// 005e62f0: LEA EAX,[EBX + 0xe170]
// 005e62f6: PUSH EAX
// 005e62f7: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e62fc: ADD ESP,0x18
// 005e62ff: LEA ESI,[EBX + 0x158]
// 005e6305: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6308: FLDZ
// 005e630a: MOV dword ptr [ESP + 0x234],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e6311: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6314: FNSTSW AX
// 005e6316: SAHF
// 005e6317: JNC 0x005e6340
//   XREF to: 005e6340 (CONDITIONAL_JUMP)
// 005e6319: LEA EAX,[ESP + 0x234]
//   Label: LAB_005e6319
//   XREF to: Stack[-0x1c] (DATA)
// 005e6320: PUSH EAX
// 005e6321: PUSH ESI
// 005e6322: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005e6327: ADD ESP,0x8
// 005e632a: FLDZ
// 005e632c: FCOMP float ptr [ESP + 0x234]
//   XREF to: Stack[-0x1c] (READ)
// 005e6333: FNSTSW AX
// 005e6335: SAHF
// 005e6336: JC 0x005e6319
//   XREF to: 005e6319 (CONDITIONAL_JUMP)
// 005e6338: LEA EAX,[EAX]
// 005e633e: MOV EDX,EDX
// 005e6340: PUSH ESI
//   Label: LAB_005e6340
// 005e6341: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e6346: ADD ESP,0x4
// 005e6349: PUSH ESI
// 005e634a: PUSH dword ptr [EBX + 0x2414]
// 005e6350: LEA EDI,[EBX + 0x30]
// 005e6353: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6356: PUSH EDI
// 005e6357: LEA EAX,[EBX + 0x20]
// 005e635a: PUSH EAX
// 005e635b: MOV dword ptr [ESP + 0x24c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e6362: LEA EAX,[EBX + 0x4dfe0]
// 005e6368: PUSH EAX
// 005e6369: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e636e: ADD ESP,0x18
// 005e6371: PUSH ESI
// 005e6372: PUSH dword ptr [EBX + 0x2414]
// 005e6378: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e637b: PUSH EDI
// 005e637c: MOV ECX,dword ptr [ESP + 0x248]
//   XREF to: Stack[-0x18] (READ)
// 005e6383: PUSH ECX
// 005e6384: LEA EAX,[EBX + 0x8de50]
// 005e638a: PUSH EAX
// 005e638b: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e6390: ADD ESP,0x18
// 005e6393: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x1b4] (DATA)
// 005e639a: PUSH EAX
// 005e639b: PUSH ESI
// 005e639c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e63a1: ADD ESP,0x8
// 005e63a4: LEA EDX,[EBX + 0x25f8]
// 005e63aa: MOV EDI,EAX
// 005e63ac: MOV ESI,EDX
// 005e63ae: CMP EDX,EAX
// 005e63b0: JZ 0x005e63c2
//   XREF to: 005e63c2 (CONDITIONAL_JUMP)
// 005e63b2: MOV ECX,dword ptr [EAX]
// 005e63b4: MOV dword ptr [EDX],ECX
// 005e63b6: MOV ECX,dword ptr [EAX + 0x4]
// 005e63b9: MOV dword ptr [EDX + 0x4],ECX
// 005e63bc: MOV ECX,dword ptr [EAX + 0x8]
// 005e63bf: MOV dword ptr [EDX + 0x8],ECX
// 005e63c2: LEA EDX,[EDI + 0xc]
//   Label: LAB_005e63c2
// 005e63c5: LEA EAX,[ESI + 0xc]
// 005e63c8: CMP EAX,EDX
// 005e63ca: JZ 0x005e63dc
//   XREF to: 005e63dc (CONDITIONAL_JUMP)
// 005e63cc: MOV ECX,dword ptr [EDX]
// 005e63ce: MOV dword ptr [EAX],ECX
// 005e63d0: MOV ECX,dword ptr [EDX + 0x4]
// 005e63d3: MOV dword ptr [EAX + 0x4],ECX
// 005e63d6: MOV ECX,dword ptr [EDX + 0x8]
// 005e63d9: MOV dword ptr [EAX + 0x8],ECX
// 005e63dc: LEA EAX,[ESP + 0x84]
//   Label: LAB_005e63dc
//   XREF to: Stack[-0x1cc] (DATA)
// 005e63e3: PUSH EAX
// 005e63e4: LEA EAX,[EBX + 0xbebc]
// 005e63ea: PUSH EAX
// 005e63eb: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e63f0: ADD ESP,0x8
// 005e63f3: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x1cc] (DATA)
// 005e63fa: PUSH EAX
// 005e63fb: LEA ESI,[EBX + 0x25f8]
// 005e6401: PUSH ESI
// 005e6402: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e6407: ADD ESP,0x8
// 005e640a: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x1c0] (DATA)
// 005e6411: PUSH EAX
// 005e6412: PUSH ESI
// 005e6413: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e6418: ADD ESP,0x8
// 005e641b: JMP 0x005e5f5f
//   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)
// 005e6420: FLD float ptr [EBX + 0x2414]
//   Label: LAB_005e6420
// 005e6426: FSUB float ptr [EBX + 0x24]
// 005e6429: FLD float ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x64] (READ)
// 005e6430: FDIV float ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x60] (READ)
// 005e6437: FMULP
// 005e6439: FADD float ptr [EBX + 0x24]
// 005e643c: JMP 0x005e62c0
//   XREF to: 005e62c0 (UNCONDITIONAL_JUMP)
// 005e6441: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005e6441
//   XREF to: Stack[0x8] (READ)
// 005e6444: MOV dword ptr [ESP + 0x1d8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005e644b: LEA EAX,[EBX + 0x158]
// 005e6451: FLDZ
// 005e6453: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005e645a: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e645d: FNSTSW AX
// 005e645f: SAHF
// 005e6460: JNC 0x005e64a9
//   XREF to: 005e64a9 (CONDITIONAL_JUMP)
// 005e6462: LEA EAX,[ESP + 0x1d8]
//   Label: LAB_005e6462
//   XREF to: Stack[-0x78] (DATA)
// 005e6469: PUSH EAX
// 005e646a: MOV EDX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x30] (READ)
// 005e6471: PUSH EDX
// 005e6472: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005e6477: ADD ESP,0x8
// 005e647a: CMP EAX,0x2
// 005e647d: JNC 0x005e6789
//   XREF to: 005e6789 (CONDITIONAL_JUMP)
// 005e6483: CMP EAX,0x1
// 005e6486: JNZ 0x005e649b
//   XREF to: 005e649b (CONDITIONAL_JUMP)
// 005e6488: PUSH EBX
// 005e6489: CALL core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
//   XREF to: 005e7390 (UNCONDITIONAL_CALL)
// 005e648e: ADD ESP,0x4
//   Label: LAB_005e648e
// 005e6491: MOV dword ptr [EBX + 0xce8f4],0x3f800000
// 005e649b: FLDZ
//   Label: LAB_005e649b
// 005e649d: FCOMP float ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x78] (READ)
// 005e64a4: FNSTSW AX
// 005e64a6: SAHF
// 005e64a7: JC 0x005e6462
//   XREF to: 005e6462 (CONDITIONAL_JUMP)
// 005e64a9: LEA EAX,[ESP + 0xe4]
//   Label: LAB_005e64a9
//   XREF to: Stack[-0x16c] (DATA)
// 005e64b0: PUSH EAX
// 005e64b1: MOV EDX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x30] (READ)
// 005e64b8: PUSH EDX
// 005e64b9: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0
//   XREF to: 005a16c0 (UNCONDITIONAL_CALL)
// 005e64be: ADD ESP,0x8
// 005e64c1: LEA EDX,[EBX + 0x25f8]
// 005e64c7: MOV ESI,EAX
// 005e64c9: MOV EDI,EDX
// 005e64cb: CMP EDX,EAX
// 005e64cd: JZ 0x005e64df
//   XREF to: 005e64df (CONDITIONAL_JUMP)
// 005e64cf: MOV ECX,dword ptr [EAX]
// 005e64d1: MOV dword ptr [EDX],ECX
// 005e64d3: MOV ECX,dword ptr [EAX + 0x4]
// 005e64d6: MOV dword ptr [EDX + 0x4],ECX
// 005e64d9: MOV ECX,dword ptr [EAX + 0x8]
// 005e64dc: MOV dword ptr [EDX + 0x8],ECX
// 005e64df: LEA EDX,[ESI + 0xc]
//   Label: LAB_005e64df
// 005e64e2: LEA EAX,[EDI + 0xc]
// 005e64e5: CMP EAX,EDX
// 005e64e7: JZ 0x005e64f9
//   XREF to: 005e64f9 (CONDITIONAL_JUMP)
// 005e64e9: MOV ECX,dword ptr [EDX]
// 005e64eb: MOV dword ptr [EAX],ECX
// 005e64ed: MOV ECX,dword ptr [EDX + 0x4]
// 005e64f0: MOV dword ptr [EAX + 0x4],ECX
// 005e64f3: MOV ECX,dword ptr [EDX + 0x8]
// 005e64f6: MOV dword ptr [EAX + 0x8],ECX
// 005e64f9: LEA ESI,[EBX + 0x158]
//   Label: LAB_005e64f9
// 005e64ff: PUSH ESI
// 005e6500: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005e6505: MOV EAX,dword ptr [EAX + 0x24]
// 005e6508: ADD ESP,0x4
// 005e650b: MOV EDI,EAX
// 005e650d: CMP EAX,0x9
// 005e6510: JA 0x005e6569
//   XREF to: 005e6569 (CONDITIONAL_JUMP)
// 005e6512: JMP dword ptr [EAX*0x4 + 0x5e5944]
//   Label: switchD
//   XREF to: 005e6519 (COMPUTED_JUMP)
//   XREF to: 005e6569 (COMPUTED_JUMP)
//   XREF to: 005e6b20 (COMPUTED_JUMP)
//   XREF to: 005e5944 (DATA)
// 005e6519: FLD float ptr [0x00664e84]
//   Label: caseD_0
//   XREF to: 00664e84 (READ)
// 005e651f: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6522: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005e6527: FSTP float ptr [EBX + 0x2438]
// 005e652d: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 005e6534: JZ 0x005e6ad3
//   XREF to: 005e6ad3 (CONDITIONAL_JUMP)
// 005e653a: PUSH 0x656b67
//   XREF to: 00656b67 (DATA)
// 005e653f: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005e6545: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 005e6546: MOV dword ptr [EBX + 0xce8f4],0x40400000
// 005e6550: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005e6555: ADD ESP,0x8
// 005e6558: TEST EAX,EAX
// 005e655a: JZ 0x005e67a8
//   XREF to: 005e67a8 (CONDITIONAL_JUMP)
// 005e6560: PUSH EBX
//   Label: LAB_005e6560
// 005e6561: CALL core_vampboss.cpp_CallToCountVoicuBatWav_FUN_005e7480
//   XREF to: 005e7480 (UNCONDITIONAL_CALL)
// 005e6566: ADD ESP,0x4
//   Label: LAB_005e6566
// 005e6569: MOV EAX,[0x0067b654]
//   Label: caseD_9
//   XREF to: 0067b654 (READ)
// 005e656e: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 005e6575: JNZ 0x005e65e3
//   XREF to: 005e65e3 (CONDITIONAL_JUMP)
// 005e6577: CMP EDI,0x2
// 005e657a: JZ 0x005e65e3
//   XREF to: 005e65e3 (CONDITIONAL_JUMP)
// 005e657c: LEA EDX,[EBX + 0x241c]
// 005e6582: LEA EAX,[EBX + 0x23ac]
// 005e6588: FLD float ptr [EDX]
// 005e658a: FADD float ptr [EAX]
// 005e658c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e658f: FXCH
// 005e6591: FSTP float ptr [ESP + 0x150]
//   XREF to: Stack[-0x100] (WRITE)
// 005e6598: FLD float ptr [EDX + 0x4]
// 005e659b: FADD float ptr [EAX + 0x4]
// 005e659e: FXCH
// 005e65a0: FMUL double ptr [0x00656bc3]
//   XREF to: 00656bc3 (READ)
// 005e65a6: FXCH
// 005e65a8: FSTP float ptr [ESP + 0x154]
//   XREF to: Stack[-0xfc] (WRITE)
// 005e65af: FLD float ptr [EDX + 0x8]
// 005e65b2: FADD float ptr [EAX + 0x8]
// 005e65b5: FLD float ptr [ESP + 0x154]
//   XREF to: Stack[-0xfc] (READ)
// 005e65bc: FXCH
// 005e65be: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0xf8] (WRITE)
// 005e65c5: LEA EAX,[ESP + 0x150]
//   XREF to: Stack[-0x100] (DATA)
// 005e65cc: FXCH
// 005e65ce: FSUBR ST0,ST1
// 005e65d0: PUSH EAX
// 005e65d1: FSTP ST1
// 005e65d3: PUSH EBX
// 005e65d4: FSTP float ptr [ESP + 0x15c]
//   XREF to: Stack[-0xfc] (WRITE)
// 005e65db: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005e65e0: ADD ESP,0x8
// 005e65e3: LEA EAX,[EBX + 0x241c]
//   Label: LAB_005e65e3
// 005e65e9: MOV dword ptr [EAX + 0x8],0x0
// 005e65f0: MOV EDX,dword ptr [EAX + 0x8]
// 005e65f3: MOV dword ptr [EAX + 0x4],EDX
// 005e65f6: MOV EDX,dword ptr [EAX + 0x4]
// 005e65f9: MOV dword ptr [EAX],EDX
// 005e65fb: LEA EAX,[EBX + 0x23ac]
// 005e6601: MOV dword ptr [EAX + 0x8],0x0
// 005e6608: PUSH EBX
// 005e6609: MOV EDX,dword ptr [EAX + 0x8]
// 005e660c: MOV dword ptr [EAX + 0x4],EDX
// 005e660f: MOV EDX,dword ptr [EAX + 0x4]
// 005e6612: MOV dword ptr [EAX],EDX
// 005e6614: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005e6619: ADD ESP,0x4
// 005e661c: LEA ESI,[EBX + 0x158]
// 005e6622: PUSH ESI
// 005e6623: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005e6628: ADD ESP,0x4
// 005e662b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e662e: PUSH EBX
// 005e662f: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005e6634: ADD ESP,0x8
// 005e6637: PUSH ESI
// 005e6638: PUSH dword ptr [EBX + 0x2414]
// 005e663e: LEA EAX,[EBX + 0x30]
// 005e6641: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6644: PUSH EAX
// 005e6645: LEA EDI,[EBX + 0x20]
// 005e6648: PUSH EDI
// 005e6649: MOV dword ptr [ESP + 0x24c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e6650: LEA EAX,[EBX + 0x4dfe0]
// 005e6656: PUSH EAX
// 005e6657: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e665c: ADD ESP,0x18
// 005e665f: PUSH ESI
// 005e6660: PUSH dword ptr [EBX + 0x2414]
// 005e6666: MOV EAX,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0x18] (READ)
// 005e666d: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6670: PUSH EAX
// 005e6671: PUSH EDI
// 005e6672: LEA EAX,[EBX + 0x8de50]
// 005e6678: PUSH EAX
// 005e6679: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005e667e: ADD ESP,0x18
// 005e6681: JMP 0x005e5f5f
//   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)
// 005e6686: PUSH EBX
//   Label: LAB_005e6686
// 005e6687: CALL core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
//   XREF to: 005e7410 (UNCONDITIONAL_CALL)
// 005e668c: JMP 0x005e648e
//   XREF to: 005e648e (UNCONDITIONAL_JUMP)
// 005e6691: PUSH EBX
//   Label: LAB_005e6691
// 005e6692: CALL core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320
//   XREF to: 005e7320 (UNCONDITIONAL_CALL)
// 005e6697: JMP 0x005e648e
//   XREF to: 005e648e (UNCONDITIONAL_JUMP)
// 005e669c: PUSH 0x0
//   Label: LAB_005e669c
// 005e669e: PUSH 0x0
// 005e66a0: MOV EAX,dword ptr [EBX + 0x154]
// 005e66a6: PUSH EBX
// 005e66a7: CALL dword ptr [EAX + 0x13c]
// 005e66ad: ADD ESP,0xc
// 005e66b0: LEA EAX,[ESP + 0x18c]
// 005e66b7: PUSH EAX
// 005e66b8: LEA EAX,[ESP + 0x148]
// 005e66bf: XOR ECX,ECX
// 005e66c1: PUSH EAX
// 005e66c2: MOV ESI,0x41a00000
// 005e66c7: MOV dword ptr [ESP + 0x194],ECX
// 005e66ce: PUSH EBX
// 005e66cf: MOV dword ptr [ESP + 0x19c],ESI
// 005e66d6: MOV dword ptr [ESP + 0x1a0],ESI
// 005e66dd: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005e66e2: ADD ESP,0xc
// 005e66e5: PUSH 0x0
// 005e66e7: LEA EAX,[ESP + 0x148]
// 005e66ee: PUSH 0xbf800000
// 005e66f3: PUSH EAX
// 005e66f4: PUSH EBX
// 005e66f5: MOV EDI,ESI
// 005e66f7: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 005e66fc: ADD ESP,0x10
// 005e66ff: XOR EAX,EAX
// 005e6701: XOR EDI,ESI
// 005e6703: MOV dword ptr [ESP + 0x224],EAX
// 005e670a: MOV EAX,[0x006810c8]
//   Label: LAB_005e670a
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e670f: MOV EDX,dword ptr [ESP + 0x224]
// 005e6716: CMP EDX,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 005e671c: JGE 0x005e649b
//   XREF to: 005e649b (CONDITIONAL_JUMP)
// 005e6722: MOV ESI,dword ptr [0x03f87518]
//   XREF to: 03f87518 (READ)
// 005e6728: PUSH ESI
// 005e6729: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 005e6730: PUSH EDX
// 005e6731: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e6736: MOV ESI,EAX
// 005e6738: ADD ESP,0x8
// 005e673b: TEST EAX,EAX
// 005e673d: JNZ 0x005e6753
//   XREF to: 005e6753 (CONDITIONAL_JUMP)
// 005e673f: MOV EDX,dword ptr [ESP + 0x224]
//   Label: LAB_005e673f
// 005e6746: INC EDX
// 005e6747: ADD EDI,0x4
// 005e674a: MOV dword ptr [ESP + 0x224],EDX
// 005e6751: JMP 0x005e670a
//   XREF to: 005e670a (UNCONDITIONAL_JUMP)
// 005e6753: CMP dword ptr [EAX + 0xc064],0x0
//   Label: LAB_005e6753
// 005e675a: JZ 0x005e673f
//   XREF to: 005e673f (CONDITIONAL_JUMP)
// 005e675c: LEA EAX,[ESP + 0x48]
// 005e6760: PUSH EAX
// 005e6761: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005e6766: MOV EAX,0x4479c000
// 005e676b: ADD ESP,0x4
// 005e676e: MOV dword ptr [ESP + 0x4c],EAX
// 005e6772: LEA EAX,[ESP + 0x48]
// 005e6776: PUSH EAX
// 005e6777: MOV EDX,dword ptr [ESI + 0x154]
// 005e677d: PUSH ESI
// 005e677e: CALL dword ptr [EDX + 0x11c]
// 005e6784: ADD ESP,0x8
// 005e6787: JMP 0x005e673f
//   XREF to: 005e673f (UNCONDITIONAL_JUMP)
// 005e6789: JBE 0x005e6686
//   Label: LAB_005e6789
//   XREF to: 005e6686 (CONDITIONAL_JUMP)
// 005e678f: CMP EAX,0x3
// 005e6792: JBE 0x005e6691
//   XREF to: 005e6691 (CONDITIONAL_JUMP)
// 005e6798: CMP EAX,0x29a
// 005e679d: JZ 0x005e669c
//   XREF to: 005e669c (CONDITIONAL_JUMP)
// 005e67a3: JMP 0x005e649b
//   XREF to: 005e649b (UNCONDITIONAL_JUMP)
// 005e67a8: MOV EDX,dword ptr [0x02db87d0]
//   Label: LAB_005e67a8
//   XREF to: 02db87d0 (READ)
// 005e67ae: MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e67b5: LEA EAX,[EBX + 0x20]
// 005e67b8: FLD float ptr [EDX + 0x20]
// 005e67bb: FSUB float ptr [EAX]
// 005e67bd: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x13c] (WRITE)
// 005e67c4: FLD float ptr [EDX + 0x24]
// 005e67c7: FSUB float ptr [EAX + 0x4]
// 005e67ca: FSTP float ptr [ESP + 0x118]
//   XREF to: Stack[-0x138] (WRITE)
// 005e67d1: FLD float ptr [EDX + 0x28]
// 005e67d4: FSUB float ptr [EAX + 0x8]
// 005e67d7: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x13c] (DATA)
// 005e67de: PUSH EAX
// 005e67df: LEA EAX,[ESP + 0x124]
//   XREF to: Stack[-0x130] (DATA)
// 005e67e6: PUSH EAX
// 005e67e7: FSTP float ptr [ESP + 0x124]
//   XREF to: Stack[-0x134] (WRITE)
// 005e67ee: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005e67f3: ADD ESP,0x8
// 005e67f6: MOV EAX,dword ptr [EAX + 0x4]
// 005e67f9: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005e6800: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0x120] (READ)
// 005e6807: FSUB float ptr [EBX + 0x34]
// 005e680a: SUB ESP,0x4
// 005e680d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x254] (DATA)
// 005e6810: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e6815: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e681c: MOV EAX,dword ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e6823: MOV dword ptr [EBX + 0x2418],EAX
// 005e6829: ADD ESP,0x4
// 005e682c: MOV EAX,dword ptr [EBX + 0x2418]
// 005e6832: MOV dword ptr [ESP + 0x21c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005e6839: MOV EAX,dword ptr [EBX + 0x2438]
// 005e683f: PUSH dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x34] (READ)
// 005e6846: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005e684d: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e6852: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e6859: FLD float ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e6860: ADD ESP,0x4
// 005e6863: FLD float ptr [ESP + 0x200]
//   XREF to: Stack[-0x50] (READ)
// 005e686a: FXCH
// 005e686c: FST float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x34] (WRITE)
// 005e6873: FXCH
// 005e6875: FCHS
// 005e6877: FSTP float ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x5c] (WRITE)
// 005e687e: FCOMP float ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x5c] (READ)
// 005e6885: FNSTSW AX
// 005e6887: SAHF
// 005e6888: JNC 0x005e68aa
//   XREF to: 005e68aa (CONDITIONAL_JUMP)
// 005e688a: MOV EAX,dword ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x5c] (READ)
// 005e6891: MOV dword ptr [ESP + 0x1fc],EAX
//   Label: LAB_005e6891
//   XREF to: Stack[-0x54] (WRITE)
// 005e6898: MOV EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x54] (READ)
// 005e689f: MOV dword ptr [EBX + 0x2418],EAX
// 005e68a5: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e68aa: FLD float ptr [ESP + 0x21c]
//   Label: LAB_005e68aa
//   XREF to: Stack[-0x34] (READ)
// 005e68b1: FCOMP float ptr [ESP + 0x200]
//   XREF to: Stack[-0x50] (READ)
// 005e68b8: FNSTSW AX
// 005e68ba: SAHF
// 005e68bb: JBE 0x005e68c6
//   XREF to: 005e68c6 (CONDITIONAL_JUMP)
// 005e68bd: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x50] (READ)
// 005e68c4: JMP 0x005e6891
//   XREF to: 005e6891 (UNCONDITIONAL_JUMP)
// 005e68c6: MOV EAX,dword ptr [ESP + 0x21c]
//   Label: LAB_005e68c6
//   XREF to: Stack[-0x34] (READ)
// 005e68cd: JMP 0x005e6891
//   XREF to: 005e6891 (UNCONDITIONAL_JUMP)
// 005e68cf: FLD float ptr [EBX + 0x2440]
//   Label: caseD_3
// 005e68d5: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e68d8: FDIV float ptr [0x00664e88]
//   XREF to: 00664e88 (READ)
// 005e68de: FADD float ptr [EBX + 0x243c]
// 005e68e4: FST float ptr [EBX + 0x243c]
// 005e68ea: FCOMP double ptr [0x00656bbb]
//   XREF to: 00656bbb (READ)
// 005e68f0: FNSTSW AX
// 005e68f2: SAHF
// 005e68f3: JA 0x005e6560
//   XREF to: 005e6560 (CONDITIONAL_JUMP)
// 005e68f9: LEA ESI,[EBX + 0x20]
// 005e68fc: PUSH 0x41400000
// 005e6901: PUSH ESI
// 005e6902: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005e6907: ADD ESP,0x8
// 005e690a: TEST EAX,EAX
// 005e690c: JNZ 0x005e6ab9
//   XREF to: 005e6ab9 (CONDITIONAL_JUMP)
// 005e6912: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005e6917: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e691e: FLD float ptr [EAX + 0x20]
// 005e6921: FSUB float ptr [ESI]
// 005e6923: FSTP float ptr [ESP + 0x180]
//   XREF to: Stack[-0xd0] (WRITE)
// 005e692a: FLD float ptr [EAX + 0x24]
// 005e692d: FSUB float ptr [ESI + 0x4]
// 005e6930: FSTP float ptr [ESP + 0x184]
//   XREF to: Stack[-0xcc] (WRITE)
// 005e6937: FLD float ptr [EAX + 0x28]
// 005e693a: LEA EAX,[ESP + 0x180]
//   XREF to: Stack[-0xd0] (DATA)
// 005e6941: PUSH EAX
// 005e6942: LEA EAX,[ESP + 0x178]
//   XREF to: Stack[-0xdc] (DATA)
// 005e6949: FSUB float ptr [ESI + 0x8]
// 005e694c: PUSH EAX
// 005e694d: FSTP float ptr [ESP + 0x190]
//   XREF to: Stack[-0xc8] (WRITE)
// 005e6954: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005e6959: ADD ESP,0x8
// 005e695c: MOV EAX,dword ptr [EAX + 0x4]
// 005e695f: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005e6966: FLD float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x114] (READ)
// 005e696d: FSUB float ptr [EBX + 0x34]
// 005e6970: SUB ESP,0x4
// 005e6973: FSTP float ptr [ESP]
//   XREF to: Stack[-0x254] (DATA)
// 005e6976: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e697b: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e6982: MOV EAX,dword ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e6989: MOV dword ptr [EBX + 0x2418],EAX
// 005e698f: ADD ESP,0x4
// 005e6992: MOV EAX,dword ptr [EBX + 0x2418]
// 005e6998: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005e699f: MOV EAX,dword ptr [EBX + 0x2438]
// 005e69a5: PUSH dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x3c] (READ)
// 005e69ac: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005e69b3: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e69b8: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e69bf: FLD float ptr [ESP + 0x23c]
//   XREF to: Stack[-0x18] (READ)
// 005e69c6: ADD ESP,0x4
// 005e69c9: FLD float ptr [ESP + 0x208]
//   XREF to: Stack[-0x48] (READ)
// 005e69d0: FXCH
// 005e69d2: FST float ptr [ESP + 0x214]
//   XREF to: Stack[-0x3c] (WRITE)
// 005e69d9: FXCH
// 005e69db: FCHS
// 005e69dd: FSTP float ptr [ESP + 0x228]
//   XREF to: Stack[-0x28] (WRITE)
// 005e69e4: FCOMP float ptr [ESP + 0x228]
//   XREF to: Stack[-0x28] (READ)
// 005e69eb: FNSTSW AX
// 005e69ed: SAHF
// 005e69ee: JNC 0x005e6a6b
//   XREF to: 005e6a6b (CONDITIONAL_JUMP)
// 005e69f4: MOV EAX,dword ptr [ESP + 0x228]
//   XREF to: Stack[-0x28] (READ)
// 005e69fb: MOV dword ptr [ESP + 0x204],EAX
//   Label: LAB_005e69fb
//   XREF to: Stack[-0x4c] (WRITE)
// 005e6a02: FLD float ptr [EBX + 0xce8f4]
// 005e6a08: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x4c] (READ)
// 005e6a0f: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6a12: MOV dword ptr [EBX + 0x2418],EAX
// 005e6a18: FST float ptr [EBX + 0xce8f4]
// 005e6a1e: FLDZ
// 005e6a20: FCOMPP
// 005e6a22: FNSTSW AX
// 005e6a24: SAHF
// 005e6a25: JC 0x005e6569
//   XREF to: 005e6569 (CONDITIONAL_JUMP)
// 005e6a2b: PUSH 0x2
// 005e6a2d: PUSH 0x0
// 005e6a2f: MOV dword ptr [EBX + 0xce8f4],0x0
// 005e6a39: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005e6a3e: ADD ESP,0x8
// 005e6a41: LEA EDX,[EBX + 0x158]
// 005e6a47: TEST EAX,EAX
// 005e6a49: JZ 0x005e6a96
//   XREF to: 005e6a96 (CONDITIONAL_JUMP)
// 005e6a4b: CMP EAX,0x1
// 005e6a4e: JZ 0x005e6aa8
//   XREF to: 005e6aa8 (CONDITIONAL_JUMP)
// 005e6a50: CMP EAX,0x2
// 005e6a53: JNZ 0x005e6569
//   XREF to: 005e6569 (CONDITIONAL_JUMP)
// 005e6a59: PUSH 0x1
// 005e6a5b: PUSH 0x6
// 005e6a5d: PUSH EDX
// 005e6a5e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e6a63: ADD ESP,0xc
// 005e6a66: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e6a6b: FLD float ptr [ESP + 0x214]
//   Label: LAB_005e6a6b
//   XREF to: Stack[-0x3c] (READ)
// 005e6a72: FCOMP float ptr [ESP + 0x208]
//   XREF to: Stack[-0x48] (READ)
// 005e6a79: FNSTSW AX
// 005e6a7b: SAHF
// 005e6a7c: JBE 0x005e6a8a
//   XREF to: 005e6a8a (CONDITIONAL_JUMP)
// 005e6a7e: MOV EAX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x48] (READ)
// 005e6a85: JMP 0x005e69fb
//   XREF to: 005e69fb (UNCONDITIONAL_JUMP)
// 005e6a8a: MOV EAX,dword ptr [ESP + 0x214]
//   Label: LAB_005e6a8a
//   XREF to: Stack[-0x3c] (READ)
// 005e6a91: JMP 0x005e69fb
//   XREF to: 005e69fb (UNCONDITIONAL_JUMP)
// 005e6a96: PUSH 0x1
//   Label: LAB_005e6a96
// 005e6a98: PUSH 0x4
// 005e6a9a: PUSH EDX
// 005e6a9b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e6aa0: ADD ESP,0xc
// 005e6aa3: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e6aa8: PUSH EAX
//   Label: LAB_005e6aa8
// 005e6aa9: PUSH 0x5
// 005e6aab: PUSH EDX
// 005e6aac: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e6ab1: ADD ESP,0xc
// 005e6ab4: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e6ab9: PUSH EBX
//   Label: LAB_005e6ab9
// 005e6aba: CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
//   XREF to: 005e7510 (UNCONDITIONAL_CALL)
// 005e6abf: JMP 0x005e6566
//   XREF to: 005e6566 (UNCONDITIONAL_JUMP)
// 005e6ac4: MOV dword ptr [EBX + 0xce8f4],0x40400000
//   Label: caseD_2
// 005e6ace: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e6ad3: LEA EAX,[EBX + 0xce91c]
//   Label: LAB_005e6ad3
// 005e6ad9: FLD float ptr [0x00664e80]
//   XREF to: 00664e80 (READ)
// 005e6adf: PUSH EAX
// 005e6ae0: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e6ae3: PUSH 0x497423f0
// 005e6ae8: MOV EAX,dword ptr [EBX + 0xce908]
// 005e6aee: FSTP float ptr [EBX + 0x2434]
// 005e6af4: MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce90c]
// 005e6afb: PUSH 0x3e4ccccd
// 005e6b00: PUSH EDX
// 005e6b01: PUSH EBX
// 005e6b02: CALL core_charactr.cpp_CCharacter_FUN_0042c5f0
//   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)
// 005e6b07: MOV EAX,dword ptr [EBX + 0xce91c]
// 005e6b0d: ADD ESP,0x14
// 005e6b10: CMP EAX,0x3
// 005e6b13: JA 0x005e68cf
//   XREF to: 005e68cf (CONDITIONAL_JUMP)
// 005e6b19: JMP dword ptr [EAX*0x4 + 0x5e5934]
//   Label: switchD
//   XREF to: 005e68cf (COMPUTED_JUMP)
//   XREF to: 005e6ac4 (COMPUTED_JUMP)
//   XREF to: 005e5934 (DATA)
// 005e6b20: PUSH 0x656b72
//   Label: caseD_2
//   XREF to: 00656b72 (DATA)
// 005e6b25: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005e6b2b: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 005e6b2c: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005e6b31: ADD ESP,0x8
// 005e6b34: TEST EAX,EAX
// 005e6b36: JZ 0x005e6569
//   XREF to: 005e6569 (CONDITIONAL_JUMP)
// 005e6b3c: PUSH 0x1
// 005e6b3e: PUSH 0x0
// 005e6b40: PUSH ESI
// 005e6b41: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005e6b46: ADD ESP,0xc
// 005e6b49: JMP 0x005e6569
//   XREF to: 005e6569 (UNCONDITIONAL_JUMP)
// 005e6b4e: FLD float ptr [EBX + 0x243c]
//   Label: LAB_005e6b4e
// 005e6b54: FDIV float ptr [EBX + 0x2440]
// 005e6b5a: PUSH 0x3f000000
// 005e6b5f: SUB ESP,0x4
// 005e6b62: ADD EBX,0x2448
// 005e6b68: FSTP float ptr [ESP]
//   XREF to: Stack[-0x258] (DATA)
// 005e6b6b: PUSH EBX
// 005e6b6c: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 005e6b6d: CALL core_game.cpp_CGame_FUN_004e0bf0
//   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)
// 005e6b72: ADD ESP,0x10
// 005e6b75: MOV ESP,EBP
// 005e6b77: POP EBP
// 005e6b78: POP EDI
// 005e6b79: POP ESI
// 005e6b7a: POP EBX
// 005e6b7b: RET
