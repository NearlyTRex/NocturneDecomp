// Name: core_zombie.cpp_CZombie_getPropertyList_FUN_005fca80
// Address: 005fca80
// Address Range: [[005fca80, 005fcb54]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80(CZombie *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80(CZombie *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  SMotion *pSVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&data_ptr->motion_controller);
  if (pSVar1->state_index == 0xe) {
    core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
              (property_list,"RiseFromGraveCondition",this_ptr->rise_from_grave_condition);
    core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
              (property_list,"Grave actor",&this_ptr->grave_actor,0,"CGrave",
               (CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"IsMinerZombie",&this_ptr->is_miner_zombie);
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->base).base.model.motion_controller);
  iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
  if (iVar2 != 0x16) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Always fast",&this_ptr->always_chase_fast);
  return;
}
