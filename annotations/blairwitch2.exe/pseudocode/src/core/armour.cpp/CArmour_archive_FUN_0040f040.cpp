// Name: core_armour.cpp_CArmour_archive_FUN_0040f040
// Address: 0040f040
// Address Range: [[0040f040, 0040f09b]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_archive_FUN_0040f040(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_archive_FUN_0040f040(CArmour *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x10af8,"fallApartEvent");
  return;
}
