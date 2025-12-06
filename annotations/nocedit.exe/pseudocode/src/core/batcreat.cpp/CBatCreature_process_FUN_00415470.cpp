// Name: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// Address: 00415470
// Address Range: [[00415470, 00415d68]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_process_FUN_00415470(CBatCreature * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CEnemy *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar11;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  uint local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  uint local_7c;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  local_2c = in_stack_00000008 * (this_ptr->base_enemy).speed;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base_enemy).base_character.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar3 = (this_ptr->base_enemy).speed;
  fVar5 = (float)3.1415926535000001;
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar7 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      if (iVar7 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
        break;
      }
      local_f4.x = *(float *)(iVar7 + 0x20) -
                   (this_ptr->base_enemy).base_character.base_actor.location.position.x;
      local_f4.y = *(float *)(iVar7 + 0x24) -
                   (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      local_f4.z = *(float *)(iVar7 + 0x28) -
                   (this_ptr->base_enemy).base_character.base_actor.location.position.z;
      local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y);
      local_1c = local_28;
      if (local_28 < DAT_0065a5ac) {
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b8,&local_f4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_b8.y -
                              (this_ptr->base_enemy).base_character.base_actor.orient.bank);
        if (ABS(local_14) < (float)0.52359877558333301) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,3,1);
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            (*(uint *)(this_ptr->field1_0xbeb4 + 0x44));
          if ((iVar7 == 0) &&
             (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                (*(uint *)(this_ptr->field1_0xbeb4 + 0x48)), iVar7 == 0)) {
            uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                               ((CDemonActor *)this_ptr,"batman-attack?.wav");
            *(uint *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
          }
        }
      }
      if ((this_ptr->base_enemy).guard_distance <= local_1c) break;
      if (local_1c < _DAT_0065a5b8) {
        iVar7 = 1;
        (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[2] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[3] = '\0';
      }
      else {
        (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[2] = '\0';
        (this_ptr->base_enemy).field6_0xbe38[3] = '\0';
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar7 != 0) {
          iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          local_e8.x = *(float *)(iVar7 + 0x20) -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_e8.y = *(float *)(iVar7 + 0x24) -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_e8.z = *(float *)(iVar7 + 0x28) -
                       (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_64,&local_e8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_64.y -
                                (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          if ((ABS(local_14) < (float)0.52359877558333301) &&
             (ABS(*(float *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x24) -
                  (this_ptr->base_enemy).base_character.base_actor.location.position.y) <
              (float)2)) {
            iVar7 = 2;
            goto LAB_004158fb;
          }
        }
        iVar7 = 1;
      }
LAB_004158fb:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar7,1);
      if ((((*(int *)(this_ptr->field1_0xbeb4 + 0x4c) == 0) &&
           (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                              (*(uint *)(this_ptr->field1_0xbeb4 + 0x44)), iVar7 == 0)) &&
          (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                             (*(uint *)(this_ptr->field1_0xbeb4 + 0x48)), iVar7 == 0)) &&
         (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            (*(uint *)(this_ptr->field1_0xbeb4 + 0x40)), iVar7 == 0)) {
        uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                           ((CDemonActor *)this_ptr,"batman-alert.wav");
        this_ptr->field1_0xbeb4[0x4c] = '\x01';
        this_ptr->field1_0xbeb4[0x4d] = '\0';
        this_ptr->field1_0xbeb4[0x4e] = '\0';
        this_ptr->field1_0xbeb4[0x4f] = '\0';
        *(uint *)(this_ptr->field1_0xbeb4 + 0x40) = uVar11;
      }
      break;
    case 1:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      fVar3 = DAT_0065a5ac;
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        local_24 = DAT_0065a5ac;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
        local_7c = 0;
        local_74 = fVar3;
        local_78 = 0;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))()
        ;
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (-1 < iVar9) {
          pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
          iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          local_a0 = (pCVar1->position).x - *(float *)(iVar9 + 0x20);
          local_98 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                     *(float *)(iVar9 + 0x28);
          local_9c = 0;
          local_20 = SQRT(local_98 * local_98 + local_a0 * local_a0);
          local_18 = local_20;
          if ((_DAT_0065a5b8 < local_20) &&
             ((this_ptr->base_enemy).field6_0xbe38[0] = '\0',
             (this_ptr->base_enemy).field6_0xbe38[1] = '\0',
             (this_ptr->base_enemy).field6_0xbe38[2] = '\0',
             (this_ptr->base_enemy).field6_0xbe38[3] = '\0', iVar7 == 1)) {
            iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            local_94.x = *(float *)(iVar7 + 0x20) - (pCVar1->position).x;
            local_94.y = *(float *)(iVar7 + 0x24) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_94.z = *(float *)(iVar7 + 0x28) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_dc,&local_94);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_dc.y -
                                  (this_ptr->base_enemy).base_character.base_actor.orient.bank);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (ABS(*(float *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x24) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.y) <
                (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              uVar4 = *(uint *)(this_ptr->field1_0xbeb4 + 0x44);
              (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[2] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[3] = '\0';
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar4);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->field1_0xbeb4 + 0x48)), iVar7 == 0)) {
                uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(uint *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
              }
            }
          }
          if ((local_20 <= local_24) && (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0)) {
            iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            local_88.x = *(float *)(iVar7 + 0x20) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.x;
            local_88.y = *(float *)(iVar7 + 0x24) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_88.z = *(float *)(iVar7 + 0x28) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d0,&local_88);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_d0.y -
                                  (this_ptr->base_enemy).base_character.base_actor.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,3,1);
              uVar4 = *(uint *)(this_ptr->field1_0xbeb4 + 0x44);
              (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[2] = -0x80;
              (this_ptr->base_enemy).field6_0xbe38[3] = '?';
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar4);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->field1_0xbeb4 + 0x48)), iVar7 == 0)) {
                uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(uint *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
              }
            }
          }
          if ((this_ptr->base_enemy).guard_distance < local_20) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec4);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_ac,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[DAT_00822754].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_40,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 8:
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (this_ptr_00,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_100,pCVar10);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base_enemy).pool_me = 1;
      }
    }
    goto switchD_00415d62_caseD_2;
  }
  uVar4 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00415540:
      iVar7 = 1;
    }
    else {
LAB_004156d6:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00415540;
    if (uVar4 != 3) goto LAB_004156d6;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
switchD_00415d62_caseD_2:
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_c4 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_c0 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_bc = in_stack_00000008 *
               *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pCVar10 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
    local_58 = local_c4 + *(float *)pcVar2;
    local_54 = local_c0 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_50 = local_bc + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    local_70 = local_58 + pCVar10->x;
    local_6c = local_54 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    local_68 = local_50 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar6 = &this_ptr->base_enemy;
    (pCVar6->base_character).field2_0x240c[0x18] = '\0';
    (pCVar6->base_character).field2_0x240c[0x19] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
