// Name: core_flamecan.cpp_FUN_004a0b90
// Address: 004a0b90
// Address Range: [[004a0b90, 004a0bef]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_004a0b90(CDemonActor *param_1)

#include "nocturne.h"

void core_flamecan_cpp_FUN_004a0b90(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x184,"onFireCondition");
  return;
}
