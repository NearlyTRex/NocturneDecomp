// Name: core_doc.cpp_CDoc_archive_FUN_00471970
// Address: 00471970
// Address Range: [[00471970, 00471ab7]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_archive_FUN_00471970(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_archive_FUN_00471970(CDoc *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004eab00(&this_ptr->base);
  if ((1 < g_CDocClassVersion) && (g_CDocClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b6f0
              (&(this_ptr->base).object_to_pick_up,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b6f0
              ((CDemonActor **)&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b6f0
              ((CDemonActor **)&(this_ptr->base).lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b6f0
              ((CDemonActor **)&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (g_CDocClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b6f0
              (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b6f0
              (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  }
  if (3 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0
              ((CDemonActor **)&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0((CDemonActor **)&this_ptr->weapon,"weapon");
  }
  if (7 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&(this_ptr->base).action_pending,"actionPending");
  }
  if (g_CDocClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            (&(this_ptr->base).base.layer_action_index,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&(this_ptr->base).base.layer_action_t,"layerActionT");
  return;
}
