// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00410a30
// Address: 00410a30
// Address Range: [[00410a30, 00410abc]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00410a30(CBaronWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00410a30(CBaronWeapon *this_ptr,int weapon_state)

{
  CDemonActor *target;
  
  core_weapon_cpp_FUN_0058a200((CWeapon *)this_ptr,weapon_state);
  target = (CDemonActor *)(**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x9c))(this_ptr);
  if (*(int *)&this_ptr->field_0x430 == 2) {
    if (target == (CDemonActor *)0x0) {
      _DAT_01d046a0 = "..\\core\\baron.cpp";
      _DAT_01d046a4 = 800;
      core_main_c_FUN_004e4500("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_FUN_00410ac0(this_ptr);
    core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(*(CBaron **)&this_ptr->field_0x6d4,target);
  }
  else if (*(CBaron **)&this_ptr->field_0x6d4 != (CBaron *)0x0) {
    core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(*(CBaron **)&this_ptr->field_0x6d4,target);
    return;
  }
  return;
}
