// Name: core_doc.cpp_CDoc_archive_FUN_004597a0
// Address: 004597a0
// Address Range: [[004597a0, 0045995f]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_archive_FUN_004597a0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_archive_FUN_004597a0(CDoc *this_ptr)

{
  int iStack_10;
  byte auStack_c [4];
  uint uStack_8;
  
  core_hero_cpp_FUN_004ce590(this_ptr);
  if ((1 < g_CDocClassVersion) && (g_CDocClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&(this_ptr->base).object_to_pick_up,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b9e0(&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&(this_ptr->base).lever_to_pull,"leverToPull")
    ;
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (g_CDocClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  }
  if (3 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->guns_drawn,"gunDrawn");
  }
  if (6 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->weapon,"weapon");
  }
  if (7 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->action_pending,"actionPending");
  }
  if (8 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&(this_ptr->base).base.layer_action_index,"layerActionIndex");
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).base.layer_action_t,"layerActionT");
  }
  if (g_CDocClassVersion < 10) {
    return;
  }
  uStack_8 = 0;
  core_actor_cpp_archiveInteger_FUN_0040b960(&iStack_10,"lanternMode");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(auStack_c,"lanternTweenPct");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&uStack_8,"LanternPointer");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->model_name,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->cloth_name,"clothName");
  return;
}
