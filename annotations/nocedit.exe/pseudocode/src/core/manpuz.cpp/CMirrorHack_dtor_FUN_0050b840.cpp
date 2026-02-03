// Name: core_manpuz.cpp_CMirrorHack_dtor_FUN_0050b840
// Address: 0050b840
// Address Range: [[0050b840, 0050b88d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack *this_ptr,uint flags)

#include "nocturne.h"

CMirrorHack * __cdecl
core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack *this_ptr,uint flags)

{
  CMirrorHack *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMirrorHackTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
