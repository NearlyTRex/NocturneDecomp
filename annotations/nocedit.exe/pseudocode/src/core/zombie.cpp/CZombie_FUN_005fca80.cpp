// Name: core_zombie.cpp_CZombie_FUN_005fca80
// Address: 005fca80
// Address Range: [[005fca80, 005fcb54]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_FUN_005fca80(CZombie * this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fca80(CZombie *this_ptr)

{
  SMotion *pSVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000018;
  int *piStack0000001c;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base_enemy).base_character.model.motion_controller);
  if (pSVar1->state_index == 0xe) {
    core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
  if (iVar2 != 0x16) {
    return;
  }
  piStack0000001c = &this_ptr->always_chase_fast;
  pcStack00000018 = "Always fast";
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
