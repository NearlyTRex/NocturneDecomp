// Name: core_ladder.cpp_CLadder_dtor_FUN_004c47d0
// Address: 004c47d0
// Address Range: [[004c47d0, 004c481d]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004c47d0(CLadder *this_ptr,uint flags)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004c47d0(CLadder *this_ptr,uint flags)

{
  CLadder *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLadderTypeInfo_0059fa30);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
