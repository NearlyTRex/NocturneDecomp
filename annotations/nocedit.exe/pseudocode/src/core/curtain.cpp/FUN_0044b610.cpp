// Name: core_curtain.cpp_FUN_0044b610
// Address: 0044b610
// Address Range: [[0044b610, 0044b79d]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_FUN_0044b610(void)

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_0044b610(uint param_1, uint
   param_2) */

void __cdecl core_curtain_cpp_FUN_0044b610(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (in_stack_00000008,"Texture",in_stack_00000004[1].actor_name + 0x14,0x10,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Opacity",(int *)&in_stack_00000004[1].location.position.y,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Weight",(float *)&in_stack_00000004[0x4ba].unk12,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Dampen",
             (float *)&in_stack_00000004[0x4ba].previous_transform_state,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Spring",
             &in_stack_00000004[0x4ba].previous_transform_state.position.y,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Friction",
             &in_stack_00000004[0x4ba].previous_transform_state.position.z,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Gravity",
             &in_stack_00000004[0x4ba].previous_transform_state.orientation.x,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Simulated",
             (int *)(in_stack_00000004[1].create_event + 0x28));
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Hit floor",
             (int *)&in_stack_00000004[0x4ba].previous_transform_state.orientation.z);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"cinchedTop",
             (int *)&in_stack_00000004[1].location.position.z);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"cinchedBottom",(int *)&in_stack_00000004[1].orient.bank);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"cinchedLeft",&in_stack_00000004[1].location.area_id);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"cinchedRight",(int *)&in_stack_00000004[1].orient);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"falling",(int *)&in_stack_00000004[1].orient.heading);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Let go condition",
             (char *)&in_stack_00000004[1].orient_matrix);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Patch size",
             (float *)(in_stack_00000004[1].create_event + 0x2c),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Block virtual director",
             (int *)(in_stack_00000004[1].create_event + 0x30));
  return;
}
