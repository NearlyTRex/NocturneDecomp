// Name: core_hero.cpp_CHeroPlaceholder_archive_FUN_004b61f0
// Address: 004b61f0
// Address Range: [[004b61f0, 004b6214]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004b61f0(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004b61f0(CHeroPlaceholder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->index,"index");
  return;
}
