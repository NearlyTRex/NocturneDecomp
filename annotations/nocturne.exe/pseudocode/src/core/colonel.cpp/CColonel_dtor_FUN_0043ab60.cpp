// Name: core_colonel.cpp_CColonel_dtor_FUN_0043ab60
// Address: 0043ab60
// Address Range: [[0043ab60, 0043abad]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CColonel *this_ptr,uint flags)

{
  CColonel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CColonelTypeInfo_0059b6c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CColonel *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
