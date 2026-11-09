// Name: core_storm.cpp_CStorm_dtor_FUN_00568c80
// Address: 00568c80
// Address Range: [[00568c80, 00568ccd]]
// Convention: unknown
// Signature: CStorm * core_storm_cpp_CStorm_dtor_FUN_00568c80(CStorm *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStorm * core_storm_cpp_CStorm_dtor_FUN_00568c80(CStorm *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStormTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CStorm *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CStorm *)pCVar1;
}
