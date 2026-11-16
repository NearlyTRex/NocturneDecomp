// Name: core_icepick.cpp_CIcePick_dtor_FUN_004f2740
// Address: 004f2740
// Address Range: [[004f2740, 004f278d]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004f2740(CIcePick *this_ptr,uint flags)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004f2740(CIcePick *this_ptr,uint flags)

{
  CIcePick *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CIcePickTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CIcePick *)core_hero_cpp_CHero_dtor_FUN_004ea980(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
