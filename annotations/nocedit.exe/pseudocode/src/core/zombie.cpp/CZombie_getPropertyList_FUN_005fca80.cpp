// Name: core_zombie.cpp_CZombie_getPropertyList_FUN_005fca80
// Address: 005fca80
// Address Range: [[005fca80, 005fcb54]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80 (CZombie *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80
          (CZombie *this_ptr,CActorPropertyList *property_list)

{
  SMotion *pSVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar1->state_index == 0xe) {
    core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->base).base.model.motion_controller);
  iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
  if (iVar2 != 0x16) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  return;
}
