// Name: core_spike.cpp_FUN_005b8e90
// Address: 005b8e90
// Address Range: [[005b8e90, 005b901f]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_FUN_005b8e90(void)

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_FUN_005b8e90(uint param_1, uint param_2)
    */

void __cdecl core_spike_cpp_FUN_005b8e90(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  char *property_name;
  char *data_ptr;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (in_stack_00000008,"Model file (.kfm)",
             (CKeyFramedModelInstance *)(in_stack_00000004 + 1),0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Type",3,(int *)&PTR_s_Periodic_00684120);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"State",4,(int *)&PTR_s_Retracted_00684138);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Are we active",&in_stack_00000004[2].location.area_id,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Extend distance",
             (float *)&in_stack_00000004[2].orient_matrix,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  if (in_stack_00000004[2].location.position.y == 2.8026e-45) {
    core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
              (in_stack_00000008,"Extend cond",(char *)&in_stack_00000004[2].scale);
    data_ptr = in_stack_00000004[3].actor_name + 0x14;
    property_name = "Retract cond";
  }
  else {
    core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
              (in_stack_00000008,"Start cond",
               (char *)&in_stack_00000004[2].orient_matrix.m[0].y);
    data_ptr = in_stack_00000004[2].create_event + 0x2c;
    property_name = "Stop cond";
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460(in_stack_00000008,property_name,data_ptr);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Extend time",(float *)in_stack_00000004[3].create_event,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Retract time",
             (float *)(in_stack_00000004[3].create_event + 4),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (in_stack_00000008,"Extend sound",in_stack_00000004[3].create_event + 0xc);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (in_stack_00000008,"Retract sound",&in_stack_00000004[3].unk3.z);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Period",(float *)&in_stack_00000004[3].next_actor,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Param",(float *)&in_stack_00000004[3].vtable,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"DamageStrength",(float *)&in_stack_00000004[3].prev_actor,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
