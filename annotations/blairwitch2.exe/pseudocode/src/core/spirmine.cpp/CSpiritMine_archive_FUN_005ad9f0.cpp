// Name: core_spirmine.cpp_CSpiritMine_archive_FUN_005ad9f0
// Address: 005ad9f0
// Address Range: [[005ad9f0, 005ada4f]]
// Convention: __cdecl
// Signature: void __cdecl core_spirmine_cpp_CSpiritMine_archive_FUN_005ad9f0(CSpiritMine *this_ptr)

#include "nocturne.h"

void __cdecl core_spirmine_cpp_CSpiritMine_archive_FUN_005ad9f0(CSpiritMine *this_ptr)

{
  core_boxactor_cpp_CBoxActor_archive_FUN_0041c7f0((CBoxActor *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x7dc,"@sleepTime" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x7e0,"effectTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x7e4,"effectDamage");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x7d4,"triggerRadius");
  return;
}
