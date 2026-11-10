// Name: core_hero.cpp_CHeroPlaceholder_archive_FUN_004d4c90
// Address: 004d4c90
// Address Range: [[004d4c90, 004d4cd4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004d4c90(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004d4c90(CHeroPlaceholder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x158,"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x15c,"heroName");
  return;
}
