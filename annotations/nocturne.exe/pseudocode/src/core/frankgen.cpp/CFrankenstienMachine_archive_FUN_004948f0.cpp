// Name: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004948f0
// Address: 004948f0
// Address Range: [[004948f0, 00494927]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004948f0(CDemonActor *param_1)

#include "nocturne.h"

void core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004948f0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].actor_name + 4),"masterFrame");
  return;
}
