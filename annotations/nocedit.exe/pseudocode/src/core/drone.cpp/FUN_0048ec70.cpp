// Name: core_drone.cpp_FUN_0048ec70
// Address: 0048ec70
// Address Range: [[0048ec70, 0048f2ea]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048ec70()

#include "nocturne.h"

/* Signature: byte actors_enemy_drone.cpp_FUN_0048ec70(uint param_1, uint param_2)
    */

void core_drone_cpp_FUN_0048ec70(void)

{
  CDeformableModelInstance *this_ptr;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CEnemy *pCVar10;
  CVector3f *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar12;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo local_dc;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18));
    return;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_20 = in_stack_00000008 * in_stack_00000004->speed;
  this_ptr = &(in_stack_00000004->base_character).model;
  while (0.0 < local_20) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
  }
  fVar2 = in_stack_00000004->speed;
  fVar6 = (float)3.1415926535000001;
  fVar5 = (float)0.5;
  fVar4 = (float)2;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z * fVar4;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar6 * fVar2 * fVar5 * fVar4;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  iVar7 = pSVar8->state_index;
  local_1c = iVar7;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX == 0) {
        (*(((in_stack_00000004->base_character).base_actor.vtable._ue)->_ue).field_4)();
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((in_stack_00000004->base_character).base_actor.vtable._ue)->_ue).field_4)();
      fVar2 = 3.0f;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        local_18 = 3.0f;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_64 = 0;
        local_5c = fVar2;
        local_60 = 0;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (&in_stack_00000004->base_character);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",in_stack_00000004);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
        else if ((0 < iVar7) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,2,1);
          uVar3 = *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c);
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = -0x80;
          in_stack_00000004->field6_0xbe38[3] = '?';
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar3);
          if (iVar7 == 0) {
            uVar12 = (*((in_stack_00000004->base_character).base_actor.vtable._ub)->playSound)
                               ((CDemonActor *)in_stack_00000004,"drone-attack?.wav");
            *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) =
                 uVar12;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_dc);
      local_dc.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)in_stack_00000004;
      local_dc.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_dc.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_88,&g_ZeroVector,
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices +
                           *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)
                          );
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_58,pCVar11);
      core_enemy_cpp_FUN_004a9880();
      local_dc.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)in_stack_00000004;
      local_dc.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_dc.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_4c,&g_ZeroVector,
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices +
                           *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10
                                   ));
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_34,pCVar11);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 8:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (this_ptr,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_94,pCVar11);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      if (*(int *)((in_stack_00000004->base_character).field2_0x240c + 4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,10,1);
      }
    }
    goto switchD_0048f284_caseD_3;
  }
  uVar3 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_0048ed51:
      iVar7 = 1;
    }
    else {
LAB_0048ef7a:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar7,1);
  }
  else {
    if (uVar3 < 3) goto LAB_0048ed51;
    if (uVar3 != 3) goto LAB_0048ef7a;
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
switchD_0048f284_caseD_3:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  if ((local_1c == 1) &&
     (iVar7 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base_character).base_actor.location.position.x,
                         (double)(in_stack_00000004->base_character).base_actor.location.position.y,
                         (double)(in_stack_00000004->base_character).base_actor.location.position.z,
                         50.0), iVar7 != 0)) {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18));
    if (iVar7 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar7 = 2;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar7);
      uVar12 = (*((in_stack_00000004->base_character).base_actor.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)in_stack_00000004,"slime.wav");
      *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = uVar12;
      local_dc.damage_amount = 6.699263e-39;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18));
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar7 != 0) {
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar10 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))(), pCVar10 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_7c = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_78 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_74 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar11 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_70 = local_7c + *(float *)pcVar1;
    local_6c = local_78 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_68 = local_74 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_40 = local_70 + pCVar11->x;
    local_3c = local_6c + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_38 = local_68 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
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
    pCVar11->x = fVar2;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
