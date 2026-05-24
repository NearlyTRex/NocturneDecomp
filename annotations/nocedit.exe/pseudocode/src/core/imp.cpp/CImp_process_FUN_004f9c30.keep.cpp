// Name: core_imp.cpp_CImp_process_FUN_004f9c30
// Address: 004f9c30
// MANUAL RECONSTRUCTION
// Address Range: [[004f9c30, 004fa8f3]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  CVector3f *pCVar9;
  EDeathState EVar10;
  SMotion *pSVar11;
  int iVar12;
  CImp *pCVar13;
  CPathMap *path_map;
  float fVar15;
  float fVar16;
  SDamageInfo *damage_info;
  float fVar17;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_b0;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_34 [2];
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (EVar10 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar10 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  local_34[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_004f9c99:
  if (0.0 < local_34[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar1->motion_controller,local_34);
    if (uVar7 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
      goto LAB_004f9c99;
    }
    if (uVar7 < 0x29b) {
      pCVar3 = (this_ptr->base).victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar10 == DEATH_STATE_ALIVE)) &&
          (pCVar3 = (this_ptr->base).victim,
          pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
          pCVar8 == (CDemonActor *)0x0)) &&
         (pCVar3 = (this_ptr->base).victim,
         iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar3,(CDemonActor *)this_ptr,0), iVar6 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        pCVar3 = (this_ptr->base).victim;
        fVar15 = local_68.x - (pCVar3->base).location.position.x;
        fVar16 = local_68.z - (pCVar3->base).location.position.z;
        bVar5 = (float)0.80000000000000004 < SQRT(fVar16 * fVar16 + fVar15 * fVar15);
        if (((ABS(local_68.y - (((this_ptr->base).victim)->base).location.position.y) <=
              (float)4) &&
            ((bVar5 || (pCVar3 = (this_ptr->base).victim,
                       iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                         (pCVar3,(CDemonActor *)this_ptr,0), iVar6 != 0)))) &&
           (!bVar5)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar7 == 0x29b) {
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_104,g_ImpIndices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar9);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_164);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&local_8c,(CVector3f *)0x0,
                   (int)ROUND(ROUND(local_164.damage_amount * (float)2.5 *
                                    (float)0.25)),0);
        pCVar3 = (this_ptr->base).victim;
        EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if ((int)EVar10 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
    }
    goto LAB_004f9c99;
  }
  fVar15 = (this_ptr->base).speed;
  fVar16 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar16 * fVar15;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  iVar6 = pSVar11->state_index;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    switch(iVar6) {
    case 0:
      EVar10 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                         (&g_HeroActors[g_LocalHeroIndex]->base);
      if (EVar10 == DEATH_STATE_ALIVE) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar12 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar12 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
          local_80.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_80.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_80.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fVar15 = SQRT(local_80.z * local_80.z + local_80.x * local_80.x + local_80.y * local_80.y)
          ;
          if (fVar15 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_e0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fVar16) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if (fVar15 < (this_ptr->base).guard_distance) {
            pCVar1 = &(this_ptr->base).base.model;
            if (10.0f <= fVar15) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      else {
        iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar12 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar15 = 2.0f;
      pCVar3 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar12 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar12 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        pCVar8 = pCVar3->grabbed_by;
        if (pCVar8 == (CDemonActor *)0x0) {
          fVar17 = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar16 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
          local_98.z = fVar15;
          pCVar9 = &local_98;
          pCVar3 = (this_ptr->base).victim;
          local_98.x = 0.0;
          local_98.y = 0.0;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             ((CCharacter *)this_ptr,
                              &(((this_ptr->base).victim)->base).location.position,path_map,pCVar9,
                              fVar16,fVar17);
          if (-1 < iVar12) {
            pCVar3 = (this_ptr->base).victim;
            fVar16 = (this_ptr->base).base.base.location.position.x -
                     (pCVar3->base).location.position.x;
            fVar17 = (this_ptr->base).base.base.location.position.z -
                     (pCVar3->base).location.position.z;
            fVar16 = SQRT(fVar17 * fVar17 + fVar16 * fVar16);
            if ((10.0f < fVar16) && (iVar6 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((fVar16 < 4.0f) &&
                (pCVar3 = (this_ptr->base).victim,
                pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                pCVar8 == (CDemonActor *)0x0)) &&
               ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]]
                != 0)) {
              pCVar3 = (this_ptr->base).victim;
              local_74.x = (pCVar3->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_74.y = (pCVar3->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_74.z = (pCVar3->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74);
              fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fVar17) < (float)0.52359877558333301) &&
                 (iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar12 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,8,1);
                iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
                if (iVar12 == 0) {
                  uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar7;
                }
              }
            }
            if ((fVar16 <= fVar15) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar3 = (this_ptr->base).victim;
              local_d4.x = (pCVar3->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar3->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar3->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_11c,&local_d4)
              ;
              fVar15 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_11c.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fVar15) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < fVar16) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
            fVar15 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar15;
            if (fVar15 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
              if ((iVar12 == 0) &&
                 (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
                 iVar12 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar7;
                fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
                this_ptr->laugh_timer = fVar15;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      break;
    case 3:
      fVar15 = this_ptr->laugh_timer - delta_time * 4.0f;
      this_ptr->laugh_timer = fVar15;
      if (fVar15 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
        if ((iVar12 == 0) &&
           (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
           iVar12 == 0)) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar7;
          fVar15 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
          this_ptr->laugh_timer = fVar15;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(3.0,5.0);
      damage_info = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar15 = 0.4;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_ImpIndices[2]);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_5c,pCVar9);
      iVar12 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                         (&this_ptr->base,pCVar9,fVar15,damage_info);
      if (iVar12 != 0) {
        iVar12 = 0;
        while (iVar12 < g_CDemonSetPtr->enemy_count) {
          pCVar13 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      ((CDemonActor *)g_CDemonSetPtr->enemies[iVar12],
                                       g_CImpClassInfo.name_hash);
          if (((pCVar13 == (CImp *)0x0) || (pCVar13 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar13->base).victim)) {
            iVar12 = iVar12 + 1;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar13->base).base.model.motion_controller,3,1);
            iVar12 = iVar12 + 1;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar9);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_c8,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
         EVar10 == DEATH_STATE_ALIVE)) {
        pCVar3 = (this_ptr->base).victim;
        pCVar13 = (CImp *)pCVar3->grabbed_by;
        if (this_ptr == pCVar13) {
          fVar15 = (float)0.75;
          pCVar4 = (pCVar13->base).victim;
          (pCVar13->base).base.base.location.position.x =
               (pCVar3->base).location.position.x -
               (pCVar13->base).base.base.orient_matrix.m[0].z * fVar15;
          (pCVar13->base).base.base.location.position.z =
               (pCVar4->base).location.position.z -
               (pCVar13->base).base.base.orient_matrix.m[2].z * fVar15;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_004f9fc4:
      iVar12 = 1;
    }
    else {
LAB_004fa163:
      iVar12 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
  else {
    if (uVar7 < 3) goto LAB_004f9fc4;
    if (uVar7 != 3) goto LAB_004fa163;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
switchD_004fa8ed_caseD_8:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar12 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar12 != 0) && (iVar6 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar9 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_110.x = (this_ptr->base).base.velocity.x * delta_time + pCVar9->x + pCVar2->x;
    local_110.y = (this_ptr->base).base.velocity.y * delta_time +
                  (this_ptr->base).base.position_delta.y +
                  (this_ptr->base).base.model.accumulated_root_motion.y;
    local_110.z = delta_time * (this_ptr->base).base.velocity.z +
                  (this_ptr->base).base.position_delta.z +
                  (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
