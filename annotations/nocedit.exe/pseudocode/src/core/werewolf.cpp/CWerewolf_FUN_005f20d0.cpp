// Name: core_werewolf.cpp_CWerewolf_FUN_005f20d0
// Address: 005f20d0
// Address Range: [[005f20d0, 005f21da]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *data_ptr;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,in_stack_00000008);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (in_stack_00000008,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0
            (in_stack_00000008,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (in_stack_00000008,"Type",core_werewolf_cpp_FUN_005f2010,
             core_werewolf_cpp_FUN_005f2070);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Light up eyes",&this_ptr->light_up_eyes);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"chainAnchor",this_ptr->unk4 + 0x10,1,"CDemonActor"
             ,(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  if (*(int *)(this_ptr->unk4 + 0x10) == 0) {
    if (this_ptr->type != 2) {
      return;
    }
  }
  else {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (in_stack_00000008,"chainLength",&this_ptr->chain_length,1.0,1000.0,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    if (this_ptr->type != 2) {
      return;
    }
  }
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Way Point 1",this_ptr->unk5,1,"CWayPoint",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Way Point 2",this_ptr->unk5 + 4,1,"CWayPoint",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
