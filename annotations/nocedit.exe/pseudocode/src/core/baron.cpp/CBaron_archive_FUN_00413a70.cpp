// Name: core_baron.cpp_CBaron_archive_FUN_00413a70
// Address: 00413a70
// Address Range: [[00413a70, 00413ac8]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_archive_FUN_00413a70(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_archive_FUN_00413a70(CBaron *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004f2610(&this_ptr->base);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->summon_event,"summonEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->go_away_event,"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->summoned,"summoned");
  return;
}
