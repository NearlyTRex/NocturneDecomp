// Name: core_gabriela.cpp_CGabriella_archive_FUN_00498c10
// Address: 00498c10
// Address Range: [[00498c10, 00498cb2]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_archive_FUN_00498c10(int param_1)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_archive_FUN_00498c10(int param_1)

{
  core_hero_cpp_FUN_004b49a0(param_1);
  if ((1 < INT_005b92a8) && (INT_005b92a8 < 4)) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1 + 0x1fa08),"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1 + 0x1fa04),"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1 + 0x1fa10),"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1 + 0x1fa14),"ladderToClimb");
  }
  if (INT_005b92a8 != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1 + 0x24ac),"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1 + 0x24f0),"rhCarryObject");
  return;
}
