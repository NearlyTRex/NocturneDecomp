// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004105b0
// Address: 004105b0
// Address Range: [[004105b0, 0041063c]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004105b0(CBaronWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004105b0(CBaronWeapon *this_ptr,int weapon_state)

{
  CDemonActor *target;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50((CWeapon *)this_ptr,weapon_state);
  target = (CDemonActor *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
  if (*(int *)&this_ptr->field_0x2d4 == 2) {
    if (target == (CDemonActor *)0x0) {
      _DAT_01d1d400 = "..\\core\\baron.cpp";
      _DAT_01d1d404 = 800;
      core_main_c_FUN_005030e0("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_FUN_00410640(this_ptr);
    core_baron_cpp_CBaron_attachToOwner_FUN_0040fa70(*(CBaron **)&this_ptr->field_0x578,target);
  }
  else if (*(CBaron **)&this_ptr->field_0x578 != (CBaron *)0x0) {
    core_baron_cpp_CBaron_detachFromOwner_FUN_0040fbc0(*(CBaron **)&this_ptr->field_0x578,target);
    return;
  }
  return;
}
