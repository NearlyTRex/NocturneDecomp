// Name: core_gabriela.cpp_CGabriella_FUN_004d6b30
// Address: 004d6b30
// Address Range: [[004d6b30, 004d6bef] [004d6c76, 004d6ce2] [004d6d03, 004d6d30]]
// Convention: __cdecl
// Signature: void core_gabriela.cpp_CGabriella_FUN_004d6b30(CGabriella * this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6b30(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  SMotion *pSVar2;
  float fVar3;
  int in_stack_00000008;
  int in_stack_ffffffc4;
  
  if (((this_ptr->base_hero).field1_0xbe24 & 0x7fffffffU) != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  (this_ptr->base_hero).field1_0xbe24 = DAT_0065e7c4;
  fVar3 = (this_ptr->base_hero).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  (this_ptr->base_hero).base_character.hit_points = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < *(float *)(in_stack_00000008 + 4)) {
      if (*(int *)((this_ptr->base_hero).field6_0x1fb9c + 0x10) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
      }
      if (g_CGamePtr->hero_number != 2) {
        pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
        (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-hit[1,6].wav",fVar3);
      }
    }
  }
  else {
    (this_ptr->base_hero).base_character.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 0xc) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 0xb) {
        (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_hero).base_character.model.motion_controller,
                   (fVar3 <= 50f) + 9,in_stack_ffffffc4);
        if (g_CGamePtr->hero_number != 2) {
          pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
          (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-die[1,6].wav",fVar3);
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
      }
    }
  }
  if (*(float *)(in_stack_00000008 + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
    return;
  }
  core_game_cpp_CGame_FUN_004e0bd0(g_CGamePtr);
  core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
  return;
}
