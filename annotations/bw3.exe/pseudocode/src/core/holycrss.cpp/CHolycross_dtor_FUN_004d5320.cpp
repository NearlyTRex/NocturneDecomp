// Name: core_holycrss.cpp_CHolycross_dtor_FUN_004d5320
// Address: 004d5320
// Address Range: [[004d5320, 004d536d]]
// Convention: unknown
// Signature: CHolycross * core_holycrss_cpp_CHolycross_dtor_FUN_004d5320(CHolycross *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHolycross * core_holycrss_cpp_CHolycross_dtor_FUN_004d5320(CHolycross *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHolycrossTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CHolycross *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CHolycross *)pCVar1;
}
