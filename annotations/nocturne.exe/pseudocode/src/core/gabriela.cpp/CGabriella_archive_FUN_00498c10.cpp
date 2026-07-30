// Name: core_gabriela.cpp_CGabriella_archive_FUN_00498c10
// Address: 00498c10
// Address Range: [[00498c10, 00498cb2]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_archive_FUN_00498c10(CHero *param_1)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_archive_FUN_00498c10(CHero *param_1)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(param_1);
  if ((1 < INT_005b92a8) && (INT_005b92a8 < 4)) {
    core_actor_cpp_archiveActor_FUN_0040c980(&param_1->object_to_pick_up,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1->ladder_to_climb,"ladderToClimb");
  }
  if (INT_005b92a8 != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980
            (&(param_1->base).carry_hands[0].carry_actor,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040c980
            (&(param_1->base).carry_hands[1].carry_actor,"rhCarryObject");
  return;
}
