// Name: core_chain.cpp_CChain_archive_FUN_005b5e10
// Address: 005b5e10
// Address Range: [[005b5e10, 005b5f30]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_archive_FUN_005b5e10(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_archive_FUN_005b5e10(CChain *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->vertex_count,"?vertexCount" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->chain_length,"chainLength");
  core_actor_cpp_archiveActor_FUN_0040b9e0((CDemonActor **)&this_ptr->target,"target");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->target_bone,"targetBone");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->weight,"weight");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->dampen,"dampen");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->friction,"friction");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->gravity,"gravity");
  if (1 < g_CChainClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->texture_name,"textureName");
  }
  if (2 < g_CChainClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->pull_wav_name,"pullWavName");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_wav_name,"moveWavName");
  }
  if (g_CChainClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            (&this_ptr->ground_collide_flag,"groundCollideFlag");
  return;
}
