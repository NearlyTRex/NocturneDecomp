// Name: core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0
// Address: 0040cfe0
// Address Range: [[0040cfe0, 0040cff8]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor * this_ptr, int deleted_area_index)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor *this_ptr,int deleted_area_index)

{
  int iVar1;
  
  iVar1 = (this_ptr->location).area_id;
  if (iVar1 <= deleted_area_index) {
    return;
  }
  (this_ptr->location).area_id = iVar1 + -1;
  return;
}
