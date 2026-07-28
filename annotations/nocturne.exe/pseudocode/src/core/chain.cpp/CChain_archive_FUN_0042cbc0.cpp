// Name: core_chain.cpp_CChain_archive_FUN_0042cbc0
// Address: 0042cbc0
// Address Range: [[0042cbc0, 0042cce0]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_archive_FUN_0042cbc0(CDemonActor *param_1)

#include "nocturne.h"

void core_chain_cpp_CChain_archive_FUN_0042cbc0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"vertexCount");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].actor_name + 4),"chainLength");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[1].actor_name + 0xc),"target");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].actor_name + 0x10),"targetBone");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[4].actor_name + 0x14),"weight");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[4].location,"dampen");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[4].actor_name + 0x18),"friction");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[4].actor_name + 0x1c),"gravity");
  if (1 < g_INT_005ad250) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x1c,"textureName");
  }
  if (2 < g_INT_005ad250) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].orient_matrix.m[2].z,"pullWavName");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].create_event + 0x4c,"moveWavName")
    ;
  }
  if (g_INT_005ad250 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.position.z,"groundCollideFlag");
  return;
}
