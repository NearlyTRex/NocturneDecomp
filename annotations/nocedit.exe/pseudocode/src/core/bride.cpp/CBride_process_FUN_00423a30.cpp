// Name: core_bride.cpp_CBride_process_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00423ace] [00423b02, 00423ce5] [00423d1a, 00423e83] [0042404a, 0042409a] [004242b3, 00424559]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  uint uVar3;
  CEnemy_full_vtable *pCVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int extraout_EAX;
  CVector3f *pCVar8;
  int extraout_EAX_00;
  uint uVar9;
  SDamageInfo local_1f4;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  uint local_104;
  uint local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
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
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    if (0.0 <= *(float *)(this_ptr->unk + 0x2c)) {
      *(float *)(this_ptr->unk + 0x2c) = *(float *)(this_ptr->unk + 0x2c) - delta_time;
    }
    pCVar1 = &(this_ptr->base).base.model;
    local_18 = -1.0;
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    uVar3 = pSVar7->state_index;
    if (uVar3 < 5) {
      if (uVar3 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
          if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x30));
            if ((iVar6 == 0) &&
               (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x34))
               , iVar6 == 0)) {
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              *(uint *)(this_ptr->unk + 0x34) = uVar9;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else if (uVar3 == 1) {
        if (*(float *)(this_ptr->unk + 0x2c) <= 0.0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(this_ptr->unk + 0x2c) = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x30));
          if ((iVar6 == 0) &&
             (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x34)),
             iVar6 == 0)) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            *(uint *)(this_ptr->unk + 0x34) = uVar9;
          }
        }
        fVar2 = (this_ptr->base).speed;
        fVar5 = (float)1.57079632675;
        local_1f4.damage_amount = delta_time;
        pCVar4 = (this_ptr->base).base.base.vtable._ue;
        local_1f4.unknown = (int)this_ptr;
        pCVar1 = &(this_ptr->base).base.model;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).speed * (float)3 * delta_time;
        (this_ptr->base).base.turn_speed = fVar2 * fVar5 * delta_time;
        (*(pCVar4->_ue).enemyfunc2)();
        if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
        }
        else {
          local_104 = 0;
          local_fc = 2.5f;
          local_100 = 0;
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          if (iVar6 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else if (((0 < iVar6) && (*(float *)(this_ptr->base).unk2 <= 0.0)) &&
                  (iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) +
                                       0x108))(), iVar6 == 0)) {
            iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            if (iVar6 == 0) {
              iVar6 = 6;
            }
            else {
              iVar6 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,iVar6,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x30));
            if ((iVar6 == 0) &&
               (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x34))
               , iVar6 == 0)) {
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              *(uint *)(this_ptr->unk + 0x34) = uVar9;
            }
          }
        }
      }
    }
    else if (uVar3 < 6) {
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar6 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))();
        if (iVar6 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          *(float *)(this_ptr->base).unk2 = local_14;
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
                  ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0xc)]
                   != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_140.attacker = (CDemonActor *)this_ptr;
                local_140.wielder = (CDemonActor *)this_ptr;
                local_14 = local_140.damage_amount;
                pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_a4,(CVector3f *)&FLOAT_00822c94,
                                    (CMatrix3x4f *)
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                    [INT_00822ce0].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_68,pCVar8);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else if ((this_ptr->base).base.model.part_visibility_flags
                     [*(int *)(this_ptr->unk + 0x14)] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1f4);
              local_1f4.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_1f4.attacker = (CDemonActor *)this_ptr;
              local_1f4.wielder = (CDemonActor *)this_ptr;
              local_14 = local_1f4.damage_amount;
              pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_e0,(CVector3f *)&FLOAT_00822c94,
                                  (CMatrix3x4f *)
                                  (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                  [INT_00822ce4].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_f8,pCVar8);
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
    else if (uVar3 < 7) {
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar6 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))();
        if (iVar6 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          *(float *)(this_ptr->base).unk2 = local_14;
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar1->motion_controller);
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)local_1c, (float)5 <= local_1c &&
                (local_2c <= 6)))) {
              if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x14)]
                  != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)this_ptr;
                local_17c.wielder = (CDemonActor *)this_ptr;
                local_14 = local_17c.damage_amount;
                pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_80,(CVector3f *)&FLOAT_00822c94,
                                    (CMatrix3x4f *)
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                    [INT_00822ce4].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_b0,pCVar8);
                core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)3 <= local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)local_1c, (float)7 <= local_1c &&
                   (local_34 <= 8)))) &&
                 ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0xc)]
                  != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
                local_1b8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)this_ptr;
                local_1b8.wielder = (CDemonActor *)this_ptr;
                local_14 = local_1b8.damage_amount;
                pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_98,(CVector3f *)&FLOAT_00822c94,
                                    (CMatrix3x4f *)
                                    (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                    [INT_00822ce0].m);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_74,pCVar8);
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
    else if ((uVar3 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_d4,pCVar8);
      core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if ((*(int *)((this_ptr->base).unk2 + 4) != 0) && (0.0 <= local_18)) {
      fVar2 = (this_ptr->base).speed;
      fVar5 = (float)2.5;
      (this_ptr->base).base.turn_speed =
           (this_ptr->base).speed * (float)1.57079632675 * delta_time;
      (this_ptr->base).base.walk_step_speed = delta_time * fVar5 * fVar2;
      local_8c = 0;
      local_84 = local_18;
      local_88 = 0;
      (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar6 != 1) {
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
      iVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&(this_ptr->base).base.model.motion_controller);
      if (iVar6 != 0x11) {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    if (0.0 < *(float *)(this_ptr->base).unk2) {
      *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
    }
    (this_ptr->base).base.base.orient.bank =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.bank;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      (this_ptr->base).base.field7_0x2428.y =
           (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
      local_bc = (this_ptr->base).base.field7_0x2428.x * delta_time;
      local_b8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
      local_b4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
      local_ec = local_bc + (this_ptr->base).base.field6_0x241c.x;
      local_e8 = local_b8 + (this_ptr->base).base.field6_0x241c.y;
      local_e4 = local_b4 + (this_ptr->base).base.field6_0x241c.z;
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (pSVar7->state_index != 1) {
        local_ec = local_ec + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_e8 = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_e4 = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 8)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x10)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b810((CCharacter *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042b670((CCharacter *)this_ptr);
    }
  }
  return;
}
