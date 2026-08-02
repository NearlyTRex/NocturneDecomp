// Name: core_icepick.cpp_CIcePick_dtor_FUN_004bb6b0
// Address: 004bb6b0
// Address Range: [[004bb6b0, 004bb6fd]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CIcePick *this_ptr,uint flags)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CIcePick *this_ptr,uint flags)

{
  CIcePick *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CIcePickTypeInfo_0059f530);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CIcePick *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
