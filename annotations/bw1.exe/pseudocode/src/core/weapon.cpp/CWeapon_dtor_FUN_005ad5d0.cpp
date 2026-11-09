// Name: core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
// Address: 005ad5d0
// Address Range: [[005ad5d0, 005ad63e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWeaponTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x154 = &g_CWeaponVTable;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0((CBox *)&this_ptr->field_0x308,0);
  pCVar2 = (CWeapon *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x308),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
