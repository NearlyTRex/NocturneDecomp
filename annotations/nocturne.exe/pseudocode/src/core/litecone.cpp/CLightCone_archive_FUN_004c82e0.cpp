// Name: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
// Address: 004c82e0
// Address Range: [[004c82e0, 004c8360]]
// Convention: unknown
// Signature: void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(CDemonActor *param_1)

#include "nocturne.h"

void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1 + 1),"fov");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1[1].actor_name + 4),"falloff");
  if (INT_005bacf8 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1[1].actor_name + 8),"state");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0xc,"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[1].lifecycle_state,"offEvent")
  ;
  return;
}
