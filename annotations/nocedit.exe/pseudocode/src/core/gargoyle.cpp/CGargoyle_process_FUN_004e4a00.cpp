// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00
// Address: 004e4a00
// Address Range: [[004e4a00, 004e53e1]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004e4a00(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004e4a00(CGargoyle *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CVector3f *pCVar9;
  uint uVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  SDamageInfo local_104;
  CVector3f local_c8;
  CVector3f local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  int local_58;
  float local_54;
  CVector3f local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar7->state_index == 8) {
      return;
    }
    if (pSVar7->state_index == 5) {
      return;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar3 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar6 = pSVar7->state_index;
  local_28 = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar6 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      if (iVar6 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        *(float *)(this_ptr->unk2 + 0x18) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 4));
        if (iVar6 == 0) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          *(uint *)(this_ptr->unk2 + 4) = uVar10;
        }
      }
      else {
        if (*(int *)(this_ptr->unk2 + 0x14) == 0) {
          iVar6 = *(int *)((this_ptr->base).unk2 + 4);
          if (iVar6 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
            if (extraout_EAX != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
            break;
          }
          local_a4.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_a4.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_a4.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
          local_1c = SQRT(local_a4.z * local_a4.z +
                          local_a4.x * local_a4.x + local_a4.y * local_a4.y);
          local_18 = local_1c;
          if (local_1c < 3.0f) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_a4);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_68.y - (this_ptr->base).base.base.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,3,1);
            }
          }
          if ((this_ptr->base).guard_distance <= local_1c) break;
          pCVar1 = &(this_ptr->base).base.model;
          if (10.0f <= local_1c) {
            iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
            break;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar6 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar6 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        *(float *)(this_ptr->unk2 + 0x18) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 4));
        if (iVar6 == 0) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          *(uint *)(this_ptr->unk2 + 4) = uVar10;
        }
      }
      else {
        iVar6 = *(int *)(this_ptr->unk2 + 0x14);
        pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
        if (iVar6 == 0) {
          if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
            if (extraout_EAX_00 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
          else {
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            local_78 = 3.0f;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            pCVar9->x = (this_ptr->base).base.model.accumulated_root_motion.y;
            local_20 = local_78;
            local_80 = iVar6;
            local_7c = iVar6;
            (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
            if (-1 < iVar8) {
              iVar8 = *(int *)((this_ptr->base).unk2 + 4);
              local_5c = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
              local_54 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
              local_30 = SQRT(local_54 * local_54 + local_5c * local_5c);
              local_58 = iVar6;
              local_24 = local_30;
              if (10.0f < local_30) {
                iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
                if (iVar6 == 0) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,iVar6,1);
              }
              if ((local_24 <= local_20) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
                iVar6 = *(int *)((this_ptr->base).unk2 + 4);
                local_50.x = *(float *)(iVar6 + 0x20) -
                             (this_ptr->base).base.base.location.position.x;
                local_50.y = *(float *)(iVar6 + 0x24) -
                             (this_ptr->base).base.base.location.position.y;
                local_50.z = *(float *)(iVar6 + 0x28) -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_c8,&local_50);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_c8.y - (this_ptr->base).base.base.orient.bank);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,3,1);
                  (this_ptr->base).unk2[0] = '\0';
                  (this_ptr->base).unk2[1] = '\0';
                  (this_ptr->base).unk2[2] = -0x80;
                  (this_ptr->base).unk2[3] = '?';
                }
              }
              if ((this_ptr->base).guard_distance < local_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0,1);
              }
            }
          }
        }
        else {
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          pCVar9->x = (this_ptr->base).base.model.accumulated_root_motion.y;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_104);
      local_104.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      local_104.attacker = (CDemonActor *)this_ptr;
      local_104.wielder = (CDemonActor *)this_ptr;
      local_14 = local_104.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_8c,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [INT_02d83208].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_bc,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar6 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      if ((iVar6 != 0) &&
         (fVar3 = *(float *)(this_ptr->unk2 + 0x18) - delta_time,
         *(float *)(this_ptr->unk2 + 0x18) = fVar3, fVar3 < 0.0)) {
        this_ptr->unk2[0x18] = '\0';
        this_ptr->unk2[0x19] = '\0';
        this_ptr->unk2[0x1a] = '\0';
        this_ptr->unk2[0x1b] = '\0';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 4));
        if (iVar6 == 0) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          *(uint *)(this_ptr->unk2 + 4) = uVar10;
        }
      }
    }
    goto switchD_004e531f_caseD_4;
  }
  uVar4 = (this_ptr->base).base.field22_0x25b0;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_004e4b02:
      iVar6 = 1;
    }
    else {
LAB_004e4d57:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar4 < 3) goto LAB_004e4b02;
    if (uVar4 != 3) goto LAB_004e4d57;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004e531f_caseD_4:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_98 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_94 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar9 = &(this_ptr->base).base.field6_0x241c;
    local_90 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_74 = local_98 + pCVar9->x;
    local_70 = local_94 + (this_ptr->base).base.field6_0x241c.y;
    local_6c = local_90 + (this_ptr->base).base.field6_0x241c.z;
    local_b0 = local_74 + pCVar2->x;
    local_ac = local_70 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_a8 = local_6c + (this_ptr->base).base.model.accumulated_root_motion.z;
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
  iVar6 = local_28;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  if (iVar6 == 5) {
    *(int *)(this_ptr->unk2 + 8) = this_ptr->stone_red << 8;
    *(int *)(this_ptr->unk2 + 0xc) = this_ptr->stone_green << 8;
    *(int *)(this_ptr->unk2 + 0x10) = this_ptr->stone_blue << 8;
  }
  else {
    this_ptr->unk2[0xc] = -1;
    this_ptr->unk2[0xd] = -1;
    this_ptr->unk2[0xe] = '\0';
    this_ptr->unk2[0xf] = '\0';
    this_ptr->unk2[0x10] = -1;
    this_ptr->unk2[0x11] = -1;
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
    this_ptr->unk2[8] = -1;
    this_ptr->unk2[9] = -1;
    this_ptr->unk2[10] = '\0';
    this_ptr->unk2[0xb] = '\0';
  }
  iVar6 = (this_ptr->base).base.base.scale.x;
  if (iVar6 < *(int *)(this_ptr->unk2 + 8)) {
    iVar8 = (this_ptr->base).base.base.scale.x + g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 8);
    (this_ptr->base).base.base.scale.x = iVar8;
    if (iVar6 < iVar8) {
      (this_ptr->base).base.base.scale.x = iVar6;
    }
  }
  else if (*(int *)(this_ptr->unk2 + 8) < iVar6) {
    iVar8 = (this_ptr->base).base.base.scale.x - g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 8);
    (this_ptr->base).base.base.scale.x = iVar8;
    if (iVar8 < iVar6) {
      (this_ptr->base).base.base.scale.x = iVar6;
    }
  }
  iVar6 = (this_ptr->base).base.base.scale.y;
  if (iVar6 < *(int *)(this_ptr->unk2 + 0xc)) {
    iVar8 = (this_ptr->base).base.base.scale.y + g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 0xc);
    (this_ptr->base).base.base.scale.y = iVar8;
    if (iVar6 < iVar8) {
      (this_ptr->base).base.base.scale.y = iVar6;
    }
  }
  else if (*(int *)(this_ptr->unk2 + 0xc) < iVar6) {
    iVar8 = (this_ptr->base).base.base.scale.y - g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 0xc);
    (this_ptr->base).base.base.scale.y = iVar8;
    if (iVar8 < iVar6) {
      (this_ptr->base).base.base.scale.y = iVar6;
    }
  }
  iVar6 = (this_ptr->base).base.base.scale.z;
  if (iVar6 < *(int *)(this_ptr->unk2 + 0x10)) {
    iVar8 = (this_ptr->base).base.base.scale.z + g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 0x10);
    (this_ptr->base).base.base.scale.z = iVar8;
    if (iVar6 < iVar8) {
      (this_ptr->base).base.base.scale.z = iVar6;
      return;
    }
  }
  else if (*(int *)(this_ptr->unk2 + 0x10) < iVar6) {
    iVar8 = (this_ptr->base).base.base.scale.z - g_GlobalDeltaTimeInt;
    iVar6 = *(int *)(this_ptr->unk2 + 0x10);
    (this_ptr->base).base.base.scale.z = iVar8;
    if (iVar8 < iVar6) {
      (this_ptr->base).base.base.scale.z = iVar6;
      return;
    }
  }
  return;
}
