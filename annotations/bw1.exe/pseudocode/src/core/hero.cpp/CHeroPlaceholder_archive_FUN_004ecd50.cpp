// Name: core_hero.cpp_CHeroPlaceholder_archive_FUN_004ecd50
// Address: 004ecd50
// Address Range: [[004ecd50, 004ecd94]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004ecd50(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004ecd50(CHeroPlaceholder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x158,"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x15c,"heroName");
  return;
}
