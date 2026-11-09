// Name: unkafter_hero.cpp_FUN_004d4c90
// Address: 004d4c90
// Address Range: [[004d4c90, 004d4cd4]]
// Convention: unknown
// Signature: void unkafter_hero_cpp_FUN_004d4c90(CDemonActor *param_1)

#include "nocturne.h"

void unkafter_hero_cpp_FUN_004d4c90(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 1),"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x4,"heroName");
  return;
}
