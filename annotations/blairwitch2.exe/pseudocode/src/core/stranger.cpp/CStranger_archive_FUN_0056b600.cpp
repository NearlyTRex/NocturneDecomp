// Name: core_stranger.cpp_CStranger_archive_FUN_0056b600
// Address: 0056b600
// Address Range: [[0056b600, 0056b747]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_archive_FUN_0056b600(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_archive_FUN_0056b600(CStranger *this_ptr)

{
  core_hero_cpp_FUN_004ce590(this_ptr);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25608,"@objectToPickUp" + 1)
    ;
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25604,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25610,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25614,"ladderToClimb");
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2620,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2698,"rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              (&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->weapon,"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->action_pending,"actionPending");
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x2d04,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x2d08,"layerActionT");
  return;
}
