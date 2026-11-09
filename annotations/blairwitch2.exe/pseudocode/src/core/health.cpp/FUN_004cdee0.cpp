// Name: core_health.cpp_FUN_004cdee0
// Address: 004cdee0
// Address Range: [[004cdee0, 004cdf5f]]
// Convention: unknown
// Signature: void core_health_cpp_FUN_004cdee0(CDemonActor *param_1)

#include "nocturne.h"

void core_health_cpp_FUN_004cdee0(CDemonActor *param_1)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b850(acStack_104,"descriptiveName");
  return;
}
