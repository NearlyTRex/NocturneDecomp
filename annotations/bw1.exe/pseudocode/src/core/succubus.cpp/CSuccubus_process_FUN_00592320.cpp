// Name: core_succubus.cpp_CSuccubus_process_FUN_00592320
// Address: 00592320
// Address Range: [[00592320, 00592a97]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00592320(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00592a2a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00592320(CSuccubus *this_ptr,float delta_time)

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
  SMotion *pSVar10;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar11;
  CPathMap *path_map;
  uint uVar12;
  UOrientationVector *pUVar13;
  char *pcVar14;
  CDeformableModelInstance *pCVar15;
  char (*pacVar16) [40];
  byte bVar17;
  float afStackY_1094 [1012];
  CVector3f *pCVar18;
  float fVar19;
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
  SMotion *pSStack_20;
  CMotionController *pCStack_1c;
  CHotDemon *pCStack_18;
  float fStack_14;
  
  bVar17 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
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
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_48 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar9);
  }
  (this_ptr->hotdemon_model).accumulated_root_motion.z = 0.0;
  (this_ptr->hotdemon_model).accumulated_root_motion.y =
       (this_ptr->hotdemon_model).accumulated_root_motion.z;
  (this_ptr->hotdemon_model).accumulated_root_motion.x =
       (this_ptr->hotdemon_model).accumulated_root_motion.y;
  fStack_28 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_28) {
    core_motion_cpp_CMotionController_advance_FUN_00524270
              (&(this_ptr->hotdemon_model).base,afStack_48 + 8);
  }
  fVar19 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar19);
  pCStack_1c = &(this_ptr->base).base.model.base;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
  uVar12 = pSVar10->state_index;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    if (uVar12 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar9 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
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
        afStack_48[(uint)bVar17 * -2 + 3] = *(float *)((int)&stack0xffffff64 + (uint)bVar17 * -8);
        afStack_48[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             *(float *)((int)&stack0xffffff68 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
        if (SQRT(fStack_38 * fStack_38 +
                 afStack_48[2] * afStack_48[2] + afStack_48[3] * afStack_48[3]) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
    }
    else if ((uVar12 < 2) || (uVar12 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        pCVar15 = &(this_ptr->base).base.model;
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar15->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar15->base,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fVar19 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_58.x = 0.0;
        CStack_58.z = 0x3FC00000;
        pCVar18 = &CStack_58;
        CStack_58.y = 0.0;
        pCVar6 = (this_ptr->base).victim;
        path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar18,
                           fVar19,max_distance);
        if (-1 < iVar9) {
          pCVar6 = (this_ptr->base).victim;
          fStack_4c = (pCVar6->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_48[0] =
               (pCVar6->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_48[1] =
               (pCVar6->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar17 * -8) = afStack_48[(uint)bVar17 * -2];
          *(float *)((int)&stack0xffffff74 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
               afStack_48[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_00606274) && (this_ptr->morph_started == 0)) {
            this_ptr->morph_started = 1;
            this_ptr->morph_timer = 0.0;
            sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
            pCVar7 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->ambient_sfx_cooldown = 9999.9;
            (*pCVar7->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0059247c;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00592451:
      iVar9 = 1;
    }
    else {
LAB_005927f1:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00592451;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_005927f1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0059247c:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_88 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_84 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_80 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar17 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar17 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
    pCVar18 = &(this_ptr->base).base.position_delta;
    fStack_34 = fStack_ac + pCVar18->x;
    fStack_30 = fStack_a8 + (this_ptr->base).base.position_delta.y;
    fStack_2c = fStack_a4 + (this_ptr->base).base.position_delta.z;
    fStack_70 = fStack_34;
    *(float *)((int)&stack0xffffff94 + (uint)bVar17 * -8) = afStack_48[(uint)bVar17 * -2 + 6];
    *(float *)((int)&stack0xffffff98 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
         afStack_48[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_7c = fStack_70 + pCVar2->x;
    fStack_78 = fStack_6c + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_74 = fStack_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_64.x = fStack_7c;
    *(uint *)((int)&CStack_64 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar17 * -8);
    *(uint *)((int)&CStack_64 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar17 * -8 + (uint)bVar17 * -8);
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar18->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar19 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar19;
    pCVar2->x = fVar19;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_64);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar15 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar15);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pSStack_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar15->base);
  fStack_24 = (this_ptr->base).base.model.base.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&(this_ptr->hotdemon_model).base,pSStack_20->motion_name,fStack_24);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar19 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar19,
     _DAT_00606278 < fVar19)) {
    this_ptr_00 = (CHotDemon *)operator_new(0xc29c);
    pCVar11 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar11 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(this_ptr_00);
    }
    pCVar8 = 0x01D2C900;
    pCStack_18 = pCVar11;
    if (pCVar11 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(pCVar8,(CDemonActor *)pCVar11);
      (pCVar11->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar11->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar11->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar13 = &(pCVar11->base).base.base.orient;
      (pCVar11->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar13 != pUVar1) {
        (pUVar13->vec).x = (pUVar1->vec).x;
        (pCVar11->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar11->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar14 = "hdwing.cth";
      pacVar16 = (pCStack_18->base).base.cloth_list.filenames;
      (pCStack_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar14;
        (*pacVar16)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        (*pacVar16)[1] = cVar3;
        pacVar16 = (char (*) [40])(*pacVar16 + 2);
      } while (cVar3 != '\0');
      (*((pCStack_18->base).base.base.vtable._ub)->setup)((CDemonActor *)pCStack_18);
      pCVar15 = &(pCStack_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
                (&pCVar15->base,pSStack_20->motion_name,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar15);
      pCVar11 = pCStack_18;
      (pCStack_18->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      pCVar8 = 0x01D2C900;
      (pCStack_18->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      (pCStack_18->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(pCVar8,(CDemonActor *)pCStack_18);
      pCVar5 = (this_ptr->hotdemon_cloth_list).cloths[0];
      (this_ptr->hotdemon_cloth_list).cloths[0] = (pCVar11->base).base.cloth_list.cloths[0];
      (pCVar11->base).base.cloth_list.cloths[0] = pCVar5;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_00441fa0
              (&this_ptr->hotdemon_cloth_list,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->hotdemon_model);
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"succubusShutUp");
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
    if ((iVar9 == 0) &&
       (fVar19 = this_ptr->ambient_sfx_cooldown - delta_time,
       this_ptr->ambient_sfx_cooldown = fVar19, fVar19 < 0.0)) {
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
      pCVar7 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = fStack_14;
      uVar12 = (*pCVar7->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  return;
}
