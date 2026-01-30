// Name: core_chain.cpp_CChain_serialize_FUN_00430fe0
// Address: 00430fe0
// Address Range: [[00430fe0, 00431100]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_serialize_FUN_00430fe0(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_serialize_FUN_00430fe0(CChain *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->chain_length,"chainLength");
  core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)(this_ptr->unk1 + 4),"target");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->target_bone,"targetBone");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->weight,"weight");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->dampen,"dampen");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->friction,"friction");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->gravity,"gravity");
  if (1 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk2 + 8),"textureName");
  }
  if (2 < g_CChainClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk2 + 0x48),"pullWavName");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk2 + 0xb0),"moveWavName");
  }
  if (g_CChainClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&this_ptr->ground_collide_flag,"groundCollideFlag");
  return;
}
