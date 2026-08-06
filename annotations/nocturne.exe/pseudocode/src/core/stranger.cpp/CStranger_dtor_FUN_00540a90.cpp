// Name: core_stranger.cpp_CStranger_dtor_FUN_00540a90
// Address: 00540a90
// Address Range: [[00540a90, 00540add]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00540a90(CStranger *this_ptr,uint flags)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00540a90(CStranger *this_ptr,uint flags)

{
  CStranger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStrangerTypeInfo_005a2890);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CStranger *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
