// Name: core_lever.cpp_CLever_isAccessibleFrom_FUN_00505080
// Address: 00505080
// Address Range: [[00505080, 005050f6]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_00505080(CLever *this_ptr,CVector3f *world_position)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_00505080(CLever *this_ptr,CVector3f *world_position)

{
  CVector3f local_20;
  
  if (this_ptr->allowed_sides != 2) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (&this_ptr->base,&local_20,world_position);
    if ((this_ptr->allowed_sides != 0) || (local_20.z <= 0.0)) {
      if ((this_ptr->allowed_sides == 1) && (local_20.z < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}
