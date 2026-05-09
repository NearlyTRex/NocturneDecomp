// Name: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0
// Address: 005743e0
// MANUAL RECONSTRUCTION
// Address Range: [[005743e0, 00574432]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(CDemonSet *this_ptr)

{
  int iVar2;

  this_ptr->collidable_actor_count = 0;
  iVar2 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      if (this_ptr->actors[iVar2]->collision_disabled == 0) {
        this_ptr->collidable_actors[this_ptr->collidable_actor_count] = this_ptr->actors[iVar2];
        this_ptr->collidable_actor_count = this_ptr->collidable_actor_count + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->actor_count);
  }
  return;
}
