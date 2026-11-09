// Name: core_health.cpp_FUN_004d1fe0
// Address: 004d1fe0
// Address Range: [[004d1fe0, 004d207e]]
// Convention: unknown
// Signature: void core_health_cpp_FUN_004d1fe0(CDemonActor *param_1)

#include "nocturne.h"

void core_health_cpp_FUN_004d1fe0(CDemonActor *param_1)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(param_1 + 1," AmodelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x24,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x28,"hpRestored");
  if (g_CHealthItemClassVersion == 2) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(acStack_104,"descriptiveName");
  }
  if (g_CHealthItemClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x30,"automatic_use")
  ;
  return;
}
