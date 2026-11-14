// Name: core_burncrss.cpp_CBurncross_dtor_FUN_00425420
// Address: 00425420
// Address Range: [[00425420, 00425484]]
// Convention: __cdecl
// Signature: CBurncross * __cdecl core_burncrss_cpp_CBurncross_dtor_FUN_00425420(CBurncross *this_ptr,uint flags)

#include "nocturne.h"

CBurncross * __cdecl core_burncrss_cpp_CBurncross_dtor_FUN_00425420(CBurncross *this_ptr,uint flags)

{
  int iVar1;
  CBurncross *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBurncrossTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = core_burncrss_cpp_FUN_00425490(this_ptr->flames,0);
  pCVar2 = (CBurncross *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)(iVar1 + -0x5a8),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
