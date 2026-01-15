// Name: core_crate.cpp_FUN_00448bb0
// Address: 00448bb0
// Address Range: [[00448bb0, 00448bfd]]
// Convention: __cdecl
// Signature: CCrate * core_crate.cpp_FUN_00448bb0(CCrate * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_FUN_00448bb0(CCrate *this_ptr,uint d1,uint d2)

{
  CCrate *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCrateTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
