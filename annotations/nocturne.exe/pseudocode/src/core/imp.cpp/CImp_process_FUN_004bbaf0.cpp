// Name: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
// Address Range: [[004bbaf0, 004bc7b3]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004bbaf0(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_process_FUN_004bbaf0(CImp *this_ptr,float delta_time)

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
  double dVar15;
  float fVar16;
  float fVar17;
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
  
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar11 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_34[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_004bbb59:
  if (0.0 < local_34[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar1->base,local_34);
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar8);
      goto LAB_004bbb59;
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
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,9,1);
          goto LAB_004bbb59;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
      goto LAB_004bbb59;
    }
    if (uVar8 == 0x29b) {
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
      }
      else {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0051d2a0
                            (pCVar1,&local_104,_DAT_01cae30c);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_8c,pCVar10);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_164);
        iVar7 = 0x4bbd84;
        dVar15 = round
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar15);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  (g_CGore_PTR_005b96c4,&local_8c,(CVector3f *)0x0,local_3c,iVar7);
        pCVar3 = (this_ptr->base).victim;
        EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if ((int)EVar11 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar8);
    }
    goto LAB_004bbb59;
  }
  fVar16 = (this_ptr->base).speed;
  fVar17 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar17 * fVar16;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar1->base);
  iVar7 = pSVar12->state_index;
  local_24 = iVar7;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
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
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,1,1);
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
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_e0,&local_80);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_e0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,4,1);
            }
          }
          if (local_20 < (this_ptr->base).guard_distance) {
            pCVar1 = &(this_ptr->base).base.model;
            if (10.0f <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,3,1);
        }
      }
      else {
        iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
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
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,1,1);
        }
      }
      else {
        pCVar9 = pCVar3->grabbed_by;
        if (pCVar9 == (CDemonActor *)0x0) {
          local_28 = 2.0f;
          max_distance = 0.17453292;
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
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                             fVar17,max_distance);
          if (-1 < iVar7) {
            pCVar3 = (this_ptr->base).victim;
            local_a4 = (this_ptr->base).base.base.location.position.x -
                       (pCVar3->base).location.position.x;
            local_9c = (this_ptr->base).base.base.location.position.z -
                       (pCVar3->base).location.position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,2,1);
            }
            if (((local_1c < 4.0f) &&
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
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_ec,&local_74);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.1), iVar7 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(this_ptr->base).base.model.base,8,1);
                iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
                if (iVar7 == 0) {
                  uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar8;
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
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_11c,&local_d4)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (local_11c.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(this_ptr->base).base.model.base,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.base,0,1);
            }
            fVar16 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar16;
            if (fVar16 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]),
                 iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar8;
                local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
                this_ptr->laugh_timer = local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,3,1);
        }
      }
      break;
    case 3:
      fVar16 = this_ptr->laugh_timer - delta_time * 4.0f;
      this_ptr->laugh_timer = fVar16;
      if (fVar16 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
        if ((iVar7 == 0) &&
           (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]),
           iVar7 == 0)) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar8;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
          this_ptr->laugh_timer = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(3.0,5.0);
      damage_info = &local_1a0;
      local_1a0.attacker = (CDemonActor *)this_ptr;
      local_1a0.wielder = (CDemonActor *)this_ptr;
      fVar16 = 0.4;
      local_14 = local_1a0.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (&local_b0,&g_ZeroVector.f,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           _DAT_01cae314);
      pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          ((CDemonActor *)this_ptr,&local_5c,pCVar10);
      iVar7 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                        (&this_ptr->base,pCVar10,fVar16,damage_info);
      if (iVar7 != 0) {
        iVar13 = 0;
        iVar7 = 0;
        while (iVar7 < g_CDemonSet_PTR_005be368->enemy_count) {
          pCVar14 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040d890
                                      (*(CDemonActor **)
                                        ((int)g_CDemonSet_PTR_005be368->enemies + iVar13),
                                       g_CImpActorType_01cae33c.name_hash);
          if (((pCVar14 == (CImp *)0x0) || (pCVar14 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar14->base).victim)) {
            iVar7 = iVar7 + 1;
            iVar13 = iVar13 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(pCVar14->base).base.model.base,3,1);
            iVar7 = iVar7 + 1;
            iVar13 = iVar13 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0051d2a0
                            (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_c8,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_c8,0);
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
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,5,1);
    }
    goto switchD_004bc7ad_caseD_5;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004bbe84:
      iVar7 = 1;
    }
    else {
LAB_004bc023:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar7,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004bbe84;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004bc023;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004bc7ad_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if ((iVar7 != 0) && (local_24 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_bc = (this_ptr->base).base.velocity.x * delta_time;
    local_b8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar10 = &(this_ptr->base).base.position_delta;
    local_b4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_bc + pCVar10->x;
    local_124 = local_b8 + (this_ptr->base).base.position_delta.y;
    local_120 = local_b4 + (this_ptr->base).base.position_delta.z;
    local_110.x = local_128 + pCVar2->x;
    local_110.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_110.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
