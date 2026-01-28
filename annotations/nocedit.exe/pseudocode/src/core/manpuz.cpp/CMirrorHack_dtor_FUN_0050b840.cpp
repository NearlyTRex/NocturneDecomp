// Name: core_manpuz.cpp_CMirrorHack_dtor_FUN_0050b840
// Address: 0050b840
// Address Range: [[0050b840, 0050b88d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CMirrorHack * __cdecl
core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack *this_ptr,uint d1,uint d2)

{
  CMirrorHack *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMirrorHackTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
