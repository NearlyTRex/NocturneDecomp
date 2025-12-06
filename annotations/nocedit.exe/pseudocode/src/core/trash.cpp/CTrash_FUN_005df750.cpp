// Name: core_trash.cpp_CTrash_FUN_005df750
// Address: 005df750
// Address Range: [[005df750, 005df77e]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005df750(CTrash * this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005df750(CTrash *this_ptr)

{
  CLocation *pCVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  pCVar1 = &(this_ptr->base_actor).location;
  if ((CLocation *)&this_ptr->home_pos == pCVar1) {
    return;
  }
  (this_ptr->home_pos).x = (pCVar1->position).x;
  (this_ptr->home_pos).y = (this_ptr->base_actor).location.position.y;
  (this_ptr->home_pos).z = (this_ptr->base_actor).location.position.z;
  return;
}
