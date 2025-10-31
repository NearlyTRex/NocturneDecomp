// Name: core_sentinel.cpp_FUN_00568030
// Address: 00568030
// Address Range: [[00568030, 00568b6b]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568030()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_00567fd0 = 00568241
//   void* switchdataD_00567fe4 = 0056848e
//   TerminatedCString s_wing_wav_00645813
//   TerminatedCString s_sentinel_fall_wav_0064581d
//   TerminatedCString s_s_confused_while_walking_0064582f
//   double DOUBLE_0064585a = 3.14159265350000
//   double DOUBLE_00645862 = 0.523598775583333
//   double DOUBLE_0064586a = 32
//   double DOUBLE_00645872 = 0.800000000000000
//   double DOUBLE_0064587a = 4
//   undefined4 DAT_00662678
//   undefined4 DAT_00662684
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   undefined4 DAT_0311420c
//   undefined4 DAT_03114214
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_FUN_0040cd10
//   core_actor.cpp_FUN_0040cd70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
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
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568030(undefined4 param_1, undefined4
   param_2) */

void core_sentinel_cpp_FUN_00568030(void)

{
  char *pcVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f *in_stack_fffffe60;
  float in_stack_fffffe64;
  float in_stack_fffffe68;
  SDamageInfo local_164;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  CVector3f local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  CVector3f local_bc;
  CVector3f local_b0 [2];
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  CVector3f local_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50 [3];
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    return;
  }
  pCVar6 = &in_stack_00000004->base_character;
  (pCVar6->model).padding_0x0[0x225c] = '\0';
  (pCVar6->model).padding_0x0[0x225d] = '\0';
  (pCVar6->model).padding_0x0[0x225e] = '\0';
  (pCVar6->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
  *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
  local_2c = in_stack_00000008 * in_stack_00000004->speed;
LAB_00568089:
  if (0.0 < local_2c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610();
    switch(uVar9) {
    case 100:
      if ((((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
           (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x120))(), iVar7 == 0)) &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar7 == 0)) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0xfc))(), iVar7 != 0)) {
        local_108 = DAT_00662678;
        local_110 = 0;
        local_10c = 0;
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        fVar3 = local_c8 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar5 = local_c0 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        fVar5 = (float)DOUBLE_00645872;
        if (ABS(local_c4 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24)) <=
            (float)DOUBLE_0064587a) {
          if ((fVar5 < fVar3) ||
             (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154)
                                  + 0x100))(), iVar7 != 0)) {
            if (fVar5 < fVar3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      break;
    case 0x65:
      (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].handleFootstep)
                ((CDemonActor *)in_stack_00000004,in_stack_fffffe60,(int)in_stack_fffffe64,
                 in_stack_fffffe68);
      break;
    case 0x66:
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
        local_14 = local_164.damage_amount;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x11c))();
      }
      break;
    case 0x67:
      (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"wing?.wav");
      break;
    case 0x68:
      (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
    goto LAB_00568089;
  }
  fVar3 = in_stack_00000004->speed;
  fVar5 = (float)DOUBLE_0064585a;
  *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0();
  iVar7 = *(int *)(iVar7 + 0x24);
  local_1c = iVar7;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar8 != 0) {
    uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
    if (((uVar4 < 2) || (uVar4 < 3)) || (uVar4 != 3)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    else {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    pCVar6 = &in_stack_00000004->base_character;
    (pCVar6->model).padding_0x0[0x225c] = '\0';
    (pCVar6->model).padding_0x0[0x225d] = '\0';
    (pCVar6->model).padding_0x0[0x225e] = '\0';
    (pCVar6->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    goto switchD_00568487_caseD_d;
  }
  if ((iVar7 == 10) || (iVar7 == 0xb)) {
    (in_stack_00000004->base_character).cloth_data[0x348] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x349] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x34a] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x34b] = '?';
  }
  else {
    (in_stack_00000004->base_character).cloth_data[0x348] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x349] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x34a] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x34b] = '@';
  }
  switch(local_1c) {
  case 0:
    (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
    if (iVar7 == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
    }
    else {
      local_5c = *(float *)(iVar7 + 0x20) -
                 (in_stack_00000004->base_character).base_actor.location.position.x;
      local_58 = *(float *)(iVar7 + 0x24) -
                 (in_stack_00000004->base_character).base_actor.location.position.y;
      local_54 = *(float *)(iVar7 + 0x28) -
                 (in_stack_00000004->base_character).base_actor.location.position.z;
      if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= _DAT_00662684) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
    }
    break;
  case 1:
    (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    break;
  case 2:
    (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    fVar3 = DAT_00662678;
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      local_20 = DAT_00662678;
      pCVar6 = &in_stack_00000004->base_character;
      (pCVar6->model).padding_0x0[0x225c] = '\0';
      (pCVar6->model).padding_0x0[0x225d] = '\0';
      (pCVar6->model).padding_0x0[0x225e] = '\0';
      (pCVar6->model).padding_0x0[0x225f] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
           *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
           *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
      local_98 = 0;
      local_90 = fVar3;
      local_94 = 0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (&in_stack_00000004->base_character);
      if (-1 < iVar7) {
        local_e0 = (in_stack_00000004->base_character).base_actor.location.position.x -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        local_d8 = (in_stack_00000004->base_character).base_actor.location.position.z -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        local_24 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
        local_dc = 0;
        local_18 = local_24;
        if (_DAT_00662684 < local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
        if ((local_24 <= local_20) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_bc.x = *(float *)(iVar7 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_bc.y = *(float *)(iVar7 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_bc.z = *(float *)(iVar7 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_74,&local_bc);
          local_14 = core_actor_cpp_FUN_0040cd70
                               (local_74.y -
                                (in_stack_00000004->base_character).base_actor.orient.bank);
          if (ABS(local_14) < (float)DOUBLE_00645862) {
            iVar7 = core_actor_cpp_FUN_0040cd10();
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              pCVar6 = &in_stack_00000004[1].base_character;
              (pCVar6->base_actor).actor_name[0xc] = '\0';
              (pCVar6->base_actor).actor_name[0xd] = '\0';
              (pCVar6->base_actor).actor_name[0xe] = -0x60;
              (pCVar6->base_actor).actor_name[0xf] = '@';
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = -0x80;
            in_stack_00000004->field6_0xbe38[3] = '?';
          }
        }
        if (in_stack_00000004->guard_distance < local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
    if (extraout_EAX_00 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      break;
    }
LAB_0056878f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    break;
  case 3:
    (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      break;
    }
    pCVar6 = &in_stack_00000004->base_character;
    (pCVar6->model).padding_0x0[0x225c] = '\0';
    (pCVar6->model).padding_0x0[0x225d] = '\0';
    (pCVar6->model).padding_0x0[0x225e] = '\0';
    (pCVar6->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    local_80 = 0;
    local_78 = DAT_00662678;
    local_7c = 0;
    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
    core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base_character);
    iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
    local_11c = (in_stack_00000004->base_character).base_actor.location.position.x -
                *(float *)(iVar7 + 0x20);
    local_118 = (in_stack_00000004->base_character).base_actor.location.position.y -
                *(float *)(iVar7 + 0x24);
    local_114 = (in_stack_00000004->base_character).base_actor.location.position.z -
                *(float *)(iVar7 + 0x28);
    if (_DAT_00662684 <= SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)
       ) {
      iVar7 = core_actor_cpp_FUN_0040cd10();
      if (iVar7 == 0) break;
      iVar7 = core_actor_cpp_FUN_0040cd10();
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        break;
      }
    }
    else {
      iVar7 = core_actor_cpp_FUN_0040cd10();
      if (iVar7 == 0) {
        iVar7 = core_actor_cpp_FUN_0040cd10();
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          break;
        }
        goto LAB_0056878f;
      }
      iVar7 = core_actor_cpp_FUN_0040cd10();
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        break;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    break;
  case 4:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (local_b0,&g_ZeroVector,
               (CMatrix3x4f *)
               ((in_stack_00000004->base_character).model.padding_0x0 + DAT_03114214 * 0x30 + 0xe80)
              );
    core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
    core_enemy_cpp_FUN_004a9880();
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (local_50,&g_ZeroVector,
               (CMatrix3x4f *)
               ((in_stack_00000004->base_character).model.padding_0x0 + DAT_0311420c * 0x30 + 0xe80)
              );
    core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 9:
    if ((in_stack_00000004->pool_me == 0) &&
       ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
      core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
      core_gore_cpp_FUN_004ede30();
      in_stack_00000004->pool_me = 1;
    }
    break;
  case 10:
    fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) -
            in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = fVar3;
    if (fVar3 < 0.0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    break;
  case 0xe:
  case 0xf:
    (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
    if (iVar7 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    else {
      local_f8.x = *(float *)(iVar7 + 0x20) -
                   (in_stack_00000004->base_character).base_actor.location.position.x;
      local_f8.y = *(float *)(iVar7 + 0x24) -
                   (in_stack_00000004->base_character).base_actor.location.position.y;
      local_f8.z = *(float *)(iVar7 + 0x28) -
                   (in_stack_00000004->base_character).base_actor.location.position.z;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d4,&local_f8);
      (in_stack_00000004->base_character).base_actor.orient.bank = local_d4.y;
    }
  }
switchD_00568487_caseD_d:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar7 != 0) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0064586a;
    local_104 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                in_stack_00000008;
    local_100 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                in_stack_00000008;
    pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_fc = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pcVar2 = (in_stack_00000004->base_character).model.padding_0x0 + 0x2254;
    local_ec = local_104 + *(float *)pcVar1;
    local_e8 = local_100 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_e4 = local_fc + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_68 = local_ec + *(float *)pcVar2;
    local_64 = local_e8 + *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258)
    ;
    local_60 = local_e4 + *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c)
    ;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar1 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    pCVar6 = &in_stack_00000004->base_character;
    (pCVar6->model).padding_0x0[0x225c] = '\0';
    (pCVar6->model).padding_0x0[0x225d] = '\0';
    (pCVar6->model).padding_0x0[0x225e] = '\0';
    (pCVar6->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 00568030: PUSH EBX
//   Label: core_sentinel.cpp_FUN_00568030
// 00568031: PUSH ESI
// 00568032: PUSH EDI
// 00568033: PUSH EBP
// 00568034: MOV EBP,ESP
// 00568036: SUB ESP,0x190
// 0056803c: SUB EBP,0x7a
// 0056803f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00568045: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0056804b: PUSH EBX
// 0056804c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00568051: ADD ESP,0x8
// 00568054: TEST EAX,EAX
// 00568056: JZ 0x00568239
//   XREF to: 00568239 (CONDITIONAL_JUMP)
// 0056805c: LEA EAX,[EBX + 0x23ac]
// 00568062: MOV dword ptr [EAX + 0x8],0x0
// 00568069: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0056806f: MOV EDX,dword ptr [EAX + 0x8]
// 00568072: MOV dword ptr [EAX + 0x4],EDX
// 00568075: MOV EDX,dword ptr [EAX + 0x4]
// 00568078: MOV dword ptr [EAX],EDX
// 0056807a: FMUL float ptr [EBX + 0xbe24]
// 00568080: LEA EDI,[EBX + 0x158]
// 00568086: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 00568089: FLD float ptr [EBP + 0x5e]
//   Label: LAB_00568089
//   XREF to: Stack[-0x2c] (READ)
// 0056808c: FLDZ
// 0056808e: FCOMPP
// 00568090: FNSTSW AX
// 00568092: SAHF
// 00568093: JC 0x00568410
//   XREF to: 00568410 (CONDITIONAL_JUMP)
// 00568099: FLD float ptr [EBX + 0xbe24]
// 0056809f: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005680a5: FMUL double ptr [0x0064585a]
//   XREF to: 0064585a (READ)
// 005680ab: FMULP
// 005680ad: FLD float ptr [EBX + 0x23b4]
// 005680b3: PUSH EDI
// 005680b4: FSTP float ptr [EBX + 0x2434]
// 005680ba: FSTP float ptr [EBX + 0x2438]
// 005680c0: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005680c5: ADD ESP,0x4
// 005680c8: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005680ce: MOV ESI,dword ptr [EAX + 0x24]
// 005680d1: PUSH EBX
// 005680d2: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005680d5: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005680da: ADD ESP,0x8
// 005680dd: TEST EAX,EAX
// 005680df: JZ 0x00568466
//   XREF to: 00568466 (CONDITIONAL_JUMP)
// 005680e5: MOV EAX,dword ptr [EBX + 0x25b0]
// 005680eb: CMP EAX,0x2
// 005680ee: JNC 0x00568452
//   XREF to: 00568452 (CONDITIONAL_JUMP)
// 005680f4: CMP EAX,0x1
// 005680f7: JNZ 0x0056845d
//   XREF to: 0056845d (CONDITIONAL_JUMP)
// 005680fd: PUSH 0x1
//   Label: LAB_005680fd
// 005680ff: PUSH 0x2
// 00568101: LEA EAX,[EBX + 0x158]
//   Label: LAB_00568101
// 00568107: PUSH EAX
// 00568108: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056810d: ADD ESP,0xc
//   Label: LAB_0056810d
// 00568110: LEA EAX,[EBX + 0x23ac]
// 00568116: MOV dword ptr [EAX + 0x8],0x0
// 0056811d: MOV EDX,dword ptr [EAX + 0x8]
// 00568120: MOV dword ptr [EAX + 0x4],EDX
// 00568123: MOV EDX,dword ptr [EAX + 0x4]
// 00568126: MOV dword ptr [EAX],EDX
// 00568128: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_d
// 0056812e: FLDZ
// 00568130: FCOMPP
// 00568132: FNSTSW AX
// 00568134: SAHF
// 00568135: JNC 0x00568149
//   XREF to: 00568149 (CONDITIONAL_JUMP)
// 00568137: FLD float ptr [EBX + 0xbe38]
// 0056813d: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00568143: FSTP float ptr [EBX + 0xbe38]
// 00568149: PUSH EBX
//   Label: LAB_00568149
// 0056814a: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 0056814f: ADD ESP,0x4
// 00568152: TEST EAX,EAX
// 00568154: JZ 0x00568212
//   XREF to: 00568212 (CONDITIONAL_JUMP)
// 0056815a: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00568160: FLD ST0
// 00568162: FMUL double ptr [0x0064586a]
//   XREF to: 0064586a (READ)
// 00568168: FLD float ptr [EBX + 0x242c]
// 0056816e: FXCH
// 00568170: FSUBR ST0,ST1
// 00568172: LEA ESI,[EBX + 0x2428]
// 00568178: FSTP ST1
// 0056817a: FSTP float ptr [EBX + 0x242c]
// 00568180: FLD float ptr [ESI]
// 00568182: FMUL ST1
// 00568184: FSTP float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x104] (WRITE)
// 00568187: FLD float ptr [ESI + 0x4]
// 0056818a: FMUL ST1
// 0056818c: LEA EDX,[EBX + 0x241c]
// 00568192: FSTP float ptr [EBP + -0x76]
//   XREF to: Stack[-0x100] (WRITE)
// 00568195: FMUL float ptr [ESI + 0x8]
// 00568198: LEA EAX,[EBX + 0x23ac]
// 0056819e: FLD float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x104] (READ)
// 005681a1: FXCH
// 005681a3: FSTP float ptr [EBP + -0x72]
//   XREF to: Stack[-0xfc] (WRITE)
// 005681a6: FADD float ptr [EDX]
// 005681a8: FLD float ptr [EBP + -0x76]
//   XREF to: Stack[-0x100] (READ)
// 005681ab: FXCH
// 005681ad: FSTP float ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (WRITE)
// 005681b0: FADD float ptr [EDX + 0x4]
// 005681b3: FLD float ptr [EBP + -0x72]
//   XREF to: Stack[-0xfc] (READ)
// 005681b6: FXCH
// 005681b8: FSTP float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (WRITE)
// 005681bb: FADD float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 005681be: FLD float ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (READ)
// 005681c1: FXCH
// 005681c3: FSTP float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (WRITE)
// 005681c6: FADD float ptr [EAX]
// 005681c8: FLD float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (READ)
// 005681cb: FXCH
// 005681cd: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 005681d0: FADD float ptr [EAX + 0x4]
// 005681d3: FLD float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (READ)
// 005681d6: FXCH
// 005681d8: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 005681db: FADD float ptr [EAX + 0x8]
// 005681de: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 005681e1: MOV dword ptr [EDX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 005681e8: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 005681eb: MOV dword ptr [EDX + 0x4],ECX
// 005681ee: MOV ECX,dword ptr [EDX + 0x4]
// 005681f1: MOV dword ptr [EDX],ECX
// 005681f3: MOV dword ptr [EAX + 0x8],0x0
// 005681fa: MOV EDX,dword ptr [EAX + 0x8]
// 005681fd: MOV dword ptr [EAX + 0x4],EDX
// 00568200: MOV EDX,dword ptr [EAX + 0x4]
// 00568203: MOV dword ptr [EAX],EDX
// 00568205: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 00568208: PUSH EAX
// 00568209: PUSH EBX
// 0056820a: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0056820f: ADD ESP,0x8
// 00568212: PUSH EBX
//   Label: LAB_00568212
// 00568213: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00568218: ADD ESP,0x4
// 0056821b: LEA EAX,[EBX + 0x158]
// 00568221: PUSH EAX
// 00568222: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00568227: ADD ESP,0x4
// 0056822a: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00568230: PUSH EBX
// 00568231: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00568236: ADD ESP,0x8
// 00568239: LEA ESP,[EBP + 0x7a]
//   Label: LAB_00568239
//   XREF to: Stack[-0x10] (DATA)
// 0056823c: POP EBP
// 0056823d: POP EDI
// 0056823e: POP ESI
// 0056823f: POP EBX
// 00568240: RET
// 00568241: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_64
// 00568247: MOV ESI,0x1
// 0056824c: TEST EAX,EAX
// 0056824e: JNZ 0x00568262
//   XREF to: 00568262 (CONDITIONAL_JUMP)
// 00568250: PUSH 0x1
//   Label: LAB_00568250
// 00568252: PUSH 0x0
// 00568254: PUSH EDI
// 00568255: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056825a: ADD ESP,0xc
// 0056825d: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568262: PUSH EAX
//   Label: LAB_00568262
// 00568263: MOV EDX,dword ptr [EAX + 0x154]
// 00568269: CALL dword ptr [EDX + 0x120]
// 0056826f: ADD ESP,0x4
// 00568272: TEST EAX,EAX
// 00568274: JNZ 0x00568250
//   XREF to: 00568250 (CONDITIONAL_JUMP)
// 00568276: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0056827c: PUSH EAX
// 0056827d: MOV EDX,dword ptr [EAX + 0x154]
// 00568283: CALL dword ptr [EDX + 0x108]
// 00568289: ADD ESP,0x4
// 0056828c: TEST EAX,EAX
// 0056828e: JNZ 0x00568250
//   XREF to: 00568250 (CONDITIONAL_JUMP)
// 00568290: PUSH 0x0
// 00568292: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00568298: PUSH EBX
// 00568299: MOV EDX,dword ptr [EAX + 0x154]
// 0056829f: PUSH EAX
// 005682a0: CALL dword ptr [EDX + 0xfc]
// 005682a6: ADD ESP,0xc
// 005682a9: TEST EAX,EAX
// 005682ab: JZ 0x00568250
//   XREF to: 00568250 (CONDITIONAL_JUMP)
// 005682ad: MOV EAX,[0x00662678]
//   XREF to: 00662678 (READ)
// 005682b2: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005682b5: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x110] (DATA)
// 005682bb: PUSH EAX
// 005682bc: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 005682bf: PUSH EAX
// 005682c0: XOR EDX,EDX
// 005682c2: PUSH EBX
// 005682c3: MOV dword ptr [EBP + 0xffffff7a],EDX
//   XREF to: Stack[-0x110] (WRITE)
// 005682c9: MOV dword ptr [EBP + 0xffffff7e],EDX
//   XREF to: Stack[-0x10c] (WRITE)
// 005682cf: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005682d4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005682da: FLD float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (READ)
// 005682dd: FSUB float ptr [EAX + 0x20]
// 005682e0: FMUL ST0
// 005682e2: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 005682e5: FSUB float ptr [EAX + 0x28]
// 005682e8: FMUL ST0
// 005682ea: FADDP
// 005682ec: FSQRT
// 005682ee: ADD ESP,0xc
// 005682f1: FCOMP double ptr [0x00645872]
//   XREF to: 00645872 (READ)
// 005682f7: FNSTSW AX
// 005682f9: SAHF
// 005682fa: JBE 0x005682fe
//   XREF to: 005682fe (CONDITIONAL_JUMP)
// 005682fc: XOR ESI,ESI
// 005682fe: MOV EDX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005682fe
// 00568304: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 00568307: FSUB float ptr [EDX + 0x24]
// 0056830a: FABS
// 0056830c: FCOMP double ptr [0x0064587a]
//   XREF to: 0064587a (READ)
// 00568312: FNSTSW AX
// 00568314: SAHF
// 00568315: JA 0x00568250
//   XREF to: 00568250 (CONDITIONAL_JUMP)
// 0056831b: TEST ESI,ESI
// 0056831d: JNZ 0x00568339
//   XREF to: 00568339 (CONDITIONAL_JUMP)
// 0056831f: TEST ESI,ESI
//   Label: LAB_0056831f
// 00568321: JNZ 0x00568089
//   XREF to: 00568089 (CONDITIONAL_JUMP)
// 00568327: PUSH 0x1
// 00568329: PUSH 0x0
// 0056832b: PUSH EDI
// 0056832c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568331: ADD ESP,0xc
// 00568334: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568339: PUSH 0x0
//   Label: LAB_00568339
// 0056833b: PUSH EBX
// 0056833c: MOV EAX,dword ptr [EDX + 0x154]
// 00568342: PUSH EDX
// 00568343: CALL dword ptr [EAX + 0x100]
// 00568349: ADD ESP,0xc
// 0056834c: TEST EAX,EAX
// 0056834e: JNZ 0x0056831f
//   XREF to: 0056831f (CONDITIONAL_JUMP)
// 00568350: PUSH 0x1
// 00568352: PUSH 0x0
// 00568354: PUSH EDI
// 00568355: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056835a: ADD ESP,0xc
// 0056835d: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568362: PUSH EBX
//   Label: caseD_65
// 00568363: MOV EAX,dword ptr [EBX + 0x154]
// 00568369: CALL dword ptr [EAX + 0x10c]
// 0056836f: ADD ESP,0x4
// 00568372: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568377: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: caseD_66
// 0056837e: JZ 0x00568089
//   XREF to: 00568089 (CONDITIONAL_JUMP)
// 00568384: LEA EAX,[EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (DATA)
// 0056838a: PUSH EAX
// 0056838b: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00568390: ADD ESP,0x4
// 00568393: PUSH 0x40a00000
// 00568398: PUSH 0x3f800000
// 0056839d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005683a2: LEA EDX,[EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (DATA)
// 005683a8: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005683ab: ADD ESP,0x8
// 005683ae: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005683b1: PUSH EDX
// 005683b2: FSTP float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (WRITE)
// 005683b8: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005683be: PUSH EAX
// 005683bf: MOV ESI,dword ptr [EAX + 0x154]
// 005683c5: CALL dword ptr [ESI + 0x11c]
// 005683cb: ADD ESP,0x8
// 005683ce: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 005683d3: PUSH 0x645813
//   Label: caseD_67
//   XREF to: 00645813 (DATA)
// 005683d8: MOV EAX,dword ptr [EBX + 0x154]
// 005683de: PUSH EBX
// 005683df: CALL dword ptr [EAX + 0x24]
// 005683e2: ADD ESP,0x8
// 005683e5: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 005683ea: PUSH 0x64581d
//   Label: caseD_68
//   XREF to: 0064581d (DATA)
// 005683ef: MOV EAX,dword ptr [EBX + 0x154]
// 005683f5: PUSH EBX
// 005683f6: CALL dword ptr [EAX + 0x24]
// 005683f9: ADD ESP,0x8
// 005683fc: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568401: PUSH EDX
//   Label: default
// 00568402: PUSH EBX
// 00568403: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00568408: ADD ESP,0x8
// 0056840b: JMP 0x00568089
//   XREF to: 00568089 (UNCONDITIONAL_JUMP)
// 00568410: LEA EAX,[EBP + 0x5e]
//   Label: LAB_00568410
//   XREF to: Stack[-0x2c] (DATA)
// 00568413: PUSH EAX
// 00568414: PUSH EDI
// 00568415: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0056841a: MOV EDX,EAX
// 0056841c: SUB EAX,0x64
// 0056841f: ADD ESP,0x8
// 00568422: CMP EAX,0x4
// 00568425: JA 0x00568401
//   XREF to: 00568401 (CONDITIONAL_JUMP)
// 00568427: JMP dword ptr [EAX*0x4 + 0x567fd0]
//   Label: switchD
//   XREF to: 00568241 (COMPUTED_JUMP)
//   XREF to: 00568362 (COMPUTED_JUMP)
//   XREF to: 00568377 (COMPUTED_JUMP)
//   XREF to: 005683d3 (COMPUTED_JUMP)
//   XREF to: 005683ea (COMPUTED_JUMP)
//   XREF to: 00567fd0 (DATA)
// 0056842e: PUSH 0x1
//   Label: LAB_0056842e
// 00568430: PUSH 0x0
// 00568432: PUSH EDI
// 00568433: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568438: ADD ESP,0xc
// 0056843b: PUSH EBX
// 0056843c: PUSH 0x64582f
//   XREF to: 0064582f (DATA)
// 00568441: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00568447: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00568448: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056844d: JMP 0x0056810d
//   XREF to: 0056810d (UNCONDITIONAL_JUMP)
// 00568452: JBE 0x005680fd
//   Label: LAB_00568452
//   XREF to: 005680fd (CONDITIONAL_JUMP)
// 00568458: CMP EAX,0x3
// 0056845b: JZ 0x0056842e
//   XREF to: 0056842e (CONDITIONAL_JUMP)
// 0056845d: PUSH 0x1
//   Label: LAB_0056845d
// 0056845f: PUSH 0x0
// 00568461: JMP 0x00568101
//   XREF to: 00568101 (UNCONDITIONAL_JUMP)
// 00568466: CMP ESI,0xa
//   Label: LAB_00568466
// 00568469: JNZ 0x00568509
//   XREF to: 00568509 (CONDITIONAL_JUMP)
// 0056846f: MOV dword ptr [EBX + 0x2de0],0x3f000000
//   Label: LAB_0056846f
// 00568479: MOV EDX,dword ptr [EBP + 0x6e]
//   Label: LAB_00568479
//   XREF to: Stack[-0x1c] (READ)
// 0056847c: CMP EDX,0xf
// 0056847f: JA 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 00568485: MOV EAX,EDX
// 00568487: JMP dword ptr [EAX*0x4 + 0x567fe4]
//   Label: switchD
//   XREF to: 0056848e (COMPUTED_JUMP)
//   XREF to: 00568688 (COMPUTED_JUMP)
//   XREF to: 00568756 (COMPUTED_JUMP)
//   XREF to: 0056896c (COMPUTED_JUMP)
//   XREF to: 00568586 (COMPUTED_JUMP)
//   XREF to: 00568128 (COMPUTED_JUMP)
//   XREF to: 00568521 (COMPUTED_JUMP)
//   XREF to: 0056871f (COMPUTED_JUMP)
//   XREF to: 00568afb (COMPUTED_JUMP)
//   XREF to: 00567fe4 (DATA)
// 0056848e: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 00568494: MOV EAX,dword ptr [EBX + 0x154]
// 0056849a: PUSH EBX
// 0056849b: CALL dword ptr [EAX + 0x158]
// 005684a1: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005684a7: ADD ESP,0x8
// 005684aa: TEST EDX,EDX
// 005684ac: JZ 0x005686dc
//   XREF to: 005686dc (CONDITIONAL_JUMP)
// 005684b2: LEA EAX,[EBX + 0x20]
// 005684b5: FLD float ptr [EDX + 0x20]
// 005684b8: FSUB float ptr [EAX]
// 005684ba: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 005684bd: FLD float ptr [EDX + 0x24]
// 005684c0: FSUB float ptr [EAX + 0x4]
// 005684c3: FST float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 005684c6: FMUL float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 005684c9: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 005684cc: FMUL ST0
// 005684ce: FLD float ptr [EDX + 0x28]
// 005684d1: FSUB float ptr [EAX + 0x8]
// 005684d4: FXCH
// 005684d6: FADDP ST2,ST0
// 005684d8: FST float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 005684db: FMUL float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 005684de: FADDP
// 005684e0: FSQRT
// 005684e2: FCOMP float ptr [0x00662684]
//   XREF to: 00662684 (READ)
// 005684e8: FNSTSW AX
// 005684ea: SAHF
// 005684eb: JBE 0x005686c4
//   XREF to: 005686c4 (CONDITIONAL_JUMP)
// 005684f1: PUSH 0x1
// 005684f3: PUSH 0x3
// 005684f5: LEA EAX,[EBX + 0x158]
// 005684fb: PUSH EAX
// 005684fc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568501: ADD ESP,0xc
// 00568504: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568509: CMP ESI,0xb
//   Label: LAB_00568509
// 0056850c: JZ 0x0056846f
//   XREF to: 0056846f (CONDITIONAL_JUMP)
// 00568512: MOV dword ptr [EBX + 0x2de0],0x40000000
// 0056851c: JMP 0x00568479
//   XREF to: 00568479 (UNCONDITIONAL_JUMP)
// 00568521: MOV ESI,dword ptr [EBX + 0xbe28]
//   Label: caseD_9
// 00568527: TEST ESI,ESI
// 00568529: JNZ 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 0056852f: CMP dword ptr [EBX + 0xdc],0x0
// 00568536: JNZ 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 0056853c: PUSH ESI
// 0056853d: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 00568540: PUSH EAX
// 00568541: LEA EAX,[EBX + 0x158]
// 00568547: PUSH EAX
// 00568548: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0056854d: ADD ESP,0xc
// 00568550: PUSH EAX
// 00568551: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00568557: PUSH EAX
// 00568558: PUSH EBX
// 00568559: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0056855e: ADD ESP,0xc
// 00568561: PUSH ESI
// 00568562: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00568568: PUSH EAX
// 00568569: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 0056856e: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 0056856f: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00568574: ADD ESP,0xc
// 00568577: MOV dword ptr [EBX + 0xbe28],0x1
// 00568581: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568586: LEA EAX,[EBP + 0xfffffeea]
//   Label: caseD_4
//   XREF to: Stack[-0x1a0] (DATA)
// 0056858c: PUSH EAX
// 0056858d: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00568592: ADD ESP,0x4
// 00568595: PUSH 0x41700000
// 0056859a: PUSH 0x40e00000
// 0056859f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005685a4: MOV EDX,dword ptr [0x03114214]
//   XREF to: 03114214 (READ)
// 005685aa: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005685ad: ADD ESP,0x8
// 005685b0: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 005685b6: MOV dword ptr [EBP + 0xffffff1e],EBX
//   XREF to: Stack[-0x16c] (WRITE)
// 005685bc: PUSH EAX
// 005685bd: LEA EAX,[EDX*0x4 + 0x0]
// 005685c4: MOV dword ptr [EBP + 0xffffff22],EBX
//   XREF to: Stack[-0x168] (WRITE)
// 005685ca: SUB EAX,EDX
// 005685cc: LEA ESI,[EBX + 0xfd8]
// 005685d2: SHL EAX,0x4
// 005685d5: ADD EAX,ESI
// 005685d7: PUSH 0x3f800000
// 005685dc: PUSH EAX
// 005685dd: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005685e2: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 005685e5: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005685e8: PUSH EAX
// 005685e9: FSTP float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (WRITE)
// 005685ef: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005685f4: ADD ESP,0xc
// 005685f7: PUSH EAX
// 005685f8: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa4] (DATA)
// 005685fb: PUSH EAX
// 005685fc: PUSH EBX
// 005685fd: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00568602: ADD ESP,0xc
// 00568605: PUSH EAX
// 00568606: PUSH EBX
// 00568607: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 0056860c: ADD ESP,0x10
// 0056860f: PUSH 0x41f00000
// 00568614: PUSH 0x41700000
// 00568619: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0056861e: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00568621: ADD ESP,0x8
// 00568624: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 0056862a: MOV EDX,dword ptr [0x0311420c]
//   XREF to: 0311420c (READ)
// 00568630: PUSH EAX
// 00568631: LEA EAX,[EDX*0x4 + 0x0]
// 00568638: SUB EAX,EDX
// 0056863a: SHL EAX,0x4
// 0056863d: ADD EAX,ESI
// 0056863f: PUSH 0x3f800000
// 00568644: PUSH EAX
// 00568645: MOV dword ptr [EBP + 0xffffff1e],EBX
//   XREF to: Stack[-0x16c] (WRITE)
// 0056864b: MOV dword ptr [EBP + 0xffffff22],EBX
//   XREF to: Stack[-0x168] (WRITE)
// 00568651: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00568656: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 00568659: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0056865c: PUSH EAX
// 0056865d: FSTP float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (WRITE)
// 00568663: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00568668: ADD ESP,0xc
// 0056866b: PUSH EAX
// 0056866c: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 0056866f: PUSH EAX
// 00568670: PUSH EBX
// 00568671: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00568676: ADD ESP,0xc
// 00568679: PUSH EAX
// 0056867a: PUSH EBX
// 0056867b: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00568680: ADD ESP,0x10
// 00568683: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568688: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0056868e: MOV EAX,dword ptr [EBX + 0x154]
// 00568694: PUSH EBX
// 00568695: CALL dword ptr [EAX + 0x158]
// 0056869b: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005686a1: ADD ESP,0x8
// 005686a4: TEST EAX,EAX
// 005686a6: JZ 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 005686ac: PUSH 0x1
// 005686ae: PUSH 0x0
// 005686b0: LEA EAX,[EBX + 0x158]
// 005686b6: PUSH EAX
// 005686b7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005686bc: ADD ESP,0xc
// 005686bf: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 005686c4: PUSH 0x1
//   Label: LAB_005686c4
// 005686c6: PUSH 0x2
// 005686c8: LEA EAX,[EBX + 0x158]
// 005686ce: PUSH EAX
// 005686cf: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005686d4: ADD ESP,0xc
// 005686d7: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 005686dc: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005686dc
//   XREF to: Stack[0x8] (READ)
// 005686e2: PUSH EBX
// 005686e3: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005686e8: ADD ESP,0x8
// 005686eb: TEST EAX,EAX
// 005686ed: JZ 0x00568707
//   XREF to: 00568707 (CONDITIONAL_JUMP)
// 005686ef: PUSH 0x1
// 005686f1: PUSH 0x2
// 005686f3: LEA EAX,[EBX + 0x158]
// 005686f9: PUSH EAX
// 005686fa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005686ff: ADD ESP,0xc
// 00568702: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568707: PUSH 0x1
//   Label: LAB_00568707
// 00568709: PUSH 0x1
// 0056870b: LEA EAX,[EBX + 0x158]
// 00568711: PUSH EAX
// 00568712: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568717: ADD ESP,0xc
// 0056871a: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 0056871f: FLD float ptr [EBX + 0xbec0]
//   Label: caseD_a
// 00568725: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0056872b: FST float ptr [EBX + 0xbec0]
// 00568731: FLDZ
// 00568733: FCOMPP
// 00568735: FNSTSW AX
// 00568737: SAHF
// 00568738: JBE 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 0056873e: PUSH 0x1
// 00568740: PUSH 0xb
// 00568742: LEA EAX,[EBX + 0x158]
// 00568748: PUSH EAX
// 00568749: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056874e: ADD ESP,0xc
// 00568751: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568756: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 0056875c: MOV EAX,dword ptr [EBX + 0x154]
// 00568762: PUSH EBX
// 00568763: CALL dword ptr [EAX + 0x158]
// 00568769: ADD ESP,0x8
// 0056876c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00568772: LEA ESI,[EBX + 0x158]
// 00568778: TEST EAX,EAX
// 0056877a: JNZ 0x005687b2
//   XREF to: 005687b2 (CONDITIONAL_JUMP)
// 0056877c: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00568782: PUSH EBX
// 00568783: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00568788: ADD ESP,0x8
// 0056878b: TEST EAX,EAX
// 0056878d: JZ 0x005687a1
//   XREF to: 005687a1 (CONDITIONAL_JUMP)
// 0056878f: PUSH 0x1
//   Label: LAB_0056878f
// 00568791: PUSH 0x2
// 00568793: PUSH ESI
// 00568794: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568799: ADD ESP,0xc
// 0056879c: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 005687a1: PUSH 0x1
//   Label: LAB_005687a1
// 005687a3: PUSH EAX
// 005687a4: PUSH ESI
// 005687a5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005687aa: ADD ESP,0xc
// 005687ad: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 005687b2: MOV EAX,[0x00662678]
//   Label: LAB_005687b2
//   XREF to: 00662678 (READ)
// 005687b7: PUSH 0x3e32b8c2
// 005687bc: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005687bf: LEA EAX,[EBX + 0x23ac]
// 005687c5: PUSH 0x3f000000
// 005687ca: MOV dword ptr [EAX + 0x8],0x0
// 005687d1: XOR EDX,EDX
// 005687d3: MOV ECX,dword ptr [EAX + 0x8]
// 005687d6: MOV dword ptr [EAX + 0x4],ECX
// 005687d9: MOV ECX,dword ptr [EAX + 0x4]
// 005687dc: MOV dword ptr [EAX],ECX
// 005687de: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 005687e1: MOV dword ptr [EBP + -0xe],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 005687e4: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005687e7: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 005687ea: MOV dword ptr [EBP + -0xa],EDX
//   XREF to: Stack[-0x94] (WRITE)
// 005687ed: PUSH EAX
// 005687ee: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005687f4: PUSH EAX
// 005687f5: MOV EDX,dword ptr [EAX + 0x154]
// 005687fb: CALL dword ptr [EDX + 0xbc]
// 00568801: ADD ESP,0x4
// 00568804: PUSH EAX
// 00568805: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0056880b: ADD EAX,0x20
// 0056880e: PUSH EAX
// 0056880f: PUSH EBX
// 00568810: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00568815: ADD ESP,0x18
// 00568818: TEST EAX,EAX
// 0056881a: JL 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 00568820: LEA EDX,[EBX + 0x20]
// 00568823: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00568829: FLD float ptr [EDX]
// 0056882b: FSUB float ptr [EAX + 0x20]
// 0056882e: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (WRITE)
// 00568831: FLD float ptr [EDX + 0x4]
// 00568834: FSUB float ptr [EAX + 0x24]
// 00568837: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 0056883a: FXCH
// 0056883c: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (WRITE)
// 0056883f: FLD float ptr [EDX + 0x8]
// 00568842: FSUB float ptr [EAX + 0x28]
// 00568845: FXCH
// 00568847: FMUL float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 0056884a: FXCH
// 0056884c: FST float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 0056884f: FMUL float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 00568852: FADDP
// 00568854: FSQRT
// 00568856: XOR EDI,EDI
// 00568858: MOV dword ptr [EBP + -0x52],EDI
//   XREF to: Stack[-0xdc] (WRITE)
// 0056885b: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 0056885e: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00568861: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00568864: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00568867: FCOMP float ptr [0x00662684]
//   XREF to: 00662684 (READ)
// 0056886d: FNSTSW AX
// 0056886f: SAHF
// 00568870: JBE 0x0056887f
//   XREF to: 0056887f (CONDITIONAL_JUMP)
// 00568872: PUSH 0x1
// 00568874: PUSH 0x3
// 00568876: PUSH ESI
// 00568877: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056887c: ADD ESP,0xc
// 0056887f: FLD float ptr [EBP + 0x66]
//   Label: LAB_0056887f
//   XREF to: Stack[-0x24] (READ)
// 00568882: FCOMP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00568885: FNSTSW AX
// 00568887: SAHF
// 00568888: JA 0x00568929
//   XREF to: 00568929 (CONDITIONAL_JUMP)
// 0056888e: FLD float ptr [EBX + 0xbe38]
// 00568894: FLDZ
// 00568896: FCOMPP
// 00568898: FNSTSW AX
// 0056889a: SAHF
// 0056889b: JC 0x00568929
//   XREF to: 00568929 (CONDITIONAL_JUMP)
// 005688a1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005688a7: LEA EDX,[EBX + 0x20]
// 005688aa: FLD float ptr [EAX + 0x20]
// 005688ad: FSUB float ptr [EDX]
// 005688af: FSTP float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 005688b2: FLD float ptr [EAX + 0x24]
// 005688b5: FSUB float ptr [EDX + 0x4]
// 005688b8: FSTP float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (WRITE)
// 005688bb: FLD float ptr [EAX + 0x28]
// 005688be: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 005688c1: PUSH EAX
// 005688c2: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 005688c5: FSUB float ptr [EDX + 0x8]
// 005688c8: PUSH EAX
// 005688c9: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 005688cc: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005688d1: FLD float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 005688d4: ADD ESP,0x8
// 005688d7: FSUB float ptr [EBX + 0x34]
// 005688da: SUB ESP,0x4
// 005688dd: FSTP float ptr [ESP]
// 005688e0: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005688e5: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005688e8: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005688eb: FABS
// 005688ed: ADD ESP,0x4
// 005688f0: FCOMP double ptr [0x00645862]
//   XREF to: 00645862 (READ)
// 005688f6: FNSTSW AX
// 005688f8: SAHF
// 005688f9: JNC 0x00568929
//   XREF to: 00568929 (CONDITIONAL_JUMP)
// 005688fb: PUSH 0x3f000000
// 00568900: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568905: ADD ESP,0x4
// 00568908: LEA EDX,[EBX + 0x158]
// 0056890e: TEST EAX,EAX
// 00568910: JZ 0x00568953
//   XREF to: 00568953 (CONDITIONAL_JUMP)
// 00568912: PUSH 0x1
// 00568914: PUSH 0x4
// 00568916: PUSH EDX
// 00568917: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056891c: ADD ESP,0xc
// 0056891f: MOV dword ptr [EBX + 0xbe38],0x3f800000
//   Label: LAB_0056891f
// 00568929: FLD float ptr [EBP + 0x66]
//   Label: LAB_00568929
//   XREF to: Stack[-0x24] (READ)
// 0056892c: FCOMP float ptr [EBX + 0xbe34]
// 00568932: FNSTSW AX
// 00568934: SAHF
// 00568935: JBE 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 0056893b: PUSH 0x1
// 0056893d: PUSH 0x0
// 0056893f: LEA EAX,[EBX + 0x158]
// 00568945: PUSH EAX
// 00568946: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056894b: ADD ESP,0xc
// 0056894e: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568953: PUSH 0x1
//   Label: LAB_00568953
// 00568955: PUSH 0xa
// 00568957: PUSH EDX
// 00568958: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056895d: ADD ESP,0xc
// 00568960: MOV dword ptr [EBX + 0xbec0],0x40a00000
// 0056896a: JMP 0x0056891f
//   XREF to: 0056891f (UNCONDITIONAL_JUMP)
// 0056896c: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 00568972: MOV EAX,dword ptr [EBX + 0x154]
// 00568978: PUSH EBX
// 00568979: CALL dword ptr [EAX + 0x158]
// 0056897f: ADD ESP,0x8
// 00568982: MOV EDX,dword ptr [EBX + 0xbe3c]
// 00568988: LEA ESI,[EBX + 0x158]
// 0056898e: TEST EDX,EDX
// 00568990: JNZ 0x005689a3
//   XREF to: 005689a3 (CONDITIONAL_JUMP)
// 00568992: PUSH 0x1
// 00568994: PUSH EDX
// 00568995: PUSH ESI
// 00568996: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0056899b: ADD ESP,0xc
// 0056899e: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 005689a3: PUSH 0x3e32b8c2
//   Label: LAB_005689a3
// 005689a8: LEA EAX,[EBX + 0x23ac]
// 005689ae: PUSH 0x3f000000
// 005689b3: MOV dword ptr [EAX + 0x8],0x0
// 005689ba: XOR ECX,ECX
// 005689bc: MOV EDX,dword ptr [EAX + 0x8]
// 005689bf: MOV dword ptr [EAX + 0x4],EDX
// 005689c2: MOV EDX,dword ptr [EAX + 0x4]
// 005689c5: MOV dword ptr [EAX],EDX
// 005689c7: MOV EAX,[0x00662678]
//   XREF to: 00662678 (READ)
// 005689cc: MOV dword ptr [EBP + 0xa],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 005689cf: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005689d2: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 005689d5: MOV dword ptr [EBP + 0xe],ECX
//   XREF to: Stack[-0x7c] (WRITE)
// 005689d8: PUSH EAX
// 005689d9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005689df: PUSH EAX
// 005689e0: MOV EDX,dword ptr [EAX + 0x154]
// 005689e6: CALL dword ptr [EDX + 0xbc]
// 005689ec: ADD ESP,0x4
// 005689ef: PUSH EAX
// 005689f0: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005689f6: ADD EAX,0x20
// 005689f9: PUSH EAX
// 005689fa: PUSH EBX
// 005689fb: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00568a00: LEA EDX,[EBX + 0x20]
// 00568a03: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00568a09: FLD float ptr [EDX]
// 00568a0b: FSUB float ptr [EAX + 0x20]
// 00568a0e: FSTP float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (WRITE)
// 00568a14: FLD float ptr [EDX + 0x4]
// 00568a17: FSUB float ptr [EAX + 0x24]
// 00568a1a: FST float ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (WRITE)
// 00568a20: FMUL float ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (READ)
// 00568a26: FLD float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (READ)
// 00568a2c: FMUL ST0
// 00568a2e: FLD float ptr [EDX + 0x8]
// 00568a31: FSUB float ptr [EAX + 0x28]
// 00568a34: FXCH
// 00568a36: FADDP ST2,ST0
// 00568a38: FST float ptr [EBP + 0xffffff76]
//   XREF to: Stack[-0x114] (WRITE)
// 00568a3e: FMUL float ptr [EBP + 0xffffff76]
//   XREF to: Stack[-0x114] (READ)
// 00568a44: FADDP
// 00568a46: FSQRT
// 00568a48: ADD ESP,0x18
// 00568a4b: FCOMP float ptr [0x00662684]
//   XREF to: 00662684 (READ)
// 00568a51: FNSTSW AX
// 00568a53: SAHF
// 00568a54: JNC 0x00568ac3
//   XREF to: 00568ac3 (CONDITIONAL_JUMP)
// 00568a56: PUSH 0x3f000000
// 00568a5b: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568a60: ADD ESP,0x4
// 00568a63: TEST EAX,EAX
// 00568a65: JZ 0x00568a9c
//   XREF to: 00568a9c (CONDITIONAL_JUMP)
// 00568a67: PUSH 0x3f000000
// 00568a6c: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568a71: ADD ESP,0x4
// 00568a74: TEST EAX,EAX
// 00568a76: JZ 0x00568a8a
//   XREF to: 00568a8a (CONDITIONAL_JUMP)
// 00568a78: PUSH 0x1
// 00568a7a: PUSH 0xe
// 00568a7c: PUSH ESI
// 00568a7d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568a82: ADD ESP,0xc
// 00568a85: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568a8a: PUSH 0x1
//   Label: LAB_00568a8a
// 00568a8c: PUSH 0xf
// 00568a8e: PUSH ESI
// 00568a8f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568a94: ADD ESP,0xc
// 00568a97: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568a9c: PUSH 0x3f000000
//   Label: LAB_00568a9c
// 00568aa1: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568aa6: ADD ESP,0x4
// 00568aa9: TEST EAX,EAX
// 00568aab: JZ 0x0056878f
//   XREF to: 0056878f (CONDITIONAL_JUMP)
// 00568ab1: PUSH 0x1
// 00568ab3: PUSH 0x4
// 00568ab5: PUSH ESI
// 00568ab6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568abb: ADD ESP,0xc
// 00568abe: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568ac3: PUSH 0x3dcccccd
//   Label: LAB_00568ac3
// 00568ac8: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568acd: ADD ESP,0x4
// 00568ad0: TEST EAX,EAX
// 00568ad2: JZ 0x00568128
//   XREF to: 00568128 (CONDITIONAL_JUMP)
// 00568ad8: PUSH 0x3f000000
// 00568add: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00568ae2: ADD ESP,0x4
// 00568ae5: TEST EAX,EAX
// 00568ae7: JZ 0x00568a8a
//   XREF to: 00568a8a (CONDITIONAL_JUMP)
// 00568ae9: PUSH 0x1
// 00568aeb: PUSH 0xe
// 00568aed: PUSH ESI
// 00568aee: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568af3: ADD ESP,0xc
// 00568af6: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568afb: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_f
//   XREF to: Stack[0x8] (READ)
// 00568b01: MOV EAX,dword ptr [EBX + 0x154]
// 00568b07: PUSH EBX
// 00568b08: CALL dword ptr [EAX + 0x158]
// 00568b0e: MOV ECX,dword ptr [EBX + 0xbe3c]
// 00568b14: ADD ESP,0x8
// 00568b17: TEST ECX,ECX
// 00568b19: JNZ 0x00568b32
//   XREF to: 00568b32 (CONDITIONAL_JUMP)
// 00568b1b: PUSH 0x1
// 00568b1d: PUSH ECX
// 00568b1e: LEA EAX,[EBX + 0x158]
// 00568b24: PUSH EAX
// 00568b25: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568b2a: ADD ESP,0xc
// 00568b2d: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
// 00568b32: MOV EDX,ECX
//   Label: LAB_00568b32
// 00568b34: LEA EAX,[EBX + 0x20]
// 00568b37: FLD float ptr [EDX + 0x20]
// 00568b3a: FSUB float ptr [EAX]
// 00568b3c: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xf8] (WRITE)
// 00568b3f: FLD float ptr [EDX + 0x24]
// 00568b42: FSUB float ptr [EAX + 0x4]
// 00568b45: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf4] (WRITE)
// 00568b48: FLD float ptr [EDX + 0x28]
// 00568b4b: FSUB float ptr [EAX + 0x8]
// 00568b4e: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xf8] (DATA)
// 00568b51: PUSH EAX
// 00568b52: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xd4] (DATA)
// 00568b55: PUSH EAX
// 00568b56: FSTP float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf0] (WRITE)
// 00568b59: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00568b5e: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 00568b61: ADD ESP,0x8
// 00568b64: MOV dword ptr [EBX + 0x34],EAX
// 00568b67: JMP 0x00568128
//   XREF to: 00568128 (UNCONDITIONAL_JUMP)
