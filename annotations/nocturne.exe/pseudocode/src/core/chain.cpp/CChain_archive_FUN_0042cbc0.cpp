// Name: core_chain.cpp_CChain_archive_FUN_0042cbc0
// Address: 0042cbc0
// Address Range: [[0042cbc0, 0042cce0]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_archive_FUN_0042cbc0(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_archive_FUN_0042cbc0(CChain *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->chain_length,"chainLength");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->target,"target");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->target_bone,"targetBone");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->weight,"weight");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->dampen,"dampen");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->friction,"friction");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->gravity,"gravity");
  if (1 < g_INT_005ad250) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->texture_name,"textureName");
  }
  if (2 < g_INT_005ad250) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->pull_wav_name,"pullWavName");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_wav_name,"moveWavName");
  }
  if (g_INT_005ad250 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&this_ptr->ground_collide_flag,"groundCollideFlag");
  return;
}
