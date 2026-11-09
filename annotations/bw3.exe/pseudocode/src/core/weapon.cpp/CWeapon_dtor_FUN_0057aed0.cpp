// Name: core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
// Address: 0057aed0
// Address Range: [[0057aed0, 0057af3e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWeaponTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x154 = &g_CWeaponVTable;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0x308,0);
  pCVar2 = (CWeapon *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)(pCVar1 + -0x308),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
