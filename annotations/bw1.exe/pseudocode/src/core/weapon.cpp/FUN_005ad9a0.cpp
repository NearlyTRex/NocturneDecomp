// Name: core_weapon.cpp_FUN_005ad9a0
// Address: 005ad9a0
// Address Range: [[005ad9a0, 005ada4b]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_FUN_005ad9a0(CWeapon *this_ptr,CDemonActor *picker)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_weapon_cpp_FUN_005ad9a0(CWeapon *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((((*(int *)&this_ptr->field_0x304 == 0) && (*(int *)&this_ptr->field_0x2d4 == 0)) &&
       (*(int *)&this_ptr->field_0x55c != 0)) &&
      ((float)_DAT_005f9902 <
       SQRT(*(float *)&this_ptr->field_0x35c * *(float *)&this_ptr->field_0x35c +
            *(float *)&this_ptr->field_0x354 * *(float *)&this_ptr->field_0x354 +
            *(float *)&this_ptr->field_0x358 * *(float *)&this_ptr->field_0x358))) ||
     (*(int *)&this_ptr->field_0x304 != 0)) {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_0040c550(picker,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_FUN_0040c550(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((*(int *)&this_ptr->field_0x2d4 != 0) && (*(int *)&this_ptr->field_0x2d4 != 3)) {
      return 0;
    }
  }
  return 3;
}
