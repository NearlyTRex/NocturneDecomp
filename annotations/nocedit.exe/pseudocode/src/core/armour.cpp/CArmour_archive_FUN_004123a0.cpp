// Name: core_armour.cpp_CArmour_archive_FUN_004123a0
// Address: 004123a0
// Address Range: [[004123a0, 004123fb]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_archive_FUN_004123a0(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_archive_FUN_004123a0(CArmour *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->unk,"fallApartEvent");
  return;
}
