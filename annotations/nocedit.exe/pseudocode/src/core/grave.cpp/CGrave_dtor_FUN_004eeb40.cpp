// Name: core_grave.cpp_CGrave_dtor_FUN_004eeb40
// Address: 004eeb40
// Address Range: [[004eeb40, 004eeb8d]]
// Convention: __cdecl
// Signature: CGrave * core_grave.cpp_CGrave_dtor_FUN_004eeb40(CGrave * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004eeb40(CGrave *this_ptr,uint d1,uint d2)

{
  CGrave *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGraveTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CGrave *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
