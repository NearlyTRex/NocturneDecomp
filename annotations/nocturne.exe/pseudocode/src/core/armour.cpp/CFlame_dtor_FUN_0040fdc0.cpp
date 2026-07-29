// Name: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
// Address: 0040fdc0
// Address Range: [[0040fdc0, 0040fe0d]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CFlame *this_ptr,uint flags)

{
  CFlame *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlameTypeInfo_00599940);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
