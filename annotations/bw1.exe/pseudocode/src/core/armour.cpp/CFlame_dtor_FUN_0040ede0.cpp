// Name: core_armour.cpp_CFlame_dtor_FUN_0040ede0
// Address: 0040ede0
// Address Range: [[0040ede0, 0040ee2d]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040ede0(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040ede0(CFlame *this_ptr,uint flags)

{
  CFlame *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFlameTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
