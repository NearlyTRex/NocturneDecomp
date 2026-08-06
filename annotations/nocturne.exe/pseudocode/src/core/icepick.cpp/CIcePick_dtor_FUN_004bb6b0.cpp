// Name: core_icepick.cpp_CIcePick_dtor_FUN_004bb6b0
// Address: 004bb6b0
// Address Range: [[004bb6b0, 004bb6fd]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CIcePick *this_ptr,uint flags)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CIcePick *this_ptr,uint flags)

{
  CIcePick *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CIcePickTypeInfo_0059f530);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CIcePick *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
