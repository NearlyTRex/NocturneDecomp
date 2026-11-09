// Name: core_weapon.cpp_FUN_00589e50
// Address: 00589e50
// Address Range: [[00589e50, 00589efb]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_FUN_00589e50(CWeapon *this_ptr,CDemonActor *picker)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_weapon_cpp_FUN_00589e50(CWeapon *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((((*(int *)&this_ptr->field_0x460 == 0) && (*(int *)&this_ptr->field_0x430 == 0)) &&
       (*(int *)&this_ptr->field_0x6b8 != 0)) &&
      ((float)_DAT_005ee52a <
       SQRT(*(float *)&this_ptr->field_0x4b8 * *(float *)&this_ptr->field_0x4b8 +
            *(float *)&this_ptr->field_0x4b0 * *(float *)&this_ptr->field_0x4b0 +
            *(float *)&this_ptr->field_0x4b4 * *(float *)&this_ptr->field_0x4b4))) ||
     (*(int *)&this_ptr->field_0x460 != 0)) {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_0040c840(picker,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_FUN_0040c840(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((*(int *)&this_ptr->field_0x430 != 0) && (*(int *)&this_ptr->field_0x430 != 3)) {
      return 0;
    }
  }
  return 3;
}
