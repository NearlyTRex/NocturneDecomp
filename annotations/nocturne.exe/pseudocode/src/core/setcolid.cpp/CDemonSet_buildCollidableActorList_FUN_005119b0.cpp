// Name: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
// Address: 005119b0
// Address Range: [[005119b0, 00511a02]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  
  this_ptr->collidable_actor_count = 0;
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      if (pCVar1->actors[0]->collision_disabled == 0) {
        this_ptr->collidable_actors[this_ptr->collidable_actor_count] = pCVar1->actors[0];
        this_ptr->collidable_actor_count = this_ptr->collidable_actor_count + 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CDemonSet *)pCVar1->cameras;
    } while (iVar2 < this_ptr->actor_count);
  }
  return;
}
