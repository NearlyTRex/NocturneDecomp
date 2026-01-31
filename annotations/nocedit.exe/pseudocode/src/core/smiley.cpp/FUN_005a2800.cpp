// Name: core_smiley.cpp_FUN_005a2800
// Address: 005a2800
// Address Range: [[005a2800, 005a3159]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_005a2800(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a2800(uint param_1, uint
   param_2) */

void __cdecl core_smiley_cpp_FUN_005a2800(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  char *pcVar3;
  float fVar4;
  CCharacter *pCVar5;
  int iVar6;
  uint uVar7;
  SMotion *pSVar8;
  int iVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  CEnemy *pCVar12;
  float fVar13;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo local_190;
  SDamageInfo local_154;
  SDamageInfo local_118;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40 [2];
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar13 = in_stack_00000004[1].base.base.orient_matrix.m[0].z - in_stack_00000008;
  in_stack_00000004[1].base.base.orient_matrix.m[0].z = fVar13;
  if (fVar13 < 0.0) {
    in_stack_00000004[1].base.base.orient_matrix.m[0].z = 0.0;
  }
  if (((in_stack_00000004->base).model.part_visibility_flags
       [(int)in_stack_00000004[1].base.base.orient.heading] == 0) &&
     (iVar6 = (*(((in_stack_00000004->base).base.vtable._uc)->_uc).isDamageable)
                        (&in_stack_00000004->base), iVar6 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe34);
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).processDamage)
              (&in_stack_00000004->base,(SDamageInfo *)&stack0xfffffe34);
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base);
  if (iVar6 == 0) {
    return;
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
  local_28 = in_stack_00000008 * in_stack_00000004->speed;
  pCVar2 = &(in_stack_00000004->base).model;
  while (0.0 < local_28) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar7 < 0x66) {
      if (uVar7 == 0x65) {
        if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x100))();
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base);
      }
    }
    else if (uVar7 < 0x67) {
      if (*(int *)(in_stack_00000004->unk2 + 4) != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
      }
    }
    else if (uVar7 == 0x67) {
      fVar13 = (float)((int)in_stack_00000004[1].base.base.orient_matrix.m[0].x + 1);
      in_stack_00000004[1].base.base.orient_matrix.m[0].x = fVar13;
      if (2 < (int)fVar13) {
        if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
          (**(code **)(iRam00000154 + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = 4;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x11c))();
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base);
    }
  }
  fVar13 = in_stack_00000004->speed;
  fVar4 = (float)3.1415926535000001;
  pCVar2 = &(in_stack_00000004->base).model;
  *(float *)((in_stack_00000004->base).unk1 + 0x28) =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base).unk1 + 0x2c) = in_stack_00000008 * fVar4 * fVar13;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar6 = pSVar8->state_index;
  local_24 = iVar6;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base);
  if (iVar9 == 0) {
    switch(iVar6) {
    case 1:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar6 == 0) {
        (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
        iVar6 = *(int *)(in_stack_00000004->unk2 + 4);
        if (iVar6 != 0) {
          local_58.x = *(float *)(iVar6 + 0x20) - (in_stack_00000004->base).base.location.position.x
          ;
          local_58.y = *(float *)(iVar6 + 0x24) - (in_stack_00000004->base).base.location.position.y
          ;
          local_58.z = *(float *)(iVar6 + 0x28) - (in_stack_00000004->base).base.location.position.z
          ;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (in_stack_00000004->base).base.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              in_stack_00000004[1].base.base.orient_matrix.m[0].x = 0.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < *(float *)(in_stack_00000004[1].base.base.actor_name + 0xc)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base).model.motion_controller,2,1);
          }
        }
      }
      break;
    case 2:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar6 == 0) {
        (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
        iVar6 = *(int *)(in_stack_00000004->unk2 + 4);
        if (iVar6 != 0) {
          if (in_stack_00000004 == *(CEnemy **)(iVar6 + 0x2598)) {
            (**(code **)(*(int *)(iVar6 + 0x154) + 0x104))(iVar6);
          }
          local_8c = 2.5f;
          local_1c = 2.5f;
          (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base).model.accumulated_root_motion.y =
               (in_stack_00000004->base).model.accumulated_root_motion.z;
          (in_stack_00000004->base).model.accumulated_root_motion.x =
               (in_stack_00000004->base).model.accumulated_root_motion.y;
          local_94 = 0;
          local_90 = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xbc))();
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base);
          if ((-1 < iVar6) && (0 < iVar6)) {
            iVar6 = *(int *)(in_stack_00000004->unk2 + 4);
            local_a0 = *(float *)(iVar6 + 0x20) - (in_stack_00000004->base).base.location.position.x
            ;
            local_9c = *(float *)(iVar6 + 0x24) - (in_stack_00000004->base).base.location.position.y
            ;
            local_98 = *(float *)(iVar6 + 0x28) - (in_stack_00000004->base).base.location.position.z
            ;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) &&
               (*(float *)(in_stack_00000004[1].base.base.actor_name + 8) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base).model.motion_controller,6,1);
              pCVar5 = &in_stack_00000004[1].base;
              (pCVar5->base).actor_name[8] = '\0';
              (pCVar5->base).actor_name[9] = '\0';
              (pCVar5->base).actor_name[10] = -0x80;
              (pCVar5->base).actor_name[0xb] = '?';
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
        (**(code **)(iRam00000154 + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_14 = local_190.damage_amount;
        pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_b8,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (in_stack_00000004->base).model.bone_transform.bone_world_matrices
                             [INT_03f48fa8].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_dc,pCVar11);
        core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
      }
      break;
    case 8:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_4c,pCVar11);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      iVar6 = *(int *)(in_stack_00000004->unk2 + 4);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x2598) == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x120))(iVar6);
        if (iVar6 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_14 = local_154.damage_amount;
          pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_88,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (in_stack_00000004->base).model.bone_transform.bone_world_matrices
                               [INT_03f48fa8].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)in_stack_00000004,&local_d0,pCVar11);
          core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
        }
        else {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x120))();
      if (iVar6 != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar7 = *(uint *)((in_stack_00000004->base).unk2 + 0x10);
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_005a2a90:
      fVar13 = 2.8026e-45;
    }
    else {
LAB_005a2b8e:
      fVar13 = 1.4013e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,(int)fVar13,1);
  }
  else {
    if (uVar7 < 3) goto LAB_005a2a90;
    if (uVar7 != 3) goto LAB_005a2b8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
switchD_005a3055_caseD_7:
  if (0.0 < *(float *)(in_stack_00000004[1].base.base.actor_name + 8)) {
    *(float *)(in_stack_00000004[1].base.base.actor_name + 8) =
         *(float *)(in_stack_00000004[1].base.base.actor_name + 8) - in_stack_00000008;
  }
  if (local_24 == 0xb) {
    pCVar11 = &(in_stack_00000004->base).model.accumulated_root_motion;
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)in_stack_00000004,&local_70,pCVar11);
    pCVar1 = &(in_stack_00000004->base).base.location;
    (pCVar1->position).x = pCVar10->x + (pCVar1->position).x;
    (in_stack_00000004->base).base.location.position.y =
         pCVar10->y + (in_stack_00000004->base).base.location.position.y;
    (in_stack_00000004->base).base.location.position.z =
         pCVar10->z + (in_stack_00000004->base).base.location.position.z;
    (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base).model.accumulated_root_motion.y =
         (in_stack_00000004->base).model.accumulated_root_motion.z;
    pCVar11->x = (in_stack_00000004->base).model.accumulated_root_motion.y;
  }
  else {
    iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base);
    if (iVar6 != 0) {
      if ((*(int *)(in_stack_00000004->unk2 + 4) != 0) &&
         (pCVar12 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))()
         , pCVar12 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->unk2 + 4));
      }
      *(float *)((in_stack_00000004->base).unk1 + 0x20) =
           *(float *)((in_stack_00000004->base).unk1 + 0x20) -
           in_stack_00000008 * (float)32;
      local_64 = *(float *)((in_stack_00000004->base).unk1 + 0x1c) * in_stack_00000008;
      local_60 = *(float *)((in_stack_00000004->base).unk1 + 0x20) * in_stack_00000008;
      pcVar3 = (in_stack_00000004->base).unk1 + 0x10;
      local_5c = in_stack_00000008 * *(float *)((in_stack_00000004->base).unk1 + 0x24);
      pCVar11 = &(in_stack_00000004->base).model.accumulated_root_motion;
      local_7c = local_64 + *(float *)pcVar3;
      local_78 = local_60 + *(float *)((in_stack_00000004->base).unk1 + 0x14);
      local_74 = local_5c + *(float *)((in_stack_00000004->base).unk1 + 0x18);
      local_ac = local_7c + pCVar11->x;
      local_a8 = local_78 + (in_stack_00000004->base).model.accumulated_root_motion.y;
      local_a4 = local_74 + (in_stack_00000004->base).model.accumulated_root_motion.z;
      (in_stack_00000004->base).unk1[0x18] = '\0';
      (in_stack_00000004->base).unk1[0x19] = '\0';
      (in_stack_00000004->base).unk1[0x1a] = '\0';
      (in_stack_00000004->base).unk1[0x1b] = '\0';
      *(uint *)((in_stack_00000004->base).unk1 + 0x14) =
           *(uint *)((in_stack_00000004->base).unk1 + 0x18);
      *(float *)pcVar3 = *(float *)((in_stack_00000004->base).unk1 + 0x14);
      (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
      fVar13 = (in_stack_00000004->base).model.accumulated_root_motion.z;
      (in_stack_00000004->base).model.accumulated_root_motion.y = fVar13;
      pCVar11->x = fVar13;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base);
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base);
  return;
}
