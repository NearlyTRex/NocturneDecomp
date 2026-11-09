// Name: core_health.cpp_CHealthItem_archive_FUN_004ea480
// Address: 004ea480
// Address Range: [[004ea480, 004ea4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_archive_FUN_004ea480(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_archive_FUN_004ea480(CHealthItem *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2d4,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2d8,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b560(acStack_104,"descriptiveName");
  return;
}
