// Name: core_flame.cpp_FUN_004cae70
// Address: 004cae70
// Address Range: [[004cae70, 004caf50]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004cae70(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cae70(uint param_1, uint param_2)
    */

void __cdecl core_flame_cpp_FUN_004cae70(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Flame type",4,(int *)&PTR_s_Torch_0067b0e0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Globe scalar",&in_stack_00000004[1].orient_matrix.m[2].x,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"On event",(char *)&in_stack_00000004[1].runtime_state);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Off event",in_stack_00000004[1].create_event + 0x4c);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Flame state",
             (int *)&in_stack_00000004[1].orient_matrix.m[2].z);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Intensity",
             (float *)&in_stack_00000004[1].previous_transform_state,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Randomness",
             &in_stack_00000004[1].previous_transform_state.position.y,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Catch hero on fire",
             (int *)&in_stack_00000004[1].previous_transform_state.position.z);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Catch enemies on fire",
             (int *)&in_stack_00000004[1].previous_transform_state.orientation);
  return;
}
