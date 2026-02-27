// Name: core_bride.cpp_CBride_process_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00423ace] [00423b02, 00423ce5] [00423d1a, 00423e83] [0042404a, 0042409a] [004242b3, 00424559]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CEnemy_full_vtable *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  CDemonActor *pCVar7;
  uint uVar8;
  CPathMap *pCVar9;
  float fVar10;
  float min_distance;
  float fVar11;
  float max_distance;
  float in_stack_fffffe0c;
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
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    if (0.0 <= this_ptr->action_timer) {
      this_ptr->action_timer = this_ptr->action_timer - delta_time;
    }
    pCVar1 = &(this_ptr->base).base.model;
    local_18 = -1.0;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    uVar8 = pSVar5->state_index;
    if (uVar8 < 5) {
      if (uVar8 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CDemonActor *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
               iVar4 == 0)) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else if (uVar8 == 1) {
        if (this_ptr->action_timer <= 0.0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          this_ptr->action_timer = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
          if ((iVar4 == 0) &&
             (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
             iVar4 == 0)) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            this_ptr->sfx_handles[1] = uVar8;
          }
        }
        fVar10 = (this_ptr->base).speed;
        fVar11 = (float)1.57079632675;
        pCVar2 = (this_ptr->base).base.base.vtable._ue;
        pCVar1 = &(this_ptr->base).base.model;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).speed * (float)3 * delta_time;
        (this_ptr->base).base.turn_speed = fVar10 * fVar11 * delta_time;
        (*(pCVar2->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CDemonActor *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
        }
        else {
          fVar11 = 0.17453292;
          fVar10 = 1.0;
          local_104.x = 0.0;
          local_104.z = 2.5f;
          pCVar6 = &local_104;
          local_104.y = 0.0;
          pCVar7 = (this_ptr->base).victim;
          pCVar9 = (*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             pCVar9,pCVar6,fVar10,fVar11);
          if (iVar4 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else if (((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                  (pCVar3 = (CCharacter *)(this_ptr->base).victim,
                  pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                  pCVar7 == (CDemonActor *)0x0)) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            if (iVar4 == 0) {
              iVar4 = 6;
            }
            else {
              iVar4 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,iVar4,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
               iVar4 == 0)) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
          }
        }
      }
    }
    else if (uVar8 < 6) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar7 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).attack_cooldown = local_14;
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar1->motion_controller);
          local_4c = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)3) {
            local_18 = 2.5f;
            if ((local_4c < 1.0) || (2 < local_4c)) {
              local_44 = (double)local_20;
              if (((float)3 <= local_20) &&
                 ((local_44 <= 4 &&
                  ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_140.attacker = (CDemonActor *)this_ptr;
                local_140.wielder = (CDemonActor *)this_ptr;
                local_14 = local_140.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_a4,(CVector3f *)&FLOAT_00822c94,
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                    INT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_68,pCVar6);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else if ((this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[3]] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe0c);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_e0,(CVector3f *)&FLOAT_00822c94,
                                  (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                  INT_00822ce4);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_f8,pCVar6);
              core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if (uVar8 < 7) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar7 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).attack_cooldown = local_14;
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar1->motion_controller);
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)local_1c, (float)5 <= local_1c &&
                (local_2c <= 6)))) {
              if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]]
                  != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)this_ptr;
                local_17c.wielder = (CDemonActor *)this_ptr;
                local_14 = local_17c.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_80,(CVector3f *)&FLOAT_00822c94,
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                    INT_00822ce4);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_b0,pCVar6);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)3 <= local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)local_1c, (float)7 <= local_1c &&
                   (local_34 <= 8)))) &&
                 ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                  != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
                local_1b8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)this_ptr;
                local_1b8.wielder = (CDemonActor *)this_ptr;
                local_14 = local_1b8.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_98,(CVector3f *)&FLOAT_00822c94,
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                                    INT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_74,pCVar6);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if ((uVar8 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_d4,pCVar6);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_d4,0);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CDemonActor *)0x0) && (0.0 <= local_18)) {
      fVar10 = (this_ptr->base).speed;
      fVar11 = (float)2.5;
      max_distance = 0.5235988;
      min_distance = 3.0;
      (this_ptr->base).base.turn_speed =
           (this_ptr->base).speed * (float)1.57079632675 * delta_time;
      (this_ptr->base).base.walk_step_speed = delta_time * fVar11 * fVar10;
      local_8c.x = 0.0;
      local_8c.z = local_18;
      pCVar6 = &local_8c;
      local_8c.y = 0.0;
      pCVar7 = (this_ptr->base).victim;
      pCVar9 = (*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                         pCVar9,pCVar6,min_distance,max_distance);
      if (iVar4 != 1) {
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
      iVar4 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&(this_ptr->base).base.model.motion_controller);
      if (iVar4 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar4);
      }
    }
    if (0.0 < (this_ptr->base).attack_cooldown) {
      (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar4 != 0) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_bc = (this_ptr->base).base.velocity.x * delta_time;
      local_b8 = (this_ptr->base).base.velocity.y * delta_time;
      local_b4 = delta_time * (this_ptr->base).base.velocity.z;
      local_ec.x = local_bc + (this_ptr->base).base.position_delta.x;
      local_ec.y = local_b8 + (this_ptr->base).base.position_delta.y;
      local_ec.z = local_b4 + (this_ptr->base).base.position_delta.z;
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (pSVar5->state_index != 1) {
        local_ec.x = local_ec.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_ec.y = local_ec.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_ec.z = local_ec.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_ec);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
              ((CCharacter *)this_ptr,delta_time,in_stack_fffffe0c);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],INT_00822cf0,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],INT_00822ce8,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],INT_00822cf4,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],INT_00822cec,0.2);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],INT_00822cdc,0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
    }
  }
  return;
}
