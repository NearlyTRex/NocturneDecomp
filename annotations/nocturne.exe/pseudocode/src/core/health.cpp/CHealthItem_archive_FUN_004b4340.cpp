// Name: core_health.cpp_CHealthItem_archive_FUN_004b4340
// Address: 004b4340
// Address Range: [[004b4340, 004b43bf]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_archive_FUN_004b4340(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_archive_FUN_004b4340(CHealthItem *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->use_count,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->hp_restored,"hpRestored");
  if (INT_005ba928 != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
