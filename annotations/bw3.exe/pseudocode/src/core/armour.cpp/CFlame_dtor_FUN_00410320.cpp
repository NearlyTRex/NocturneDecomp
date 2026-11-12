// Name: core_armour.cpp_CFlame_dtor_FUN_00410320
// Address: 00410320
// Address Range: [[00410320, 0041036d]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_00410320(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_00410320(CFlame *this_ptr,uint flags)

{
  CFlame *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlameTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
