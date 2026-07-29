// Name: core_manpuz.cpp_CMirrorHack_dtor_FUN_004cbdd0
// Address: 004cbdd0
// Address Range: [[004cbdd0, 004cbe1d]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CMirrorHack *this_ptr,uint flags)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CMirrorHack *this_ptr,uint flags)

{
  CMirrorHack *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMirrorHackTypeInfo_005a0270);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
