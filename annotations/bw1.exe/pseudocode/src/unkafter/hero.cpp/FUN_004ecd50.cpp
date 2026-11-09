// Name: unkafter_hero.cpp_FUN_004ecd50
// Address: 004ecd50
// Address Range: [[004ecd50, 004ecd94]]
// Convention: unknown
// Signature: void unkafter_hero_cpp_FUN_004ecd50(CDemonActor *param_1)

#include "nocturne.h"

void unkafter_hero_cpp_FUN_004ecd50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 1),"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0x4,"heroName");
  return;
}
