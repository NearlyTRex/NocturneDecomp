// Name: core_trash.cpp_CTrash_processInEditor_FUN_005df750
// Address: 005df750
// MANUAL RECONSTRUCTION
// Address Range: [[005df750, 005df77e]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_processInEditor_FUN_005df750(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_processInEditor_FUN_005df750(CTrash *this_ptr)

{
  CLocation *pCVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)&this_ptr->home_pos == pCVar1) {
    return;
  }
  this_ptr->home_pos = pCVar1->position;
  return;
}
