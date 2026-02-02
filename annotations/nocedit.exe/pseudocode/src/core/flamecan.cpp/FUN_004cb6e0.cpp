// Name: core_flamecan.cpp_FUN_004cb6e0
// Address: 004cb6e0
// Address Range: [[004cb6e0, 004cb74e]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_FUN_004cb6e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_flamecan.cpp_FUN_004cb6e0(uint param_1,
   CActorPropertyList* param_2) */

void __cdecl core_flamecan_cpp_FUN_004cb6e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (in_stack_00000008,"Model file (.kfm)",
             (CKeyFramedModelInstance *)(in_stack_00000004 + 1),0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Time to explode",&in_stack_00000004[2].location.position.z,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"On fire",(int *)&in_stack_00000004[2].location.position.y);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Event to catch on fire",
             (char *)&in_stack_00000004[2].location.area_id);
  return;
}
