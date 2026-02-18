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
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  SMotion *pSVar11;
  int iVar12;
  CImp *pCVar13;
  CPathMap *path_map;
  uint uVar14;
  float fVar15;
  float max_distance;
  float in_stack_fffffe60;
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
  float local_34;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x30)] == 0)
     && (iVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                           ((CCharacter *)this_ptr), iVar7 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_34 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_004f9c99:
  if (0.0 < local_34) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
      goto LAB_004f9c99;
    }
    if (uVar8 < 0x29b) {
      pCVar4 = (CCharacter *)(this_ptr->base).victim;
      if ((((pCVar4 != (CCharacter *)0x0) &&
           (iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), iVar7 == 0)) &&
          (pCVar4 = (CCharacter *)(this_ptr->base).victim,
          pCVar9 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
          pCVar9 == (CDemonActor *)0x0)) &&
         (pCVar4 = (CCharacter *)(this_ptr->base).victim,
         iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        pCVar9 = (this_ptr->base).victim;
        fVar3 = local_68.x - (pCVar9->location).position.x;
        fVar15 = local_68.z - (pCVar9->location).position.z;
        bVar6 = (float)0.80000000000000004 < SQRT(fVar15 * fVar15 + fVar3 * fVar3);
        if (((ABS(local_68.y - (((this_ptr->base).victim)->location).position.y) <=
              (float)4) &&
            ((bVar6 || (pCVar4 = (CCharacter *)(this_ptr->base).victim,
                       iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                         (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)))) &&
           (!bVar6)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar8 == 0x29b) {
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_104,INT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar10);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar4 = (CCharacter *)(this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar4->base).vtable._uc)->_uc).processDamage)(pCVar4,&local_164);
        local_3c = (int)ROUND(ROUND(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&local_8c,(CVector3f *)0x0,local_3c,0);
        pCVar4 = (CCharacter *)(this_ptr->base).victim;
        iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
        if (iVar7 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          pCVar4 = (CCharacter *)(this_ptr->base).victim;
          (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    goto LAB_004f9c99;
  }
  fVar3 = (this_ptr->base).speed;
  fVar15 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar15 * fVar3;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  iVar7 = pSVar11->state_index;
  local_24 = iVar7;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar9 = (this_ptr->base).victim;
        if (pCVar9 == (CDemonActor *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar9[0x1b].prev_actor == (CDemonActor *)0x0) {
          local_80.x = (pCVar9->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_80.y = (pCVar9->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_80.z = (pCVar9->location).position.z -
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
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar3 = 2.0f;
      pCVar9 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar9 == (CDemonActor *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        pCVar9 = pCVar9[0x1b].prev_actor;
        if (pCVar9 == (CDemonActor *)0x0) {
          local_28 = 2.0f;
          max_distance = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar15 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_98.z = fVar3;
          pCVar10 = &local_98;
          pCVar5 = (this_ptr->base).victim;
          local_98.x = (float)pCVar9;
          local_98.y = (float)pCVar9;
          path_map = (*((pCVar5->vtable)._ub)->getPathMap)(pCVar5);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             path_map,pCVar10,fVar15,max_distance);
          if (-1 < iVar7) {
            pCVar9 = (this_ptr->base).victim;
            local_a4 = (this_ptr->base).base.base.location.position.x -
                       (pCVar9->location).position.x;
            local_9c = (this_ptr->base).base.base.location.position.z -
                       (pCVar9->location).position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < 4.0f) &&
                (pCVar4 = (CCharacter *)(this_ptr->base).victim,
                pCVar9 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
                pCVar9 == (CDemonActor *)0x0)) &&
               ((this_ptr->base).base.model.part_data.visibility_flags
                [*(int *)(this_ptr->unk + 0x34)] != 0)) {
              pCVar9 = (this_ptr->base).victim;
              local_74.x = (pCVar9->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_74.y = (pCVar9->location).position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_74.z = (pCVar9->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar7 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,8,1);
                iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk);
                if (iVar7 == 0) {
                  uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  *(uint *)this_ptr->unk = uVar14;
                }
              }
            }
            if ((local_1c <= local_28) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar9 = (this_ptr->base).victim;
              local_d4.x = (pCVar9->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar9->location).position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar9->location).position.z -
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
            fVar3 = *(float *)(this_ptr->unk + 8) - delta_time;
            *(float *)(this_ptr->unk + 8) = fVar3;
            if (fVar3 < 0.0) {
              uVar8 = *(uint *)this_ptr->unk;
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = '\0';
              this_ptr->unk[0xb] = '\0';
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
                 iVar7 == 0)) {
                uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                *(uint *)this_ptr->unk = uVar14;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(float *)(this_ptr->unk + 8) = local_14;
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
      fVar3 = *(float *)(this_ptr->unk + 8) - delta_time * 4.0f;
      *(float *)(this_ptr->unk + 8) = fVar3;
      if (fVar3 < 0.0) {
        uVar8 = *(uint *)this_ptr->unk;
        this_ptr->unk[8] = '\0';
        this_ptr->unk[9] = '\0';
        this_ptr->unk[10] = '\0';
        this_ptr->unk[0xb] = '\0';
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
        if ((iVar7 == 0) &&
           (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
           iVar7 == 0)) {
          uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          *(uint *)this_ptr->unk = uVar14;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(this_ptr->unk + 8) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_b0,&g_ZeroVector,
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                           INT_02db89fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_5c,pCVar10);
      iVar7 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      if (iVar7 != 0) {
        iVar12 = 0;
        iVar7 = 0;
        while (iVar7 < g_CDemonSetPtr->enemy_count) {
          pCVar13 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar12),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar13 == (CImp *)0x0) || (pCVar13 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar13->base).victim)) {
            iVar7 = iVar7 + 1;
            iVar12 = iVar12 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar13->base).base.model.motion_controller,3,1);
            iVar7 = iVar7 + 1;
            iVar12 = iVar12 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_c8,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar4 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), iVar7 == 0)) {
        pCVar9 = (this_ptr->base).victim;
        pCVar13 = (CImp *)pCVar9[0x1b].prev_actor;
        if (this_ptr == pCVar13) {
          fVar3 = (float)0.75;
          pCVar5 = (pCVar13->base).victim;
          (pCVar13->base).base.base.location.position.x =
               (pCVar9->location).position.x -
               (pCVar13->base).base.base.orient_matrix.m[0].z * fVar3;
          (pCVar13->base).base.base.location.position.z =
               (pCVar5->location).position.z -
               (pCVar13->base).base.base.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_004f9fc4:
      iVar7 = 1;
    }
    else {
LAB_004fa163:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar8 < 3) goto LAB_004f9fc4;
    if (uVar8 != 3) goto LAB_004fa163;
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
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
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
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_fffffe60);
  return;
}
