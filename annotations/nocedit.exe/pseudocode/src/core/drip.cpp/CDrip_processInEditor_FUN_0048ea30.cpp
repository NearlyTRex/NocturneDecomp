// Name: core_drip.cpp_CDrip_processInEditor_FUN_0048ea30
// Address: 0048ea30
// Address Range: [[0048ea30, 0048ea5c]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_processInEditor_FUN_0048ea30(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_processInEditor_FUN_0048ea30(CDrip *this_ptr)

{
  CLocation *pCVar1;
  
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)&this_ptr->home_pos != pCVar1) {
    (this_ptr->home_pos).x = (pCVar1->position).x;
    (this_ptr->home_pos).y = (this_ptr->base).location.position.y;
    (this_ptr->home_pos).z = (this_ptr->base).location.position.z;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  return;
}
