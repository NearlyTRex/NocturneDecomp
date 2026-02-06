// Name: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// Address: 00415470
// Address Range: [[00415470, 00415d68]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CVector3f *pCVar9;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar10;
  SDamageInfo local_13c;
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
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar3 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar6 = pSVar7->state_index;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar6 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
        break;
      }
      local_f4.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
      local_f4.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
      local_f4.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y);
      local_1c = local_28;
      if (local_28 < 3.5f) {
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b8,&local_f4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_b8.y - (this_ptr->base).base.base.orient.bank);
        if (ABS(local_14) < (float)0.52359877558333301) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,3,1);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x44));
          if ((iVar6 == 0) &&
             (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x48)),
             iVar6 == 0)) {
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"batman-attack?.wav");
            *(uint *)(this_ptr->unk + 0x48) = uVar10;
          }
        }
      }
      if ((this_ptr->base).guard_distance <= local_1c) break;
      if (local_1c < 10.0f) {
        iVar6 = 1;
        (this_ptr->base).unk2[0] = '\0';
        (this_ptr->base).unk2[1] = '\0';
        (this_ptr->base).unk2[2] = '\0';
        (this_ptr->base).unk2[3] = '\0';
      }
      else {
        (this_ptr->base).unk2[0] = '\0';
        (this_ptr->base).unk2[1] = '\0';
        (this_ptr->base).unk2[2] = '\0';
        (this_ptr->base).unk2[3] = '\0';
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar6 != 0) {
          iVar6 = *(int *)((this_ptr->base).unk2 + 4);
          local_e8.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_e8.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_e8.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_64,&local_e8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_64.y - (this_ptr->base).base.base.orient.bank);
          if ((ABS(local_14) < (float)0.52359877558333301) &&
             (ABS(*(float *)(*(int *)((this_ptr->base).unk2 + 4) + 0x24) -
                  (this_ptr->base).base.base.location.position.y) < (float)2)) {
            iVar6 = 2;
            goto LAB_004158fb;
          }
        }
        iVar6 = 1;
      }
LAB_004158fb:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar6,1);
      if ((((*(int *)(this_ptr->unk + 0x4c) == 0) &&
           (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x44)),
           iVar6 == 0)) &&
          (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x48)),
          iVar6 == 0)) &&
         (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x40)),
         iVar6 == 0)) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"batman-alert.wav");
        this_ptr->unk[0x4c] = '\x01';
        this_ptr->unk[0x4d] = '\0';
        this_ptr->unk[0x4e] = '\0';
        this_ptr->unk[0x4f] = '\0';
        *(uint *)(this_ptr->unk + 0x40) = uVar10;
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar3 = 3.5f;
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
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
        local_24 = 3.5f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_7c = 0;
        local_74 = fVar3;
        local_78 = 0;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (-1 < iVar8) {
          pCVar1 = &(this_ptr->base).base.base.location;
          iVar8 = *(int *)((this_ptr->base).unk2 + 4);
          local_a0 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
          local_98 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
          local_9c = 0;
          local_20 = SQRT(local_98 * local_98 + local_a0 * local_a0);
          local_18 = local_20;
          if ((10.0f < local_20) &&
             ((this_ptr->base).unk2[0] = '\0', (this_ptr->base).unk2[1] = '\0',
             (this_ptr->base).unk2[2] = '\0', (this_ptr->base).unk2[3] = '\0', iVar6 == 1)) {
            iVar6 = *(int *)((this_ptr->base).unk2 + 4);
            local_94.x = *(float *)(iVar6 + 0x20) - (pCVar1->position).x;
            local_94.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
            local_94.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_dc,&local_94);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_dc.y - (this_ptr->base).base.base.orient.bank);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (ABS(*(float *)(*(int *)((this_ptr->base).unk2 + 4) + 0x24) -
                    (this_ptr->base).base.base.location.position.y) < (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              uVar4 = *(uint *)(this_ptr->unk + 0x44);
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = '\0';
              (this_ptr->base).unk2[3] = '\0';
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar4);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->unk + 0x48)), iVar6 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(uint *)(this_ptr->unk + 0x48) = uVar10;
              }
            }
          }
          if ((local_20 <= local_24) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
            iVar6 = *(int *)((this_ptr->base).unk2 + 4);
            local_88.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
            local_88.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
            local_88.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d0,&local_88);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_d0.y - (this_ptr->base).base.base.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
              uVar4 = *(uint *)(this_ptr->unk + 0x44);
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x80;
              (this_ptr->base).unk2[3] = '?';
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar4);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->unk + 0x48)), iVar6 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(uint *)(this_ptr->unk + 0x48) = uVar10;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_20) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_13c);
      local_13c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_13c.attacker = (CDemonActor *)this_ptr;
      local_13c.wielder = (CDemonActor *)this_ptr;
      local_14 = local_13c.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_ac,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [DAT_00822754].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_40,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_100,pCVar9);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00415d62_caseD_2;
  }
  uVar4 = (this_ptr->base).base.field22_0x25b0;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00415540:
      iVar6 = 1;
    }
    else {
LAB_004156d6:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00415540;
    if (uVar4 != 3) goto LAB_004156d6;
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
switchD_00415d62_caseD_2:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_c4 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_c0 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar9 = &(this_ptr->base).base.field6_0x241c;
    local_bc = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_58 = local_c4 + pCVar9->x;
    local_54 = local_c0 + (this_ptr->base).base.field6_0x241c.y;
    local_50 = local_bc + (this_ptr->base).base.field6_0x241c.z;
    local_70 = local_58 + pCVar2->x;
    local_6c = local_54 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_68 = local_50 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar9->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
