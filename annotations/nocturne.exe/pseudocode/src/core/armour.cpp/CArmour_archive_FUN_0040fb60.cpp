// Name: core_armour.cpp_CArmour_archive_FUN_0040fb60
// Address: 0040fb60
// Address Range: [[0040fb60, 0040fbbb]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_archive_FUN_0040fb60(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_archive_FUN_0040fb60(CArmour *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->fall_apart_event,"fallApartEvent");
  return;
}
