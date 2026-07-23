// Name: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
// Address: 004c82e0
// Address Range: [[004c82e0, 004c8360]]
// Convention: unknown
// Signature: void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(int param_1)

#include "nocturne.h"

void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x150,"fov");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x154,"falloff");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x158,"state");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x15c,"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1c0,"offEvent");
  return;
}
