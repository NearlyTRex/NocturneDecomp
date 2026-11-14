// Name: core_health.cpp_CHealthItem_archive_FUN_004cdee0
// Address: 004cdee0
// Address Range: [[004cdee0, 004cdf5f]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_archive_FUN_004cdee0(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_archive_FUN_004cdee0(CHealthItem *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->use_count,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->hp_restored,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b850(acStack_104,"descriptiveName");
  return;
}
