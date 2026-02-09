// Name: core_colonel.cpp_CColonel_dtor_FUN_00440670
// Address: 00440670
// Address Range: [[00440670, 004406bd]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel *this_ptr,uint flags)

{
  CColonel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CColonelTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CColonel *)core_hero_cpp_CHero_dtor_FUN_004f2470(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
