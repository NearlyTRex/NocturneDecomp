// Name: core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0
// Address: 004f3ef0
// Address Range: [[004f3ef0, 004f3f14]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder * this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->unk,"index");
  return;
}
