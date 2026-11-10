// Name: core_stranger.cpp_CStranger_archive_FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e387]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_archive_FUN_0058e240(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_archive_FUN_0058e240(CStranger *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004eab00((CHero *)this_ptr);
  if ((1 < g_CStrangerClassVersion) && (g_CStrangerClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff78,"@objectToPickUp" + 1)
    ;
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff74,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff80,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff84,"ladderToClimb");
  }
  if (g_CStrangerClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x25b0,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2628,"rhCarryObject");
  }
  if (3 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0
              (&this_ptr->ladder_to_descend,"ladderToDescend");
  }
  if (5 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->guns_drawn,"gunsDrawn");
  }
  if (6 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->weapon,"weapon");
  }
  if (7 < g_CStrangerClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x1ff5c,"actionPending");
  }
  if (g_CStrangerClassVersion < 9) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x2c98,"layerActionIndex");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2c9c,"layerActionT");
  return;
}
