// Name: core_sentinel.cpp_FUN_00568030
// Address: 00568030
// Address Range: [[00568030, 00568b6b]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568030()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_sentinel.cpp_FUN_00568030(uint param_1, uint
   param_2) */

void core_sentinel_cpp_FUN_00568030(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f *in_stack_fffffe60;
  float in_stack_fffffe64;
  float in_stack_fffffe68;
  SDamageInfo local_164;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  uint local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  uint local_98;
  uint local_94;
  float local_90;
  CVector3f local_8c;
  uint local_80;
  uint local_7c;
  float local_78;
  CVector3f local_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44 [2];
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
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_2c = in_stack_00000008 * in_stack_00000004->speed;
  pCVar1 = &(in_stack_00000004->base_character).model;
LAB_00568089:
  if (0.0 < local_2c) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    switch(iVar7) {
    case 100:
      if ((((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
           (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x120))(), iVar7 == 0)) &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar7 == 0)) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0xfc))(), iVar7 != 0)) {
        local_110.z = DAT_00662678;
        local_110.x = 0.0;
        local_110.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_c8,&local_110);
        fVar3 = local_c8.x - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar5 = local_c8.z - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        fVar5 = (float)0.80000000000000004;
        if (ABS(local_c8.y - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24)) <=
            (float)4) {
          if ((fVar5 < fVar3) ||
             (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154)
                                  + 0x100))(), iVar7 != 0)) {
            if (fVar5 < fVar3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      break;
    case 0x65:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].handleFootstep)
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
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"wing?.wav");
      break;
    case 0x68:
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
    goto LAB_00568089;
  }
  fVar3 = in_stack_00000004->speed;
  fVar5 = (float)3.1415926535000001;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar7 = pSVar8->state_index;
  local_1c = iVar7;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar9 == 0) {
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
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
      if (iVar7 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,2,1);
        }
      }
      else {
        local_5c = *(float *)(iVar7 + 0x20) -
                   (in_stack_00000004->base_character).base_actor.location.position.x;
        local_58 = *(float *)(iVar7 + 0x24) -
                   (in_stack_00000004->base_character).base_actor.location.position.y;
        local_54 = *(float *)(iVar7 + 0x28) -
                   (in_stack_00000004->base_character).base_actor.location.position.z;
        if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= _DAT_00662684)
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,3,1);
        }
      }
      break;
    case 1:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
      }
      break;
    case 2:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      fVar3 = DAT_00662678;
      pCVar1 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        local_20 = DAT_00662678;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
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
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,3,1);
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
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_74.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
              pCVar1 = &(in_stack_00000004->base_character).model;
              if (iVar7 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,10,1);
                pCVar6 = &in_stack_00000004[1].base_character;
                (pCVar6->base_actor).actor_name[0xc] = '\0';
                (pCVar6->base_actor).actor_name[0xd] = '\0';
                (pCVar6->base_actor).actor_name[0xe] = -0x60;
                (pCVar6->base_actor).actor_name[0xf] = '@';
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,4,1);
              }
              in_stack_00000004->field6_0xbe38[0] = '\0';
              in_stack_00000004->field6_0xbe38[1] = '\0';
              in_stack_00000004->field6_0xbe38[2] = -0x80;
              in_stack_00000004->field6_0xbe38[3] = '?';
            }
          }
          if (in_stack_00000004->guard_distance < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,0,1);
          }
        }
        break;
      }
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX_00 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        break;
      }
LAB_0056878f:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,2,1);
      break;
    case 3:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      pCVar1 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        break;
      }
      (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
      (in_stack_00000004->base_character).model.accumulated_root_motion.y =
           (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).model.accumulated_root_motion.x =
           (in_stack_00000004->base_character).model.accumulated_root_motion.y;
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
      if (_DAT_00662684 <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar7 == 0) break;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      else {
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 == 0) {
          iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,4,1);
            break;
          }
          goto LAB_0056878f;
        }
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,0xf,1);
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_b0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices[DAT_03114214].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_a4,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_50,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices[DAT_0311420c].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_8c,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 9:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (&(in_stack_00000004->base_character).model,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_128,pCVar10);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 10:
      fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) -
              in_stack_00000008;
      *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = fVar3;
      if (fVar3 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
      if (iVar7 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
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
    goto switchD_00568487_caseD_d;
  }
  uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_005680fd:
      iVar7 = 2;
    }
    else {
LAB_0056845d:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar7,1);
  }
  else {
    if (uVar4 < 3) goto LAB_005680fd;
    if (uVar4 != 3) goto LAB_0056845d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_00568487_caseD_d:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar7 != 0) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_104 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                in_stack_00000008;
    local_100 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_fc = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar10 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_ec = local_104 + *(float *)pcVar2;
    local_e8 = local_100 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_e4 = local_fc + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_68 = local_ec + pCVar10->x;
    local_64 = local_e8 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_60 = local_e4 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    pCVar10->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
