// Name: core_chain.cpp_CChain_archive_FUN_005b5e10
// Address: 005b5e10
// Address Range: [[005b5e10, 005b5f30]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_archive_FUN_005b5e10(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_archive_FUN_005b5e10(CChain *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x158,"?vertexCount" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x15c,"chainLength");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x164,"target");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x168,"targetBone");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x55c,"weight");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x568,"dampen");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x560,"friction");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x564,"gravity");
  if (1 < g_CChainClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x174,"textureName");
  }
  if (2 < g_CChainClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x1b4,"pullWavName");
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x21c,"moveWavName");
  }
  if (g_CChainClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x288,"groundCollideFlag");
  return;
}
