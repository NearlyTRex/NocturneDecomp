// Name: core_hero.cpp_CHeroPlaceholder_archive_FUN_004d0af0
// Address: 004d0af0
// Address Range: [[004d0af0, 004d0b34]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004d0af0(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004d0af0(CHeroPlaceholder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2b4,"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2b8,"heroName");
  return;
}
