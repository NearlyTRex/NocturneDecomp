// Name: core_exorcism.cpp_CExorcism_dtor_FUN_0048b730
// Address: 0048b730
// Address Range: [[0048b730, 0048b77d]]
// Convention: __cdecl
// Signature: CExorcism * __cdecl core_exorcism_cpp_CExorcism_dtor_FUN_0048b730(CExorcism *this_ptr,uint flags)

#include "nocturne.h"

CExorcism * __cdecl core_exorcism_cpp_CExorcism_dtor_FUN_0048b730(CExorcism *this_ptr,uint flags)

{
  CExorcism *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CExorcismTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CExorcism *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
