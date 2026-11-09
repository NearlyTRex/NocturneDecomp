// Name: core_sps.cpp_CSps_dtor_FUN_00568300
// Address: 00568300
// Address Range: [[00568300, 0056834d]]
// Convention: unknown
// Signature: CSps * core_sps_cpp_CSps_dtor_FUN_00568300(CSps *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSps * core_sps_cpp_CSps_dtor_FUN_00568300(CSps *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSpsTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CSps *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CSps *)pCVar1;
}
