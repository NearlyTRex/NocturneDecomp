// Name: core_keyactor.cpp_CKeyActor_archive_FUN_004c3650
// Address: 004c3650
// Address Range: [[004c3650, 004c36bb]]
// Convention: unknown
// Signature: void core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(CDemonActor *param_1)

#include "nocturne.h"

void core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(CDemonActor *param_1)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"keyMask");
  if (INT_005bac4c != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
