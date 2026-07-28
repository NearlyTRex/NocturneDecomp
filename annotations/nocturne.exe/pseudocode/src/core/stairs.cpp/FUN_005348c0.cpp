// Name: core_stairs.cpp_FUN_005348c0
// Address: 005348c0
// Address Range: [[005348c0, 00534933]]
// Convention: unknown
// Signature: void core_stairs_cpp_FUN_005348c0(CDemonActor *param_1)

#include "nocturne.h"

void core_stairs_cpp_FUN_005348c0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1 + 1),"rise");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1[1].actor_name + 4),"run");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1[1].actor_name + 8),"width");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1[1].actor_name + 0x14),"count")
  ;
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[7].is_renderable,"groundType");
  return;
}
