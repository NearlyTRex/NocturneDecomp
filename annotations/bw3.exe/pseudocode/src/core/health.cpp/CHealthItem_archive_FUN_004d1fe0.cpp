// Name: core_health.cpp_CHealthItem_archive_FUN_004d1fe0
// Address: 004d1fe0
// Address Range: [[004d1fe0, 004d207e]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_archive_FUN_004d1fe0(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_archive_FUN_004d1fe0(CHealthItem *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158," AmodelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2d8,"hpRestored");
  if (g_CHealthItemClassVersion == 2) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(acStack_104,"descriptiveName");
  }
  if (g_CHealthItemClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2e0,"automatic_use")
  ;
  return;
}
