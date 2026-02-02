// Name: core_dracbrid.cpp_FUN_00486c90
// Address: 00486c90
// Address Range: [[00486c90, 00486cfa]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_00486c90(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00486c90(uint param_1, uint
   param_2) */

void __cdecl core_dracbrid_cpp_FUN_00486c90(void)

{
  CDeformableModelInstance *data_ptr;
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(in_stack_00000004,in_stack_00000008);
  data_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (in_stack_00000008,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Rise event",
             (char *)&in_stack_00000004[1].base.base.location.area_id);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0
            (in_stack_00000008,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"Which bride voice (1..5)",
             (int *)(in_stack_00000004[1].base.base.create_event + 0x18),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
