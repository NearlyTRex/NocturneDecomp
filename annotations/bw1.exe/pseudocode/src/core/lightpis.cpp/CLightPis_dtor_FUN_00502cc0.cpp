// Name: core_lightpis.cpp_CLightPis_dtor_FUN_00502cc0
// Address: 00502cc0
// Address Range: [[00502cc0, 00502d0d]]
// Convention: unknown
// Signature: CLightPis * core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0(CLightPis *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightPis * core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0(CLightPis *this_ptr,uint flags)

{
  CLightPis *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLightPisTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightPis *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
