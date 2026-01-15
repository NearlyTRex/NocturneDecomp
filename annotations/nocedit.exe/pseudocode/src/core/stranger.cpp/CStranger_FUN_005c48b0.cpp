// Name: core_stranger.cpp_CStranger_FUN_005c48b0
// Address: 005c48b0
// Address Range: [[005c48b0, 005c4b51] [005c4b7c, 005c4c15]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c48b0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c48b0(uint param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005c48b0(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  CConsole *this_ptr_00;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  float fVar6;
  CDemonActor *pCVar7;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  int desired_state_index;
  float in_stack_ffffffec;
  
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  core_hero_cpp_FUN_004f3580();
  if ((0.0 < *(float *)in_stack_00000004[1].base_actor.actor_name) &&
     (0xb < *(int *)(in_stack_00000008 + 0x30))) {
    *(uint *)(in_stack_00000008 + 4) = 0;
    return;
  }
  *(uint *)in_stack_00000004[1].base_actor.actor_name = _DAT_00663738;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                    (*(CDemonActor **)(in_stack_00000008 + 0x38),"CBugs");
  if (iVar3 != 0) {
    in_stack_00000004[1].base_actor.actor_name[0] = -0x66;
    in_stack_00000004[1].base_actor.actor_name[1] = -0x67;
    in_stack_00000004[1].base_actor.actor_name[2] = '\x19';
    in_stack_00000004[1].base_actor.actor_name[3] = '>';
  }
  pCVar2 = g_CGamePtr;
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = g_CConsolePtr;
  if (((pCVar2->auto_use_health != 0) && (0xb < *(int *)(in_stack_00000008 + 0x30))) &&
     (in_stack_00000004->hit_points <= 0.0)) {
    in_stack_00000004->hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_00,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570
              ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"hit points: %3.2f\n",(double)in_stack_00000004->hit_points);
  }
  this_ptr = &in_stack_00000004->model;
  if (in_stack_00000004->hit_points <= 0.0) {
    pCVar1 = (in_stack_00000004->base_actor).vtable;
    in_stack_00000004->hit_points = 0.0;
    (*pCVar1[1].processFootstep)(&in_stack_00000004->base_actor,in_stack_ffffffec);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar4->state_index != 0x29) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar4->state_index != 0x28) {
        if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) &&
           (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0)) {
          if (*(int *)(in_stack_00000008 + 0x30) == 1) {
            desired_state_index = 0x27;
            iVar3 = 1;
          }
          else {
            iVar3 = 1;
            fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
            desired_state_index = (fVar6 <= 50f) + 0x25;
          }
        }
        else {
          iVar3 = 1;
          desired_state_index = 0xf;
          in_stack_00000004[2].cloth_data[0x54cc] = '\0';
          in_stack_00000004[2].cloth_data[0x54cd] = '\0';
          in_stack_00000004[2].cloth_data[0x54ce] = '\0';
          in_stack_00000004[2].cloth_data[0x54cf] = '\0';
          in_stack_00000004[2].cloth_data[0x5548] = '\0';
          in_stack_00000004[2].cloth_data[0x5549] = '\0';
          in_stack_00000004[2].cloth_data[0x554a] = '\0';
          in_stack_00000004[2].cloth_data[0x554b] = '\0';
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,desired_state_index,iVar3);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x5788));
        if (*(int *)(in_stack_00000008 + 0x30) != 1) {
          uVar5 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                            (&in_stack_00000004->base_actor,"stranger_die??.wav");
          *(uint *)(in_stack_00000004[2].cloth_data + 0x5788) = uVar5;
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
      }
    }
    if (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c) ==
        in_stack_00000004->carry_hands[0].carry_actor) {
      in_stack_00000004[2].cloth_data[0x554c] = '\0';
      in_stack_00000004[2].cloth_data[0x554d] = '\0';
      in_stack_00000004[2].cloth_data[0x554e] = '\0';
      in_stack_00000004[2].cloth_data[0x554f] = '\0';
    }
    (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)(&in_stack_00000004->base_actor);
    if (in_stack_00000004->carry_hands[1].carry_actor ==
        *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c)) {
      in_stack_00000004[2].cloth_data[0x554c] = '\0';
      in_stack_00000004[2].cloth_data[0x554d] = '\0';
      in_stack_00000004[2].cloth_data[0x554e] = '\0';
      in_stack_00000004[2].cloth_data[0x554f] = '\0';
    }
    (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)(&in_stack_00000004->base_actor);
    goto LAB_005c4ae0;
  }
  if (*(float *)(in_stack_00000008 + 4) <= 0.0) goto LAB_005c4ae0;
  if (((*(int *)(in_stack_00000008 + 0x30) != 0x69) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0)) &&
     ((*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0 &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 0)))) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000008 + 0x34),g_CTommyGunClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.333);
      if (iVar3 == 0) goto LAB_005c4be2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,0x24,1);
  }
LAB_005c4be2:
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (*(uint *)(in_stack_00000004[2].cloth_data + 0x5788));
  if (iVar3 == 0) {
    uVar5 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"stranger_hit??.wav");
    *(uint *)(in_stack_00000004[2].cloth_data + 0x5788) = uVar5;
  }
LAB_005c4ae0:
  if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    core_game_cpp_CGame_FUN_004e0bd0(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}
