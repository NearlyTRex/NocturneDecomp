// Name: core_colonel.cpp_CColonel_dtor_FUN_00445320
// Address: 00445320
// Address Range: [[00445320, 0044536d]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00445320(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00445320(CColonel *this_ptr,uint flags)

{
  CColonel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CColonelTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CColonel *)core_hero_cpp_CHero_dtor_FUN_004ea980(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
