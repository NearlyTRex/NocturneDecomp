// Name: core_ladder.cpp_FUN_004e0190
// Address: 004e0190
// Address Range: [[004e0190, 004e0205]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004e0190(CLadder *param_1)

#include "nocturne.h"

void core_ladder_cpp_FUN_004e0190(CLadder *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&param_1->field_0x2b4,"?model" + 1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1->field_0x430,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1->field_0x43c,"masterActor");
  core_ladder_cpp_FUN_004e0380(param_1);
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1->field_0x458,"groundType");
  return;
}
