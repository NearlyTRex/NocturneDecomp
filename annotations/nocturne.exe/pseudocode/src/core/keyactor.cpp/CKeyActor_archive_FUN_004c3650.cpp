// Name: core_keyactor.cpp_CKeyActor_archive_FUN_004c3650
// Address: 004c3650
// Address Range: [[004c3650, 004c36bb]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(CKeyActor *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->key_mask,"keyMask");
  if (INT_005bac4c != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
