// Name: core_prye.cpp_CPrye_archive_FUN_00521f40
// Address: 00521f40
// Address Range: [[00521f40, 00522087]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_archive_FUN_00521f40(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_archive_FUN_00521f40(CPrye *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004d27b0(&this_ptr->base);
  if ((1 < g_CPryeClassVersion) && (g_CPryeClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b930
              (&(this_ptr->base).object_to_pick_up,"@objectToPickUp" + 1);
    core_actor_cpp_archiveActor_FUN_0040b930
              ((CDemonActor **)&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b930
              ((CDemonActor **)&(this_ptr->base).lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b930
              ((CDemonActor **)&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (g_CPryeClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b930
              (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b930
              (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  }
  if (3 < g_CPryeClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930
              ((CDemonActor **)&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CPryeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CPryeClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930((CDemonActor **)&this_ptr->weapon,"weapon");
  }
  if (7 < g_CPryeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&(this_ptr->base).action_pending,"actionPending");
  }
  if (g_CPryeClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            (&(this_ptr->base).base.layer_action_index,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).base.layer_action_t,"layerActionT");
  return;
}
