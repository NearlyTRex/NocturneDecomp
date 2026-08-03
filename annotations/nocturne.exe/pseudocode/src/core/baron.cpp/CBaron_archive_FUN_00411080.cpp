// Name: core_baron.cpp_CBaron_archive_FUN_00411080
// Address: 00411080
// Address Range: [[00411080, 004110d8]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_archive_FUN_00411080(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_archive_FUN_00411080(CBaron *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(&this_ptr->base);
  if (g_INT_005acf3c < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->summon_event,"summonEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->go_away_event,"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->summoned,"summoned");
  return;
}
