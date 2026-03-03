// Name: core_gabriela.cpp_CGabriella_archive_FUN_004d6090
// Address: 004d6090
// Address Range: [[004d6090, 004d6132]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004d6090(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004d6090(CGabriella *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004f2610(&this_ptr->base);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_archiveActor_FUN_0040b870
              (&(this_ptr->base).object_to_pick_up,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor **)&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor **)&(this_ptr->base).lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor **)&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b870
            (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040b870
            (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  return;
}
