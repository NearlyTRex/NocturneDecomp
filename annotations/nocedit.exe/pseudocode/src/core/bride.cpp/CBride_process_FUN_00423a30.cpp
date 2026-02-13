// Name: core_bride.cpp_CBride_process_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00423ace] [00423b02, 00423ce5] [00423d1a, 00423e83] [0042404a, 0042409a] [004242b3, 00424559]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CEnemy_full_vtable *pCVar2;
  CCharacter *pCVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  uint uVar9;
  CPathMap *pCVar10;
  float fVar11;
  CVector3f *pCVar12;
  float in_stack_fffffe0c;
  float min_distance;
  char *in_stack_fffffe10;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  uint local_104;
  uint local_100;
  float local_fc;
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
  uint local_8c;
  uint local_88;
  float local_84;
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
  char *local_20;
  char *local_1c;
  float local_18;
  char *local_14;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 != 0) {
    if (0.0 <= (float)this_ptr->unk2) {
      this_ptr->unk2 = (int)((float)this_ptr->unk2 - delta_time);
    }
    pCVar1 = &(this_ptr->base).base.model;
    local_18 = -1.0;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    uVar7 = pSVar6->state_index;
    if (uVar7 < 5) {
      if (uVar7 == 0) {
        iVar5 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (iVar5 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CDemonActor *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
            in_stack_fffffe10 = *(char **)this_ptr->unk3;
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe10);
            if (iVar5 == 0) {
              in_stack_fffffe10 = *(char **)(this_ptr->unk3 + 4);
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe10);
              if (iVar5 == 0) {
                in_stack_fffffe10 = "ub-attack?.wav";
                uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"ub-attack?.wav");
                *(uint *)(this_ptr->unk3 + 4) = uVar9;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else if (uVar7 == 1) {
        if ((float)this_ptr->unk2 <= 0.0) {
          local_14 = (char *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          this_ptr->unk2 = (int)local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
          iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk3);
          if ((iVar5 == 0) &&
             (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 4)),
             iVar5 == 0)) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            *(uint *)(this_ptr->unk3 + 4) = uVar9;
          }
        }
        fVar11 = (this_ptr->base).speed;
        fVar4 = (float)1.57079632675;
        pCVar2 = (this_ptr->base).base.base.vtable._ue;
        pCVar1 = &(this_ptr->base).base.model;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).speed * (float)3 * delta_time;
        (this_ptr->base).base.turn_speed = fVar11 * fVar4 * delta_time;
        (*(pCVar2->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
        }
        else {
          fVar11 = 0.17453292;
          pCVar12 = (CVector3f *)0x3f800000;
          local_104 = 0;
          local_fc = 2.5f;
          local_100 = 0;
          pCVar8 = (this_ptr->base).victim;
          pCVar10 = (*((pCVar8->vtable)._ub)->getPathMap)(pCVar8);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             pCVar10,pCVar12,fVar11,in_stack_fffffe0c);
          if (iVar5 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else if (((0 < iVar5) && ((float)(this_ptr->base).unk2 <= 0.0)) &&
                  (pCVar3 = (CCharacter *)(this_ptr->base).victim,
                  pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                  pCVar8 == (CDemonActor *)0x0)) {
            iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            if (iVar5 == 0) {
              iVar5 = 6;
            }
            else {
              iVar5 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,iVar5,1);
            in_stack_fffffe10 = *(char **)this_ptr->unk3;
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe10);
            if (iVar5 == 0) {
              in_stack_fffffe10 = *(char **)(this_ptr->unk3 + 4);
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe10);
              if (iVar5 == 0) {
                in_stack_fffffe10 = "ub-attack?.wav";
                uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"ub-attack?.wav");
                *(uint *)(this_ptr->unk3 + 4) = uVar9;
              }
            }
          }
        }
      }
    }
    else if (uVar7 < 6) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar8 == (CDemonActor *)0x0) {
          local_14 = (char *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).unk2 = (int)local_14;
          local_20 = (char *)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                       (&pCVar1->motion_controller);
          local_4c = (double)(float)local_20;
          local_14 = local_20;
          if ((float)local_20 <= (float)3) {
            local_18 = 2.5f;
            if ((local_4c < 1.0) || (2 < local_4c)) {
              local_44 = (double)(float)local_20;
              if (((float)3 <= (float)local_20) &&
                 ((local_44 <= 4 &&
                  ((this_ptr->base).base.model.part_data.visibility_flags
                   [*(int *)(this_ptr->unk1 + 4)] != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_140.attacker = (CDemonActor *)this_ptr;
                local_140.wielder = (CDemonActor *)this_ptr;
                local_14 = (char *)local_140.damage_amount;
                pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_a4,(CVector3f *)&FLOAT_00822c94,
                                     (CMatrix3x4f *)
                                     (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                     [INT_00822ce0].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_68,pCVar12);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else if ((this_ptr->base).base.model.part_data.visibility_flags
                     [*(int *)(this_ptr->unk1 + 0xc)] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe0c);
              in_stack_fffffe10 = (char *)core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_14 = in_stack_fffffe10;
              pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_e0,(CVector3f *)&FLOAT_00822c94,
                                   (CMatrix3x4f *)
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                   [INT_00822ce4].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_f8,pCVar12);
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
    else if (uVar7 < 7) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar8 == (CDemonActor *)0x0) {
          local_14 = (char *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          (this_ptr->base).unk2 = (int)local_14;
          local_1c = (char *)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                       (&pCVar1->motion_controller);
          local_54 = (double)(float)local_1c;
          local_14 = local_1c;
          if ((float)local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)(float)local_1c, (float)5 <= (float)local_1c &&
                (local_2c <= 6)))) {
              if ((this_ptr->base).base.model.part_data.visibility_flags
                  [*(int *)(this_ptr->unk1 + 0xc)] != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)this_ptr;
                local_17c.wielder = (CDemonActor *)this_ptr;
                local_14 = (char *)local_17c.damage_amount;
                pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_80,(CVector3f *)&FLOAT_00822c94,
                                     (CMatrix3x4f *)
                                     (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                     [INT_00822ce4].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_b0,pCVar12);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else {
              local_5c = (double)(float)local_1c;
              if (((((float)3 <= (float)local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)(float)local_1c, (float)7 <= (float)local_1c &&
                   (local_34 <= 8)))) &&
                 ((this_ptr->base).base.model.part_data.visibility_flags
                  [*(int *)(this_ptr->unk1 + 4)] != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
                local_1b8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)this_ptr;
                local_1b8.wielder = (CDemonActor *)this_ptr;
                local_14 = (char *)local_1b8.damage_amount;
                pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_98,(CVector3f *)&FLOAT_00822c94,
                                     (CMatrix3x4f *)
                                     (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                     [INT_00822ce0].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_74,pCVar12);
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
    else if ((uVar7 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_d4,pCVar12);
      core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CDemonActor *)0x0) && (0.0 <= local_18)) {
      fVar11 = (this_ptr->base).speed;
      fVar4 = (float)2.5;
      min_distance = 0.5235988;
      pCVar12 = (CVector3f *)0x40400000;
      (this_ptr->base).base.turn_speed =
           (this_ptr->base).speed * (float)1.57079632675 * delta_time;
      (this_ptr->base).base.walk_step_speed = delta_time * fVar4 * fVar11;
      local_8c = 0;
      local_84 = local_18;
      local_88 = 0;
      pCVar8 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar8->vtable)._ub)->getPathMap)(pCVar8);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                         pCVar10,pCVar12,min_distance,(float)in_stack_fffffe10);
      if (iVar5 != 1) {
        in_stack_fffffe10 = (char *)0x1;
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
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&(this_ptr->base).base.model.motion_controller);
      if (uVar7 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
      }
    }
    if (0.0 < (float)(this_ptr->base).unk2) {
      (this_ptr->base).unk2 = (int)((float)(this_ptr->base).unk2 - delta_time);
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar5 != 0) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_bc = (this_ptr->base).base.velocity.x * delta_time;
      local_b8 = (this_ptr->base).base.velocity.y * delta_time;
      local_b4 = delta_time * (this_ptr->base).base.velocity.z;
      local_ec.x = local_bc + (this_ptr->base).base.position_delta.x;
      local_ec.y = local_b8 + (this_ptr->base).base.position_delta.y;
      local_ec.z = local_b4 + (this_ptr->base).base.position_delta.z;
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (pSVar6->state_index != 1) {
        local_ec.x = local_ec.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_ec.y = local_ec.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_ec.z = local_ec.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_ec);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
              ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe10);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,*(int *)this_ptr->unk1,INT_00822cf0,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)this_ptr->unk1] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk1 + 4),INT_00822ce8,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk1 + 8),INT_00822cf4,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk1 + 8)] != 0)
      {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk1 + 0xc),INT_00822cec,0.2);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk1 + 0x20),INT_00822cdc,0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
    }
  }
  return;
}
