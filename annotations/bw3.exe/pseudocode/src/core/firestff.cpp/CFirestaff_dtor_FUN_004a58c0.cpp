// Name: core_firestff.cpp_CFirestaff_dtor_FUN_004a58c0
// Address: 004a58c0
// Address Range: [[004a58c0, 004a5924]]
// Convention: unknown
// Signature: CFirestaff * core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0(CFirestaff *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFirestaff * core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0(CFirestaff *this_ptr,uint flags)

{
  int iVar1;
  CFirestaff *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFirestaffTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = core_firestff_cpp_FUN_004a5930(&this_ptr->field_0x614,0);
  pCVar2 = (CFirestaff *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)(iVar1 + -0x614),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
