// Name: core_succubus.cpp_CSuccubus_process_FUN_00540f50
// Address: 00540f50
// Address Range: [[00540f50, 00541636]]
// Convention: unknown
// Signature: void core_succubus_cpp_CSuccubus_process_FUN_00540f50(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005415cb) */
/* WARNING: Type propagation algorithm not settling */

void core_succubus_cpp_CSuccubus_process_FUN_00540f50(CEnemy *param_1,float param_2)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  CCloth *pCVar4;
  CCharacter *pCVar5;
  CDemonActor_vtable *pCVar6;
  float fVar7;
  CEnemy *pCVar8;
  CDemonMission *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  CHotDemon *this_ptr;
  CHotDemon *pCVar12;
  CPathMap *path_map;
  uint uVar13;
  UOrientationVector *pUVar14;
  char *pcVar15;
  CDeformableModelInstance *pCVar16;
  char (*pacVar17) [40];
  CVector3f *pCVar18;
  float fVar19;
  float fVar20;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  SMotion *local_20;
  float local_1c;
  CHotDemon *local_18;
  float local_14;
  
  iVar10 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar10 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_24 = param_2 * param_1->speed;
  while (0.0 < local_24) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                       (&(param_1->base).model.motion_controller,&local_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar10);
  }
  param_1[1].base.model.bone_transform.bone_world_matrices[0x62].m[2].z = 0.0;
  param_1[1].base.model.bone_transform.bone_world_matrices[0x62].m[2].y =
       param_1[1].base.model.bone_transform.bone_world_matrices[0x62].m[2].z;
  param_1[1].base.model.bone_transform.bone_world_matrices[0x62].m[2].x =
       param_1[1].base.model.bone_transform.bone_world_matrices[0x62].m[2].y;
  local_24 = param_2 * param_1->speed;
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_004e11c0
              ((CMotionController *)(param_1 + 1),&local_24);
  }
  fVar19 = param_1->speed;
  fVar20 = (float)3.1415926535000001;
  pCVar16 = &(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar20 * fVar19;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (&pCVar16->motion_controller);
  uVar13 = pSVar11->state_index;
  iVar10 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar10 == 0) {
    if (uVar13 == 0) {
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar5 = param_1->victim;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar10 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,1,1);
        }
      }
      else {
        local_38 = (param_1->base).base.location.position.x - (pCVar5->base).location.position.x;
        local_34 = (param_1->base).base.location.position.y - (pCVar5->base).location.position.y;
        local_30 = (param_1->base).base.location.position.z - (pCVar5->base).location.position.z;
        if (SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) <
            param_1->guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,1,1);
        }
      }
    }
    else if ((uVar13 < 2) || (uVar13 == 2)) {
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      if (param_1->victim == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        pCVar16 = &(param_1->base).model;
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,1,1);
        }
      }
      else {
        fVar20 = 0.17453292;
        fVar19 = 0.5;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_68.x = 0.0;
        local_68.z = 1.5f;
        pCVar18 = &local_68;
        local_68.y = 0.0;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                           (&param_1->base,&(param_1->victim->base).location.position,path_map,
                            pCVar18,fVar19,fVar20);
        if (((-1 < iVar10) &&
            (pCVar5 = param_1->victim,
            fVar19 = (pCVar5->base).location.position.x - (param_1->base).base.location.position.x,
            fVar20 = (pCVar5->base).location.position.y - (param_1->base).base.location.position.y,
            fVar7 = (pCVar5->base).location.position.z - (param_1->base).base.location.position.z,
            SQRT(fVar7 * fVar7 + fVar19 * fVar19 + fVar20 * fVar20) < 15.0f)) &&
           (*(int *)(param_1[1].base.descriptive_name + 0x38) == 0)) {
          uVar13 = *(uint *)(param_1[1].base.descriptive_name + 0x30);
          pCVar8 = param_1 + 1;
          (pCVar8->base).descriptive_name[0x38] = '\x01';
          (pCVar8->base).descriptive_name[0x39] = '\0';
          (pCVar8->base).descriptive_name[0x3a] = '\0';
          (pCVar8->base).descriptive_name[0x3b] = '\0';
          pCVar8 = param_1 + 1;
          (pCVar8->base).descriptive_name[0x3c] = '\0';
          (pCVar8->base).descriptive_name[0x3d] = '\0';
          (pCVar8->base).descriptive_name[0x3e] = '\0';
          (pCVar8->base).descriptive_name[0x3f] = '\0';
          sound_sndmain_cpp_killSfx_FUN_00527230(uVar13);
          pCVar6 = (param_1->base).base.vtable._ub;
          pCVar8 = param_1 + 1;
          (pCVar8->base).descriptive_name[0x34] = -0x66;
          (pCVar8->base).descriptive_name[0x35] = '?';
          (pCVar8->base).descriptive_name[0x36] = '\x1c';
          (pCVar8->base).descriptive_name[0x37] = 'F';
          (*pCVar6->playAmbientSound)((CDemonActor *)param_1,"succubus-morph.wav");
        }
      }
    }
    goto LAB_00541090;
  }
  uVar13 = (param_1->base).is_walking;
  if (uVar13 < 2) {
    if (uVar13 == 1) {
LAB_00541065:
      iVar10 = 1;
    }
    else {
LAB_005413d0:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar10,1);
  }
  else {
    if (uVar13 < 3) goto LAB_00541065;
    if (uVar13 != 3) goto LAB_005413d0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
LAB_00541090:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar10 != 0) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_5c = (param_1->base).velocity.x * param_2;
    local_58 = (param_1->base).velocity.y * param_2;
    pCVar18 = &(param_1->base).position_delta;
    local_54 = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_50 = local_5c + pCVar18->x;
    local_4c = local_58 + (param_1->base).position_delta.y;
    local_48 = local_54 + (param_1->base).position_delta.z;
    local_44.x = local_50 + pCVar2->x;
    local_44.y = local_4c + (param_1->base).model.accumulated_root_motion.y;
    local_44.z = local_48 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar18->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  pCVar16 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar16);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar16->motion_controller);
  local_1c = (param_1->base).model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            ((CMotionController *)(param_1 + 1),local_20->motion_name,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)(param_1 + 1));
  if ((*(int *)(param_1[1].base.descriptive_name + 0x38) != 0) &&
     (fVar19 = *(float *)(param_1[1].base.descriptive_name + 0x3c) + param_2,
     *(float *)(param_1[1].base.descriptive_name + 0x3c) = fVar19, 4.0f < fVar19)) {
    this_ptr = (CHotDemon *)FUN_0056497c(0xbd58);
    pCVar12 = (CHotDemon *)0x0;
    if (this_ptr != (CHotDemon *)0x0) {
      pCVar12 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(this_ptr);
    }
    pCVar9 = 0x01CC9450;
    local_18 = pCVar12;
    if (pCVar12 != (CHotDemon *)0x0) {
      (param_1->base).base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(pCVar9,(CDemonActor *)pCVar12);
      (pCVar12->base).base.base.location.position.x = (param_1->base).base.location.position.x;
      (pCVar12->base).base.base.location.position.y = (param_1->base).base.location.position.y;
      (pCVar12->base).base.base.location.position.z = (param_1->base).base.location.position.z;
      pUVar14 = &(pCVar12->base).base.base.orient;
      (pCVar12->base).base.base.location.area_id = (param_1->base).base.location.area_id;
      pUVar1 = &(param_1->base).base.orient;
      if (pUVar14 != pUVar1) {
        (pUVar14->vec).x = (pUVar1->vec).x;
        (pCVar12->base).base.base.orient.vec.y = (param_1->base).base.orient.vec.y;
        (pCVar12->base).base.base.orient.vec.z = (param_1->base).base.orient.vec.z;
      }
      pcVar15 = "hdwing.cth";
      pacVar17 = (local_18->base).base.cloth_list.filenames;
      (local_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar15;
        (*pacVar17)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        (*pacVar17)[1] = cVar3;
        pacVar17 = (char (*) [40])(*pacVar17 + 2);
      } while (cVar3 != '\0');
      (*((local_18->base).base.base.vtable._ub)->setup)((CDemonActor *)local_18);
      pCVar16 = &(local_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
                (&pCVar16->motion_controller,local_20->motion_name,local_1c);
      pCVar12 = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar16);
      (pCVar12->base).base.base.scale.x = (param_1->base).base.scale.x;
      (pCVar12->base).base.base.scale.y = (param_1->base).base.scale.y;
      pCVar9 = 0x01CC9450;
      (pCVar12->base).base.base.scale.z = (param_1->base).base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(pCVar9,(CDemonActor *)pCVar12);
      pCVar4 = *(CCloth **)(param_1[1].base.descriptive_name + 8);
      *(CCloth **)(param_1[1].base.descriptive_name + 8) =
           (local_18->base).base.cloth_list.cloths[0];
      (local_18->base).base.cloth_list.cloths[0] = pCVar4;
    }
  }
  if ((param_1->base).was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_00438550
              ((CClothList *)(param_1[1].base.model.part_data.visibility_flags + 9),
               &(param_1->base).base.location.position,&(param_1->base).base.orient.vec,param_2,
               (param_1->base).closest_distance_threshold,(CDeformableModelInstance *)(param_1 + 1))
    ;
  }
  iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                     (0x01C03A10,"succubusShutUp");
  if (iVar10 == 0) {
    iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                       (*(uint *)(param_1[1].base.descriptive_name + 0x30));
    if ((iVar10 == 0) &&
       (param_2 = *(float *)(param_1[1].base.descriptive_name + 0x34) - param_2,
       *(float *)(param_1[1].base.descriptive_name + 0x34) = param_2, param_2 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
      pCVar6 = (param_1->base).base.vtable._ub;
      *(float *)(param_1[1].base.descriptive_name + 0x34) = local_14;
      uVar13 = (*pCVar6->playSound)((CDemonActor *)param_1,"succubus-horny-?.wav");
      *(uint *)(param_1[1].base.descriptive_name + 0x30) = uVar13;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.descriptive_name + 0x30));
  return;
}
