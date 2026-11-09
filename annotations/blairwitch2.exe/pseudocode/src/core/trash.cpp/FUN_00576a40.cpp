// Name: core_trash.cpp_FUN_00576a40
// Address: 00576a40
// Address Range: [[00576a40, 00576a77]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00576a40(CDemonActor *param_1)

#include "nocturne.h"

void core_trash_cpp_FUN_00576a40(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x17c,"homePos");
  return;
}
