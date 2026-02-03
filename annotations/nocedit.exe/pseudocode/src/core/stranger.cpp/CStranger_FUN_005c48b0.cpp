// Name: core_stranger.cpp_CStranger_FUN_005c48b0
// Address: 005c48b0
// Address Range: [[005c48b0, 005c4b51] [005c4b7c, 005c4c15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c48b0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c48b0(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter_full_vtable *pCVar1;
  CConsole *this_ptr_01;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  float fVar6;
  CDemonActor *pCVar7;
  SDamageInfo *in_stack_00000008;
  int desired_state_index;
  
  if (g_CGamePtr->unk2 != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
  if ((0.0 < (float)(this_ptr->base).unk1) && (0xb < in_stack_00000008->damage_type)) {
    in_stack_00000008->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).unk1 = (uint)2.0f;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008->wielder,"CBugs");
  if (iVar3 != 0) {
    (this_ptr->base).unk1 = 0x3e19999a;
  }
  pCVar2 = g_CGamePtr;
  (this_ptr->base).base.hit_points =
       (this_ptr->base).base.hit_points - in_stack_00000008->damage_amount;
  this_ptr_01 = g_CConsolePtr;
  if (((pCVar2->auto_use_health != 0) && (0xb < in_stack_00000008->damage_type)) &&
     ((this_ptr->base).base.hit_points <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_01,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(&(this_ptr->base).inventory);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"hit points: %3.2f\n",(double)(this_ptr->base).base.hit_points);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCVar1 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar1->_uc).cfunc7)();
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar4->state_index != 0x29) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar4->state_index != 0x28) {
        if ((*(int *)((this_ptr->base).unk4 + 0x10) == 0) && (*(int *)(this_ptr->unk1 + 0x50) == 0))
        {
          if (in_stack_00000008->damage_type == 1) {
            desired_state_index = 0x27;
            iVar3 = 1;
          }
          else {
            iVar3 = 1;
            fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
            desired_state_index = (fVar6 <= 50.0f) + 0x25;
          }
        }
        else {
          iVar3 = 1;
          desired_state_index = 0xf;
          (this_ptr->base).unk4[0x10] = '\0';
          (this_ptr->base).unk4[0x11] = '\0';
          (this_ptr->base).unk4[0x12] = '\0';
          (this_ptr->base).unk4[0x13] = '\0';
          this_ptr->unk1[0x50] = '\0';
          this_ptr->unk1[0x51] = '\0';
          this_ptr->unk1[0x52] = '\0';
          this_ptr->unk1[0x53] = '\0';
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,desired_state_index,iVar3);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk3 + 0x14));
        if (in_stack_00000008->damage_type != 1) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"stranger_die??.wav");
          *(uint *)(this_ptr->unk3 + 0x14) = uVar5;
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
      }
    }
    if (*(CDemonActor **)(this_ptr->unk1 + 0x54) == (this_ptr->base).base.carry_hands[0].carry_actor
       ) {
      this_ptr->unk1[0x54] = '\0';
      this_ptr->unk1[0x55] = '\0';
      this_ptr->unk1[0x56] = '\0';
      this_ptr->unk1[0x57] = '\0';
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
    if ((this_ptr->base).base.carry_hands[1].carry_actor == *(CDemonActor **)(this_ptr->unk1 + 0x54)
       ) {
      this_ptr->unk1[0x54] = '\0';
      this_ptr->unk1[0x55] = '\0';
      this_ptr->unk1[0x56] = '\0';
      this_ptr->unk1[0x57] = '\0';
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
    goto LAB_005c4ae0;
  }
  if (in_stack_00000008->damage_amount <= 0.0) goto LAB_005c4ae0;
  if (((in_stack_00000008->damage_type != 0x69) && (*(int *)((this_ptr->base).unk4 + 0x10) == 0)) &&
     ((*(int *)(this_ptr->unk1 + 0x50) == 0 && (this_ptr->action_pending == 0)))) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008->attacker,g_CTommyGunClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.333);
      if (iVar3 == 0) goto LAB_005c4be2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0x24,1);
  }
LAB_005c4be2:
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x14));
  if (iVar3 == 0) {
    uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"stranger_hit??.wav");
    *(uint *)(this_ptr->unk3 + 0x14) = uVar5;
  }
LAB_005c4ae0:
  if (0.0 < in_stack_00000008->damage_amount) {
    core_game_cpp_CGame_FUN_004e0bd0(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,in_stack_00000008);
  return;
}
