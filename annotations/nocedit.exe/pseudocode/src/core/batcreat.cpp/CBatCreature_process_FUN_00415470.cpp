// Name: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// Address: 00415470
// Address Range: [[00415470, 00415d68]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_process_FUN_00415470(CBatCreature * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_0041544c = 004157c1
//   TerminatedCString s_s_confused_while_walking_006155cd
//   TerminatedCString s_batman_attack_wav_006155f7
//   TerminatedCString s_batman_alert_wav_0061560a
//   TerminatedCString s_batman_attack_wav_0061561b
//   TerminatedCString s_batman_attack_wav_0061562e
//   double DOUBLE_00615641 = 3.14159265350000
//   double DOUBLE_00615649 = 0.523598775583333
//   double DOUBLE_00615651 = 2
//   double DOUBLE_00615659 = 32
//   undefined4 DAT_0065a5ac
//   undefined4 DAT_0065a5b8
//   CGore* g_CGorePtr = 02d83364
//   undefined4 DAT_00822754
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a9660

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
  undefined4 uVar11;
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
  undefined4 local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  undefined4 local_7c;
  undefined4 local_78;
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
  fVar5 = (float)DOUBLE_00615641;
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
        if (ABS(local_14) < (float)DOUBLE_00615649) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,3,1);
          iVar7 = sound_sndmain_cpp_FUN_005a9660();
          if ((iVar7 == 0) && (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) {
            uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                               ((CDemonActor *)this_ptr,"batman-attack?.wav");
            *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
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
          if ((ABS(local_14) < (float)DOUBLE_00615649) &&
             (ABS(*(float *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x24) -
                  (this_ptr->base_enemy).base_character.base_actor.location.position.y) <
              (float)DOUBLE_00615651)) {
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
           (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) &&
          (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) &&
         (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) {
        uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                           ((CDemonActor *)this_ptr,"batman-alert.wav");
        this_ptr->field1_0xbeb4[0x4c] = '\x01';
        this_ptr->field1_0xbeb4[0x4d] = '\0';
        this_ptr->field1_0xbeb4[0x4e] = '\0';
        this_ptr->field1_0xbeb4[0x4f] = '\0';
        *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x40) = uVar11;
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
            if ((ABS(local_14) < (float)DOUBLE_00615649) &&
               (ABS(*(float *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x24) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.y) <
                (float)DOUBLE_00615651)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[2] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[3] = '\0';
              iVar7 = sound_sndmain_cpp_FUN_005a9660();
              if ((iVar7 == 0) && (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) {
                uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
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
            if (ABS(local_14) < (float)DOUBLE_00615649) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,3,1);
              (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[2] = -0x80;
              (this_ptr->base_enemy).field6_0xbe38[3] = '?';
              iVar7 = sound_sndmain_cpp_FUN_005a9660();
              if ((iVar7 == 0) && (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) {
                uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x48) = uVar11;
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
         in_stack_00000008 * (float)DOUBLE_00615659;
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
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
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


// Assembly code:
// 00415470: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// 00415471: PUSH ESI
// 00415472: PUSH EDI
// 00415473: PUSH EBP
// 00415474: MOV EBP,ESP
// 00415476: SUB ESP,0x12c
// 0041547c: SUB EBP,0x7a
// 0041547f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00415485: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041548b: PUSH EBX
// 0041548c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00415491: ADD ESP,0x8
// 00415494: TEST EAX,EAX
// 00415496: JZ 0x0041567c
//   XREF to: 0041567c (CONDITIONAL_JUMP)
// 0041549c: LEA EAX,[EBX + 0x23ac]
// 004154a2: MOV dword ptr [EAX + 0x8],0x0
// 004154a9: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004154af: MOV EDX,dword ptr [EAX + 0x8]
// 004154b2: MOV dword ptr [EAX + 0x4],EDX
// 004154b5: MOV EDX,dword ptr [EAX + 0x4]
// 004154b8: MOV dword ptr [EAX],EDX
// 004154ba: FMUL float ptr [EBX + 0xbe24]
// 004154c0: LEA ESI,[EBX + 0x158]
// 004154c6: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 004154c9: FLD float ptr [EBP + 0x5e]
//   Label: LAB_004154c9
//   XREF to: Stack[-0x2c] (READ)
// 004154cc: FLDZ
// 004154ce: FCOMPP
// 004154d0: FNSTSW AX
// 004154d2: SAHF
// 004154d3: JC 0x00415684
//   XREF to: 00415684 (CONDITIONAL_JUMP)
// 004154d9: FLD float ptr [EBX + 0xbe24]
// 004154df: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004154e5: FMUL double ptr [0x00615641]
//   XREF to: 00615641 (READ)
// 004154eb: FMULP
// 004154ed: FLD float ptr [EBX + 0x23b4]
// 004154f3: LEA ESI,[EBX + 0x158]
// 004154f9: FSTP float ptr [EBX + 0x2434]
// 004154ff: PUSH ESI
// 00415500: FSTP float ptr [EBX + 0x2438]
// 00415506: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0041550b: ADD ESP,0x4
// 0041550e: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00415514: PUSH EBX
// 00415515: MOV EDI,dword ptr [EAX + 0x24]
// 00415518: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0041551d: ADD ESP,0x8
// 00415520: TEST EAX,EAX
// 00415522: JZ 0x00415d59
//   XREF to: 00415d59 (CONDITIONAL_JUMP)
// 00415528: MOV EAX,dword ptr [EBX + 0x25b0]
// 0041552e: CMP EAX,0x2
// 00415531: JNC 0x004156cb
//   XREF to: 004156cb (CONDITIONAL_JUMP)
// 00415537: CMP EAX,0x1
// 0041553a: JNZ 0x004156d6
//   XREF to: 004156d6 (CONDITIONAL_JUMP)
// 00415540: PUSH 0x1
//   Label: LAB_00415540
// 00415542: PUSH 0x1
// 00415544: LEA EAX,[EBX + 0x158]
//   Label: LAB_00415544
// 0041554a: PUSH EAX
// 0041554b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415550: ADD ESP,0xc
//   Label: LAB_00415550
// 00415553: LEA EAX,[EBX + 0x23ac]
// 00415559: MOV dword ptr [EAX + 0x8],0x0
// 00415560: MOV EDX,dword ptr [EAX + 0x8]
// 00415563: MOV dword ptr [EAX + 0x4],EDX
// 00415566: MOV EDX,dword ptr [EAX + 0x4]
// 00415569: MOV dword ptr [EAX],EDX
// 0041556b: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_2
// 00415571: FLDZ
// 00415573: FCOMPP
// 00415575: FNSTSW AX
// 00415577: SAHF
// 00415578: JNC 0x0041558c
//   XREF to: 0041558c (CONDITIONAL_JUMP)
// 0041557a: FLD float ptr [EBX + 0xbe38]
// 00415580: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00415586: FSTP float ptr [EBX + 0xbe38]
// 0041558c: PUSH EBX
//   Label: LAB_0041558c
// 0041558d: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 00415592: ADD ESP,0x4
// 00415595: TEST EAX,EAX
// 00415597: JZ 0x00415655
//   XREF to: 00415655 (CONDITIONAL_JUMP)
// 0041559d: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004155a3: FLD ST0
// 004155a5: FMUL double ptr [0x00615659]
//   XREF to: 00615659 (READ)
// 004155ab: FLD float ptr [EBX + 0x242c]
// 004155b1: FXCH
// 004155b3: FSUBR ST0,ST1
// 004155b5: LEA EDX,[EBX + 0x2428]
// 004155bb: FSTP ST1
// 004155bd: FSTP float ptr [EBX + 0x242c]
// 004155c3: FLD float ptr [EDX]
// 004155c5: FMUL ST1
// 004155c7: FSTP float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (WRITE)
// 004155ca: FLD float ptr [EDX + 0x4]
// 004155cd: FMUL ST1
// 004155cf: LEA ESI,[EBX + 0x241c]
// 004155d5: FSTP float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (WRITE)
// 004155d8: FMUL float ptr [EDX + 0x8]
// 004155db: LEA EAX,[EBX + 0x23ac]
// 004155e1: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 004155e4: FXCH
// 004155e6: FSTP float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 004155e9: FADD float ptr [ESI]
// 004155eb: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 004155ee: FXCH
// 004155f0: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004155f3: FADD float ptr [ESI + 0x4]
// 004155f6: FLD float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 004155f9: FXCH
// 004155fb: FSTP float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 004155fe: FADD float ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 00415601: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 00415604: FXCH
// 00415606: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 00415609: FADD float ptr [EAX]
// 0041560b: FLD float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 0041560e: FXCH
// 00415610: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 00415613: FADD float ptr [EAX + 0x4]
// 00415616: FLD float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 00415619: FXCH
// 0041561b: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 0041561e: FADD float ptr [EAX + 0x8]
// 00415621: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 00415624: MOV dword ptr [ESI + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 0041562b: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 0041562e: MOV dword ptr [ESI + 0x4],EDX
// 00415631: MOV EDX,dword ptr [ESI + 0x4]
// 00415634: MOV dword ptr [ESI],EDX
// 00415636: MOV dword ptr [EAX + 0x8],0x0
// 0041563d: MOV EDX,dword ptr [EAX + 0x8]
// 00415640: MOV dword ptr [EAX + 0x4],EDX
// 00415643: MOV EDX,dword ptr [EAX + 0x4]
// 00415646: MOV dword ptr [EAX],EDX
// 00415648: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 0041564b: PUSH EAX
// 0041564c: PUSH EBX
// 0041564d: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00415652: ADD ESP,0x8
// 00415655: PUSH EBX
//   Label: LAB_00415655
// 00415656: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0041565b: ADD ESP,0x4
// 0041565e: LEA EAX,[EBX + 0x158]
// 00415664: PUSH EAX
// 00415665: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0041566a: ADD ESP,0x4
// 0041566d: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00415673: PUSH EBX
// 00415674: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00415679: ADD ESP,0x8
// 0041567c: LEA ESP,[EBP + 0x7a]
//   Label: LAB_0041567c
//   XREF to: Stack[-0x10] (DATA)
// 0041567f: POP EBP
// 00415680: POP EDI
// 00415681: POP ESI
// 00415682: POP EBX
// 00415683: RET
// 00415684: LEA EAX,[EBP + 0x5e]
//   Label: LAB_00415684
//   XREF to: Stack[-0x2c] (DATA)
// 00415687: PUSH EAX
// 00415688: PUSH ESI
// 00415689: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0041568e: ADD ESP,0x8
// 00415691: PUSH EAX
// 00415692: PUSH EBX
// 00415693: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00415698: ADD ESP,0x8
// 0041569b: JMP 0x004154c9
//   XREF to: 004154c9 (UNCONDITIONAL_JUMP)
// 004156a0: PUSH 0x1
//   Label: LAB_004156a0
// 004156a2: PUSH 0x0
// 004156a4: LEA EAX,[EBX + 0x158]
// 004156aa: PUSH EAX
// 004156ab: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004156b0: ADD ESP,0xc
// 004156b3: PUSH EBX
// 004156b4: MOV EAX,0x6155cd
//   XREF to: 006155cd (DATA)
// 004156b9: PUSH EAX
//   XREF to: 006155cd (DATA)
// 004156ba: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004156c0: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004156c1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004156c6: JMP 0x00415550
//   XREF to: 00415550 (UNCONDITIONAL_JUMP)
// 004156cb: JBE 0x00415540
//   Label: LAB_004156cb
//   XREF to: 00415540 (CONDITIONAL_JUMP)
// 004156d1: CMP EAX,0x3
// 004156d4: JZ 0x004156a0
//   XREF to: 004156a0 (CONDITIONAL_JUMP)
// 004156d6: PUSH 0x1
//   Label: LAB_004156d6
// 004156d8: PUSH 0x0
// 004156da: JMP 0x00415544
//   XREF to: 00415544 (UNCONDITIONAL_JUMP)
// 004156df: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_8
// 004156e6: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 004156ec: CMP dword ptr [EBX + 0xdc],0x0
// 004156f3: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 004156f9: PUSH EAX
// 004156fa: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 004156fd: PUSH EAX
// 004156fe: PUSH ESI
// 004156ff: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00415704: ADD ESP,0xc
// 00415707: PUSH EAX
// 00415708: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0041570b: PUSH EAX
// 0041570c: PUSH EBX
// 0041570d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00415712: ADD ESP,0xc
// 00415715: PUSH 0x0
// 00415717: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0041571a: PUSH EAX
// 0041571b: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00415721: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 00415722: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00415727: ADD ESP,0xc
// 0041572a: MOV dword ptr [EBX + 0xbe28],0x1
// 00415734: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 00415739: LEA EAX,[EBP + 0xffffff4e]
//   Label: caseD_3
//   XREF to: Stack[-0x13c] (DATA)
// 0041573f: PUSH EAX
// 00415740: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00415745: ADD ESP,0x4
// 00415748: PUSH 0x41700000
// 0041574d: PUSH 0x40e00000
// 00415752: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00415757: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041575a: ADD ESP,0x8
// 0041575d: LEA EAX,[EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (DATA)
// 00415763: MOV EDX,dword ptr [0x00822754]
//   XREF to: 00822754 (READ)
// 00415769: PUSH EAX
// 0041576a: LEA EAX,[EDX*0x4 + 0x0]
// 00415771: MOV dword ptr [EBP + -0x7e],EBX
//   XREF to: Stack[-0x108] (WRITE)
// 00415774: SUB EAX,EDX
// 00415776: MOV dword ptr [EBP + -0x7a],EBX
//   XREF to: Stack[-0x104] (WRITE)
// 00415779: SHL EAX,0x4
// 0041577c: LEA EDX,[EBX + 0xfd8]
// 00415782: ADD EAX,EDX
// 00415784: PUSH 0x3ecccccd
// 00415789: PUSH EAX
// 0041578a: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041578f: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 00415792: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00415795: PUSH EAX
// 00415796: FSTP float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x138] (WRITE)
// 0041579c: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004157a1: ADD ESP,0xc
// 004157a4: PUSH EAX
// 004157a5: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x40] (DATA)
// 004157a8: PUSH EAX
// 004157a9: PUSH EBX
// 004157aa: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004157af: ADD ESP,0xc
// 004157b2: PUSH EAX
// 004157b3: PUSH EBX
// 004157b4: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004157b9: ADD ESP,0x10
// 004157bc: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 004157c1: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 004157c7: MOV EAX,dword ptr [EBX + 0x154]
// 004157cd: PUSH EBX
// 004157ce: CALL dword ptr [EAX + 0x158]
// 004157d4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004157da: ADD ESP,0x8
// 004157dd: TEST EAX,EAX
// 004157df: JZ 0x00415a2c
//   XREF to: 00415a2c (CONDITIONAL_JUMP)
// 004157e5: MOV EDX,EAX
// 004157e7: LEA EAX,[EBX + 0x20]
// 004157ea: FLD float ptr [EDX + 0x20]
// 004157ed: FSUB float ptr [EAX]
// 004157ef: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf4] (WRITE)
// 004157f2: FLD float ptr [EDX + 0x24]
// 004157f5: FSUB float ptr [EAX + 0x4]
// 004157f8: FST float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf0] (WRITE)
// 004157fb: FMUL float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf0] (READ)
// 004157fe: FLD float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf4] (READ)
// 00415801: FMUL ST0
// 00415803: FLD float ptr [EDX + 0x28]
// 00415806: FSUB float ptr [EAX + 0x8]
// 00415809: FXCH
// 0041580b: FADDP ST2,ST0
// 0041580d: FST float ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (WRITE)
// 00415810: FMUL float ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (READ)
// 00415813: FADDP
// 00415815: FSQRT
// 00415817: FSTP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (WRITE)
// 0041581a: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 0041581d: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 00415820: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00415823: FCOMP float ptr [0x0065a5ac]
//   XREF to: 0065a5ac (READ)
// 00415829: FNSTSW AX
// 0041582b: SAHF
// 0041582c: JC 0x0041597c
//   XREF to: 0041597c (CONDITIONAL_JUMP)
// 00415832: FLD float ptr [EBP + 0x6e]
//   Label: LAB_00415832
//   XREF to: Stack[-0x1c] (READ)
// 00415835: FCOMP float ptr [EBX + 0xbe34]
// 0041583b: FNSTSW AX
// 0041583d: SAHF
// 0041583e: JNC 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415844: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00415847: LEA ESI,[EBX + 0x158]
// 0041584d: FCOMP float ptr [0x0065a5b8]
//   XREF to: 0065a5b8 (READ)
// 00415853: FNSTSW AX
// 00415855: SAHF
// 00415856: JC 0x00415a0f
//   XREF to: 00415a0f (CONDITIONAL_JUMP)
// 0041585c: PUSH 0x3dcccccd
// 00415861: MOV dword ptr [EBX + 0xbe38],0x0
// 0041586b: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00415870: ADD ESP,0x4
// 00415873: TEST EAX,EAX
// 00415875: JZ 0x00415a23
//   XREF to: 00415a23 (CONDITIONAL_JUMP)
// 0041587b: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415881: LEA EDX,[EBX + 0x20]
// 00415884: FLD float ptr [EAX + 0x20]
// 00415887: FSUB float ptr [EDX]
// 00415889: FSTP float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (WRITE)
// 0041588c: FLD float ptr [EAX + 0x24]
// 0041588f: FSUB float ptr [EDX + 0x4]
// 00415892: FSTP float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (WRITE)
// 00415895: FLD float ptr [EAX + 0x28]
// 00415898: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 0041589b: PUSH EAX
// 0041589c: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x64] (DATA)
// 0041589f: FSUB float ptr [EDX + 0x8]
// 004158a2: PUSH EAX
// 004158a3: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (WRITE)
// 004158a6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004158ab: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 004158ae: ADD ESP,0x8
// 004158b1: FSUB float ptr [EBX + 0x34]
// 004158b4: SUB ESP,0x4
// 004158b7: FSTP float ptr [ESP]
// 004158ba: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004158bf: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004158c2: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004158c5: FABS
// 004158c7: ADD ESP,0x4
// 004158ca: FCOMP double ptr [0x00615649]
//   XREF to: 00615649 (READ)
// 004158d0: FNSTSW AX
// 004158d2: SAHF
// 004158d3: JNC 0x00415a23
//   XREF to: 00415a23 (CONDITIONAL_JUMP)
// 004158d9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004158df: FLD float ptr [EAX + 0x24]
// 004158e2: FSUB float ptr [EBX + 0x24]
// 004158e5: FABS
// 004158e7: FCOMP double ptr [0x00615651]
//   XREF to: 00615651 (READ)
// 004158ed: FNSTSW AX
// 004158ef: SAHF
// 004158f0: JNC 0x00415a23
//   XREF to: 00415a23 (CONDITIONAL_JUMP)
// 004158f6: PUSH 0x1
// 004158f8: PUSH 0x2
// 004158fa: PUSH ESI
//   Label: LAB_004158fa
// 004158fb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004158fb
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415900: ADD ESP,0xc
// 00415903: CMP dword ptr [EBX + 0xbf00],0x0
// 0041590a: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415910: MOV EDI,dword ptr [EBX + 0xbef8]
// 00415916: PUSH EDI
// 00415917: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041591c: ADD ESP,0x4
// 0041591f: TEST EAX,EAX
// 00415921: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415927: MOV EAX,dword ptr [EBX + 0xbefc]
// 0041592d: PUSH EAX
// 0041592e: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00415933: ADD ESP,0x4
// 00415936: TEST EAX,EAX
// 00415938: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 0041593e: MOV EDX,dword ptr [EBX + 0xbef4]
// 00415944: PUSH EDX
// 00415945: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041594a: ADD ESP,0x4
// 0041594d: TEST EAX,EAX
// 0041594f: JNZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415955: PUSH 0x61560a
//   XREF to: 0061560a (DATA)
// 0041595a: MOV EAX,dword ptr [EBX + 0x154]
// 00415960: PUSH EBX
// 00415961: CALL dword ptr [EAX + 0x24]
// 00415964: MOV dword ptr [EBX + 0xbf00],0x1
// 0041596e: ADD ESP,0x8
// 00415971: MOV dword ptr [EBX + 0xbef4],EAX
// 00415977: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 0041597c: LEA EAX,[EBP + -0x6a]
//   Label: LAB_0041597c
//   XREF to: Stack[-0xf4] (DATA)
// 0041597f: PUSH EAX
// 00415980: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 00415983: PUSH EAX
// 00415984: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00415989: FLD float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 0041598c: ADD ESP,0x8
// 0041598f: FSUB float ptr [EBX + 0x34]
// 00415992: SUB ESP,0x4
// 00415995: FSTP float ptr [ESP]
// 00415998: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0041599d: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004159a0: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004159a3: FABS
// 004159a5: ADD ESP,0x4
// 004159a8: FCOMP double ptr [0x00615649]
//   XREF to: 00615649 (READ)
// 004159ae: FNSTSW AX
// 004159b0: SAHF
// 004159b1: JNC 0x00415832
//   XREF to: 00415832 (CONDITIONAL_JUMP)
// 004159b7: PUSH 0x1
// 004159b9: PUSH 0x3
// 004159bb: PUSH ESI
// 004159bc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004159c1: ADD ESP,0xc
// 004159c4: MOV EDX,dword ptr [EBX + 0xbef8]
// 004159ca: PUSH EDX
// 004159cb: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004159d0: ADD ESP,0x4
// 004159d3: TEST EAX,EAX
// 004159d5: JNZ 0x00415832
//   XREF to: 00415832 (CONDITIONAL_JUMP)
// 004159db: MOV ECX,dword ptr [EBX + 0xbefc]
// 004159e1: PUSH ECX
// 004159e2: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004159e7: ADD ESP,0x4
// 004159ea: TEST EAX,EAX
// 004159ec: JNZ 0x00415832
//   XREF to: 00415832 (CONDITIONAL_JUMP)
// 004159f2: PUSH 0x6155f7
//   XREF to: 006155f7 (DATA)
// 004159f7: MOV EAX,dword ptr [EBX + 0x154]
// 004159fd: PUSH EBX
// 004159fe: CALL dword ptr [EAX + 0x24]
// 00415a01: ADD ESP,0x8
// 00415a04: MOV dword ptr [EBX + 0xbefc],EAX
// 00415a0a: JMP 0x00415832
//   XREF to: 00415832 (UNCONDITIONAL_JUMP)
// 00415a0f: PUSH 0x1
//   Label: LAB_00415a0f
// 00415a11: PUSH 0x1
// 00415a13: PUSH ESI
// 00415a14: MOV dword ptr [EBX + 0xbe38],0x0
// 00415a1e: JMP 0x004158fb
//   XREF to: 004158fb (UNCONDITIONAL_JUMP)
// 00415a23: PUSH 0x1
//   Label: LAB_00415a23
// 00415a25: PUSH 0x1
// 00415a27: JMP 0x004158fa
//   XREF to: 004158fa (UNCONDITIONAL_JUMP)
// 00415a2c: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00415a2c
//   XREF to: Stack[0x8] (READ)
// 00415a32: PUSH EBX
// 00415a33: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00415a38: ADD ESP,0x8
// 00415a3b: TEST EAX,EAX
// 00415a3d: JZ 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415a43: PUSH 0x1
// 00415a45: PUSH 0x1
// 00415a47: PUSH ESI
// 00415a48: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415a4d: ADD ESP,0xc
// 00415a50: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 00415a55: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 00415a5b: MOV EAX,dword ptr [EBX + 0x154]
// 00415a61: PUSH EBX
// 00415a62: CALL dword ptr [EAX + 0x158]
// 00415a68: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415a6e: ADD ESP,0x8
// 00415a71: TEST EAX,EAX
// 00415a73: JNZ 0x00415aab
//   XREF to: 00415aab (CONDITIONAL_JUMP)
// 00415a75: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00415a7b: PUSH EBX
// 00415a7c: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00415a81: ADD ESP,0x8
// 00415a84: TEST EAX,EAX
// 00415a86: JZ 0x00415a9a
//   XREF to: 00415a9a (CONDITIONAL_JUMP)
// 00415a88: PUSH 0x1
// 00415a8a: PUSH 0x1
// 00415a8c: PUSH ESI
// 00415a8d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415a92: ADD ESP,0xc
// 00415a95: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 00415a9a: PUSH 0x1
//   Label: LAB_00415a9a
// 00415a9c: PUSH EAX
// 00415a9d: PUSH ESI
// 00415a9e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415aa3: ADD ESP,0xc
// 00415aa6: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 00415aab: MOV EAX,[0x0065a5ac]
//   Label: LAB_00415aab
//   XREF to: 0065a5ac (READ)
// 00415ab0: PUSH 0x3e32b8c2
// 00415ab5: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00415ab8: LEA EAX,[EBX + 0x23ac]
// 00415abe: PUSH 0x3f000000
// 00415ac3: MOV dword ptr [EAX + 0x8],0x0
// 00415aca: XOR EDX,EDX
// 00415acc: MOV ECX,dword ptr [EAX + 0x8]
// 00415acf: MOV dword ptr [EAX + 0x4],ECX
// 00415ad2: MOV ECX,dword ptr [EAX + 0x4]
// 00415ad5: MOV dword ptr [EAX],ECX
// 00415ad7: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00415ada: MOV dword ptr [EBP + 0xe],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 00415add: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00415ae0: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 00415ae3: MOV dword ptr [EBP + 0x12],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00415ae6: PUSH EAX
// 00415ae7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415aed: PUSH EAX
// 00415aee: MOV EDX,dword ptr [EAX + 0x154]
// 00415af4: CALL dword ptr [EDX + 0xbc]
// 00415afa: ADD ESP,0x4
// 00415afd: PUSH EAX
// 00415afe: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415b04: ADD EAX,0x20
// 00415b07: PUSH EAX
// 00415b08: PUSH EBX
// 00415b09: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00415b0e: ADD ESP,0x18
// 00415b11: TEST EAX,EAX
// 00415b13: JL 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415b19: LEA EDX,[EBX + 0x20]
// 00415b1c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415b22: FLD float ptr [EDX]
// 00415b24: FSUB float ptr [EAX + 0x20]
// 00415b27: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 00415b2a: FLD float ptr [EDX + 0x4]
// 00415b2d: FSUB float ptr [EAX + 0x24]
// 00415b30: FLD float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 00415b33: FXCH
// 00415b35: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 00415b38: FLD float ptr [EDX + 0x8]
// 00415b3b: FSUB float ptr [EAX + 0x28]
// 00415b3e: FXCH
// 00415b40: FMUL float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 00415b43: FXCH
// 00415b45: FST float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 00415b48: FMUL float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (READ)
// 00415b4b: XOR EAX,EAX
// 00415b4d: FADDP
// 00415b4f: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00415b52: FSQRT
// 00415b54: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 00415b57: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00415b5a: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00415b5d: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00415b60: FCOMP float ptr [0x0065a5b8]
//   XREF to: 0065a5b8 (READ)
// 00415b66: FNSTSW AX
// 00415b68: SAHF
// 00415b69: JBE 0x00415c1f
//   XREF to: 00415c1f (CONDITIONAL_JUMP)
// 00415b6f: MOV dword ptr [EBX + 0xbe38],0x0
// 00415b79: CMP EDI,0x1
// 00415b7c: JNZ 0x00415c1f
//   XREF to: 00415c1f (CONDITIONAL_JUMP)
// 00415b82: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415b88: FLD float ptr [EAX + 0x20]
// 00415b8b: FSUB float ptr [EDX]
// 00415b8d: FSTP float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (WRITE)
// 00415b90: FLD float ptr [EAX + 0x24]
// 00415b93: FSUB float ptr [EDX + 0x4]
// 00415b96: FSTP float ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (WRITE)
// 00415b99: FLD float ptr [EAX + 0x28]
// 00415b9c: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 00415b9f: PUSH EAX
// 00415ba0: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 00415ba3: FSUB float ptr [EDX + 0x8]
// 00415ba6: PUSH EAX
// 00415ba7: FSTP float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 00415baa: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00415baf: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 00415bb2: ADD ESP,0x8
// 00415bb5: FSUB float ptr [EBX + 0x34]
// 00415bb8: SUB ESP,0x4
// 00415bbb: FSTP float ptr [ESP]
// 00415bbe: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00415bc3: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00415bc6: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00415bc9: FABS
// 00415bcb: ADD ESP,0x4
// 00415bce: FCOMP double ptr [0x00615649]
//   XREF to: 00615649 (READ)
// 00415bd4: FNSTSW AX
// 00415bd6: SAHF
// 00415bd7: JNC 0x00415c1f
//   XREF to: 00415c1f (CONDITIONAL_JUMP)
// 00415bd9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415bdf: FLD float ptr [EAX + 0x24]
// 00415be2: FSUB float ptr [EBX + 0x24]
// 00415be5: FABS
// 00415be7: FCOMP double ptr [0x00615651]
//   XREF to: 00615651 (READ)
// 00415bed: FNSTSW AX
// 00415bef: SAHF
// 00415bf0: JNC 0x00415c1f
//   XREF to: 00415c1f (CONDITIONAL_JUMP)
// 00415bf2: PUSH EDI
// 00415bf3: PUSH 0x2
// 00415bf5: PUSH ESI
// 00415bf6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415bfb: ADD ESP,0xc
// 00415bfe: MOV EDX,dword ptr [EBX + 0xbef8]
// 00415c04: PUSH EDX
// 00415c05: MOV dword ptr [EBX + 0xbe38],0x0
// 00415c0f: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00415c14: ADD ESP,0x4
// 00415c17: TEST EAX,EAX
// 00415c19: JZ 0x00415cf5
//   XREF to: 00415cf5 (CONDITIONAL_JUMP)
// 00415c1f: FLD float ptr [EBP + 0x6a]
//   Label: LAB_00415c1f
//   XREF to: Stack[-0x20] (READ)
// 00415c22: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00415c25: FNSTSW AX
// 00415c27: SAHF
// 00415c28: JA 0x00415ccb
//   XREF to: 00415ccb (CONDITIONAL_JUMP)
// 00415c2e: FLD float ptr [EBX + 0xbe38]
// 00415c34: FLDZ
// 00415c36: FCOMPP
// 00415c38: FNSTSW AX
// 00415c3a: SAHF
// 00415c3b: JC 0x00415ccb
//   XREF to: 00415ccb (CONDITIONAL_JUMP)
// 00415c41: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00415c47: LEA EDX,[EBX + 0x20]
// 00415c4a: FLD float ptr [EAX + 0x20]
// 00415c4d: FSUB float ptr [EDX]
// 00415c4f: FSTP float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 00415c52: FLD float ptr [EAX + 0x24]
// 00415c55: FSUB float ptr [EDX + 0x4]
// 00415c58: FSTP float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (WRITE)
// 00415c5b: FLD float ptr [EAX + 0x28]
// 00415c5e: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 00415c61: PUSH EAX
// 00415c62: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 00415c65: FSUB float ptr [EDX + 0x8]
// 00415c68: PUSH EAX
// 00415c69: FSTP float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (WRITE)
// 00415c6c: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00415c71: FLD float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (READ)
// 00415c74: ADD ESP,0x8
// 00415c77: FSUB float ptr [EBX + 0x34]
// 00415c7a: SUB ESP,0x4
// 00415c7d: FSTP float ptr [ESP]
// 00415c80: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00415c85: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00415c88: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00415c8b: FABS
// 00415c8d: ADD ESP,0x4
// 00415c90: FCOMP double ptr [0x00615649]
//   XREF to: 00615649 (READ)
// 00415c96: FNSTSW AX
// 00415c98: SAHF
// 00415c99: JNC 0x00415ccb
//   XREF to: 00415ccb (CONDITIONAL_JUMP)
// 00415c9b: PUSH 0x1
// 00415c9d: PUSH 0x3
// 00415c9f: LEA EAX,[EBX + 0x158]
// 00415ca5: PUSH EAX
// 00415ca6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415cab: ADD ESP,0xc
// 00415cae: MOV ESI,dword ptr [EBX + 0xbef8]
// 00415cb4: PUSH ESI
// 00415cb5: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 00415cbf: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00415cc4: ADD ESP,0x4
// 00415cc7: TEST EAX,EAX
// 00415cc9: JZ 0x00415d29
//   XREF to: 00415d29 (CONDITIONAL_JUMP)
// 00415ccb: FLD float ptr [EBP + 0x6a]
//   Label: LAB_00415ccb
//   XREF to: Stack[-0x20] (READ)
// 00415cce: FCOMP float ptr [EBX + 0xbe34]
// 00415cd4: FNSTSW AX
// 00415cd6: SAHF
// 00415cd7: JBE 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415cdd: PUSH 0x1
// 00415cdf: PUSH 0x0
// 00415ce1: LEA EAX,[EBX + 0x158]
// 00415ce7: PUSH EAX
// 00415ce8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00415ced: ADD ESP,0xc
// 00415cf0: JMP 0x0041556b
//   XREF to: 0041556b (UNCONDITIONAL_JUMP)
// 00415cf5: MOV ECX,dword ptr [EBX + 0xbefc]
//   Label: LAB_00415cf5
// 00415cfb: PUSH ECX
// 00415cfc: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00415d01: ADD ESP,0x4
// 00415d04: TEST EAX,EAX
// 00415d06: JNZ 0x00415c1f
//   XREF to: 00415c1f (CONDITIONAL_JUMP)
// 00415d0c: PUSH 0x61561b
//   XREF to: 0061561b (DATA)
// 00415d11: MOV EAX,dword ptr [EBX + 0x154]
// 00415d17: PUSH EBX
// 00415d18: CALL dword ptr [EAX + 0x24]
// 00415d1b: ADD ESP,0x8
// 00415d1e: MOV dword ptr [EBX + 0xbefc],EAX
// 00415d24: JMP 0x00415c1f
//   XREF to: 00415c1f (UNCONDITIONAL_JUMP)
// 00415d29: MOV EDI,dword ptr [EBX + 0xbefc]
//   Label: LAB_00415d29
// 00415d2f: PUSH EDI
// 00415d30: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00415d35: ADD ESP,0x4
// 00415d38: TEST EAX,EAX
// 00415d3a: JNZ 0x00415ccb
//   XREF to: 00415ccb (CONDITIONAL_JUMP)
// 00415d3c: PUSH 0x61562e
//   XREF to: 0061562e (DATA)
// 00415d41: MOV EAX,dword ptr [EBX + 0x154]
// 00415d47: PUSH EBX
// 00415d48: CALL dword ptr [EAX + 0x24]
// 00415d4b: ADD ESP,0x8
// 00415d4e: MOV dword ptr [EBX + 0xbefc],EAX
// 00415d54: JMP 0x00415ccb
//   XREF to: 00415ccb (UNCONDITIONAL_JUMP)
// 00415d59: CMP EDI,0x8
//   Label: LAB_00415d59
// 00415d5c: JA 0x0041556b
//   XREF to: 0041556b (CONDITIONAL_JUMP)
// 00415d62: JMP dword ptr [EDI*0x4 + 0x41544c]
//   Label: switchD
//   XREF to: 004157c1 (COMPUTED_JUMP)
//   XREF to: 00415a55 (COMPUTED_JUMP)
//   XREF to: 0041556b (COMPUTED_JUMP)
//   XREF to: 00415739 (COMPUTED_JUMP)
//   XREF to: 004156df (COMPUTED_JUMP)
//   XREF to: 0041544c (DATA)
