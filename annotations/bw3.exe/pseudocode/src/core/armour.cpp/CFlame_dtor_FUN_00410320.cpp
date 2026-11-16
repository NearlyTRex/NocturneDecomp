// Name: core_armour.cpp_CFlame_dtor_FUN_00410320
// Address: 00410320
// Address Range: [[00410320, 0041036d]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_00410320(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_00410320(CFlame *this_ptr,uint flags)

{
  CFlame *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlameTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
