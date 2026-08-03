// Name: core_gabriela.cpp_CGabriella_archive_FUN_00498c10
// Address: 00498c10
// Address Range: [[00498c10, 00498cb2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_00498c10(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_00498c10(CGabriella *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(&this_ptr->base);
  if ((1 < INT_005b92a8) && (INT_005b92a8 < 4)) {
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(this_ptr->base).object_to_pick_up,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (INT_005b92a8 != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980
            (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040c980
            (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  return;
}
