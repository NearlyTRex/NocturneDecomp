// Name: core_bride.cpp_CBride_process_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00424559]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  int iVar4;
  SMotion *pSVar5;
  int iVar7;
  CVector3f *pCVar6;
  uint uVar9;
  CPathMap *path_map;
  CDemonActor *pCVar7;
  uint uVar8;
  CDemonActor *pCVar10;
  CVector3f *pCVar11;
  CPathMap *pCVar9;
  SMotion *pSVar13;
  float fVar14;
  SDamageInfo *pSVar15;
  SDamageInfo local_1f4;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
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
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_34;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  CCharacter *pCVar3;
  float fVar10;
  CDeformableModelInstance *pCVar1;
  CEnemy_full_vtable *pCVar2;
  float min_distance;
  float fVar11;
  SDamageInfo *pSVar12;
  float max_distance;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    if (0.0 <= this_ptr->action_timer) {
      this_ptr->action_timer = this_ptr->action_timer - delta_time;
    }
    pCVar4 = &(this_ptr->base).base.model;
    local_18 = -1.0;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar4->motion_controller);
    uVar9 = pSVar5->state_index;
    if (uVar9 < 5) {
      if (uVar9 == 0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,1,1);
            iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if ((iVar7 == 0) &&
               (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
               iVar7 == 0)) {
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar9;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else if (uVar9 == 1) {
        if (this_ptr->action_timer <= 0.0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
          this_ptr->action_timer = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,3,1);
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
          if ((iVar7 == 0) &&
             (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
             iVar7 == 0)) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            this_ptr->sfx_handles[1] = uVar9;
          }
        }
        fVar14 = (this_ptr->base).speed;
        fVar6 = (float)1.57079632675;
        pCVar2 = (this_ptr->base).base.base.vtable._ue;
        pCVar4 = &(this_ptr->base).base.model;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).speed * (float)3 * delta_time;
        (this_ptr->base).base.turn_speed = fVar14 * fVar6 * delta_time;
        (*(pCVar2->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,0,1);
          }
        }
        else {
          fVar11 = 0.17453292;
          fVar10 = 1.0;
          local_104.x = 0.0;
          local_104.z = 2.5f;
          pCVar11 = &local_104;
          local_104.y = 0.0;
          pCVar5 = (this_ptr->base).victim;
          path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar11,
                             fVar10,fVar11);
          if (iVar7 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,0,1);
          }
          else if (((0 < iVar7) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                  (pCVar5 = (this_ptr->base).victim,
                  pCVar7 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
                  pCVar7 == (CDemonActor *)0x0)) {
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            if (iVar7 == 0) {
              iVar7 = 6;
            }
            else {
              iVar7 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,iVar7,1);
            iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if ((iVar7 == 0) &&
               (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
               iVar7 == 0)) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
          }
        }
      }
    }
    else if (uVar9 < 6) {
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
      else {
        pCVar10 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5);
        if (pCVar10 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).attack_cooldown = local_14;
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar4->motion_controller);
          local_14 = local_20;
          if (local_20 <= (float)3) {
            local_18 = 2.5f;
            if (((double)local_20 < 1.0) || (2 < (double)local_20)) {
              if (((float)3 <= local_20) &&
                 (((double)local_20 <= 4 &&
                  ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
                pSVar12 = &local_140;
                local_140.attacker = (CDemonActor *)this_ptr;
                local_140.wielder = (CDemonActor *)this_ptr;
                fVar14 = 0.4;
                local_14 = local_140.damage_amount;
                pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_a4,&CVector3f_00822c94,
                                     (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                     + g_BrideIndices[1]);
                pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                    ((CDemonActor *)this_ptr,&local_68,pCVar11);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                          (&this_ptr->base,pCVar11,fVar14,pSVar12);
              }
            }
            else if ((this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[3]] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1f4);
              local_1f4.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
              local_1f4.attacker = (CDemonActor *)this_ptr;
              local_1f4.wielder = (CDemonActor *)this_ptr;
              pSVar15 = &local_1f4;
              fVar14 = 0.4;
              local_14 = local_1f4.damage_amount;
              pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_e0,&CVector3f_00822c94,
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                   g_BrideIndices[2]);
              pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                  ((CDemonActor *)this_ptr,&local_f8,pCVar11);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                        (&this_ptr->base,pCVar11,fVar14,pSVar15);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
      }
    }
    else if (uVar9 < 7) {
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
      else {
        pCVar10 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5);
        if (pCVar10 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).attack_cooldown = local_14;
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar4->motion_controller);
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= (double)local_1c) && ((double)local_1c <= 2)) ||
               (((float)5 <= local_1c && ((double)local_1c <= 6)))) {
              if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]]
                  != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)this_ptr;
                local_17c.wielder = (CDemonActor *)this_ptr;
                pSVar15 = &local_17c;
                fVar14 = 0.4;
                local_14 = local_17c.damage_amount;
                pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_80,&CVector3f_00822c94,
                                     (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                     + g_BrideIndices[2]);
                pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                    ((CDemonActor *)this_ptr,&local_b0,pCVar11);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                          (&this_ptr->base,pCVar11,fVar14,pSVar15);
              }
            }
            else if (((((float)3 <= local_1c) && ((double)local_1c <= 4)
                      ) || (((float)7 <= local_1c &&
                            ((double)local_1c <= 8)))) &&
                    ((this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[1]] != 0)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
              local_1b8.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
              local_1b8.attacker = (CDemonActor *)this_ptr;
              local_1b8.wielder = (CDemonActor *)this_ptr;
              pSVar15 = &local_1b8;
              fVar14 = 0.4;
              local_14 = local_1b8.damage_amount;
              pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_98,&CVector3f_00822c94,
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                   g_BrideIndices[1]);
              pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                  ((CDemonActor *)this_ptr,&local_74,pCVar11);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                        (&this_ptr->base,pCVar11,fVar14,pSVar15);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
      }
    }
    else if ((uVar9 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar4,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_d4,pCVar6);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_d4,0);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CCharacter *)0x0) && (0.0 <= local_18)) {
      fVar14 = (this_ptr->base).speed;
      fVar6 = (float)2.5;
      max_distance = 0.5235988;
      min_distance = 3.0;
      (this_ptr->base).base.turn_speed =
           (this_ptr->base).speed * (float)1.57079632675 * delta_time;
      (this_ptr->base).base.walk_step_speed = delta_time * fVar6 * fVar14;
      local_8c.x = 0.0;
      local_8c.z = local_18;
      pCVar11 = &local_8c;
      local_8c.y = 0.0;
      pCVar5 = (this_ptr->base).victim;
      pCVar9 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar9,pCVar11,min_distance,max_distance);
      if (iVar7 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    local_24 = delta_time * (this_ptr->base).speed;
    while (0.0 < local_24) {
      iVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&(this_ptr->base).base.model.motion_controller,&local_24);
      if (iVar7 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar7);
      }
    }
    if (0.0 < (this_ptr->base).attack_cooldown) {
      (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar7 != 0) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_ec.x = (this_ptr->base).base.velocity.x * delta_time +
                   (this_ptr->base).base.position_delta.x;
      local_ec.y = (this_ptr->base).base.velocity.y * delta_time +
                   (this_ptr->base).base.position_delta.y;
      local_ec.z = delta_time * (this_ptr->base).base.velocity.z +
                   (this_ptr->base).base.position_delta.z;
      pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->base).base.model.motion_controller);
      if (pSVar13->state_index != 1) {
        local_ec.x = local_ec.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_ec.y = local_ec.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_ec.z = local_ec.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_ec);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],g_BrideIndices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],g_BrideIndices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],g_BrideIndices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],g_BrideIndices[4],0.2);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],g_BrideIndices[0],0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
    }
  }
  return;
}
