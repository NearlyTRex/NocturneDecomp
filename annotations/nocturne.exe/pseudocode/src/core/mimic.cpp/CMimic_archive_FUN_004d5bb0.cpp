// Name: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
// Address: 004d5bb0
// Address Range: [[004d5bb0, 004d5c7e]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_archive_FUN_004d5bb0(int param_1)

#include "nocturne.h"

void core_mimic_cpp_CMimic_archive_FUN_004d5bb0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd88,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x4691c,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x46920,"mirrorPlaneActor");
  if (INT_005baf48 < 2) {
    if (INT_005baf48 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x46924,"morphActorType");
    if (INT_005baf48 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd24,"mirrorCondition");
  return;
}
