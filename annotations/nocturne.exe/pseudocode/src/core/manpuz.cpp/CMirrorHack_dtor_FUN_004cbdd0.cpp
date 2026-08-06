// Name: core_manpuz.cpp_CMirrorHack_dtor_FUN_004cbdd0
// Address: 004cbdd0
// Address Range: [[004cbdd0, 004cbe1d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CMirrorHack *this_ptr,uint flags)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CMirrorHack *this_ptr,uint flags)

{
  CMirrorHack *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMirrorHackTypeInfo_005a0270);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
