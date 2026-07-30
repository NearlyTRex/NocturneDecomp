// Name: core_baron.cpp_CBaron_archive_FUN_00411080
// Address: 00411080
// Address Range: [[00411080, 004110d8]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaron_archive_FUN_00411080(CHero *param_1)

#include "nocturne.h"

void core_baron_cpp_CBaron_archive_FUN_00411080(CHero *param_1)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(param_1);
  if (g_INT_005acf3c < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 1),"summonEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.base.health,"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&param_1[1].base.base.is_renderable,"summoned");
  return;
}
