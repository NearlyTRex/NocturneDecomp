// Name: core_dynamite.cpp_CDynamite_dtor_FUN_004928d0
// Address: 004928d0
// Address Range: [[004928d0, 0049291d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_004928d0(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_004928d0(CDynamite *this_ptr,uint flags)

{
  CDynamite *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
