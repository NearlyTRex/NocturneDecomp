// Name: core_chain.cpp_CChain_archive_FUN_0042cbc0
// Address: 0042cbc0
// Address Range: [[0042cbc0, 0042cce0]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_archive_FUN_0042cbc0(int param_1)

#include "nocturne.h"

void core_chain_cpp_CChain_archive_FUN_0042cbc0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x150,"vertexCount");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x154,"chainLength");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x15c,"target");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x160,"targetBone");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x554,"weight");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x560,"dampen");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x558,"friction");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x55c,"gravity");
  if (1 < 0x00000004) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x16c,"textureName");
  }
  if (2 < 0x00000004) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1ac,"pullWavName");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x214,"moveWavName");
  }
  if (0x00000004 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x280,"groundCollideFlag");
  return;
}
