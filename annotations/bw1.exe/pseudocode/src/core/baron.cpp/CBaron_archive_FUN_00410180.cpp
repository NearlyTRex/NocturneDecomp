// Name: core_baron.cpp_CBaron_archive_FUN_00410180
// Address: 00410180
// Address Range: [[00410180, 004101d8]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_archive_FUN_00410180(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_archive_FUN_00410180(CBaron *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004eab00((CHero *)this_ptr);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->summon_event,"summonEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->go_away_event,"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->summoned,"summoned");
  return;
}
