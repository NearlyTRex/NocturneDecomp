// Name: core_lever.cpp_CLever_dtor_FUN_00505430
// Address: 00505430
// Address Range: [[00505430, 0050547d]]
// Convention: __cdecl
// Signature: CLever * core_lever.cpp_CLever_dtor_FUN_00505430(CLever * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_00505430(CLever *this_ptr,uint d1,uint d2)

{
  CLever *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLeverTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLever *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
