// Name: core_succubus.cpp_CSuccubus_process_FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056fe48]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_0056f6d0(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056fddb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_0056f6d0(CSuccubus *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  EWalkState EVar4;
  CCloth *pCVar5;
  CCharacter *pCVar6;
  CDemonActor_vtable *pCVar7;
  CDemonMission *pCVar8;
  int iVar9;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar10;
  CPathMap *path_map;
  uint uVar11;
  UOrientationVector *pUVar12;
  char *pcVar13;
  CDeformableModelInstance *pCVar14;
  char (*pacVar15) [40];
  byte bVar16;
  float afStackY_1094 [1012];
  CVector3f *pCVar17;
  float fVar18;
  float max_distance;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char *pcStack_20;
  CMotionController *pCStack_1c;
  CHotDemon *pCStack_18;
  float fStack_14;
  
  bVar16 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_28 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_28) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,afStack_48 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar9);
  }
  (this_ptr->hotdemon_model).accumulated_root_motion.z = 0.0;
  (this_ptr->hotdemon_model).accumulated_root_motion.y =
       (this_ptr->hotdemon_model).accumulated_root_motion.z;
  (this_ptr->hotdemon_model).accumulated_root_motion.x =
       (this_ptr->hotdemon_model).accumulated_root_motion.y;
  fStack_28 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_28) {
    core_motion_cpp_CMotionController_advance_FUN_005030c0
              (&(this_ptr->hotdemon_model).base,afStack_48 + 8);
  }
  fVar18 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar18);
  pCStack_1c = &(this_ptr->base).base.model.base;
  iVar9 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  uVar11 = *(uint *)(iVar9 + 0x24);
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    if (uVar11 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar9 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      else {
        fStack_a0 = (this_ptr->base).base.base.location.position.x -
                    (pCVar6->base).location.position.x;
        fStack_9c = (this_ptr->base).base.base.location.position.y -
                    (pCVar6->base).location.position.y;
        fStack_98 = (this_ptr->base).base.base.location.position.z -
                    (pCVar6->base).location.position.z;
        afStack_48[2] = fStack_a0;
        afStack_48[(uint)bVar16 * -2 + 3] = *(float *)((int)&stack0xffffff64 + (uint)bVar16 * -8);
        afStack_48[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             *(float *)((int)&stack0xffffff68 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
        if (SQRT(fStack_38 * fStack_38 +
                 afStack_48[2] * afStack_48[2] + afStack_48[3] * afStack_48[3]) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
    }
    else if ((uVar11 < 2) || (uVar11 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        pCVar14 = &(this_ptr->base).base.model;
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fVar18 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_58.x = 0.0;
        CStack_58.z = 0x3FC00000;
        pCVar17 = &CStack_58;
        CStack_58.y = 0.0;
        pCVar6 = (this_ptr->base).victim;
        path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar17,
                           fVar18,max_distance);
        if (-1 < iVar9) {
          pCVar6 = (this_ptr->base).victim;
          fStack_4c = (pCVar6->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_48[0] =
               (pCVar6->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_48[1] =
               (pCVar6->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar16 * -8) = afStack_48[(uint)bVar16 * -2];
          *(float *)((int)&stack0xffffff74 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
               afStack_48[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_005fc3d4) && (this_ptr->morph_started == 0)) {
            this_ptr->morph_started = 1;
            this_ptr->morph_timer = 0.0;
            sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
            pCVar7 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->ambient_sfx_cooldown = 9999.9;
            (*pCVar7->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0056f82c;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0056f801:
      iVar9 = 1;
    }
    else {
LAB_0056fba2:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0056f801;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0056fba2;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0056f82c:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_88 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_84 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_80 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar16 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar16 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    pCVar17 = &(this_ptr->base).base.position_delta;
    fStack_34 = fStack_ac + pCVar17->x;
    fStack_30 = fStack_a8 + (this_ptr->base).base.position_delta.y;
    fStack_2c = fStack_a4 + (this_ptr->base).base.position_delta.z;
    fStack_70 = fStack_34;
    *(float *)((int)&stack0xffffff94 + (uint)bVar16 * -8) = afStack_48[(uint)bVar16 * -2 + 6];
    *(float *)((int)&stack0xffffff98 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
         afStack_48[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_7c = fStack_70 + pCVar2->x;
    fStack_78 = fStack_6c + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_74 = fStack_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_64.x = fStack_7c;
    *(uint *)((int)&CStack_64 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar16 * -8);
    *(uint *)((int)&CStack_64 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar17->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar18 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar18;
    pCVar2->x = fVar18;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_64);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar14 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pcStack_20 = (char *)core_motion_cpp_FUN_005035c0(pCVar14);
  fStack_24 = (this_ptr->base).base.model.base.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            (&(this_ptr->hotdemon_model).base,pcStack_20,fStack_24);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar18 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar18,
     _DAT_005fc3d8 < fVar18)) {
    this_ptr_00 = (CHotDemon *)operator_new(0x10b2c);
    pCVar10 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar10 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(this_ptr_00);
    }
    pCVar8 = 0x01D182F0;
    pCStack_18 = pCVar10;
    if (pCVar10 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(pCVar8,(CDemonActor *)pCVar10);
      (pCVar10->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar10->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar10->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar12 = &(pCVar10->base).base.base.orient;
      (pCVar10->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar12 != pUVar1) {
        (pUVar12->vec).x = (pUVar1->vec).x;
        (pCVar10->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar10->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar13 = "hdwing.cth";
      pacVar15 = (pCStack_18->base).base.cloth_list.filenames;
      (pCStack_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar13;
        (*pacVar15)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        (*pacVar15)[1] = cVar3;
        pacVar15 = (char (*) [40])(*pacVar15 + 2);
      } while (cVar3 != '\0');
      (*((pCStack_18->base).base.base.vtable._ub)->setup)((CDemonActor *)pCStack_18);
      pCVar14 = &(pCStack_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
                (&pCVar14->base,pcStack_20,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar14);
      pCVar10 = pCStack_18;
      (pCStack_18->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      pCVar8 = 0x01D182F0;
      (pCStack_18->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      (pCStack_18->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(pCVar8,(CDemonActor *)pCStack_18);
      pCVar5 = (this_ptr->hotdemon_cloth_list).cloths[0];
      (this_ptr->hotdemon_cloth_list).cloths[0] = (pCVar10->base).base.cloth_list.cloths[0];
      (pCVar10->base).base.cloth_list.cloths[0] = pCVar5;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_005b1780
              (&this_ptr->hotdemon_cloth_list,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->hotdemon_model);
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"succubusShutUp");
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
    if ((iVar9 == 0) &&
       (fVar18 = this_ptr->ambient_sfx_cooldown - delta_time,
       this_ptr->ambient_sfx_cooldown = fVar18, fVar18 < 0.0)) {
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
      pCVar7 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = fStack_14;
      uVar11 = (*pCVar7->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar11;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  return;
}
