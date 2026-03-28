// Name: core_ladder.cpp_CLadder_dtor_FUN_00502ed0
// Address: 00502ed0
// Address Range: [[00502ed0, 00502f1d]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_00502ed0(CLadder *this_ptr,uint flags)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_00502ed0(CLadder *this_ptr,uint flags)

{
  CLadder *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLadderTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
