// Name: core_firestff.cpp_CFirestaff_dtor_FUN_004a58c0
// Address: 004a58c0
// Address Range: [[004a58c0, 004a5924]]
// Convention: __cdecl
// Signature: CFirestaff * __cdecl core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0(CFirestaff *this_ptr,uint flags)

#include "nocturne.h"

CFirestaff * __cdecl core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0(CFirestaff *this_ptr,uint flags)

{
  int extraout_EAX;
  CFirestaff *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFirestaffTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  core_firestff_cpp_CFlame_arrdtor12_FUN_004a5930(this_ptr->flames);
  ptr = (CFirestaff *)
        core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)(extraout_EAX + -0x614),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
