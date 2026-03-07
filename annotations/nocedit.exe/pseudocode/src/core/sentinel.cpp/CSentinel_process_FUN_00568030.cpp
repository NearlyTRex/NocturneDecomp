// Name: core_sentinel.cpp_CSentinel_process_FUN_00568030
// Address: 00568030
// Address Range: [[00568030, 00568b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  uint uVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CDemonActor *pCVar8;
  CVector3f *pCVar9;
  CPathMap *pCVar10;
  float fVar11;
  SDamageInfo *pSVar12;
  float max_distance;
  float fVar13;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  uint local_dc;
  float local_d8;
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
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_2c [2];
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
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
  pCVar1 = &(this_ptr->base).base.model;
LAB_00568089:
  if (0.0 < local_2c[0]) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar1->motion_controller,local_2c);
    switch(iVar5) {
    case 100:
      pCVar4 = (this_ptr->base).victim;
      if ((((pCVar4 != (CCharacter *)0x0) &&
           (iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), iVar5 == 0)) &&
          (pCVar4 = (this_ptr->base).victim,
          pCVar8 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
          pCVar8 == (CDemonActor *)0x0)) &&
         (pCVar4 = (this_ptr->base).victim,
         iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar4,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
        local_110.z = 4.0f;
        local_110.x = 0.0;
        local_110.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,&local_110);
        pCVar4 = (this_ptr->base).victim;
        fVar11 = local_c8.x - (pCVar4->base).location.position.x;
        fVar13 = local_c8.z - (pCVar4->base).location.position.z;
        fVar11 = SQRT(fVar13 * fVar13 + fVar11 * fVar11);
        fVar13 = (float)0.80000000000000004;
        pCVar4 = (this_ptr->base).victim;
        if (ABS(local_c8.y - (pCVar4->base).location.position.y) <= (float)4) {
          if ((fVar13 < fVar11) ||
             (iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar4,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
            if (fVar13 < fVar11) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
        pCVar4 = (this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar4->base).vtable._uc)->_uc).processDamage)(pCVar4,&local_164);
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
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar5);
    }
    goto LAB_00568089;
  }
  fVar11 = (this_ptr->base).speed;
  fVar13 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar13 * fVar11;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar5 = pSVar6->state_index;
  local_1c = iVar5;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    if ((iVar5 == 10) || (iVar5 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
    }
    else {
      (this_ptr->base).base.collision_cylinder_radius = 2.0;
    }
    switch(local_1c) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
      }
      else {
        local_5c = (pCVar4->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
        local_58 = (pCVar4->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
        local_54 = (pCVar4->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= 12.0f)
        {
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
      fVar11 = 4.0f;
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        max_distance = 0.17453292;
        local_20 = 4.0f;
        fVar13 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_98.x = 0.0;
        local_98.z = fVar11;
        pCVar9 = &local_98;
        local_98.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        pCVar10 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar10,pCVar9,
                           fVar13,max_distance);
        if (-1 < iVar5) {
          pCVar4 = (this_ptr->base).victim;
          local_e0 = (this_ptr->base).base.base.location.position.x -
                     (pCVar4->base).location.position.x;
          local_d8 = (this_ptr->base).base.base.location.position.z -
                     (pCVar4->base).location.position.z;
          local_24 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
          local_dc = 0;
          local_18 = local_24;
          if (12.0f < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,3,1);
          }
          if ((local_24 <= local_20) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            local_bc.x = (pCVar4->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_bc.y = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_bc.z = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_74,&local_bc);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_74.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
              pCVar1 = &(this_ptr->base).base.model;
              if (iVar5 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,10,1);
                this_ptr->hover_timer = 5.0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,4,1);
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
          if ((this_ptr->base).guard_distance < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
        break;
      }
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        break;
      }
LAB_0056878f:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,2,1);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        break;
      }
      fVar13 = 0.17453292;
      fVar11 = 0.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_80.x = 0.0;
      local_80.z = 4.0f;
      pCVar9 = &local_80;
      local_80.y = 0.0;
      pCVar4 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,pCVar10
                 ,pCVar9,fVar11,fVar13);
      pCVar4 = (this_ptr->base).victim;
      local_11c = (this_ptr->base).base.base.location.position.x -
                  (pCVar4->base).location.position.x;
      local_118 = (this_ptr->base).base.base.location.position.y -
                  (pCVar4->base).location.position.y;
      local_114 = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).location.position.z;
      if (12.0f <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar5 == 0) break;
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar5 == 0) {
          iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,4,1);
            break;
          }
          goto LAB_0056878f;
        }
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,0xf,1);
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pSVar12 = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar11 = 1.0;
      local_14 = local_1a0.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_03114214);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_a4,pCVar9);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar11,pSVar12);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
      pSVar12 = &local_1a0;
      fVar11 = 1.0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      local_14 = local_1a0.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_0311420c);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_8c,pCVar9);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar11,pSVar12);
      break;
    case 9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (&(this_ptr->base).base.model,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_128,pCVar9);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_128,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
      fVar11 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar11;
      if (fVar11 < 0.0) {
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
      iVar5 = 2;
    }
    else {
LAB_0056845d:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) goto LAB_005680fd;
    if (uVar3 != 3) goto LAB_0056845d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
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
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.velocity.x * delta_time;
    local_100 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar9 = &(this_ptr->base).base.position_delta;
    local_fc = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_ec = local_104 + pCVar9->x;
    local_e8 = local_100 + (this_ptr->base).base.position_delta.y;
    local_e4 = local_fc + (this_ptr->base).base.position_delta.z;
    local_68.x = local_ec + pCVar2->x;
    local_68.y = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_68.z = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
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
