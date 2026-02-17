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
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDemonActor *pCVar7;
  uint uVar8;
  CVector3f *pCVar9;
  CPathMap *pCVar10;
  float fVar11;
  float max_distance;
  float fVar12;
  float in_stack_fffffe60;
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
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_00568089:
  if (0.0 < local_2c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    switch(uVar8) {
    case 100:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), iVar4 == 0)) &&
          (pCVar3 = (CCharacter *)(this_ptr->base).victim,
          pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
          pCVar7 == (CDemonActor *)0x0)) &&
         (pCVar3 = (CCharacter *)(this_ptr->base).victim,
         iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)) {
        local_110.z = 4.0f;
        local_110.x = 0.0;
        local_110.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,&local_110);
        pCVar7 = (this_ptr->base).victim;
        fVar11 = local_c8.x - (pCVar7->location).position.x;
        fVar12 = local_c8.z - (pCVar7->location).position.z;
        fVar11 = SQRT(fVar12 * fVar12 + fVar11 * fVar11);
        fVar12 = (float)0.80000000000000004;
        pCVar3 = (CCharacter *)(this_ptr->base).victim;
        if (ABS(local_c8.y - (pCVar3->base).location.position.y) <= (float)4) {
          if ((fVar12 < fVar11) ||
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)) {
            if (fVar12 < fVar11) {
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
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
        pCVar3 = (CCharacter *)(this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_164);
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
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    goto LAB_00568089;
  }
  fVar11 = (this_ptr->base).speed;
  fVar12 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar12 * fVar11;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar4 = pSVar5->state_index;
  local_1c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
    }
    else {
      (this_ptr->base).base.collision_cylinder_radius = 2.0;
    }
    switch(local_1c) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar7 = (this_ptr->base).victim;
      if (pCVar7 == (CDemonActor *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,2,1);
        }
      }
      else {
        local_5c = (pCVar7->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_58 = (pCVar7->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_54 = (pCVar7->location).position.z - (this_ptr->base).base.base.location.position.z;
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
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      break;
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 4.0f;
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        max_distance = 0.17453292;
        local_20 = 4.0f;
        fVar12 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_98.x = 0.0;
        local_98.z = fVar11;
        pCVar9 = &local_98;
        local_98.y = 0.0;
        pCVar7 = (this_ptr->base).victim;
        pCVar10 = (*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           pCVar10,pCVar9,fVar12,max_distance);
        if (-1 < iVar4) {
          pCVar7 = (this_ptr->base).victim;
          local_e0 = (this_ptr->base).base.base.location.position.x - (pCVar7->location).position.x;
          local_d8 = (this_ptr->base).base.base.location.position.z - (pCVar7->location).position.z;
          local_24 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
          local_dc = 0;
          local_18 = local_24;
          if (12.0f < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,3,1);
          }
          if ((local_24 <= local_20) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar7 = (this_ptr->base).victim;
            local_bc.x = (pCVar7->location).position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_bc.y = (pCVar7->location).position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_bc.z = (pCVar7->location).position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_74,&local_bc);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_74.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
              pCVar1 = &(this_ptr->base).base.model;
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,10,1);
                this_ptr->unk4 = 0x40a00000;
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
      iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar4 == 0) {
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
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        break;
      }
      fVar12 = 0.17453292;
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
      pCVar7 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,pCVar10,
                 pCVar9,fVar11,fVar12);
      pCVar7 = (this_ptr->base).victim;
      local_11c = (this_ptr->base).base.base.location.position.x - (pCVar7->location).position.x;
      local_118 = (this_ptr->base).base.base.location.position.y - (pCVar7->location).position.y;
      local_114 = (this_ptr->base).base.base.location.position.z - (pCVar7->location).position.z;
      if (12.0f <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar4 == 0) break;
        iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      else {
        iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar4 == 0) {
          iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,4,1);
            break;
          }
          goto LAB_0056878f;
        }
        iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,0xf,1);
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_03114214);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_0311420c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_8c,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
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
      fVar11 = (float)this_ptr->unk4 - delta_time;
      this_ptr->unk4 = (int)fVar11;
      if (fVar11 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar7 = (this_ptr->base).victim;
      if (pCVar7 == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        local_f8.x = (pCVar7->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_f8.y = (pCVar7->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_f8.z = (pCVar7->location).position.z - (this_ptr->base).base.base.location.position.z;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d4,&local_f8);
        (this_ptr->base).base.base.orient.vec.y = local_d4.y;
      }
    }
    goto switchD_00568487_caseD_d;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_005680fd:
      iVar4 = 2;
    }
    else {
LAB_0056845d:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar8 < 3) goto LAB_005680fd;
    if (uVar8 != 3) goto LAB_0056845d;
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
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
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
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_fffffe60);
  return;
}
