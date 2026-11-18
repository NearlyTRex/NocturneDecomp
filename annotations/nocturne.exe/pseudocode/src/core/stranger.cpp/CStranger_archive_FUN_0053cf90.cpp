// Name: core_stranger.cpp_CStranger_archive_FUN_0053cf90
// Address: 0053cf90
// Address Range: [[0053cf90, 0053d0d7]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_archive_FUN_0053cf90(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_archive_FUN_0053cf90(CStranger *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(&this_ptr->base);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(this_ptr->base).object_to_pick_up,"objectToPickUp");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).door_to_open,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).lever_to_pull,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&(this_ptr->base).ladder_to_climb,"ladderToClimb");
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(this_ptr->base).base.carry_hands[0].carry_actor,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040c980
              (&(this_ptr->base).base.carry_hands[1].carry_actor,"rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->weapon,"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->action_pending,"actionPending");
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&(this_ptr->base).base.layer_action_index,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&(this_ptr->base).base.layer_action_t,"layerActionT");
  return;
}
