// Name: core_baron.cpp_CBaron_archive_FUN_00410600
// Address: 00410600
// Address Range: [[00410600, 00410658]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_archive_FUN_00410600(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_archive_FUN_00410600(CBaron *this_ptr)

{
  core_hero_cpp_FUN_004ce590(this_ptr);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->summon_event,"summonEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->go_away_event,"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->summoned,"summoned");
  return;
}
