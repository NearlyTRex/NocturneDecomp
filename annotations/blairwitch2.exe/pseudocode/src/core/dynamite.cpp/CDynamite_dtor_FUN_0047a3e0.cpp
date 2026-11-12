// Name: core_dynamite.cpp_CDynamite_dtor_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a42d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047a3e0(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047a3e0(CDynamite *this_ptr,uint flags)

{
  CDynamite *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
