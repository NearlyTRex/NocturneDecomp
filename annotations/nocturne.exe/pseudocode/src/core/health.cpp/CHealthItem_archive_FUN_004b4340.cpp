// Name: core_health.cpp_CHealthItem_archive_FUN_004b4340
// Address: 004b4340
// Address Range: [[004b4340, 004b43bf]]
// Convention: unknown
// Signature: void core_health_cpp_CHealthItem_archive_FUN_004b4340(CDemonActor *param_1)

#include "nocturne.h"

void core_health_cpp_CHealthItem_archive_FUN_004b4340(CDemonActor *param_1)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].orient,"hpRestored");
  if (INT_005ba928 != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
