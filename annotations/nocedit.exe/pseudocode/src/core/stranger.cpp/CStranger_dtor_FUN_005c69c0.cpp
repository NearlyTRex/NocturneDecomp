// Name: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
// Address: 005c69c0
// Address Range: [[005c69c0, 005c6a0d]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint flags)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint flags)

{
  CStranger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStrangerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CStranger *)core_hero_cpp_CHero_dtor_FUN_004f2470(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
