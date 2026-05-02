// Name: core_sentinel.cpp_CSentinel_process_FUN_00568030
// Address: 00568030
// MANUAL RECONSTRUCTION
// Address Range: [[00568030, 00568b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar3;
  CCharacter *pCVar5;
  float fVar6;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar7;
  CPathMap *path_map;
  CPathMap *pCVar11;
  int iVar8;
  float fVar9;
  float fVar10;
  SDamageInfo *damage_info;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  CVector3f local_128;
  CVector3f local_110;
  CVector3f local_f8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_2c [2];
  uint uVar3;
  CVector3f *pCVar2;
  CCharacter *pCVar4;
  float fVar14;
  float fVar12;
  SDamageInfo *pSVar13;
  float max_distance;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c[0] = delta_time * (this_ptr->base).speed;
  pCVar3 = &(this_ptr->base).base.model;
LAB_00568089:
  if (0.0 < local_2c[0]) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar3->motion_controller,local_2c);
    switch(iVar8) {
    case 100:
      pCVar5 = (this_ptr->base).victim;
      if ((((pCVar5 != (CCharacter *)0x0) &&
           (EVar8 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5),
           EVar8 == DEATH_STATE_ALIVE)) &&
          (pCVar5 = (this_ptr->base).victim,
          pCVar9 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
          pCVar9 == (CDemonActor *)0x0)) &&
         (pCVar5 = (this_ptr->base).victim,
         iVar8 = (*(((pCVar5->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar5,(CDemonActor *)this_ptr,0), iVar8 != 0)) {
        local_110.z = 4.0f;
        local_110.x = 0.0;
        local_110.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,&local_110);
        pCVar5 = (this_ptr->base).victim;
        fVar9 = local_c8.x - (pCVar5->base).location.position.x;
        fVar10 = local_c8.z - (pCVar5->base).location.position.z;
        fVar9 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
        fVar10 = (float)0.80000000000000004;
        pCVar5 = (this_ptr->base).victim;
        if (ABS(local_c8.y - (pCVar5->base).location.position.y) <= (float)4) {
          if ((fVar10 < fVar9) ||
             (iVar8 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar5,(CDemonActor *)this_ptr,0), iVar8 != 0)) {
            if (fVar10 < fVar9) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,0,1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar3->motion_controller,0,1);
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar3->motion_controller,0,1)
      ;
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(1.0,5.0);
        pCVar5 = (this_ptr->base).victim;
        (*(((pCVar5->base).vtable._uc)->_uc).processDamage)(pCVar5,&local_164);
      }
      break;
    case 0x67:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"wing?.wav");
      break;
    case 0x68:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar8);
    }
    goto LAB_00568089;
  }
  fVar9 = (this_ptr->base).speed;
  fVar10 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10 * fVar9;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar3->motion_controller);
  iVar8 = pSVar6->state_index;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    if ((iVar8 == 10) || (iVar8 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
    }
    else {
      (this_ptr->base).base.collision_cylinder_radius = 2.0;
    }
    switch(iVar8) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
      }
      else {
        fVar9 = (pCVar5->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        fVar10 = (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y
        ;
        fVar6 = (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        if (SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar10 * fVar10) <= 12.0f) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      break;
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar9 = 4.0f;
      pCVar3 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        max_distance = 0.17453292;
        fVar10 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_98.x = 0.0;
        local_98.z = fVar9;
        pCVar7 = &local_98;
        local_98.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar7,
                           fVar10,max_distance);
        if (-1 < iVar8) {
          pCVar5 = (this_ptr->base).victim;
          fVar10 = (this_ptr->base).base.base.location.position.x -
                   (pCVar5->base).location.position.x;
          fVar6 = (this_ptr->base).base.base.location.position.z -
                  (pCVar5->base).location.position.z;
          fVar10 = SQRT(fVar6 * fVar6 + fVar10 * fVar10);
          if (12.0f < fVar10) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar3->motion_controller,3,1);
          }
          if ((fVar10 <= fVar9) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar5 = (this_ptr->base).victim;
            local_bc.x = (pCVar5->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_bc.y = (pCVar5->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_bc.z = (pCVar5->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_74,&local_bc);
            fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (local_74.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fVar9) < (float)0.52359877558333301) {
              iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
              pCVar3 = &(this_ptr->base).base.model;
              if (iVar8 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar3->motion_controller,10,1);
                this_ptr->hover_timer = 5.0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar3->motion_controller,4,1);
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
          if ((this_ptr->base).guard_distance < fVar10) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
        break;
      }
      iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar8 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
        break;
      }
LAB_0056878f:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,2,1);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
        break;
      }
      fVar14 = 0.17453292;
      fVar9 = 0.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_80.x = 0.0;
      local_80.z = 4.0f;
      pCVar7 = &local_80;
      local_80.y = 0.0;
      pCVar5 = (this_ptr->base).victim;
      pCVar11 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,pCVar11
                 ,pCVar7,fVar9,fVar14);
      pCVar5 = (this_ptr->base).victim;
      fVar9 = (this_ptr->base).base.base.location.position.x - (pCVar5->base).location.position.x;
      fVar10 = (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y;
      fVar6 = (this_ptr->base).base.base.location.position.z - (pCVar5->base).location.position.z;
      if (12.0f <= SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar10 * fVar10)) {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar8 == 0) break;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0xe,1);
          break;
        }
      }
      else {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 == 0) {
          iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
          if (iVar8 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar3->motion_controller,4,1);
            break;
          }
          goto LAB_0056878f;
        }
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar3->motion_controller,0xf,1);
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      pSVar13 = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar12 = 1.0;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_SentinelIndices[2]);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_a4,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar7,fVar12,pSVar13);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(15.0,30.0);
      damage_info = &local_1a0;
      fVar9 = 1.0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_SentinelIndices[0]);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_8c,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar7,fVar9,damage_info);
      break;
    case 9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (&(this_ptr->base).base.model,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_128,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_128,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
      fVar9 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar9;
      if (fVar9 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        local_f8.x = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        local_f8.y = (pCVar4->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        local_f8.z = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d4,&local_f8);
        (this_ptr->base).base.base.orient.vec.y = local_d4.y;
      }
    }
    goto switchD_00568487_caseD_d;
  }
  uVar3 = (this_ptr->base).base.is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_005680fd:
      iVar8 = 2;
    }
    else {
LAB_0056845d:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar3 < 3) goto LAB_005680fd;
    if (uVar3 != 3) goto LAB_0056845d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar3->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00568487_caseD_d:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar7 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_68.x = (this_ptr->base).base.velocity.x * delta_time + pCVar7->x + pCVar2->x;
    local_68.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_68.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar7->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
