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
  CCharacter *pCVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  CVector3f *pCVar9;
  SMotion *pSVar10;
  int iVar11;
  CImp *pCVar12;
  CPathMap *path_map;
  float fVar13;
  float fVar14;
  SDamageInfo *damage_info;
  float max_distance;
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
  uint local_a0;
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
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), iVar6 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,6,1);
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
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar1->motion_controller,local_34);
    if (uVar7 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
      goto LAB_004f9c99;
    }
    if (uVar7 < 0x29b) {
      pCVar3 = (this_ptr->base).victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), iVar6 == 0)) &&
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
        fVar13 = local_68.x - (pCVar3->base).location.position.x;
        fVar14 = local_68.z - (pCVar3->base).location.position.z;
        bVar5 = (float)0.80000000000000004 < SQRT(fVar14 * fVar14 + fVar13 * fVar13);
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
                           (pCVar1,&local_104,INT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar9);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_164);
        local_3c = (int)ROUND(ROUND(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&local_8c,(CVector3f *)0x0,local_3c,0);
        pCVar3 = (this_ptr->base).victim;
        iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (iVar6 < 1) {
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
  fVar13 = (this_ptr->base).speed;
  fVar14 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar14 * fVar13;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  iVar6 = pSVar10->state_index;
  local_24 = iVar6;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar6) {
    case 0:
      iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
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
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_e0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if (local_20 < (this_ptr->base).guard_distance) {
            pCVar1 = &(this_ptr->base).base.model;
            if (10.0f <= local_20) {
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
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar13 = 2.0f;
      pCVar3 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
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
          local_28 = 2.0f;
          max_distance = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar14 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_98.z = fVar13;
          pCVar9 = &local_98;
          pCVar3 = (this_ptr->base).victim;
          local_98.x = (float)pCVar8;
          local_98.y = (float)pCVar8;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar9,
                             fVar14,max_distance);
          if (-1 < iVar6) {
            pCVar3 = (this_ptr->base).victim;
            local_a4 = (this_ptr->base).base.base.location.position.x -
                       (pCVar3->base).location.position.x;
            local_9c = (this_ptr->base).base.base.location.position.z -
                       (pCVar3->base).location.position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < 4.0f) &&
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
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar6 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,8,1);
                iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
                if (iVar6 == 0) {
                  uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar7;
                }
              }
            }
            if ((local_1c <= local_28) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar3 = (this_ptr->base).victim;
              local_d4.x = (pCVar3->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar3->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar3->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_11c,&local_d4)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_11c.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
            fVar13 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar13;
            if (fVar13 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
                 iVar6 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar7;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                this_ptr->laugh_timer = local_14;
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
      fVar13 = this_ptr->laugh_timer - delta_time * 4.0f;
      this_ptr->laugh_timer = fVar13;
      if (fVar13 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
        if ((iVar6 == 0) &&
           (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
           iVar6 == 0)) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar7;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          this_ptr->laugh_timer = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      damage_info = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar13 = 0.4;
      local_14 = local_1a0.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_02db89fc);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_5c,pCVar9);
      iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                        (&this_ptr->base,pCVar9,fVar13,damage_info);
      if (iVar6 != 0) {
        iVar11 = 0;
        iVar6 = 0;
        while (iVar6 < g_CDemonSetPtr->enemy_count) {
          pCVar12 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar11),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar12 == (CImp *)0x0) || (pCVar12 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar12->base).victim)) {
            iVar6 = iVar6 + 1;
            iVar11 = iVar11 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar12->base).base.model.motion_controller,3,1);
            iVar6 = iVar6 + 1;
            iVar11 = iVar11 + 4;
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
         (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), iVar6 == 0)) {
        pCVar3 = (this_ptr->base).victim;
        pCVar12 = (CImp *)pCVar3->grabbed_by;
        if (this_ptr == pCVar12) {
          fVar13 = (float)0.75;
          pCVar4 = (pCVar12->base).victim;
          (pCVar12->base).base.base.location.position.x =
               (pCVar3->base).location.position.x -
               (pCVar12->base).base.base.orient_matrix.m[0].z * fVar13;
          (pCVar12->base).base.base.location.position.z =
               (pCVar4->base).location.position.z -
               (pCVar12->base).base.base.orient_matrix.m[2].z * fVar13;
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
      iVar6 = 1;
    }
    else {
LAB_004fa163:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar7 < 3) goto LAB_004f9fc4;
    if (uVar7 != 3) goto LAB_004fa163;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
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
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (local_24 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_bc = (this_ptr->base).base.velocity.x * delta_time;
    local_b8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar9 = &(this_ptr->base).base.position_delta;
    local_b4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_bc + pCVar9->x;
    local_124 = local_b8 + (this_ptr->base).base.position_delta.y;
    local_120 = local_b4 + (this_ptr->base).base.position_delta.z;
    local_110.x = local_128 + pCVar2->x;
    local_110.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_110.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
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
