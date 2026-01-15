// Name: core_ladder.cpp_FUN_00502ed0
// Address: 00502ed0
// Address Range: [[00502ed0, 00502f1d]]
// Convention: __cdecl
// Signature: CLadder * core_ladder.cpp_FUN_00502ed0(CLadder * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_FUN_00502ed0(CLadder *this_ptr,uint d1,uint d2)

{
  CLadder *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLadderTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
