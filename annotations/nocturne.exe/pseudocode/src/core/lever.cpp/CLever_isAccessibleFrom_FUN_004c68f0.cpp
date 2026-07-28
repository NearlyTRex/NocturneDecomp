// Name: core_lever.cpp_CLever_isAccessibleFrom_FUN_004c68f0
// Address: 004c68f0
// Address Range: [[004c68f0, 004c6966]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(CLever *this_ptr,CVector3f *world_position)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(CLever *this_ptr,CVector3f *world_position)

{
  CVector3f local_20;
  
  if (this_ptr->allowed_sides != 2) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
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
