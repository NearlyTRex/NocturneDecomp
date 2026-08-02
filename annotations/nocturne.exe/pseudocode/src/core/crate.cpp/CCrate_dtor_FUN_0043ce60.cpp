// Name: core_crate.cpp_CCrate_dtor_FUN_0043ce60
// Address: 0043ce60
// Address Range: [[0043ce60, 0043cead]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043ce60(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043ce60(CCrate *this_ptr,uint flags)

{
  CCrate *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCrateTypeInfo_0059bb10);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
