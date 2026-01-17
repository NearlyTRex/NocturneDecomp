// Name: core_cow.cpp_FUN_00444310
// Address: 00444310
// Address Range: [[00444310, 00444833]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444310()

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_00444310(uint param_1, uint param_2)
    */

void core_cow_cpp_FUN_00444310(void)

{
  CDeformableModelInstance *this_ptr;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CEnemy *pCVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar11;
  int extraout_EAX_01;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar6 == 0) {
    return;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_1c = in_stack_00000008 * in_stack_00000004->speed;
  this_ptr = &(in_stack_00000004->base_character).model;
  while (0.0 < local_1c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
  }
  fVar2 = in_stack_00000004->speed;
  fVar5 = (float)3.1415926535000001;
  fVar4 = (float)0.25;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar2 * fVar4;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  iVar6 = pSVar7->state_index;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX == 0) {
        (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)in_stack_00000004);
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
          core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                    (g_CSoundPtr,
                     *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10));
          if (extraout_EAX_00 == 0) {
            uVar11 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                               ((CDemonActor *)in_stack_00000004,"cow?.wav");
            *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
                 uVar11;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,1,1);
      }
      break;
    case 1:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      uVar11 = 0x40900000;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_01 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        local_18 = 0x40900000;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_54 = 0;
        local_50 = 0;
        local_4c = uVar11;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (&in_stack_00000004->base_character);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
        else if ((0 < iVar6) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,2,1);
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = ' ';
          in_stack_00000004->field6_0xbe38[3] = '@';
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff40);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_3c,&g_ZeroVector,
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices +
                           *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)
                          );
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_30,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 5:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (this_ptr,&local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_84,pCVar10);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
    }
    goto switchD_0044482d_caseD_3;
  }
  uVar3 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004443e0:
      iVar6 = 1;
    }
    else {
LAB_004445a0:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar6,1);
  }
  else {
    if (uVar3 < 3) goto LAB_004443e0;
    if (uVar3 != 3) goto LAB_004445a0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_0044482d_caseD_3:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar6 != 0) {
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar9 = (CEnemy *)
                 (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))(), pCVar9 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_48 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_44 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_40 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar10 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_60 = local_48 + *(float *)pcVar1;
    local_5c = local_44 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_58 = local_40 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_6c = local_60 + pCVar10->x;
    local_68 = local_5c + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_64 = local_58 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar1 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    fVar2 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar2;
    pCVar10->x = fVar2;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
