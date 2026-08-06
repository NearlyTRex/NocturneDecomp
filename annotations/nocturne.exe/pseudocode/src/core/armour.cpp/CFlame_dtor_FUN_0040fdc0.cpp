// Name: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
// Address: 0040fdc0
// Address Range: [[0040fdc0, 0040fe0d]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags)

{
  CFlame *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlameTypeInfo_00599940);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
