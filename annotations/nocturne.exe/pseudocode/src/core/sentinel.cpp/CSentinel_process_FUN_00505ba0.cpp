// Name: core_sentinel.cpp_CSentinel_process_FUN_00505ba0
// Address: 00505ba0
// Address Range: [[00505ba0, 005066db]]
// Convention: unknown
// Signature: void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  uint uVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  CPathMap *pCVar9;
  float fVar10;
  SDamageInfo *pSVar11;
  CCharacter *in_stack_fffffe60;
  CCharacter *in_stack_fffffe64;
  CEnemy *in_stack_fffffe68;
  float fVar12;
  CEnemy *in_stack_fffffe6c;
  CEnemy *pCVar13;
  byte local_164 [60];
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  char local_dc [4];
  float local_d8;
  float local_d0;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  char local_98 [8];
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_2c [2];
  UActorVTable local_24;
  CDemonActor *local_20;
  CDemonActor *local_1c;
  UActorVTable local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_2c[0] = param_2 * param_1->speed;
  pCVar1 = &(param_1->base).model;
LAB_00505bf9:
  if (0.0 < local_2c[0]) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,local_2c);
    switch(iVar5) {
    case 100:
      pCVar4 = param_1->victim;
      pCVar13 = in_stack_fffffe6c;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4),
         pCVar13 = in_stack_fffffe6c, iVar5 == 0)) {
        in_stack_fffffe60 = param_1->victim;
        iVar5 = (*(((in_stack_fffffe60->base).vtable._uc)->_uc).applyDamage)
                          (in_stack_fffffe60,(int)in_stack_fffffe64,(float)in_stack_fffffe68);
        pCVar13 = in_stack_fffffe6c;
        if (iVar5 == 0) {
          pCVar13 = (CEnemy *)0x0;
          in_stack_fffffe64 = param_1->victim;
          in_stack_fffffe60 = (CCharacter *)0x505e16;
          in_stack_fffffe68 = param_1;
          iVar5 = (*((in_stack_fffffe64->base).vtable._ub)->addFilesToExtract)
                            (&in_stack_fffffe64->base,(_FILE *)param_1);
          if (iVar5 != 0) {
            local_110.z = 4.0f;
            local_110.x = 0.0;
            local_110.y = 0.0;
            in_stack_fffffe68 = (CEnemy *)0x505e44;
            pCVar13 = param_1;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)param_1,&local_c8,&local_110);
            fVar10 = local_c8.x - (param_1->victim->base).location.position.x;
            fVar12 = local_c8.z - (param_1->victim->base).location.position.z;
            fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
            fVar12 = (float)0.80000000000000004;
            in_stack_fffffe6c = (CEnemy *)param_1->victim;
            if (ABS(local_c8.y - (in_stack_fffffe6c->base).base.location.position.y) <=
                (float)4) {
              if (fVar10 <= fVar12) {
                in_stack_fffffe68 = (CEnemy *)0x505eb9;
                pCVar7 = (*((in_stack_fffffe6c->base).base.vtable._ub)->dtor)
                                   ((CDemonActor *)in_stack_fffffe6c,(uint)param_1);
                pCVar13 = in_stack_fffffe6c;
                if (pCVar7 == (CDemonActor *)0x0) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&pCVar1->motion_controller,0,1);
                  break;
                }
              }
              in_stack_fffffe6c = pCVar13;
              if (fVar12 < fVar10) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar1->motion_controller,0,1);
              }
              break;
            }
          }
        }
      }
      in_stack_fffffe6c = pCVar13;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1)
      ;
      break;
    case 0x65:
      (*(((param_1->base).base.vtable._uc)->_uc).kill)
                (&param_1->base,(int)in_stack_fffffe60,(CVector3f *)in_stack_fffffe64,
                 (float)in_stack_fffffe68);
      break;
    case 0x66:
      if (param_1->victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_164);
        local_164._4_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000,0x40a00000)
        ;
        local_14 = (float)local_164._4_4_;
        (*(((param_1->victim->base).vtable._uc)->_uc).getGrabbed)
                  (param_1->victim,(CDemonActor *)local_164,(int)in_stack_fffffe60);
      }
      break;
    case 0x67:
      (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,"wing?.wav");
      break;
    case 0x68:
      (*((param_1->base).base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar5);
    }
    goto LAB_00505bf9;
  }
  fVar10 = param_1->speed;
  fVar12 = (float)3.1415926535000001;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar12 * fVar10;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  pCVar7 = (CDemonActor *)pSVar6->state_index;
  local_1c = pCVar7;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    if ((pCVar7 == (CDemonActor *)0xa) || (pCVar7 == (CDemonActor *)0xb)) {
      (param_1->base).collision_cylinder_radius = 0.5;
    }
    else {
      (param_1->base).collision_cylinder_radius = 2.0;
    }
    switch(local_1c) {
    case (CDemonActor *)0x0:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe60);
      pCVar4 = param_1->victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,2,1);
        }
      }
      else {
        local_5c = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x;
        local_58 = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
        local_54 = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
        if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= 12.0f)
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,3,1);
        }
      }
      break;
    case (CDemonActor *)0x1:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe60);
      if (param_1->victim != (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).model.motion_controller,0,1);
      }
      break;
    case (CDemonActor *)0x2:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe60);
      fVar10 = 4.0f;
      pCVar1 = &(param_1->base).model;
      if (param_1->victim != (CCharacter *)0x0) {
        fVar12 = 0.17453292;
        local_20 = (CDemonActor *)4.0f;
        pCVar8 = (CVector3f *)0x3f000000;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_98[0] = '\0';
        local_98[1] = '\0';
        local_98[2] = '\0';
        local_98[3] = '\0';
        local_90 = fVar10;
        local_98[4] = '\0';
        local_98[5] = '\0';
        local_98[6] = '\0';
        local_98[7] = '\0';
        pCVar9 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,pCVar9,pCVar8,
                           fVar12,(float)in_stack_fffffe6c);
        if (-1 < iVar5) {
          local_e0 = (param_1->base).base.location.position.x -
                     (param_1->victim->base).location.position.x;
          local_d8 = (param_1->base).base.location.position.z -
                     (param_1->victim->base).location.position.z;
          local_24 = (UActorVTable)SQRT(local_d8 * local_d8 + local_e0 * local_e0);
          local_dc[0] = '\0';
          local_dc[1] = '\0';
          local_dc[2] = '\0';
          local_dc[3] = '\0';
          local_18 = local_24;
          if (12.0f < (float)local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,3,1);
          }
          if (((float)local_24 <= (float)local_20) && (param_1->attack_cooldown <= 0.0)) {
            pCVar4 = param_1->victim;
            local_bc = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x
            ;
            local_b8 = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y
            ;
            local_b4 = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z
            ;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
              pCVar1 = &(param_1->base).model;
              if (iVar5 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar1->motion_controller,10,1);
                pCVar4 = &param_1[1].base;
                (pCVar4->base).actor_name[4] = '\0';
                (pCVar4->base).actor_name[5] = '\0';
                (pCVar4->base).actor_name[6] = -0x60;
                (pCVar4->base).actor_name[7] = '@';
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar1->motion_controller,4,1);
              }
              param_1->attack_cooldown = 1.0;
            }
          }
          if (param_1->guard_distance < (float)local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).model.motion_controller,0,1);
          }
        }
        break;
      }
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar5 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
        break;
      }
LAB_005062ff:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,2,1);
      break;
    case (CDemonActor *)0x3:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe60);
      pCVar1 = &(param_1->base).model;
      if (param_1->victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
        break;
      }
      fVar10 = 0.17453292;
      pCVar8 = (CVector3f *)0x3f000000;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      (param_1->base).model.accumulated_root_motion.y =
           (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).model.accumulated_root_motion.x =
           (param_1->base).model.accumulated_root_motion.y;
      local_80 = 0.0;
      local_78 = 4.0f;
      local_7c = 0.0;
      pCVar9 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                (&param_1->base,&(param_1->victim->base).location.position,pCVar9,pCVar8,fVar10,
                 (float)in_stack_fffffe6c);
      pCVar4 = param_1->victim;
      local_11c = (param_1->base).base.location.position.x - (pCVar4->base).location.position.x;
      local_118 = (param_1->base).base.location.position.y - (pCVar4->base).location.position.y;
      local_114 = (param_1->base).base.location.position.z - (pCVar4->base).location.position.z;
      if (12.0f <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar5 == 0) break;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar5 == 0) {
          iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,4,1);
            break;
          }
          goto LAB_005062ff;
        }
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&pCVar1->motion_controller,0xf,1);
      break;
    case (CDemonActor *)0x4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe60);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      pSVar11 = (SDamageInfo *)&stack0xfffffe60;
      fVar10 = 1.0;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_b0,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).model.bone_transform.bone_world_matrices[_DAT_01e57220].m)
      ;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_a4,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar10,pSVar11);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000,0x41f00000);
      pSVar11 = (SDamageInfo *)&stack0xfffffe60;
      fVar10 = 1.0;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_50,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).model.bone_transform.bone_world_matrices[_DAT_01e57218].m)
      ;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_8c,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar10,pSVar11);
      break;
    case (CDemonActor *)0x9:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (&(param_1->base).model,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_128,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_128,0);
        param_1->pool_me = 1;
      }
      break;
    case (CDemonActor *)0xa:
      fVar10 = *(float *)(param_1[1].base.base.actor_name + 4) - param_2;
      *(float *)(param_1[1].base.base.actor_name + 4) = fVar10;
      if (fVar10 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).model.motion_controller,0xb,1);
      }
      break;
    case (CDemonActor *)0xe:
    case (CDemonActor *)0xf:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe60);
      pCVar4 = param_1->victim;
      if (pCVar4 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).model.motion_controller,0,1);
      }
      else {
        local_f8 = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x;
        local_f4 = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
        local_f0 = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
        (param_1->base).base.orient.vec.y = local_d0;
      }
    }
    goto switchD_00505ff7_caseD_5;
  }
  uVar3 = (param_1->base).is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00505c6d:
      iVar5 = 2;
    }
    else {
LAB_00505fcd:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00505c6d;
    if (uVar3 != 3) goto LAB_00505fcd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00505ff7_caseD_5:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar5 != 0) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_104 = (param_1->base).velocity.x * param_2;
    local_100 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_fc = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_ec = local_104 + pCVar8->x;
    local_e8 = local_100 + (param_1->base).position_delta.y;
    local_e4 = local_fc + (param_1->base).position_delta.z;
    local_68.x = local_ec + pCVar2->x;
    local_68.y = local_e8 + (param_1->base).model.accumulated_root_motion.y;
    local_68.z = local_e4 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_68);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
