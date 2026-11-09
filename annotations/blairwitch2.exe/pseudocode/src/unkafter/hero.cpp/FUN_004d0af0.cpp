// Name: unkafter_hero.cpp_FUN_004d0af0
// Address: 004d0af0
// Address Range: [[004d0af0, 004d0b34]]
// Convention: unknown
// Signature: void unkafter_hero_cpp_FUN_004d0af0(CDemonActor *param_1)

#include "nocturne.h"

void unkafter_hero_cpp_FUN_004d0af0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"index");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x4,"heroName");
  return;
}
