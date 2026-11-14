// Name: core_armour.cpp_CArmour_archive_FUN_0040ebe0
// Address: 0040ebe0
// Address Range: [[0040ebe0, 0040ec3b]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_archive_FUN_0040ebe0(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_archive_FUN_0040ebe0(CArmour *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->fall_apart_event,"fallApartEvent");
  return;
}
