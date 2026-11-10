// Name: core_dynamite.cpp_CDynamite_dtor_FUN_0047b470
// Address: 0047b470
// Address Range: [[0047b470, 0047b4bd]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047b470(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047b470(CDynamite *this_ptr,uint flags)

{
  CDynamite *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
