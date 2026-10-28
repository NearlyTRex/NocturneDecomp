// Name: core_imp.cpp_CImp_process_FUN_004f9c30
// Address: 004f9c30
// Address Range: [[004f9c30, 004fa8f3]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  EDeathState EVar11;
  SMotion *pSVar12;
  int iVar13;
  CImp *pCVar14;
  CPathMap *path_map;
  int iVar15;
  float fVar16;
  float fVar17;
  SDamageInfo *damage_info;
  float fVar18;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  int local_3c;
  float local_34 [2];
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_00429870
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar11 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.base,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_34[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_004f9c99:
  if (0.0 < local_34[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->base,local_34);
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
      goto LAB_004f9c99;
    }
    if (uVar8 < 0x29b) {
      pCVar3 = (this_ptr->base).victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 == DEATH_STATE_ALIVE)) &&
          (pCVar3 = (this_ptr->base).victim,
          pCVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
          pCVar9 == (CDemonActor *)0x0)) &&
         (pCVar3 = (this_ptr->base).victim,
         iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar3,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        pCVar3 = (this_ptr->base).victim;
        fVar16 = local_68.x - (pCVar3->base).location.position.x;
        fVar17 = local_68.z - (pCVar3->base).location.position.z;
        bVar6 = (float)0.80000000000000004 < SQRT(fVar17 * fVar17 + fVar16 * fVar16);
        if (((ABS(local_68.y - (((this_ptr->base).victim)->base).location.position.y) <=
              (float)4) &&
            ((bVar6 || (pCVar3 = (this_ptr->base).victim,
                       iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                         (pCVar3,(CDemonActor *)this_ptr,0), iVar7 != 0)))) &&
           (!bVar6)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,0,1);
      goto LAB_004f9c99;
    }
    if (uVar8 == 0x29b) {
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,0,1);
      }
      else {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0059fa20
                            (pCVar1,&local_104,g_ImpIndices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar10);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_164);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&local_8c,(CVector3f *)0x0,
                   (int)ROUND(ROUND(local_164.damage_amount * (float)2.5 *
                                    (float)0.25)),BLOOD_TYPE_RED);
        pCVar3 = (this_ptr->base).victim;
        EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if ((int)EVar11 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    goto LAB_004f9c99;
  }
  fVar16 = (this_ptr->base).speed;
  fVar17 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar17 * fVar16;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&pCVar1->base);
  iVar7 = pSVar12->state_index;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    switch(iVar7) {
    case 0:
      EVar11 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                         (&g_HeroActors[g_LocalHeroIndex]->base);
      if (EVar11 == DEATH_STATE_ALIVE) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar13 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar13 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,1,1);
          }
        }
        else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
          local_80.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_80.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_80.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fVar16 = SQRT(local_80.z * local_80.z + local_80.x * local_80.x + local_80.y * local_80.y)
          ;
          if (fVar16 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_e0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fVar17) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,4,1);
            }
          }
          if (fVar16 < (this_ptr->base).guard_distance) {
            pCVar1 = &(this_ptr->base).base.model;
            if (10.0f <= fVar16) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,3,1);
        }
      }
      else {
        iVar13 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar13 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.base,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar16 = 2.0f;
      pCVar3 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar13 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar13 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,1,1);
        }
      }
      else {
        pCVar9 = pCVar3->grabbed_by;
        if (pCVar9 == (CDemonActor *)0x0) {
          fVar18 = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar17 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_98.z = fVar16;
          pCVar10 = &local_98;
          pCVar3 = (this_ptr->base).victim;
          local_98.x = (float)pCVar9;
          local_98.y = (float)pCVar9;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar13 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             ((CCharacter *)this_ptr,
                              &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                              fVar17,fVar18);
          if (-1 < iVar13) {
            pCVar3 = (this_ptr->base).victim;
            fVar17 = (this_ptr->base).base.base.location.position.x -
                     (pCVar3->base).location.position.x;
            fVar18 = (this_ptr->base).base.base.location.position.z -
                     (pCVar3->base).location.position.z;
            fVar17 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
            if ((10.0f < fVar17) && (iVar7 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,2,1);
            }
            if (((fVar17 < 4.0f) &&
                (pCVar3 = (this_ptr->base).victim,
                pCVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                pCVar9 == (CDemonActor *)0x0)) &&
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
              fVar18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fVar18) < (float)0.52359877558333301) &&
                 (iVar13 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar13 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.base,8,1);
                iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
                if (iVar13 == 0) {
                  uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar8;
                }
              }
            }
            if ((fVar17 <= fVar16) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar3 = (this_ptr->base).victim;
              local_d4.x = (pCVar3->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar3->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar3->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_11c,&local_d4)
              ;
              fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_11c.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fVar16) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.base,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < fVar17) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.base,0,1);
            }
            fVar16 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar16;
            if (fVar16 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
              if ((iVar13 == 0) &&
                 (iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
                 iVar13 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar8;
                fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
                this_ptr->laugh_timer = fVar16;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,3,1);
        }
      }
      break;
    case 3:
      fVar16 = this_ptr->laugh_timer - delta_time * 4.0f;
      this_ptr->laugh_timer = fVar16;
      if (fVar16 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
        if ((iVar13 == 0) &&
           (iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
           iVar13 == 0)) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar8;
          fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
          this_ptr->laugh_timer = fVar16;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(3.0,5.0);
      damage_info = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar16 = 0.4;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_b0,&g_ZeroVector.f,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           g_ImpIndices[2]);
      pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_5c,pCVar10);
      iVar13 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                         (&this_ptr->base,pCVar10,fVar16,damage_info);
      if (iVar13 != 0) {
        iVar15 = 0;
        iVar13 = 0;
        while (iVar13 < g_CDemonSetPtr->enemy_count) {
          pCVar14 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar15),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar14 == (CImp *)0x0) || (pCVar14 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar14->base).victim)) {
            iVar13 = iVar13 + 1;
            iVar15 = iVar15 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar14->base).base.model.base,3,1);
            iVar13 = iVar13 + 1;
            iVar15 = iVar15 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0059fa20
                            (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_c8,BLOOD_TYPE_RED);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
         EVar11 == DEATH_STATE_ALIVE)) {
        pCVar3 = (this_ptr->base).victim;
        pCVar14 = (CImp *)pCVar3->grabbed_by;
        if (this_ptr == pCVar14) {
          fVar16 = (float)0.75;
          pCVar5 = (pCVar14->base).victim;
          (pCVar14->base).base.base.location.position.x =
               (pCVar3->base).location.position.x -
               (pCVar14->base).base.base.orient_matrix.m[0].z * fVar16;
          (pCVar14->base).base.base.location.position.z =
               (pCVar5->base).location.position.z -
               (pCVar14->base).base.base.orient_matrix.m[2].z * fVar16;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,5,1);
    }
    goto switchD_004fa8ed_caseD_8;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004f9fc4:
      iVar13 = 1;
    }
    else {
LAB_004fa163:
      iVar13 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.base,iVar13,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004f9fc4;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004fa163;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004fa8ed_caseD_8:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar13 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar13 != 0) && (iVar7 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar10 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_110.x = (this_ptr->base).base.velocity.x * delta_time + pCVar10->x + pCVar2->x;
    local_110.y = (this_ptr->base).base.velocity.y * delta_time +
                  (this_ptr->base).base.position_delta.y +
                  (this_ptr->base).base.model.accumulated_root_motion.y;
    local_110.z = delta_time * (this_ptr->base).base.velocity.z +
                  (this_ptr->base).base.position_delta.z +
                  (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
