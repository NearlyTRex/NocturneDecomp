// Name: core_ladder.cpp_CLadder_dtor_FUN_004fd8a0
// Address: 004fd8a0
// Address Range: [[004fd8a0, 004fd8ed]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004fd8a0(CLadder *this_ptr,uint flags)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004fd8a0(CLadder *this_ptr,uint flags)

{
  CLadder *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLadderTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
