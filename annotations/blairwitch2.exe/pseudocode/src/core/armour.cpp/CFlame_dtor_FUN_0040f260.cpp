// Name: core_armour.cpp_CFlame_dtor_FUN_0040f260
// Address: 0040f260
// Address Range: [[0040f260, 0040f2ad]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040f260(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040f260(CFlame *this_ptr,uint flags)

{
  CFlame *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFlameTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
