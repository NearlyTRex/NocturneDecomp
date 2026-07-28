// Name: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
// Address Range: [[004bbaf0, 004bc7b3]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_process_FUN_004bbaf0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_CImp_process_FUN_004bbaf0(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  SMotion *pSVar9;
  int iVar10;
  CEnemy *pCVar11;
  CPathMap *path_map;
  double dVar12;
  SDamageInfo *damage_info;
  CVector3f *in_stack_fffffe64;
  CEnemy *in_stack_fffffe68;
  float fVar13;
  float fVar14;
  float in_stack_fffffe70;
  float in_stack_fffffe74;
  float in_stack_fffffe78;
  byte local_164 [60];
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8 [2];
  byte local_e0 [12];
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  char local_a0 [4];
  float local_9c;
  CDemonActor *local_98;
  CDemonActor *local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_3c;
  float local_34 [4];
  int local_24;
  UActorVTable local_20;
  CDemonActor *local_1c;
  UActorVTable local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  if (((param_1->base).model.part_data.visibility_flags[*(int *)&param_1[1].base.base.orient] == 0)
     && (iVar5 = (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base),
        iVar5 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,6,1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_34[0] = param_2 * param_1->speed;
  pCVar1 = &(param_1->base).model;
LAB_004bbb59:
  if (0.0 < local_34[0]) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,local_34);
    if (uVar6 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
      goto LAB_004bbb59;
    }
    if (uVar6 < 0x29b) {
      pCVar3 = param_1->victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (iVar5 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3), iVar5 == 0)) &&
          (iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).applyDamage)
                             (param_1->victim,(int)in_stack_fffffe64,(float)in_stack_fffffe68),
          iVar5 == 0)) &&
         (iVar5 = (*((param_1->victim->base).vtable._ub)->addFilesToExtract)
                            (&param_1->victim->base,(_FILE *)param_1), iVar5 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_68,&local_50);
        fVar13 = local_68.x - (param_1->victim->base).location.position.x;
        fVar14 = local_68.z - (param_1->victim->base).location.position.z;
        bVar4 = (float)0.80000000000000004 < SQRT(fVar14 * fVar14 + fVar13 * fVar13);
        if (((ABS(local_68.y - (param_1->victim->base).location.position.y) <=
              (float)4) &&
            ((bVar4 || (pCVar7 = (*((param_1->victim->base).vtable._ub)->dtor)
                                           (&param_1->victim->base,(uint)param_1),
                       pCVar7 != (CDemonActor *)0x0)))) && (!bVar4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004bbb59;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004bbb59;
    }
    if (uVar6 == 0x29b) {
      if (param_1->victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (pCVar1,&local_104,_DAT_01cae30c);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_8c,pCVar8);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_164);
        local_164._4_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000);
        local_164._52_4_ = param_1;
        local_164._56_4_ = param_1;
        local_14 = (float)local_164._4_4_;
        (*(((param_1->victim->base).vtable._uc)->_uc).getGrabbed)
                  (param_1->victim,(CDemonActor *)local_164,(int)in_stack_fffffe64);
        fVar13 = 6.955648e-39;
        dVar12 = round
                           ((double)((float)local_164._4_4_ * (float)2.5 *
                                    (float)0.25));
        local_3c = (float)(int)ROUND(dVar12);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  ((CGore *)INT_005b96c4,&local_8c,(CVector3f *)0x0,(int)local_3c,(int)fVar13);
        iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
        if (iVar5 < 1) {
          in_stack_fffffe64 = (CVector3f *)0x4bbdf2;
          in_stack_fffffe68 = param_1;
          (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"ghoul-eat-?.wav");
        }
        else {
          (*((param_1->victim->base).vtable._ub)->archive)(&param_1->victim->base);
          in_stack_fffffe70 = 1.4013e-45;
          in_stack_fffffe64 = (CVector3f *)0x4bbdda;
          in_stack_fffffe68 = (CEnemy *)pCVar1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
    }
    goto LAB_004bbb59;
  }
  fVar13 = param_1->speed;
  fVar14 = (float)3.1415926535000001;
  pCVar1 = &(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar14 * fVar13;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  iVar5 = pSVar9->state_index;
  pCVar8 = (CVector3f *)0x4bbe61;
  local_24 = iVar5;
  iVar10 = core_charactr_cpp_FUN_00428c00(param_1);
  if (iVar10 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) + 0x104))();
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)param_2,pCVar8);
        pCVar3 = param_1->victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
          local_80 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
          local_7c = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
          local_78 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
          local_20 = (UActorVTable)
                     SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
          local_18 = local_20;
          if ((float)local_20 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_e0);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if ((float)local_20 < param_1->guard_distance) {
            pCVar1 = &(param_1->base).model;
            if (10.0f <= (float)local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,3,1);
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,in_stack_fffffe64);
      fVar13 = 2.0f;
      pCVar1 = &(param_1->base).model;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        pCVar7 = param_1->victim->grabbed_by;
        if (pCVar7 == (CDemonActor *)0x0) {
          local_34[3] = 2.0f;
          fVar14 = 0.17453292;
          (param_1->base).model.accumulated_root_motion.z = 0.0;
          pCVar8 = (CVector3f *)0x3f000000;
          (param_1->base).model.accumulated_root_motion.y =
               (param_1->base).model.accumulated_root_motion.z;
          (param_1->base).model.accumulated_root_motion.x =
               (param_1->base).model.accumulated_root_motion.y;
          local_90 = fVar13;
          local_98 = pCVar7;
          local_94 = pCVar7;
          path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,&(param_1->victim->base).location.position,path_map,
                             pCVar8,fVar14,in_stack_fffffe70);
          if (-1 < iVar5) {
            local_a4 = (param_1->base).base.location.position.x -
                       (param_1->victim->base).location.position.x;
            local_9c = (param_1->base).base.location.position.z -
                       (param_1->victim->base).location.position.z;
            local_a0[0] = '\0';
            local_a0[1] = '\0';
            local_a0[2] = '\0';
            local_a0[3] = '\0';
            local_34[2] = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = (CDemonActor *)local_34[2];
            if ((10.0f < local_34[2]) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,2,1);
            }
            if ((((float)local_1c < 4.0f) &&
                (iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).applyDamage)
                                   (param_1->victim,(int)in_stack_fffffe74,in_stack_fffffe78),
                iVar5 == 0)) &&
               ((param_1->base).model.part_data.visibility_flags
                [(int)param_1[1].base.base.orient.vec.y] != 0)) {
              pCVar3 = param_1->victim;
              local_74 = (pCVar3->base).location.position.x -
                         (param_1->base).base.location.position.x;
              local_70 = (pCVar3->base).location.position.y -
                         (param_1->base).base.location.position.y;
              local_6c = (pCVar3->base).location.position.z -
                         (param_1->base).base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1), iVar5 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).model.motion_controller,8,1);
                iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (*(uint *)param_1[1].base.base.actor_name);
                if (iVar5 == 0) {
                  uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                    ((CDemonActor *)param_1,"imp-jump?.wav");
                  *(uint *)param_1[1].base.base.actor_name = uVar6;
                }
              }
            }
            if (((float)local_1c <= local_34[3]) && (param_1->attack_cooldown <= 0.0)) {
              pCVar3 = param_1->victim;
              local_d4 = (pCVar3->base).location.position.x -
                         (param_1->base).base.location.position.x;
              local_d0 = (pCVar3->base).location.position.y -
                         (param_1->base).base.location.position.y;
              local_cc = (pCVar3->base).location.position.z -
                         (param_1->base).base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).model.motion_controller,4,1);
                param_1->attack_cooldown = 4.0;
              }
            }
            if (param_1->guard_distance < (float)local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,0,1);
            }
            fVar13 = *(float *)(param_1[1].base.base.actor_name + 8) - param_2;
            *(float *)(param_1[1].base.base.actor_name + 8) = fVar13;
            if (fVar13 < 0.0) {
              uVar6 = *(uint *)param_1[1].base.base.actor_name;
              pCVar3 = &param_1[1].base;
              (pCVar3->base).actor_name[8] = '\0';
              (pCVar3->base).actor_name[9] = '\0';
              (pCVar3->base).actor_name[10] = '\0';
              (pCVar3->base).actor_name[0xb] = '\0';
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar6);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1[1].base.base.actor_name + 4)), iVar5 == 0)) {
                uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                  ((CDemonActor *)param_1,"imp-laugh?.wav");
                *(uint *)param_1[1].base.base.actor_name = uVar6;
                local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                *(float *)(param_1[1].base.base.actor_name + 8) = local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,3,1);
        }
      }
      break;
    case 3:
      fVar13 = *(float *)(param_1[1].base.base.actor_name + 8) - param_2 * 4.0f;
      *(float *)(param_1[1].base.base.actor_name + 8) = fVar13;
      if (fVar13 < 0.0) {
        uVar6 = *(uint *)param_1[1].base.base.actor_name;
        pCVar3 = &param_1[1].base;
        (pCVar3->base).actor_name[8] = '\0';
        (pCVar3->base).actor_name[9] = '\0';
        (pCVar3->base).actor_name[10] = '\0';
        (pCVar3->base).actor_name[0xb] = '\0';
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar6);
        if ((iVar5 == 0) &&
           (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              (*(uint *)(param_1[1].base.base.actor_name + 4)), iVar5 == 0)) {
          uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"imp-laugh?.wav");
          *(uint *)param_1[1].base.base.actor_name = uVar6;
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          *(float *)(param_1[1].base.base.actor_name + 8) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe60);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40400000);
      damage_info = (SDamageInfo *)&stack0xfffffe60;
      fVar13 = 0.4;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_b0,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).model.bone_transform.bone_world_matrices[_DAT_01cae314].m)
      ;
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_5c,pCVar8);
      iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar13,damage_info)
      ;
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar5 = 0;
        while (iVar5 < *(int *)(0x01E57284 + 0x150bf4)) {
          pCVar11 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)(iVar10 + 0x150bf8 + 0x01E57284),
                               g_CImpActorType_01cae33c.name_hash);
          if (((pCVar11 == (CEnemy *)0x0) || (pCVar11 == param_1)) ||
             (param_1->victim != pCVar11->victim)) {
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(pCVar11->base).model.motion_controller,3,1);
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
        }
      }
      break;
    case 7:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (pCVar1,local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_c8,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_c8,0);
        param_1->pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = param_1->victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (iVar5 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3), iVar5 == 0)) {
        pCVar11 = (CEnemy *)param_1->victim->grabbed_by;
        if (param_1 == pCVar11) {
          fVar13 = (float)0.75;
          pCVar3 = pCVar11->victim;
          (pCVar11->base).base.location.position.x =
               (param_1->victim->base).location.position.x -
               (pCVar11->base).base.orient_matrix.m[0].z * fVar13;
          (pCVar11->base).base.location.position.z =
               (pCVar3->base).location.position.z -
               (pCVar11->base).base.orient_matrix.m[2].z * fVar13;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004bc7ad_caseD_5;
  }
  uVar6 = (param_1->base).is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_004bbe84:
      iVar5 = 1;
    }
    else {
LAB_004bc023:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar6 < 3) goto LAB_004bbe84;
    if (uVar6 != 3) goto LAB_004bc023;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_004bc7ad_caseD_5:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if ((iVar5 != 0) && (local_24 != 9)) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_bc = (param_1->base).velocity.x * param_2;
    local_b8 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_b4 = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_128 = local_bc + pCVar8->x;
    local_124 = local_b8 + (param_1->base).position_delta.y;
    local_120 = local_b4 + (param_1->base).position_delta.z;
    local_110.x = local_128 + pCVar2->x;
    local_110.y = local_124 + (param_1->base).model.accumulated_root_motion.y;
    local_110.z = local_120 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(param_1);
  return;
}
